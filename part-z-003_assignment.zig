// // Please fix this program so that the types can hold the desired values
// // and the errors go away!
// //
// const std = @import("std");

// pub fn main() void {
//     const n: u8 = 50;
//     n = n + 5;

//     const pi: u8 = 314159;

//     const negative_eleven: u8 = -11;
//     std.debug.print("{} {} {}\n", .{ n, pi, negative_eleven });
// }

const std = @import("std");

pub fn main() void {
    var n: u8 = 50;
    n = n + 5;

    const pi: u64 = 314159;

    const negative_eleven: i8 = -11;

    std.debug.print("{} {} {}\n", .{ n, pi, negative_eleven });
}
