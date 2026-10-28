#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_004D[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 30, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35,
    0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0,
    43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0,
    0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0,
    146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0,
    156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187,
    188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
    220, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236,
    0, 0, 237, 0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0,
    0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291,
    0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_004D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00234000;
    case 2u: goto L_00234064;
    case 3u: goto L_002340E4;
    case 4u: goto L_0023416C;
    case 5u: goto L_002341B0;
    case 6u: goto L_002341E0;
    case 7u: goto L_00234258;
    case 8u: goto L_00234278;
    case 9u: goto L_002342BC;
    case 10u: goto L_00234344;
    case 11u: goto L_002344C0;
    case 12u: goto L_002344D0;
    case 13u: goto L_002344E0;
    case 14u: goto L_00234548;
    case 15u: goto L_00234588;
    case 16u: goto L_00234594;
    case 17u: goto L_0023459C;
    case 18u: goto L_002345A4;
    case 19u: goto L_002345B4;
    case 20u: goto L_002345BC;
    case 21u: goto L_002345CC;
    case 22u: goto L_00234638;
    case 23u: goto L_00234650;
    case 24u: goto L_00234680;
    case 25u: goto L_002346E0;
    case 26u: goto L_00234734;
    case 27u: goto L_0023478C;
    case 28u: goto L_002347A0;
    case 29u: goto L_002347A8;
    case 30u: goto L_002347AC;
    case 31u: goto L_002347B4;
    case 32u: goto L_002347C4;
    case 33u: goto L_002347E0;
    case 34u: goto L_002347E8;
    case 35u: goto L_002347FC;
    case 36u: goto L_00234804;
    case 37u: goto L_00234814;
    case 38u: goto L_00234824;
    case 39u: goto L_0023485C;
    case 40u: goto L_00234864;
    case 41u: goto L_0023486C;
    case 42u: goto L_00234878;
    case 43u: goto L_00234880;
    case 44u: goto L_0023488C;
    case 45u: goto L_00234894;
    case 46u: goto L_002348D0;
    case 47u: goto L_0023490C;
    case 48u: goto L_00234938;
    case 49u: goto L_00234944;
    case 50u: goto L_00234950;
    case 51u: goto L_00234964;
    case 52u: goto L_0023496C;
    case 53u: goto L_0023498C;
    case 54u: goto L_002349A0;
    case 55u: goto L_002349B4;
    case 56u: goto L_002349BC;
    case 57u: goto L_002349D8;
    case 58u: goto L_002349E8;
    case 59u: goto L_002349F0;
    case 60u: goto L_00234A04;
    case 61u: goto L_00234A14;
    case 62u: goto L_00234A1C;
    case 63u: goto L_00234A24;
    case 64u: goto L_00234A34;
    case 65u: goto L_00234A3C;
    case 66u: goto L_00234A4C;
    case 67u: goto L_00234A68;
    case 68u: goto L_00234A70;
    case 69u: goto L_00234A78;
    case 70u: goto L_00234A84;
    case 71u: goto L_00234A8C;
    case 72u: goto L_00234A98;
    case 73u: goto L_00234AA0;
    case 74u: goto L_00234ABC;
    case 75u: goto L_00234B10;
    case 76u: goto L_00234B40;
    case 77u: goto L_00234B48;
    case 78u: goto L_00234B70;
    case 79u: goto L_00234BC0;
    case 80u: goto L_00234BD8;
    case 81u: goto L_00234C10;
    case 82u: goto L_00234C38;
    case 83u: goto L_00234C80;
    case 84u: goto L_00234C9C;
    case 85u: goto L_00234CC0;
    case 86u: goto L_00234D14;
    case 87u: goto L_00234D44;
    case 88u: goto L_00234D60;
    case 89u: goto L_00234D7C;
    case 90u: goto L_00234D90;
    case 91u: goto L_00234DE0;
    case 92u: goto L_00234E24;
    case 93u: goto L_00234E80;
    case 94u: goto L_00234EC4;
    case 95u: goto L_00234F20;
    case 96u: goto L_00234F40;
    case 97u: goto L_00234F98;
    case 98u: goto L_00234FE0;
    case 99u: goto L_00235040;
    case 100u: goto L_00235080;
    case 101u: goto L_002351D4;
    case 102u: goto L_002351DC;
    case 103u: goto L_002351E4;
    case 104u: goto L_00235200;
    case 105u: goto L_00235210;
    case 106u: goto L_00235220;
    case 107u: goto L_00235288;
    case 108u: goto L_002352BC;
    case 109u: goto L_00235370;
    case 110u: goto L_002353AC;
    case 111u: goto L_002353F0;
    case 112u: goto L_0023542C;
    case 113u: goto L_00235438;
    case 114u: goto L_002354E0;
    case 115u: goto L_00235500;
    case 116u: goto L_002355B4;
    case 117u: goto L_002355DC;
    case 118u: goto L_002355E4;
    case 119u: goto L_002355F8;
    case 120u: goto L_0023563C;
    case 121u: goto L_00235660;
    case 122u: goto L_00235880;
    case 123u: goto L_00235888;
    case 124u: goto L_00235890;
    case 125u: goto L_002358B0;
    case 126u: goto L_002358C0;
    case 127u: goto L_002358D0;
    case 128u: goto L_00235934;
    case 129u: goto L_002359E8;
    case 130u: goto L_002359F4;
    case 131u: goto L_00235A20;
    case 132u: goto L_00235A38;
    case 133u: goto L_00235A4C;
    case 134u: goto L_00235A64;
    case 135u: goto L_00235A90;
    case 136u: goto L_00235AE0;
    case 137u: goto L_00235B08;
    case 138u: goto L_00235B60;
    case 139u: goto L_00235B80;
    case 140u: goto L_00235BB8;
    case 141u: goto L_00235C2C;
    case 142u: goto L_00235CD4;
    case 143u: goto L_00235CE0;
    case 144u: goto L_00235D70;
    case 145u: goto L_00235E74;
    case 146u: goto L_00235E80;
    case 147u: goto L_00235E88;
    case 148u: goto L_00235E90;
    case 149u: goto L_00235E98;
    case 150u: goto L_00235EA0;
    case 151u: goto L_00235EB0;
    case 152u: goto L_00235EB8;
    case 153u: goto L_00235EC0;
    case 154u: goto L_00235EE0;
    case 155u: goto L_00235EF0;
    case 156u: goto L_00235F00;
    case 157u: goto L_00235F04;
    case 158u: goto L_00235F08;
    case 159u: goto L_00235F0C;
    case 160u: goto L_00235F10;
    case 161u: goto L_00235F14;
    case 162u: goto L_00235F18;
    case 163u: goto L_00235F1C;
    case 164u: goto L_00235F20;
    case 165u: goto L_00235F24;
    case 166u: goto L_00235F28;
    case 167u: goto L_00235F2C;
    case 168u: goto L_00235F30;
    case 169u: goto L_00235F34;
    case 170u: goto L_00235F38;
    case 171u: goto L_00235F3C;
    case 172u: goto L_00235F40;
    case 173u: goto L_00235F44;
    case 174u: goto L_00235F48;
    case 175u: goto L_00235F4C;
    case 176u: goto L_00235F50;
    case 177u: goto L_00235F54;
    case 178u: goto L_00235F58;
    case 179u: goto L_00235F5C;
    case 180u: goto L_00235F60;
    case 181u: goto L_00235F64;
    case 182u: goto L_00235F68;
    case 183u: goto L_00235F6C;
    case 184u: goto L_00235F70;
    case 185u: goto L_00235F74;
    case 186u: goto L_00235F78;
    case 187u: goto L_00235F7C;
    case 188u: goto L_00235F80;
    case 189u: goto L_00235F84;
    case 190u: goto L_00235F88;
    case 191u: goto L_00235F8C;
    case 192u: goto L_00235F90;
    case 193u: goto L_00235F94;
    case 194u: goto L_00235F98;
    case 195u: goto L_00235F9C;
    case 196u: goto L_00235FA0;
    case 197u: goto L_00235FA4;
    case 198u: goto L_00235FA8;
    case 199u: goto L_00235FAC;
    case 200u: goto L_00235FB0;
    case 201u: goto L_00235FB4;
    case 202u: goto L_00235FB8;
    case 203u: goto L_00235FBC;
    case 204u: goto L_00235FC0;
    case 205u: goto L_00235FC4;
    case 206u: goto L_00235FC8;
    case 207u: goto L_00235FCC;
    case 208u: goto L_00235FD0;
    case 209u: goto L_00235FD4;
    case 210u: goto L_00235FD8;
    case 211u: goto L_00235FDC;
    case 212u: goto L_00235FE0;
    case 213u: goto L_00235FE4;
    case 214u: goto L_00235FE8;
    case 215u: goto L_00235FEC;
    case 216u: goto L_00235FF0;
    case 217u: goto L_00235FF4;
    case 218u: goto L_00235FF8;
    case 219u: goto L_00235FFC;
    case 220u: goto L_00236000;
    case 221u: goto L_00236008;
    case 222u: goto L_00236010;
    case 223u: goto L_00236024;
    case 224u: goto L_002360A0;
    case 225u: goto L_0023610C;
    case 226u: goto L_00236170;
    case 227u: goto L_00236198;
    case 228u: goto L_00236230;
    case 229u: goto L_00236260;
    case 230u: goto L_00236298;
    case 231u: goto L_002362CC;
    case 232u: goto L_002362D4;
    case 233u: goto L_002362E0;
    case 234u: goto L_002362E8;
    case 235u: goto L_002362F4;
    case 236u: goto L_002362FC;
    case 237u: goto L_00236308;
    case 238u: goto L_00236310;
    case 239u: goto L_0023631C;
    case 240u: goto L_00236324;
    case 241u: goto L_00236348;
    case 242u: goto L_00236360;
    case 243u: goto L_002363EC;
    case 244u: goto L_002363F8;
    case 245u: goto L_00236410;
    case 246u: goto L_00236438;
    case 247u: goto L_002364E0;
    case 248u: goto L_002364F8;
    case 249u: goto L_00236504;
    case 250u: goto L_00236544;
    case 251u: goto L_00236554;
    case 252u: goto L_00236560;
    case 253u: goto L_002365AC;
    case 254u: goto L_002365B4;
    case 255u: goto L_00236610;
    case 256u: goto L_00236638;
    case 257u: goto L_0023665C;
    case 258u: goto L_002366A0;
    case 259u: goto L_002366D0;
    case 260u: goto L_002366F4;
    case 261u: goto L_00236750;
    case 262u: goto L_00236760;
    case 263u: goto L_00236770;
    case 264u: goto L_002367D8;
    case 265u: goto L_00236804;
    case 266u: goto L_002368C4;
    case 267u: goto L_002368DC;
    case 268u: goto L_00236908;
    case 269u: goto L_00236930;
    case 270u: goto L_00236970;
    case 271u: goto L_002369AC;
    case 272u: goto L_002369C0;
    case 273u: goto L_00236A30;
    case 274u: goto L_00236A40;
    case 275u: goto L_00236A94;
    case 276u: goto L_00236AF0;
    case 277u: goto L_00236B34;
    case 278u: goto L_00236B90;
    case 279u: goto L_00236BB0;
    case 280u: goto L_00236C08;
    case 281u: goto L_00236C40;
    case 282u: goto L_00236C98;
    case 283u: goto L_00236CAC;
    case 284u: goto L_00236CDC;
    case 285u: goto L_00236D00;
    case 286u: goto L_00236D24;
    case 287u: goto L_00236D34;
    case 288u: goto L_00236D50;
    case 289u: goto L_00236D5C;
    case 290u: goto L_00236D6C;
    case 291u: goto L_00236D7C;
    case 292u: goto L_00236D98;
    case 293u: goto L_00236DA4;
    case 294u: goto L_00236DE4;
    case 295u: goto L_00236E20;
    case 296u: goto L_00236E60;
    case 297u: goto L_00236EA8;
    case 298u: goto L_00236F1C;
    case 299u: goto L_00236F24;
    case 300u: goto L_00236F2C;
    case 301u: goto L_00236F70;
    case 302u: goto L_002370B0;
    case 303u: goto L_00237200;
    case 304u: goto L_00237350;
    case 305u: goto L_00237490;
    case 306u: goto L_002375E0;
    case 307u: goto L_00237730;
    case 308u: goto L_00237740;
    case 309u: goto L_00237750;
    case 310u: goto L_0023779C;
    case 311u: goto L_002377D0;
    case 312u: goto L_002378CC;
    case 313u: goto L_00237910;
    case 314u: goto L_00237938;
    case 315u: goto L_002379C0;
    case 316u: goto L_002379E0;
    case 317u: goto L_00237A40;
    case 318u: goto L_00237A4C;
    case 319u: goto L_00237A5C;
    case 320u: goto L_00237A80;
    case 321u: goto L_00237A8C;
    case 322u: goto L_00237ACC;
    case 323u: goto L_00237B00;
    case 324u: goto L_00237B4C;
    case 325u: goto L_00237B74;
    case 326u: goto L_00237BEC;
    case 327u: goto L_00237BF4;
    case 328u: goto L_00237BFC;
    case 329u: goto L_00237C50;
    case 330u: goto L_00237DA0;
    case 331u: goto L_00237F00;
    default: bad_entry(c, 0x00234000u); return;
    }
