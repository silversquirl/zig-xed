//! Generate Zig build script from gensrc.sh's cc.log
const std = @import("std");

pub fn main() !void {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    const xed_prefix = try std.fs.cwd().realpathAlloc(allocator, "xed/");

    var flags = std.StringArrayHashMap(void).init(allocator);
    var files = std.ArrayList([]const u8).init(allocator);

    {
        const cc_log = try std.fs.cwd().readFileAlloc(allocator, "tmp/cc.log", 1 << 20);
        var lines = std.mem.tokenizeScalar(u8, cc_log, '\n');
        while (lines.next()) |line| {
            var fields = std.mem.tokenizeScalar(u8, line, ' ');
            while (fields.next()) |field| {
                if (std.mem.eql(u8, field, "-dumpversion")) {
                    // Ignore
                } else if (std.mem.eql(u8, field, "-o")) {
                    _ = fields.next();
                } else if (std.mem.eql(u8, field, "-m64")) {
                    // Skip -m64, it's handled by Zig
                } else if (std.mem.startsWith(u8, field, "-I")) {
                    // Skip include paths, they're handled separately
                } else if (field[0] == '-') {
                    try flags.put(field, {});
                } else {
                    if (!std.mem.startsWith(u8, field, xed_prefix) or field[xed_prefix.len] != '/') {
                        std.debug.panic("unexpected path: {s}", .{field});
                    }
                    const path = field[xed_prefix.len + 1 ..];
                    try files.append(path);

                    break;
                }
            }
            if (fields.next() != null) {
                std.debug.panic("multiple source files in one cc command:\n{s}", .{line});
            }
        }
    }

    var objects = std.ArrayList([]const u8).init(allocator);

    {
        const ar_log = try std.fs.cwd().readFileAlloc(allocator, "tmp/ar.log", 1 << 20);
        var lines = std.mem.tokenizeScalar(u8, ar_log, '\n');
        const line = lines.next().?;

        var fields = std.mem.tokenizeScalar(u8, line, ' ');
        std.debug.assert(std.mem.eql(u8, fields.next().?, "rcv"));
        std.debug.assert(std.mem.eql(u8, fields.next().?, "obj/libxed.a"));
        while (fields.next()) |field| {
            try objects.append(field);
        }
    }

    std.sort.pdq([]const u8, files.items, {}, filenameLess);
    std.sort.pdq([]const u8, objects.items, {}, filenameLess);

    for (objects.items, 0..) |obj, i| {
        std.debug.assert(std.mem.endsWith(u8, obj, ".o"));
        const base = std.fs.path.basename(obj);
        const name = try std.mem.concat(allocator, u8, &.{ "/", base[0 .. base.len - 2], ".c" });
        // FIXME: slow
        while (!std.mem.endsWith(u8, files.items[i], name)) {
            _ = files.orderedRemove(i);
        }
    }

    const f = try std.fs.cwd().createFile("build.gen.zig", .{});
    defer f.close();
    var bufw = std.io.bufferedWriter(f.writer());
    const out = bufw.writer();

    try out.writeAll(
        \\const std = @import("std");
        \\pub fn addSources(lib: *std.Build.Step.Compile) void {
        \\  lib.addCSourceFiles(.{
        \\      .files = &.{
        \\
    );
    for (files.items) |path| {
        try out.print("\"c/{}\",", .{std.zig.fmtEscapes(path)});
    }
    try out.writeAll(
        \\},
        \\.flags = &.{
        \\
    );
    for (flags.keys()) |flag| {
        try out.print("\"{}\",", .{std.zig.fmtEscapes(flag)});
    }
    try out.writeAll(
        \\},
        \\});
        \\}
        \\
    );

    try bufw.flush();
}

fn filenameLess(_: void, a: []const u8, b: []const u8) bool {
    return std.mem.lessThan(u8, std.fs.path.basename(a), std.fs.path.basename(b));
}
