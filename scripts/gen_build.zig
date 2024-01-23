//! Generate Zig build script from gensrc.sh's cc.log
const std = @import("std");

pub fn main() !void {
    var arena = std.heap.ArenaAllocator.init(std.heap.page_allocator);
    defer arena.deinit();
    const allocator = arena.allocator();

    const xed_prefix = try std.fs.cwd().realpathAlloc(allocator, "xed/");

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

    const cc_log = try std.fs.cwd().readFileAlloc(allocator, "tmp/cc.log", 1 << 20);
    var lines = std.mem.tokenizeScalar(u8, cc_log, '\n');
    var flags = std.StringArrayHashMap(void).init(allocator);
    while (lines.next()) |line| {
        var fields = std.mem.tokenizeScalar(u8, line, ' ');
        while (fields.next()) |field| {
            if (std.mem.eql(u8, field, "-o")) {
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

                try out.print("\"c/{}\",", .{std.zig.fmtEscapes(path)});
                break;
            }
        }
        if (fields.next() != null) {
            std.debug.panic("multiple source files in one cc command:\n{s}", .{line});
        }
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