L_00234000:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[3].w[0] + 31168u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 31184u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[3].w[0]);
    set32(c.r[3], c.r[28].w[0] - 29416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 25;
L_00234064:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 21952u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[3].w[0] + 1152u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1152u)));
    c.budget -= 12;
    if (c.r[3].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_002341B4; }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 4u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 6u)));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002340E4u); st32((c.r[29].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002340E4u) [[unlikely]] return; }
L_002340E4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002341B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00234158; } }
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0023415C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00234158:
    c.f[1] = c.r[2].w[0];
    c.budget -= 1;
L_0023415C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023416Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0023416Cu) [[unlikely]] return; }
L_0023416C:
    st8((c.r[29].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[29].w[0] + 125u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20408u), c.f[20]);
    st8((c.r[29].w[0] + 124u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[20]);
    set32(c.r[2], 0u + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[20]);
    st8((c.r[29].w[0] + 127u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20404u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002341B0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x002341B0u) [[unlikely]] return; }
L_002341B0:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_002341B4:
    c.r[3].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234064u | kUnwind; return; } goto L_00234064; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002341E0:
    set32(c.r[29], c.r[29].w[0] - 240u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] - 28448u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[2], c.r[2].w[0] + 26144u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 78u)));
    set32(c.r[5], c.r[21].w[0] + 32u);
    set32(c.r[16], c.r[21].w[0] + 320u);
    set32(c.r[6], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 7);
    set32(c.r[17], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[3], c.r[6].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234258u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x00234258u) [[unlikely]] return; }
L_00234258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF810000u);
    c.r[2].d[0] = c.r[2].d[0] | 18350ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 78u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234278u); set32(c.r[5], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_0016(c, 135u, depth + 1u); else { c.pc = 0x0015B5A0u; return; } if (c.pc != 0x00234278u) [[unlikely]] return; }
L_00234278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00234650; } }
    set32(c.r[19], c.r[29].w[0] + 152u);
    c.f[0] = ld32((c.r[19].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00234650; } }
    set32(c.r[20], c.r[29].w[0] + 148u);
    c.f[1] = ld32((c.r[29].w[0] + 144u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002342BCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002342BCu) [[unlikely]] return; }
L_002342BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);  if (t) { goto L_002342F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 128u);  if (t) { goto L_00234338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.budget -= 1;
L_002342F0:
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.f[1] = fp::sub(c.f[2], c.f[0]);  if (t) { goto L_00234320; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.budget -= 4;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00234334; } }
    c.f[1] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 1;
L_00234320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13108ull;
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 5;
L_00234334:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00234338:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234344u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_002D(c, 42u, depth + 1u); else { c.pc = 0x001B4B60u; return; } if (c.pc != 0x00234344u) [[unlikely]] return; }
L_00234344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00234354; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[20] = c.r[3].w[0];
    c.budget -= 2;
L_00234354:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5104u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234414; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 60u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00234414; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[4], c.r[3].w[0] + 40u);  if (t) { goto L_002343CC; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D990000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_00234414; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.f[20]);  if (t) { goto L_00234414; } }
L_002343CC:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00234414; } }
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0]), c.f[0]);  if (t) { goto L_00234414; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st32((c.r[3].w[0] + 40u), c.f[20]);
    c.budget -= 4;
L_00234414:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    set32(c.r[4], c.r[28].w[0] - 29424u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[3], c.r[3].w[0] - 20000u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[8], ld32((c.r[3].w[0])));
    set32(c.r[5], c.r[29].w[0] + 236u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[1].w[0] - 20364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[1].w[0] - 20380u), c.r[5].w[0]);
    c.f[3] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[2] = ld32((c.r[3].w[0] + 40u));
    c.f[2] = fp::mul(c.f[3], c.f[2]);
    c.f[20] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 41;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00234548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002344C0u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x002344C0u) [[unlikely]] return; }
L_002344C0:
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[6], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002344D0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 220u, depth + 1u); else { c.pc = 0x00102680u; return; } if (c.pc != 0x002344D0u) [[unlikely]] return; }
L_002344D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002344E0u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002344E0u) [[unlikely]] return; }
L_002344E0:
    st8((c.r[29].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 237u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[2].w[0] + 544u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[3], c.r[2].w[0] + 548u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234548u); st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x00234548u) [[unlikely]] return; }
L_00234548:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[20] = ld32((c.r[3].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 10;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00234650; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 10272u);
    set32(c.r[7], 0u + 8191u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234588u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x00234588u) [[unlikely]] return; }
L_00234588:
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234594u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 46u, depth + 1u); else { c.pc = 0x001ECA90u; return; } if (c.pc != 0x00234594u) [[unlikely]] return; }
L_00234594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023459Cu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0023459Cu) [[unlikely]] return; }
L_0023459C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002345A4u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002345A4u) [[unlikely]] return; }
L_002345A4:
    c.f[14] = ld32((c.r[19].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 144u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002345B4u); c.f[13] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002345B4u) [[unlikely]] return; }
L_002345B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002345BCu); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002345BCu) [[unlikely]] return; }
L_002345BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002345CCu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002345CCu) [[unlikely]] return; }
L_002345CC:
    st8((c.r[29].w[0] + 238u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 237u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 236u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 239u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8191u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[4], c.r[2].w[0] + 24912u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003F0000u);
    set32(c.r[3], c.r[2].w[0] + 24916u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 10u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234638u); st32((c.r[1].w[0] - 20340u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 168u, depth + 1u); else { c.pc = 0x0016ECD0u; return; } if (c.pc != 0x00234638u) [[unlikely]] return; }
L_00234638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] + 10256u);
    set32(c.r[7], 0u + 8191u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234650u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x00234650u) [[unlikely]] return; }
L_00234650:
    st8((c.r[16].w[0] + 60u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 240u);  c.pc = t; return; }
