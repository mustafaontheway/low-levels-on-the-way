(* // Oh no, this is supposed to print "Hello world!" but it needs
// your help.
// Zig functions are private by default, but the main() function
// must be public.

//
const std = @import("std");

fn main() void {
    std.debug.print("Hello world!\n", .{});
} *)

const std = @import("std");

pub fn main() void {
    std.debug.print("Hello world!\n", .{});
}

