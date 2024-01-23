const std = @import("std");
const gen = @import("build.gen.zig");

pub fn build(b: *std.Build) !void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const lib = b.addStaticLibrary(.{
        .name = "xed",
        .target = target,
        .optimize = optimize,
    });
    lib.linkLibC();

    lib.addIncludePath(.{ .path = "c/include/private" });
    lib.addIncludePath(.{ .path = "c/include/public" });
    lib.addIncludePath(.{ .path = "c/include/public/xed" });
    lib.addIncludePath(.{ .path = "c/obj" });
    lib.addIncludePath(.{ .path = "c/obj/include-private" });

    gen.addSources(lib);

    b.installArtifact(lib);
}