L_00234680:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 136u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002346B0; } }
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002346B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 29408u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002346E0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002348A8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[5], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[20].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234734u); st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_003B(c, 46u, depth + 1u); else { c.pc = 0x001ECA90u; return; } if (c.pc != 0x00234734u) [[unlikely]] return; }
L_00234734:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    c.f[12] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 144u));
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st32((c.r[2].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.f[0] = ld32((c.r[29].w[0] + 148u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 4u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.f[0] = ld32((c.r[29].w[0] + 152u));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st32((c.r[2].w[0] + 8u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023478Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0023478Cu) [[unlikely]] return; }
L_0023478C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[5], c.r[16].w[0] + 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347A0u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002347A0u) [[unlikely]] return; }
L_002347A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347A8u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));  if (depth < kMaxDepth) unit_004D(c, 75u, depth + 1u); else { c.pc = 0x00234B10u; return; } if (c.pc != 0x002347A8u) [[unlikely]] return; }
L_002347A8:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_002347AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347B4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));  if (depth < kMaxDepth) unit_004D(c, 81u, depth + 1u); else { c.pc = 0x00234C10u; return; } if (c.pc != 0x002347B4u) [[unlikely]] return; }
L_002347B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_00234898; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347C4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002347C4u) [[unlikely]] return; }
L_002347C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347E0u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002347E0u) [[unlikely]] return; }
L_002347E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347E8u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_004D(c, 88u, depth + 1u); else { c.pc = 0x00234D60u; return; } if (c.pc != 0x002347E8u) [[unlikely]] return; }
L_002347E8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = 0ull | 65280ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002347FCu); c.r[4].d[0] = c.r[2].d[0] & c.r[3].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002347FCu) [[unlikely]] return; }
L_002347FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234804u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_004D(c, 88u, depth + 1u); else { c.pc = 0x00234D60u; return; } if (c.pc != 0x00234804u) [[unlikely]] return; }
L_00234804:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234814u); c.r[4].d[0] = c.r[2].d[0] & 32640ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00234814u) [[unlikely]] return; }
L_00234814:
    set32(c.r[18], c.r[29].w[0] + 180u);
    st32((c.r[18].w[0]), 0u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234824u); st32((c.r[29].w[0] + 176u), 0u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00234824u) [[unlikely]] return; }
L_00234824:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[3].d[0] = c.r[2].d[0] & 65280ull;
    set32(c.r[2], 0u + 50u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[21], c.r[29].w[0] + 184u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023485Cu); st32((c.r[21].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x0023485Cu) [[unlikely]] return; }
L_0023485C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234864u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_000E(c, 295u, depth + 1u); else { c.pc = 0x0013B580u; return; } if (c.pc != 0x00234864u) [[unlikely]] return; }
L_00234864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023486Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0023486Cu) [[unlikely]] return; }
L_0023486C:
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234878u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 295u, depth + 1u); else { c.pc = 0x0013B580u; return; } if (c.pc != 0x00234878u) [[unlikely]] return; }
L_00234878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234880u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00234880u) [[unlikely]] return; }
L_00234880:
    st16((c.r[17].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023488Cu); c.f[12] = ld32((c.r[21].w[0]));  if (depth < kMaxDepth) unit_000E(c, 295u, depth + 1u); else { c.pc = 0x0013B580u; return; } if (c.pc != 0x0023488Cu) [[unlikely]] return; }
L_0023488C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234894u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00234894u) [[unlikely]] return; }
L_00234894:
    st16((c.r[17].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00234898:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002347ACu | kUnwind; return; } goto L_002347AC; } }
L_002348A8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002348D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 1u)));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_00234AE0; } }
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023490Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003B(c, 46u, depth + 1u); else { c.pc = 0x001ECA90u; return; } if (c.pc != 0x0023490Cu) [[unlikely]] return; }
L_0023490C:
    c.f[2] = ld32((c.r[29].w[0] + 128u));
    c.f[1] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = ld32((c.r[29].w[0] + 136u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.f[12] = c.r[2].w[0];
    st32((c.r[29].w[0] + 160u), c.f[2]);
    st32((c.r[29].w[0] + 164u), c.f[1]);
    st32((c.r[29].w[0] + 168u), c.f[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234938u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x00234938u) [[unlikely]] return; }
L_00234938:
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234944u); set32(c.r[4], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00234944u) [[unlikely]] return; }
L_00234944:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234950u); set32(c.r[5], c.r[29].w[0] + 160u);  if (depth < kMaxDepth) unit_004D(c, 78u, depth + 1u); else { c.pc = 0x00234B70u; return; } if (c.pc != 0x00234950u) [[unlikely]] return; }
L_00234950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[19].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00234AA8; } }
L_00234964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023496Cu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));  if (depth < kMaxDepth) unit_004D(c, 81u, depth + 1u); else { c.pc = 0x00234C10u; return; } if (c.pc != 0x0023496Cu) [[unlikely]] return; }
L_0023496C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00234AEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023498Cu); set32(c.r[6], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0023498Cu) [[unlikely]] return; }
L_0023498C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002349A0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x002349A0u) [[unlikely]] return; }
L_002349A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[5], c.r[29].w[0] + 176u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002349B4u); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002349B4u) [[unlikely]] return; }
L_002349B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002349BCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002349BCu) [[unlikely]] return; }
L_002349BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002349D8u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002349D8u) [[unlikely]] return; }
L_002349D8:
    set32(c.r[17], c.r[29].w[0] + 184u);
    c.f[13] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002349E8u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002349E8u) [[unlikely]] return; }
L_002349E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002349F0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002349F0u) [[unlikely]] return; }
L_002349F0:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[17].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A04u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00234A04u) [[unlikely]] return; }
L_00234A04:
    set32(c.r[18], c.r[29].w[0] + 180u);
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A14u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00234A14u) [[unlikely]] return; }
L_00234A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A1Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00234A1Cu) [[unlikely]] return; }
L_00234A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A24u); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_004D(c, 88u, depth + 1u); else { c.pc = 0x00234D60u; return; } if (c.pc != 0x00234A24u) [[unlikely]] return; }
L_00234A24:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A34u); c.r[4].d[0] = c.r[2].d[0] & 65280ull;  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00234A34u) [[unlikely]] return; }
L_00234A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A3Cu); set32(c.r[4], 0u + 8u);  if (depth < kMaxDepth) unit_004D(c, 88u, depth + 1u); else { c.pc = 0x00234D60u; return; } if (c.pc != 0x00234A3Cu) [[unlikely]] return; }
L_00234A3C:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A4Cu); c.r[4].d[0] = c.r[2].d[0] & 16320ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00234A4Cu) [[unlikely]] return; }
L_00234A4C:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[4], c.r[29].w[0] + 176u);
    st32((c.r[29].w[0] + 176u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A68u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00234A68u) [[unlikely]] return; }
L_00234A68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A70u); c.f[12] = ld32((c.r[29].w[0] + 176u));  if (depth < kMaxDepth) unit_000E(c, 295u, depth + 1u); else { c.pc = 0x0013B580u; return; } if (c.pc != 0x00234A70u) [[unlikely]] return; }
L_00234A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A78u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00234A78u) [[unlikely]] return; }
L_00234A78:
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A84u); c.f[12] = ld32((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000E(c, 295u, depth + 1u); else { c.pc = 0x0013B580u; return; } if (c.pc != 0x00234A84u) [[unlikely]] return; }
L_00234A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A8Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00234A8Cu) [[unlikely]] return; }
L_00234A8C:
    st16((c.r[16].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234A98u); c.f[12] = ld32((c.r[17].w[0]));  if (depth < kMaxDepth) unit_000E(c, 295u, depth + 1u); else { c.pc = 0x0013B580u; return; } if (c.pc != 0x00234A98u) [[unlikely]] return; }
L_00234A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234AA0u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00234AA0u) [[unlikely]] return; }
L_00234AA0:
    st16((c.r[16].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00234AA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234ABCu); set32(c.r[5], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00234ABCu) [[unlikely]] return; }
L_00234ABC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234964u | kUnwind; return; } goto L_00234964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00234AF0; } }
L_00234AE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[20].w[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00234AEC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00234AF0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00234B10:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 5);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] - 21952u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 1152u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 12;
L_00234B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234B48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 83u, depth + 1u); else { c.pc = 0x00234C80u; return; } if (c.pc != 0x00234B48u) [[unlikely]] return; }
L_00234B48:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 20ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234B40u | kUnwind; return; } goto L_00234B40; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00234B70:
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    set32(c.r[3], c.r[2].w[0] << 5);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 21952u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    set32(c.r[3], c.r[2].w[0] + 1152u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 18;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00234BF0; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 2;
L_00234BC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00234BE4; }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234BD8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 85u, depth + 1u); else { c.pc = 0x00234CC0u; return; } if (c.pc != 0x00234BD8u) [[unlikely]] return; }
L_00234BD8:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_00234BE4:
    c.r[2].d[0] = c.r[17].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234BC0u | kUnwind; return; } goto L_00234BC0; } }
L_00234BF0:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00234C10:
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 5);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] - 21952u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 1152u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00234C58; } }
L_00234C38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[4], c.r[4].w[0] + 8u);  goto L_00234C54; }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 8u);
    c.budget -= 4;
L_00234C54:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00234C58:
    c.r[1].d[0] = c.r[5].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00234C70; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234C38u | kUnwind; return; } goto L_00234C38; } }
    c.budget -= 1;
L_00234C70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00234C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234C9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00234C9Cu) [[unlikely]] return; }
L_00234C9C:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00234CC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[29].w[0] + 36u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234D14u); st32((c.r[29].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x00234D14u) [[unlikely]] return; }
L_00234D14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42500000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00234D3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00234D48; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00234D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234D44u);  if (depth < kMaxDepth) unit_004D(c, 83u, depth + 1u); else { c.pc = 0x00234C80u; return; } if (c.pc != 0x00234D44u) [[unlikely]] return; }
L_00234D44:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00234D48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00234D60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234D7Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00234D7Cu) [[unlikely]] return; }
L_00234D7C:
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00234DC0; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    c.budget -= 1;
L_00234D90:
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] >> 1);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] << 1);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234D90u | kUnwind; return; } goto L_00234D90; } }
L_00234DC0:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00234DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234E68; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234E24u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00234E24u) [[unlikely]] return; }
L_00234E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00234E68; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 27u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 20256u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 21024u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 15;
L_00234E68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00234E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00234F0C; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234EC4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00234EC4u) [[unlikely]] return; }
L_00234EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00234F0C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 27u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 20256u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 21024u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_00234F0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00234F20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 31200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00234F40:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[18], c.r[4].w[0] + 320u);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 404u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st8((c.r[4].w[0] + 405u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[19], c.r[18], c.r[0]);
    c.budget -= 22;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[18], c.r[0]);  if (t) { goto L_00235008; } }
L_00234F98:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 121u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[18].w[0]), c.f[3]);
    st32((c.r[18].w[0] + 4u), c.f[2]);
    st32((c.r[18].w[0] + 8u), c.f[1]);
    st32((c.r[18].w[0] + 12u), c.f[0]);
    st32((c.r[19].w[0] + 64u), c.r[4].w[0]);
    st16((c.r[20].w[0] + 80u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00234FE0u); st32((c.r[18].w[0] + 40u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00234FE0u) [[unlikely]] return; }
L_00234FE0:
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] << 8);
    st32((c.r[19].w[0] + 72u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 10;
L_00235008:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00234F98u | kUnwind; return; } goto L_00234F98; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00235040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[16].w[0] + 320u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);
    c.r[9].d[0] = c.r[9].d[0] | 52428ull;
    set32(c.r[11], 0u + 1u);
    c.f[4] = c.r[9].w[0];
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[3], c.r[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[3], c.r[0]);  if (t) { goto L_00235190; } }
    set32(c.r[9], c.r[3].w[0] + c.r[10].w[0]);
    c.budget -= 1;
L_00235080:
    set32(c.r[12], c.r[9].w[0] + 84u);
    c.r[9].d[0] = ld8((c.r[9].w[0] + 84u));
    c.budget -= 4;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_002350D0; } }
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[9], c.r[9].w[0] - 1u);
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[9].d[0] = c.r[9].d[0] << 48;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[9].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0023517C; }
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[11].w[0]));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    st32((c.r[7].w[0]), c.f[3]);
    st32((c.r[7].w[0] + 4u), c.f[2]);
    st32((c.r[7].w[0] + 8u), c.f[1]);
    st32((c.r[7].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_002350D0:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[9].d[0] == c.r[11].d[0];  if (t) { goto L_0023512C; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_002350EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[9].d[0] = ld16((c.r[8].w[0] + 80u));  if (t) { goto L_0023513C; } }
L_002350EC:
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 164u)));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.r[10].d[0] = c.r[9].d[0] << 48;
    st16((c.r[6].w[0] + 164u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[10].sd[0] >= 0; c.r[9].d[0] = c.r[10].d[0] & 1ull;  if (t) { goto L_00235114; } }
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_00235114; } }
    set32(c.r[9], c.r[9].w[0] - 2u);
    c.budget -= 1;
L_00235114:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] != 0ull;  if (t) { goto L_00235138; } }
    c.r[9].d[0] = ld16((c.r[8].w[0] + 80u));
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[8].w[0] + 80u), static_cast<std::uint16_t>(c.r[9].w[0]));  if (t) { goto L_00235138; } }
L_0023512C:
    c.r[9].d[0] = ld16((c.r[8].w[0] + 80u));
    set32(c.r[9], c.r[9].w[0] + 2u);
    st16((c.r[8].w[0] + 80u), static_cast<std::uint16_t>(c.r[9].w[0]));
    c.budget -= 3;
L_00235138:
    c.r[9].d[0] = ld16((c.r[8].w[0] + 80u));
    c.budget -= 1;
L_0023513C:
    c.r[1].d[0] = c.r[9].sd[0] < 137ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00235150; } }
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00235150:
    c.f[0] = ld32((c.r[7].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[7].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[7].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[7].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[7].w[0] + 40u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 11;
L_0023517C:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[8], c.r[8].w[0] + 2u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
L_00235190:
    c.r[10].d[0] = c.r[5].d[0] << 56;
    c.r[10].d[0] = static_cast<std::uint64_t>(c.r[10].sd[0] >> 56);
    c.r[9].d[0] = c.r[10].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; set32(c.r[9], c.r[3].w[0] + c.r[10].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235080u | kUnwind; return; } goto L_00235080; } }
    c.r[4].d[0] = ld8((c.r[3].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_002351CC; } }
    c.r[3].d[0] = ld8((c.r[3].w[0] + 85u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002351CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002351EC; } }
L_002351CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002351D4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002351D4u) [[unlikely]] return; }
L_002351D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002351DCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002351DCu) [[unlikely]] return; }
L_002351DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002351E4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002351E4u) [[unlikely]] return; }
L_002351E4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002351EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00235200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00235210:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00235220:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + 31360u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29400u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] + 31344u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235288u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00235288u) [[unlikely]] return; }
L_00235288:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002353C0; } }
    c.r[5].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_002352BC:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    set32(c.r[3], c.r[5].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 84u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[17].w[0] + 1u);  if (t) { goto L_002353B4; } }
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[29].w[0] + 48u);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::move(c.vu0, 1u, 4u, 0u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[2], c.r[5].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].d[0] = ld16((c.r[2].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] + 31216u);
    set32(c.r[4], c.r[4].w[0] - 121u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[5], c.r[28].w[0] - 29400u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] - 2u);
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[2].w[0] + 64u));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 40;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235370u); set32(c.r[4], ld32((c.r[2].w[0] + 72u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x00235370u) [[unlikely]] return; }
L_00235370:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 32u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0] + 36u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002353ACu); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x002353ACu) [[unlikely]] return; }
L_002353AC:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002353B4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_002353C0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002352BCu | kUnwind; return; } goto L_002352BC; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002353F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26460u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[6], c.r[0]);  if (t) { goto L_002354C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_002354B0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_0023542C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235438u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00235438u) [[unlikely]] return; }
L_00235438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_002354A4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 28u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[19].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[18].w[0]));
    c.f[2] = ld32((c.r[18].w[0] + 4u));
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 21728u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 22736u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 25;
L_002354A4:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_002354B0:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 3u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0023542Cu | kUnwind; return; } goto L_0023542C; } }
L_002354C4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002354E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 31376u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00235500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[6], c.r[28].w[0] - 29392u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[4].w[0] + 424u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 429u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[2].w[0] + 31392u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[17], c.r[18].w[0] + 320u);
    st8((c.r[4].w[0] + 428u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[2].w[0] + 31396u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 31400u);
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.budget -= 45;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002355B4u); st32((c.r[4].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x002355B4u) [[unlikely]] return; }
L_002355B4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_00235634; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00235618; } }
L_002355DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002355E4u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x002355E4u) [[unlikely]] return; }
L_002355E4:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002355F8u); st32((c.r[17].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x002355F8u) [[unlikely]] return; }
L_002355F8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] << 12);
    st32((c.r[17].w[0] + 84u), c.r[2].w[0]);
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 8;
L_00235618:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002355DCu | kUnwind; return; } goto L_002355DC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 2;
L_00235634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023563Cu);  if (depth < kMaxDepth) unit_004D(c, 121u, depth + 1u); else { c.pc = 0x00235660u; return; } if (c.pc != 0x0023563Cu) [[unlikely]] return; }
L_0023563C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00235660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 320u);  if (t) { goto L_00235718; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0023569C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023569C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002356D8; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_00235878; } }
L_002356D8:
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52432ull;
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE000000u);
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 112u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 116u), c.f[1]);
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 104u), c.f[0]);  if (t) { goto L_00235878; } }
L_00235718:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00235738; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00235738:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;  if (t) { goto L_0023576C; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 112u), c.f[0]);  if (t) { goto L_002357E0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 1;
L_0023576C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;  if (t) { goto L_002357A4; } }
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34955ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 116u), c.f[0]);  if (t) { goto L_002357E0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 1;
L_002357A4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002357E0; } }
    c.f[1] = ld32((c.r[16].w[0] + 112u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CEA0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3739ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 116u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 116u), c.f[0]);
    c.budget -= 13;
L_002357E0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 1ull;  if (t) { goto L_002357F8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002357F8; } }
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 1;
L_002357F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0023584C; } }
    c.r[4].d[0] = ld8((c.r[2].w[0] + 108u));
    set32(c.r[3], 0u + 55u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[2].w[0] + 108u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00235840; } }
    set32(c.r[3], 0u + 60u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00235840; } }
    set32(c.r[3], 0u + 65u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00235840; } }
    set32(c.r[3], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0023584C; } }
L_00235840:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 108u));
    set32(c.r[3], c.r[3].w[0] - 4u);
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0023584C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00235878; } }
    c.f[1] = ld32((c.r[2].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[2].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_00235878:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235880u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00235880u) [[unlikely]] return; }
L_00235880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235888u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00235888u) [[unlikely]] return; }
L_00235888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235890u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00235890u) [[unlikely]] return; }
L_00235890:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002358B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002358C0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002358D0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    set32(c.r[3], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[28].w[0] - 29384u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[20].w[0] + 320u);
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 104u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 4u);
    st32((c.r[29].w[0] + 108u), c.r[5].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235934u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00235934u) [[unlikely]] return; }
L_00235934:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] + 31424u);
    c.r[8].d[0] = ld8((c.r[16].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] + 31744u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[8].w[0] - 50u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[7].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[3].w[0]);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 108u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] + 32064u);
    set32(c.r[7], c.r[7].w[0] - 50u);
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[6].w[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 108u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], c.r[6].w[0] - 50u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    c.budget -= 40;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00235A2C; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359E8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002359E8u) [[unlikely]] return; }
L_002359E8:
    st8((c.r[28].w[0] - 29381u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002359F4u); set32(c.r[4], ld32((c.r[20].w[0] + 88u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x002359F4u) [[unlikely]] return; }
L_002359F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A20u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00235A20u) [[unlikely]] return; }
L_00235A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);  if (t) { goto L_00235AC4; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00235A2C:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[19], c.r[16], c.r[0]);  if (t) { goto L_00235AA8; } }
L_00235A38:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A4Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00235A4Cu) [[unlikely]] return; }
L_00235A4C:
    st8((c.r[28].w[0] - 29381u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[20].w[0] + 88u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A64u); set32(c.r[4], c.r[2].w[0] + c.r[18].w[0]);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x00235A64u) [[unlikely]] return; }
L_00235A64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 112u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 116u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235A90u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00235A90u) [[unlikely]] return; }
L_00235A90:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 13107u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 6;
L_00235AA8:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235A38u | kUnwind; return; } goto L_00235A38; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 2;
L_00235AC4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00235AE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235B08u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00235B08u) [[unlikely]] return; }
L_00235B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00235B4C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 29u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 23392u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 24320u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 15;
L_00235B4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00235B60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 32240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00235B80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.f[0] = ld32((c.r[28].w[0] - 29376u));
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29372u)));
    c.r[8].d[0] = ld8((c.r[28].w[0] - 29370u));
    set32(c.r[10], c.r[29].w[0] + 136u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[4].w[0] + 320u);
    st32((c.r[10].w[0]), c.f[0]);
    st16((c.r[10].w[0] + 4u), static_cast<std::uint16_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[3].w[0] + 32256u);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 7u);
    st8((c.r[10].w[0] + 6u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 14;
L_00235BB8:
    ld128((c.r[7].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[7], c.r[7].w[0] + 16u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235BB8u | kUnwind; return; } goto L_00235BB8; } }
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[13], c.r[8].w[0] + 32224u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[11].d[0] = c.r[8].d[0] | 13107ull;
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    set32(c.r[12], 0u + 10u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[9], c.r[9].w[0] + c.r[29].w[0]);
    c.r[14].d[0] = ld8((c.r[9].w[0] + 136u));
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    mmi::paddub(c.r[7], c.r[2], c.r[0]);
    c.r[10].d[0] = c.r[8].d[0] | 52429ull;
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 21;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[14].w[0]));  if (t) { goto L_00235C78; } }
    set32(c.r[15], c.r[2].w[0] + c.r[14].w[0]);
    c.budget -= 1;
L_00235C2C:
    c.r[14].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[8], c.r[14].w[0] << 1);
    set32(c.r[8], c.r[8].w[0] + c.r[14].w[0]);
    set32(c.r[8], c.r[13].w[0] + c.r[8].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    st8((c.r[15].w[0] + 124u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[15].w[0] + 120u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[15].w[0] + 122u), static_cast<std::uint8_t>(c.r[12].w[0]));
    st32((c.r[6].w[0] + 80u), c.r[11].w[0]);
    st32((c.r[6].w[0] + 84u), c.r[10].w[0]);
    st32((c.r[6].w[0] + 88u), c.r[11].w[0]);
    st32((c.r[7].w[0] + 112u), c.r[9].w[0]);
    set32(c.r[5], c.r[5].w[0] + 5u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    set32(c.r[7], c.r[7].w[0] + 4u);
    st8((c.r[15].w[0] + 126u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_00235C78:
    c.r[14].d[0] = c.r[3].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.r[8].d[0] = c.r[14].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != 0ull; set32(c.r[15], c.r[2].w[0] + c.r[14].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235C2Cu | kUnwind; return; } goto L_00235C2C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].d[0] = 0ull | 32768ull;
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    st32((c.r[2].w[0] + 64u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 20u));
    st32((c.r[2].w[0] + 68u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[29].w[0]);
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    st32((c.r[2].w[0] + 72u), c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235CD4u); st32((c.r[4].w[0] + 80u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_004D(c, 143u, depth + 1u); else { c.pc = 0x00235CE0u; return; } if (c.pc != 0x00235CD4u) [[unlikely]] return; }
L_00235CD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00235CE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[18].w[0] + 320u);  if (t) { goto L_00235D18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00235D18:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.r[7].d[0] = c.r[5].d[0] | 13107ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[6].d[0] = c.r[5].d[0] | 52429ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3EDD0000u);
    c.r[5].d[0] = c.r[5].d[0] | 56797ull;
    c.f[3] = c.r[5].w[0];
    set32(c.r[2], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D080000u);
    c.r[5].d[0] = c.r[5].d[0] | 34953ull;
    c.f[2] = c.r[5].w[0];
    set32(c.r[8], 0u + 10u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xBE120000u);
    c.r[5].d[0] = c.r[5].d[0] | 18725ull;
    c.f[4] = c.r[5].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3E2F0000u);
    c.r[5].d[0] = c.r[5].d[0] | 35577ull;
    c.f[1] = c.r[5].w[0];
    c.budget -= 21;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00235E58; } }
    set32(c.r[5], c.r[18].w[0] + c.r[9].w[0]);
    c.budget -= 1;
L_00235D70:
    set32(c.r[12], c.r[5].w[0] + 5u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[10], c.r[16].w[0] + c.r[9].w[0]);  if (t) { goto L_00235DC4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[11], c.r[16].w[0] + c.r[9].w[0]);  if (t) { goto L_00235D94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_00235E4C; } }
    set32(c.r[11], c.r[16].w[0] + c.r[9].w[0]);
    c.budget -= 1;
L_00235D94:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 120u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] + 120u);  if (t) { goto L_00235DB0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[10].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00235E48; } }
L_00235DB0:
    st8((c.r[11].w[0] + 126u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[12].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[12].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[10], c.r[16].w[0] + c.r[9].w[0]);
    c.budget -= 5;
L_00235DC4:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 122u)));
    set32(c.r[11], c.r[10].w[0] + 122u);
    set32(c.r[5], c.r[9].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != 0ull; st8((c.r[10].w[0] + 122u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00235DEC; } }
    st8((c.r[11].w[0]), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 80u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 84u), c.r[6].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.r[7].w[0]);  if (t) { goto L_00235E48; } }
L_00235DEC:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    c.r[5].d[0] = c.r[5].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00235E24; } }
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 88u), c.f[0]);  if (t) { goto L_00235E48; } }
L_00235E24:
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 84u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 88u), c.f[0]);
    c.budget -= 9;
L_00235E48:
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00235E4C:
    c.r[3].d[0] = c.r[3].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
L_00235E58:
    c.r[9].d[0] = c.r[3].d[0] << 56;
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    c.r[5].d[0] = c.r[9].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[5], c.r[18].w[0] + c.r[9].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235D70u | kUnwind; return; } goto L_00235D70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235E74u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00235E74u) [[unlikely]] return; }
L_00235E74:
    set32(c.r[4], c.r[16].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235E80u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00235E80u) [[unlikely]] return; }
L_00235E80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235E88u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00235E88u) [[unlikely]] return; }
L_00235E88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235E90u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00235E90u) [[unlikely]] return; }
L_00235E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235E98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00235E98u) [[unlikely]] return; }
L_00235E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235EA0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00235EA0u) [[unlikely]] return; }
L_00235EA0:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235EB0u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00235EB0u) [[unlikely]] return; }
L_00235EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235EB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00235EB8u) [[unlikely]] return; }
L_00235EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235EC0u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00235EC0u) [[unlikely]] return; }
L_00235EC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00235EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00235EF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00235F00:
    set32(c.r[29], c.r[29].w[0] - 208u);
    c.budget -= 1;
L_00235F04:
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00235F08:
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    c.budget -= 1;
L_00235F0C:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    c.budget -= 1;
L_00235F10:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    c.budget -= 1;
L_00235F14:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    c.budget -= 1;
L_00235F18:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.budget -= 1;
L_00235F1C:
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.budget -= 1;
L_00235F20:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_00235F24:
    set32(c.r[2], c.r[28].w[0] - 29368u);
    c.budget -= 1;
L_00235F28:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00235F2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00235F30:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_00235F34:
    set32(c.r[22], c.r[21].w[0] + 320u);
    c.budget -= 1;
L_00235F38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235F40u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00235F40u) [[unlikely]] return; }
    goto L_00235F40;
L_00235F3C:
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 1;
L_00235F40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00235F44:
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 1;
L_00235F48:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00235F4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00235F50:
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.budget -= 1;
L_00235F54:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_00235F58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00235F5C:
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00235F60:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00235F64:
    st32((c.r[1].w[0] - 20352u), 0u);
    c.budget -= 1;
L_00235F68:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00235F6C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00235F70:
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00235F74:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_00235F78:
    mmi::paddub(c.r[17], c.r[22], c.r[0]);
    c.budget -= 1;
L_00235F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[18], c.r[22], c.r[0]);  if (t) { goto L_00236128; } }
    goto L_00235F84;
L_00235F80:
    mmi::paddub(c.r[18], c.r[22], c.r[0]);
    c.budget -= 1;
L_00235F84:
    set32(c.r[19], c.r[22].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_00235F88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 126u)));
    c.budget -= 1;
L_00235F8C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[16].w[0] + 1u);  if (t) { goto L_00236114; } }
    goto L_00235F94;
L_00235F90:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00235F94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235F9Cu); mmi::paddub(c.r[4], c.r[22], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00235F9Cu) [[unlikely]] return; }
    goto L_00235F9C;
L_00235F98:
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    c.budget -= 1;
L_00235F9C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_00235FA0:
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 1;
L_00235FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FACu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00235FACu) [[unlikely]] return; }
    goto L_00235FAC;
L_00235FA8:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 1;
L_00235FAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 1;
L_00235FB0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00235FB4:
    set32(c.r[6], c.r[21].w[0] + 32u);
    c.budget -= 1;
L_00235FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FC0u); set32(c.r[5], c.r[2].w[0] + 384u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00235FC0u) [[unlikely]] return; }
    goto L_00235FC0;
L_00235FBC:
    set32(c.r[5], c.r[2].w[0] + 384u);
    c.budget -= 1;
L_00235FC0:
    set32(c.r[4], c.r[29].w[0] + 128u);
    c.budget -= 1;
L_00235FC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FCCu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00235FCCu) [[unlikely]] return; }
    goto L_00235FCC;
L_00235FC8:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 1;
L_00235FCC:
    c.f[13] = ld32((c.r[29].w[0] + 136u));
    c.budget -= 1;
L_00235FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FD8u); c.f[12] = ld32((c.r[29].w[0] + 128u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00235FD8u) [[unlikely]] return; }
    goto L_00235FD8;
L_00235FD4:
    c.f[12] = ld32((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_00235FD8:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00235FDC:
    set32(c.r[4], c.r[21].w[0] + 192u);
    c.budget -= 1;
L_00235FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FE8u); st32((c.r[21].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00235FE8u) [[unlikely]] return; }
    goto L_00235FE8;
L_00235FE4:
    st32((c.r[21].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_00235FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FF0u); set32(c.r[4], ld32((c.r[21].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00235FF0u) [[unlikely]] return; }
    goto L_00235FF0;
L_00235FEC:
    set32(c.r[4], ld32((c.r[21].w[0] + 84u)));
    c.budget -= 1;
L_00235FF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00235FF8u); set32(c.r[4], ld32((c.r[21].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00235FF8u) [[unlikely]] return; }
    goto L_00235FF8;
L_00235FF4:
    set32(c.r[4], ld32((c.r[21].w[0] + 80u)));
    c.budget -= 1;
L_00235FF8:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.budget -= 1;
L_00235FFC:
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 1;
L_00236000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236008u); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00236008u) [[unlikely]] return; }
L_00236008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236010u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00236010u) [[unlikely]] return; }
L_00236010:
    c.f[0] = ld32((c.r[18].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236024u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00236024u) [[unlikely]] return; }
L_00236024:
    st8((c.r[28].w[0] - 29365u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 32368u);
    c.r[4].d[0] = ld8((c.r[19].w[0] + 124u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] + 32464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[20], c.r[19].w[0] + 124u);
    set32(c.r[2], c.r[4].w[0] - 95u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 32560u);
    c.r[6].d[0] = ld8((c.r[19].w[0] + 124u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[6].w[0] - 95u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002360A0u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x002360A0u) [[unlikely]] return; }
L_002360A0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 32368u);
    c.r[4].d[0] = ld8((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] + 32464u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[4].w[0] - 95u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 32568u);
    c.r[6].d[0] = ld8((c.r[20].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[6].w[0] - 95u);
    set32(c.r[2], c.r[2].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023610Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0023610Cu) [[unlikely]] return; }
L_0023610C:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00236114:
    c.r[16].d[0] = c.r[3].d[0] << 56;
    set32(c.r[17], c.r[17].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 5;
L_00236128:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[22].w[0] + c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00235F88u | kUnwind; return; } goto L_00235F88; } }
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00236170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236198u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00236198u) [[unlikely]] return; }
L_00236198:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002361A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0023621C; } }
L_002361A8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 25u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    set32(c.r[4], c.r[3].w[0] + 26480u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 25136u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[2].w[0] + 48u), c.f[3]);
    st32((c.r[2].w[0] + 52u), c.f[2]);
    st32((c.r[2].w[0] + 56u), c.f[1]);
    st32((c.r[2].w[0] + 60u), c.f[0]);
    st32((c.r[2].w[0] + 168u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 29;
L_0023621C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00236230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 32624u);
    set32(c.r[5], c.r[4].w[0] + 192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00236260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236298u); st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00236298u) [[unlikely]] return; }
L_00236298:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 32592u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0]), c.f[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st16((c.r[16].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002362CCu); st16((c.r[16].w[0] + 14u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002362CCu) [[unlikely]] return; }
L_002362CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002362D4u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002362D4u) [[unlikely]] return; }
L_002362D4:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002362E0u); c.r[4].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002362E0u) [[unlikely]] return; }
L_002362E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002362E8u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002362E8u) [[unlikely]] return; }
L_002362E8:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002362F4u); c.r[4].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002362F4u) [[unlikely]] return; }
L_002362F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002362FCu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002362FCu) [[unlikely]] return; }
L_002362FC:
    set32(c.r[2], c.r[2].w[0] << 4);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236308u); c.r[4].d[0] = c.r[2].d[0] & 2047ull;  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00236308u) [[unlikely]] return; }
L_00236308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236310u); set32(c.r[4], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00236310u) [[unlikely]] return; }
L_00236310:
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023631Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0023631Cu) [[unlikely]] return; }
L_0023631C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236324u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00236324u) [[unlikely]] return; }
L_00236324:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 32576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236348u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00236348u) [[unlikely]] return; }
L_00236348:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC2E0000u);
    c.r[2].d[0] = c.r[2].d[0] | 19521ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[17].w[0] + 64u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236360u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00236360u) [[unlikely]] return; }
L_00236360:
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xBC1A0000u);  if (t) { goto L_002363A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F7A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 57672ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.f[0]);  if (t) { goto L_002363AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC1A0000u);
    c.budget -= 1;
L_002363A4:
    c.r[2].d[0] = c.r[2].d[0] | 608ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 2;
L_002363AC:
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC1A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 608ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002363D4; } }
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 1;
L_002363D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 121u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002363ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002363ECu) [[unlikely]] return; }
L_002363EC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002363F8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 245u, depth + 1u); else { c.pc = 0x00236410u; return; } if (c.pc != 0x002363F8u) [[unlikely]] return; }
L_002363F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00236410:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[19].w[0] + 32u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236438u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00236438u) [[unlikely]] return; }
L_00236438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00236454; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_00236458; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00236454:
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 1;
L_00236458:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0]), c.f[0]);  if (t) { goto L_00236484; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00236484:
    c.f[1] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A40000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);  if (t) { goto L_00236530; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | 3584ull;
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002364E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002364E0u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002364E0u) [[unlikely]] return; }
L_002364E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[19].w[0] + 48u);  if (t) { goto L_002364FC; } }
L_002364E8:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002364F8u); set32(c.r[5], c.r[19].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002364F8u) [[unlikely]] return; }
L_002364F8:
    set32(c.r[4], c.r[19].w[0] + 48u);
    c.budget -= 1;
L_002364FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236504u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00236504u) [[unlikely]] return; }
L_00236504:
    c.f[3] = ld32((c.r[19].w[0] + 48u));
    c.f[2] = ld32((c.r[19].w[0] + 52u));
    c.f[1] = ld32((c.r[19].w[0] + 56u));
    c.f[0] = ld32((c.r[19].w[0] + 60u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    st32((c.r[2].w[0]), c.f[3]);
    st32((c.r[2].w[0] + 4u), c.f[2]);
    st32((c.r[2].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.f[0]);  if (t) { goto L_00236544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.budget -= 1;
L_00236530:
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236544u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00236544u) [[unlikely]] return; }
L_00236544:
    c.f[12] = ld32((c.r[18].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236554u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00236554u) [[unlikely]] return; }
L_00236554:
    set32(c.r[4], c.r[19].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236560u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00236560u) [[unlikely]] return; }
L_00236560:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);  goto L_00236590; }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[1]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002365C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x46800000u);
    c.budget -= 1;
L_00236590:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002365ACu);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002365ACu) [[unlikely]] return; }
L_002365AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002365B4u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002365B4u) [[unlikely]] return; }
L_002365B4:
    c.f[1] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 8u), c.f[0]);
    c.budget -= 3;
L_002365C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[19].w[0] + 320u);  if (t) { goto L_00236630; } }
    set32(c.r[3], 0u + 4u);
    st16((c.r[18].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0023660C; } }
    set32(c.r[3], 0u + 9u);
    st16((c.r[18].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
L_0023660C:
    set32(c.r[6], c.r[16].w[0] + 256u);
    c.budget -= 1;
L_00236610:
    ld128((c.r[6].w[0] - 32u) & ~15u, c.r[4]);
    ld128((c.r[6].w[0] - 16u) & ~15u, c.r[3]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st128((c.r[6].w[0]) & ~15u, c.r[4]);
    st128((c.r[6].w[0] + 16u) & ~15u, c.r[3]);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] - 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00236610u | kUnwind; return; } goto L_00236610; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00236630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00236668; } }
L_00236638:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 32608u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0023665Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0023665Cu) [[unlikely]] return; }
L_0023665C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
L_00236668:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00236638u | kUnwind; return; } goto L_00236638; } }
    set32(c.r[3], 0u + 1u);
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002366A0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[16], c.r[19].w[0] + 320u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00236700; } }
L_002366D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] + 32608u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002366F4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002366F4u) [[unlikely]] return; }
L_002366F4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 32u);
    c.budget -= 3;
L_00236700:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 14u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002366D0u | kUnwind; return; } goto L_002366D0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00236730; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00236734; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00236730:
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00236734:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00236750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00236760:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00236770:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 32736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29364u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[16], c.r[4].w[0] + 320u);
    set32(c.r[2], c.r[2].w[0] - 32752u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 72u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002367D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002367D8u) [[unlikely]] return; }
L_002367D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 11;
L_00236804:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0023690C; }
    c.r[6].d[0] = ld8((c.r[16].w[0] + 1u));
    c.r[3].d[0] = c.r[6].sd[0] < 121ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00236908; } }
    c.r[1].d[0] = c.r[6].sd[0] < 137ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00236908; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 641u)));
    c.r[1].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00236908; } }
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] + 32656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    c.f[1] = c.r[2].w[0];
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    st32((c.r[29].w[0] + 60u), c.r[6].w[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[2].w[0] - 121u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 2u);
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[29].w[0] + 76u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 2u);
    st16((c.r[29].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002368C4u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002368C4u) [[unlikely]] return; }
L_002368C4:
    st8((c.r[28].w[0] - 29362u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 29363u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 29364u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002368DCu); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x002368DCu) [[unlikely]] return; }
L_002368DC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236908u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00236908u) [[unlikely]] return; }
L_00236908:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0023690C:
    c.r[3].d[0] = c.r[17].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00236804u | kUnwind; return; } goto L_00236804; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00236930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[3], 0u + 121u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236970u); st32((c.r[5].w[0] + 4u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00236970u) [[unlikely]] return; }
L_00236970:
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002369ACu); st32((c.r[16].w[0] + 8u), c.f[0]);  if (depth < kMaxDepth) unit_004D(c, 272u, depth + 1u); else { c.pc = 0x002369C0u; return; } if (c.pc != 0x002369ACu) [[unlikely]] return; }
L_002369AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002369C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002369E8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002369E8:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.r[1].d[0] = c.r[3].sd[0] < 137ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00236A08; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00236A24; } }
L_00236A08:
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52428ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_00236A24:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00236A30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00236A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], ld32((c.r[5].w[0] + 260u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00236AD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_00236A88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00236ADC; } }
L_00236A88:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236A94u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00236A94u) [[unlikely]] return; }
L_00236A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00236AD8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 31u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 27536u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 30544u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 15;
L_00236AD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00236ADC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00236AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 30u);
    set32(c.r[4], ld32((c.r[4].w[0] + 260u)));
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00236B7C; } }
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236B34u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00236B34u) [[unlikely]] return; }
L_00236B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00236B7C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 31u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 27536u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[3], c.r[3].w[0] + 30544u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_00236B7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00236B90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 32560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00236BB0:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[30], c.r[4], c.r[0]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[30].w[0] + 320u);  if (t) { goto L_00236C68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236C08u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00236C08u) [[unlikely]] return; }
L_00236C08:
    set32(c.r[3], 0u + 18u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1600u)));
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00236C70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236C40u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00236C40u) [[unlikely]] return; }
L_00236C40:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], 0u + 12u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 10;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00236C6C; } }
L_00236C68:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00236C6C:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.budget -= 1;
L_00236C70:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2032u));
    st32((c.r[30].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2036u));
    st32((c.r[30].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 2040u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236C98u); st32((c.r[30].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00236C98u) [[unlikely]] return; }
L_00236C98:
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236CACu); st8((c.r[30].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00236CACu) [[unlikely]] return; }
L_00236CAC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00236CDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00236CDC; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236CDCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00236CDCu) [[unlikely]] return; }
L_00236CDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[20], c.r[2].w[0] - 32720u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[22], c.r[2].w[0] - 32640u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[16], c.r[0]);  if (t) { goto L_00236DC8; } }
L_00236D00:
    st32((c.r[18].w[0]), 0u);
    st32((c.r[18].w[0] + 4u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[19].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[30].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00236D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D24u); c.f[12] = ld32((c.r[20].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00236D24u) [[unlikely]] return; }
L_00236D24:
    set32(c.r[23], c.r[16].w[0] + c.r[23].w[0]);
    st8((c.r[23].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D34u); c.f[12] = ld32((c.r[20].w[0] + 4u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00236D34u) [[unlikely]] return; }
L_00236D34:
    st8((c.r[23].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[20].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D50u); c.f[12] = ld32((c.r[20].w[0] + 16u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00236D50u) [[unlikely]] return; }
L_00236D50:
    st16((c.r[21].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D5Cu); c.f[12] = ld32((c.r[20].w[0] + 20u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00236D5Cu) [[unlikely]] return; }
L_00236D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[21].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00236DA8; } }
L_00236D64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D6Cu); c.f[12] = ld32((c.r[22].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00236D6Cu) [[unlikely]] return; }
L_00236D6C:
    set32(c.r[23], c.r[16].w[0] + c.r[23].w[0]);
    st8((c.r[23].w[0] + 72u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D7Cu); c.f[12] = ld32((c.r[22].w[0] + 4u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00236D7Cu) [[unlikely]] return; }
L_00236D7C:
    st8((c.r[23].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[22].w[0] + 8u));
    st32((c.r[18].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[22].w[0] + 12u));
    st32((c.r[18].w[0] + 28u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236D98u); c.f[12] = ld32((c.r[22].w[0] + 16u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00236D98u) [[unlikely]] return; }
L_00236D98:
    st16((c.r[21].w[0] + 60u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236DA4u); c.f[12] = ld32((c.r[22].w[0] + 20u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00236DA4u) [[unlikely]] return; }
L_00236DA4:
    st16((c.r[21].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00236DA8:
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 8u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 24u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    set32(c.r[22], c.r[22].w[0] + 24u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 8;
L_00236DC8:
    c.r[23].d[0] = c.r[17].d[0] << 56;
    c.r[23].d[0] = static_cast<std::uint64_t>(c.r[23].sd[0] >> 56);
    c.r[2].d[0] = c.r[23].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00236D00u | kUnwind; return; } goto L_00236D00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236DE4u); mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 295u, depth + 1u); else { c.pc = 0x00236E20u; return; } if (c.pc != 0x00236DE4u) [[unlikely]] return; }
L_00236DE4:
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00236E20:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[16], c.r[22].w[0] + 320u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[16], c.r[0]);  if (t) { goto L_00236ED8; } }
L_00236E60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 66u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_00236ECC; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 32544u);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[3], c.r[7].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[21].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00236EA8u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00236EA8u) [[unlikely]] return; }
L_00236EA8:
    set32(c.r[2], c.r[16].w[0] + c.r[21].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 75u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00236EC8; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 4;
L_00236EC8:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00236ECC:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 3;
L_00236ED8:
    c.r[21].d[0] = c.r[18].d[0] << 56;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 56);
    c.r[2].d[0] = c.r[21].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00236E60u | kUnwind; return; } goto L_00236E60; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[22].w[0] + 164u)));
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st16((c.r[22].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00236F14; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[22].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[22].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00236F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236F1Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00236F1Cu) [[unlikely]] return; }
L_00236F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236F24u); set32(c.r[4], c.r[22].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00236F24u) [[unlikely]] return; }
L_00236F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00236F2Cu); set32(c.r[4], c.r[22].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00236F2Cu) [[unlikely]] return; }
L_00236F2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00236F40; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[22].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00236F40:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00236F70:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002370A0; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00236FAC; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00236FAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00236FF4; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_00237020; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00236FF4:
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 11;
L_00237020:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237058; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 10;
L_00237058:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E190000u);
    c.r[3].d[0] = c.r[3].d[0] | 39322ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_002370A0; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_002370A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002370B0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[8].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_002370DC; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002371F4; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.budget -= 1;
L_002370DC:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237100; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00237100:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237148; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_00237174; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00237148:
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 11;
L_00237174:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 110ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_002371AC; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 10;
L_002371AC:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_002371F4; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_002371F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00237200:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[8].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_0023722C; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00237344; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.budget -= 1;
L_0023722C:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237250; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00237250:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237298; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_002372C4; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00237298:
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 11;
L_002372C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 130ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_002372FC; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 10;
L_002372FC:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E550000u);
    c.r[3].d[0] = c.r[3].d[0] | 21845ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_00237344; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_00237344:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00237350:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00237480; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0023738C; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0023738C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_002373D4; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_00237400; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_002373D4:
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 11;
L_00237400:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237438; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 10;
L_00237438:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_00237480; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_00237480:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00237490:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 20u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[8].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_002374BC; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_002375D4; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.budget -= 1;
L_002374BC:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002374E0; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002374E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 41ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237528; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_00237554; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00237528:
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 11;
L_00237554:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 110ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_0023758C; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 10;
L_0023758C:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E220000u);
    c.r[3].d[0] = c.r[3].d[0] | 8738ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_002375D4; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_002375D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002375E0:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; c.r[8].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_0023760C; } }
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00237724; } }
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.budget -= 1;
L_0023760C:
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 60u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237630; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 75u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00237630:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 61ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237678; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 28u), c.f[0]);  if (t) { goto L_002376A4; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00237678:
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[6].w[0] + 24u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3B230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 24u), c.f[0]);
    c.f[0] = ld32((c.r[6].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[6].w[0] + 28u), c.f[0]);
    c.budget -= 11;
L_002376A4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 130ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_002376DC; } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[6].w[0] + 48u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD080000u);
    c.r[3].d[0] = c.r[3].d[0] | 34953ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 48u), c.f[0]);
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 10;
L_002376DC:
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = 0u;
    c.f[2] = ld32((c.r[5].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E1D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 56798ull;
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[1]);
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 16;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[6], c.r[5].w[0] + 4u);  if (t) { goto L_00237724; } }
    c.f[0] = c.f[2] ^ fp::kSign;
    st32((c.r[6].w[0]), c.f[0]);
    c.budget -= 2;
L_00237724:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00237730:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00237740:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00237750:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[29].w[0] + 64u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29360u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[18].w[0] + 320u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0023779Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0023779Cu) [[unlikely]] return; }
L_0023779C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002378E0; } }
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.budget -= 1;
L_002377D0:
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    set32(c.r[3], c.r[6].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 75u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[3], c.r[17].w[0] + 1u);  goto L_002378D4; }
    set32(c.r[2], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[1] = ld32((c.r[5].w[0]));
    set32(c.r[2], c.r[6].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[6], c.r[28].w[0] - 29360u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    st32((c.r[29].w[0] + 76u), c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 48u));
    c.f[1] = 0u;
    c.r[8].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = fp::max(c.f[1], c.f[0]);
    c.f[1] = c.r[8].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[0]);
    c.f[0] = fp::cvt_w_s(c.f[1]);
    set32(c.r[8], c.f[0]);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.f[0] = ld32((c.r[5].w[0] + 24u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[7], c.r[2].w[0] - 32416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 28u));
    set32(c.r[6], c.r[2].w[0] - 32512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 32320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 72u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 72u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 72u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 58;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002378CCu); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x002378CCu) [[unlikely]] return; }
L_002378CC:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_002378D4:
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 3;
L_002378E0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[3].d[0] = c.r[3].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002377D0u | kUnwind; return; } goto L_002377D0; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00237910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 3u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237938u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00237938u) [[unlikely]] return; }
L_00237938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002379A4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[5].d[0] = c.r[3].d[0] | 55050ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00230000u);
    set32(c.r[4], c.r[3].w[0] + 31168u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] - 31488u);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 25;
L_002379A4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002379C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 32064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00234000u < 16384u) { entry = entries_004D[(t - 0x00234000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002379E0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[19], c.r[2].w[0] - 32272u);
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    set32(c.r[16], c.r[23].w[0] + 320u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[20], c.r[16], c.r[0]);
    c.budget -= 23;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[21], c.r[16], c.r[0]);  if (t) { goto L_00237AB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00237A40:
    st32((c.r[18].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A4Cu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00237A4Cu) [[unlikely]] return; }
L_00237A4C:
    set32(c.r[22], c.r[16].w[0] + c.r[22].w[0]);
    st8((c.r[22].w[0] + 140u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A5Cu); c.f[12] = ld32((c.r[19].w[0] + 4u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00237A5Cu) [[unlikely]] return; }
L_00237A5C:
    st8((c.r[22].w[0] + 147u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[19].w[0] + 8u));
    st32((c.r[20].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 12u));
    st32((c.r[20].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    st32((c.r[18].w[0] + 56u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A80u); c.f[12] = ld32((c.r[19].w[0] + 20u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00237A80u) [[unlikely]] return; }
L_00237A80:
    st16((c.r[21].w[0] + 112u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237A8Cu); c.f[12] = ld32((c.r[19].w[0] + 24u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00237A8Cu) [[unlikely]] return; }
L_00237A8C:
    st16((c.r[21].w[0] + 126u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[19], c.r[19].w[0] + 28u);
    set32(c.r[20], c.r[20].w[0] + 8u);
    set32(c.r[21], c.r[21].w[0] + 2u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 9;
L_00237AB0:
    c.r[22].d[0] = c.r[17].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00237A40u | kUnwind; return; } goto L_00237A40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237ACCu); mmi::paddub(c.r[4], c.r[23], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 323u, depth + 1u); else { c.pc = 0x00237B00u; return; } if (c.pc != 0x00237ACCu) [[unlikely]] return; }
L_00237ACC:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00237B00:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    set32(c.r[16], c.r[23].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[21], c.r[2].w[0] - 32048u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[16], c.r[0]);  if (t) { goto L_00237BA8; } }
L_00237B4C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 126u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] + 1u);  if (t) { goto L_00237B94; } }
    set32(c.r[2], ld32((c.r[21].w[0])));
    mmi::paddub(c.r[4], c.r[23], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00237B74u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00237B74u) [[unlikely]] return; }
L_00237B74:
    set32(c.r[2], c.r[16].w[0] + c.r[22].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 147u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00237B90; } }
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[19].d[0] = c.r[2].d[0] << 56;
    c.r[19].d[0] = static_cast<std::uint64_t>(c.r[19].sd[0] >> 56);
    c.budget -= 3;
L_00237B90:
    set32(c.r[2], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00237B94:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    set32(c.r[20], c.r[20].w[0] + 2u);
    set32(c.r[21], c.r[21].w[0] + 4u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    c.budget -= 5;
L_00237BA8:
    c.r[22].d[0] = c.r[18].d[0] << 56;
    c.r[22].d[0] = static_cast<std::uint64_t>(c.r[22].sd[0] >> 56);
    c.r[2].d[0] = c.r[22].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00237B4Cu | kUnwind; return; } goto L_00237B4C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[23].w[0] + 164u)));
    c.r[3].d[0] = c.r[19].d[0] << 56;
    set32(c.r[2], 0u + 7u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st16((c.r[23].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00237BE4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[23].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[23].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00237BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BECu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00237BECu) [[unlikely]] return; }
L_00237BEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BF4u); set32(c.r[4], c.r[23].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00237BF4u) [[unlikely]] return; }
L_00237BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00237BFCu); set32(c.r[4], c.r[23].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00237BFCu) [[unlikely]] return; }
L_00237BFC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00237C1C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00237C20; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00237C1C:
    st8((c.r[23].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00237C20:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00237C50:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00237D98; } }
    c.r[7].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    c.r[7].d[0] = static_cast<std::uint64_t>(c.r[7].sd[0] >> 48);
    c.r[1].d[0] = c.r[6].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237C8C; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 147u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00237C8C:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_00237CE0; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E0F0000u);
    c.r[6].d[0] = c.r[6].d[0] | 23593ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 39322ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00237D64; } }
    c.r[1].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 1;
L_00237CE0:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 3);  if (t) { goto L_00237D2C; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D920000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D2F0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 35575ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00237D64; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    c.budget -= 1;
L_00237D2C:
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBDF10000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 24342ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_00237D64:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[4].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00237D98; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.budget -= 9;
L_00237D98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00237DA0:
    c.r[3].d[0] = c.r[6].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[6], c.r[3].w[0] << 1);
    set32(c.r[7], c.r[6].w[0] + c.r[5].w[0]);
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 126u)));
    c.budget -= 8;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00237DD0; } }
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00237EF4; } }
L_00237DD0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 112u)));
    c.r[1].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237DE8; } }
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    st8((c.r[6].w[0] + 147u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00237DE8:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[6].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[6].sd[0] < 18ll ? 1ull : 0ull;  if (t) { goto L_00237E3C; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3E0F0000u);
    c.r[6].d[0] = c.r[6].d[0] | 23593ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 39322ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00237EC0; } }
    c.r[1].d[0] = c.r[6].sd[0] < 18ll ? 1ull : 0ull;
    c.budget -= 1;
L_00237E3C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[3].w[0] << 3);  if (t) { goto L_00237E88; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D920000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3C6A0000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 3730ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_00237EC0; } }
    set32(c.r[6], c.r[3].w[0] << 3);
    c.budget -= 1;
L_00237E88:
    set32(c.r[7], c.r[5].w[0] + c.r[6].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3D120000u);
    c.r[6].d[0] = c.r[6].d[0] | 18725ull;
    c.f[0] = c.r[6].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0xBDA80000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[6].d[0] = c.r[6].d[0] | 14979ull;
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.f[0] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    c.budget -= 14;
L_00237EC0:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[4].sd[0] < 36ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00237EF4; } }
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 84u), c.f[0]);
    c.budget -= 9;
L_00237EF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00237F00:
    c.r[8].d[0] = c.r[6].d[0] << 56;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 56);
    set32(c.r[3], c.r[8].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 126u)));
    c.budget -= 8;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_00237F30; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { [[clang::musttail]] return unit_004E(c, 2u, depth); } }
L_00237F30:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 112u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00237F48; } }
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st8((c.r[3].w[0] + 147u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00237F48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], c.r[8].w[0] << 3);  if (t) { goto L_00237F9C; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D6A0000u);
    c.r[3].d[0] = c.r[3].d[0] | 3746ull;
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3E920000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.r[3].d[0] = c.r[3].d[0] | 18725ull;
    st32((c.r[6].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 4u));
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 4u), c.f[0]);  if (t) { goto L_00237FDC; } }
    set32(c.r[3], c.r[8].w[0] << 3);
    c.budget -= 1;
L_00237F9C:
    set32(c.r[7], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CC60000u);
    c.r[3].d[0] = c.r[3].d[0] | 38924ull;
    c.f[0] = c.r[3].w[0];
    set32(c.r[3], c.r[8].w[0] << 2);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBE590000u);
    st32((c.r[7].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[6].w[0] + 56u));
    c.r[3].d[0] = c.r[3].d[0] | 13902ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[6].w[0] + 56u), c.f[0]);
    c.budget -= 16;
L_00237FDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_004E(c, 2u, depth); } }
    set32(c.r[3], c.r[8].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[5].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 84u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD1D0000u);
    c.r[3].d[0] = c.r[3].d[0] | 35289ull;
    c.budget -= 5;
    [[clang::musttail]] return unit_004E(c, 1u, depth);
}

}
