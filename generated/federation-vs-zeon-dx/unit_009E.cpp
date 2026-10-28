#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0,
    44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 0,
    59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0,
    0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0,
    0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174,
    0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0,
    0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319,
    0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0,
    0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0,
    0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376,
    0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    429, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 435, 0, 436, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0,
};

void unit_009E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00378000;
    case 2u: goto L_00378020;
    case 3u: goto L_0037802C;
    case 4u: goto L_00378034;
    case 5u: goto L_0037808C;
    case 6u: goto L_00378094;
    case 7u: goto L_003780C8;
    case 8u: goto L_003780CC;
    case 9u: goto L_003780D0;
    case 10u: goto L_003780F0;
    case 11u: goto L_00378120;
    case 12u: goto L_00378140;
    case 13u: goto L_0037817C;
    case 14u: goto L_0037819C;
    case 15u: goto L_00378200;
    case 16u: goto L_00378214;
    case 17u: goto L_003782AC;
    case 18u: goto L_003782D0;
    case 19u: goto L_00378310;
    case 20u: goto L_00378350;
    case 21u: goto L_00378370;
    case 22u: goto L_00378390;
    case 23u: goto L_003783A0;
    case 24u: goto L_003783B0;
    case 25u: goto L_003783C0;
    case 26u: goto L_003783D0;
    case 27u: goto L_003783E0;
    case 28u: goto L_003783F0;
    case 29u: goto L_00378400;
    case 30u: goto L_00378410;
    case 31u: goto L_00378420;
    case 32u: goto L_00378430;
    case 33u: goto L_00378450;
    case 34u: goto L_0037845C;
    case 35u: goto L_00378490;
    case 36u: goto L_003784C0;
    case 37u: goto L_003784CC;
    case 38u: goto L_00378520;
    case 39u: goto L_00378534;
    case 40u: goto L_00378560;
    case 41u: goto L_00378568;
    case 42u: goto L_00378570;
    case 43u: goto L_00378578;
    case 44u: goto L_00378580;
    case 45u: goto L_00378588;
    case 46u: goto L_00378590;
    case 47u: goto L_00378598;
    case 48u: goto L_003785A0;
    case 49u: goto L_003785A8;
    case 50u: goto L_003785B0;
    case 51u: goto L_003785B8;
    case 52u: goto L_003785C0;
    case 53u: goto L_003785C8;
    case 54u: goto L_003785D0;
    case 55u: goto L_003785D8;
    case 56u: goto L_003785E0;
    case 57u: goto L_003785E8;
    case 58u: goto L_003785F0;
    case 59u: goto L_00378600;
    case 60u: goto L_00378614;
    case 61u: goto L_00378660;
    case 62u: goto L_00378690;
    case 63u: goto L_003786D4;
    case 64u: goto L_003786EC;
    case 65u: goto L_00378720;
    case 66u: goto L_00378730;
    case 67u: goto L_003788B0;
    case 68u: goto L_003788FC;
    case 69u: goto L_003789CC;
    case 70u: goto L_003789E0;
    case 71u: goto L_00378A10;
    case 72u: goto L_00378A64;
    case 73u: goto L_00378AA0;
    case 74u: goto L_00378AC4;
    case 75u: goto L_00378B18;
    case 76u: goto L_00378B20;
    case 77u: goto L_00378B30;
    case 78u: goto L_00378B48;
    case 79u: goto L_00378B60;
    case 80u: goto L_00378B78;
    case 81u: goto L_00378B90;
    case 82u: goto L_00378BD0;
    case 83u: goto L_00378BE4;
    case 84u: goto L_00378BF8;
    case 85u: goto L_00378C0C;
    case 86u: goto L_00378C18;
    case 87u: goto L_00378C24;
    case 88u: goto L_00378C50;
    case 89u: goto L_00378C78;
    case 90u: goto L_00378CA0;
    case 91u: goto L_00378CC0;
    case 92u: goto L_00378E44;
    case 93u: goto L_00378EBC;
    case 94u: goto L_00378EE4;
    case 95u: goto L_00378F00;
    case 96u: goto L_00378F10;
    case 97u: goto L_00378F18;
    case 98u: goto L_00378F30;
    case 99u: goto L_00378F54;
    case 100u: goto L_00378F80;
    case 101u: goto L_00379020;
    case 102u: goto L_0037904C;
    case 103u: goto L_003790CC;
    case 104u: goto L_003790F0;
    case 105u: goto L_00379134;
    case 106u: goto L_0037913C;
    case 107u: goto L_00379158;
    case 108u: goto L_00379164;
    case 109u: goto L_00379184;
    case 110u: goto L_003791C0;
    case 111u: goto L_003791CC;
    case 112u: goto L_003791F0;
    case 113u: goto L_00379218;
    case 114u: goto L_00379224;
    case 115u: goto L_003792EC;
    case 116u: goto L_00379300;
    case 117u: goto L_00379334;
    case 118u: goto L_0037935C;
    case 119u: goto L_003793B0;
    case 120u: goto L_003793C4;
    case 121u: goto L_00379434;
    case 122u: goto L_00379448;
    case 123u: goto L_0037945C;
    case 124u: goto L_00379470;
    case 125u: goto L_00379484;
    case 126u: goto L_00379498;
    case 127u: goto L_003794AC;
    case 128u: goto L_00379510;
    case 129u: goto L_003795E0;
    case 130u: goto L_00379660;
    case 131u: goto L_00379670;
    case 132u: goto L_00379678;
    case 133u: goto L_0037968C;
    case 134u: goto L_0037969C;
    case 135u: goto L_003796AC;
    case 136u: goto L_003796BC;
    case 137u: goto L_003796C8;
    case 138u: goto L_003796D8;
    case 139u: goto L_003796E8;
    case 140u: goto L_003796F4;
    case 141u: goto L_00379704;
    case 142u: goto L_00379720;
    case 143u: goto L_0037972C;
    case 144u: goto L_0037974C;
    case 145u: goto L_0037976C;
    case 146u: goto L_00379788;
    case 147u: goto L_00379794;
    case 148u: goto L_003797B4;
    case 149u: goto L_003797C8;
    case 150u: goto L_003797D8;
    case 151u: goto L_003797E4;
    case 152u: goto L_003797F4;
    case 153u: goto L_00379804;
    case 154u: goto L_00379810;
    case 155u: goto L_00379820;
    case 156u: goto L_00379830;
    case 157u: goto L_0037983C;
    case 158u: goto L_0037984C;
    case 159u: goto L_00379864;
    case 160u: goto L_0037987C;
    case 161u: goto L_00379894;
    case 162u: goto L_003798C4;
    case 163u: goto L_003798CC;
    case 164u: goto L_003798D8;
    case 165u: goto L_003798F0;
    case 166u: goto L_003799FC;
    case 167u: goto L_00379A0C;
    case 168u: goto L_00379A1C;
    case 169u: goto L_00379A2C;
    case 170u: goto L_00379A3C;
    case 171u: goto L_00379A4C;
    case 172u: goto L_00379A5C;
    case 173u: goto L_00379A6C;
    case 174u: goto L_00379A7C;
    case 175u: goto L_00379A8C;
    case 176u: goto L_00379A9C;
    case 177u: goto L_00379AB0;
    case 178u: goto L_00379AC0;
    case 179u: goto L_00379AD0;
    case 180u: goto L_00379AE4;
    case 181u: goto L_00379AF4;
    case 182u: goto L_00379B04;
    case 183u: goto L_00379B14;
    case 184u: goto L_00379B4C;
    case 185u: goto L_00379B80;
    case 186u: goto L_00379B98;
    case 187u: goto L_00379BAC;
    case 188u: goto L_00379BD0;
    case 189u: goto L_00379C04;
    case 190u: goto L_00379C2C;
    case 191u: goto L_00379C70;
    case 192u: goto L_00379C90;
    case 193u: goto L_00379CB4;
    case 194u: goto L_00379CBC;
    case 195u: goto L_00379CC4;
    case 196u: goto L_00379E0C;
    case 197u: goto L_00379E1C;
    case 198u: goto L_00379E2C;
    case 199u: goto L_00379E3C;
    case 200u: goto L_00379E4C;
    case 201u: goto L_00379E5C;
    case 202u: goto L_00379E6C;
    case 203u: goto L_00379E7C;
    case 204u: goto L_00379E8C;
    case 205u: goto L_00379E9C;
    case 206u: goto L_00379EAC;
    case 207u: goto L_00379EBC;
    case 208u: goto L_00379ECC;
    case 209u: goto L_00379EDC;
    case 210u: goto L_00379EEC;
    case 211u: goto L_00379EFC;
    case 212u: goto L_00379F0C;
    case 213u: goto L_00379F1C;
    case 214u: goto L_00379F2C;
    case 215u: goto L_00379F3C;
    case 216u: goto L_00379F4C;
    case 217u: goto L_00379F5C;
    case 218u: goto L_00379F6C;
    case 219u: goto L_00379FA0;
    case 220u: goto L_00379FB4;
    case 221u: goto L_00379FD0;
    case 222u: goto L_00379FE0;
    case 223u: goto L_00379FF0;
    case 224u: goto L_0037A000;
    case 225u: goto L_0037A010;
    case 226u: goto L_0037A040;
    case 227u: goto L_0037A050;
    case 228u: goto L_0037A070;
    case 229u: goto L_0037A080;
    case 230u: goto L_0037A0A0;
    case 231u: goto L_0037A0C0;
    case 232u: goto L_0037A0E0;
    case 233u: goto L_0037A0F0;
    case 234u: goto L_0037A160;
    case 235u: goto L_0037A190;
    case 236u: goto L_0037A1D0;
    case 237u: goto L_0037A1F4;
    case 238u: goto L_0037A214;
    case 239u: goto L_0037A310;
    case 240u: goto L_0037A340;
    case 241u: goto L_0037A34C;
    case 242u: goto L_0037A38C;
    case 243u: goto L_0037A39C;
    case 244u: goto L_0037A3A8;
    case 245u: goto L_0037A3B0;
    case 246u: goto L_0037A3D0;
    case 247u: goto L_0037A428;
    case 248u: goto L_0037A43C;
    case 249u: goto L_0037A4C0;
    case 250u: goto L_0037A4DC;
    case 251u: goto L_0037A510;
    case 252u: goto L_0037A53C;
    case 253u: goto L_0037A560;
    case 254u: goto L_0037A594;
    case 255u: goto L_0037A5B8;
    case 256u: goto L_0037A648;
    case 257u: goto L_0037A658;
    case 258u: goto L_0037A664;
    case 259u: goto L_0037A67C;
    case 260u: goto L_0037A6D4;
    case 261u: goto L_0037A708;
    case 262u: goto L_0037A72C;
    case 263u: goto L_0037A73C;
    case 264u: goto L_0037A780;
    case 265u: goto L_0037A78C;
    case 266u: goto L_0037A7F0;
    case 267u: goto L_0037A818;
    case 268u: goto L_0037A854;
    case 269u: goto L_0037A860;
    case 270u: goto L_0037A874;
    case 271u: goto L_0037A888;
    case 272u: goto L_0037A8F4;
    case 273u: goto L_0037A910;
    case 274u: goto L_0037A918;
    case 275u: goto L_0037A9B0;
    case 276u: goto L_0037A9C8;
    case 277u: goto L_0037A9DC;
    case 278u: goto L_0037A9F0;
    case 279u: goto L_0037AA08;
    case 280u: goto L_0037AA30;
    case 281u: goto L_0037AA40;
    case 282u: goto L_0037AAE8;
    case 283u: goto L_0037AAF0;
    case 284u: goto L_0037AAF8;
    case 285u: goto L_0037AB10;
    case 286u: goto L_0037AB20;
    case 287u: goto L_0037AB5C;
    case 288u: goto L_0037AB70;
    case 289u: goto L_0037AB94;
    case 290u: goto L_0037ABA4;
    case 291u: goto L_0037ABB4;
    case 292u: goto L_0037ABC8;
    case 293u: goto L_0037ABD0;
    case 294u: goto L_0037ABD8;
    case 295u: goto L_0037ABE0;
    case 296u: goto L_0037ABF0;
    case 297u: goto L_0037AC14;
    case 298u: goto L_0037AC24;
    case 299u: goto L_0037AC2C;
    case 300u: goto L_0037AC34;
    case 301u: goto L_0037AC3C;
    case 302u: goto L_0037AC50;
    case 303u: goto L_0037AC74;
    case 304u: goto L_0037AC94;
    case 305u: goto L_0037AC9C;
    case 306u: goto L_0037ACA4;
    case 307u: goto L_0037ACB8;
    case 308u: goto L_0037ACD0;
    case 309u: goto L_0037ACD8;
    case 310u: goto L_0037ACE0;
    case 311u: goto L_0037ACF0;
    case 312u: goto L_0037AD14;
    case 313u: goto L_0037AD24;
    case 314u: goto L_0037AD2C;
    case 315u: goto L_0037AD4C;
    case 316u: goto L_0037AD54;
    case 317u: goto L_0037AD5C;
    case 318u: goto L_0037AD74;
    case 319u: goto L_0037AD7C;
    case 320u: goto L_0037AD84;
    case 321u: goto L_0037AD90;
    case 322u: goto L_0037ADA0;
    case 323u: goto L_0037ADBC;
    case 324u: goto L_0037AE14;
    case 325u: goto L_0037AE40;
    case 326u: goto L_0037AE5C;
    case 327u: goto L_0037AE68;
    case 328u: goto L_0037AE90;
    case 329u: goto L_0037AEC0;
    case 330u: goto L_0037AEC8;
    case 331u: goto L_0037AEF4;
    case 332u: goto L_0037AF10;
    case 333u: goto L_0037AF5C;
    case 334u: goto L_0037AF70;
    case 335u: goto L_0037AF84;
    case 336u: goto L_0037AF90;
    case 337u: goto L_0037AFA4;
    case 338u: goto L_0037AFB0;
    case 339u: goto L_0037B000;
    case 340u: goto L_0037B014;
    case 341u: goto L_0037B028;
    case 342u: goto L_0037B038;
    case 343u: goto L_0037B04C;
    case 344u: goto L_0037B05C;
    case 345u: goto L_0037B080;
    case 346u: goto L_0037B0B0;
    case 347u: goto L_0037B0CC;
    case 348u: goto L_0037B0F4;
    case 349u: goto L_0037B10C;
    case 350u: goto L_0037B134;
    case 351u: goto L_0037B150;
    case 352u: goto L_0037B170;
    case 353u: goto L_0037B194;
    case 354u: goto L_0037B1A4;
    case 355u: goto L_0037B1B0;
    case 356u: goto L_0037B1D0;
    case 357u: goto L_0037B1E4;
    case 358u: goto L_0037B1F4;
    case 359u: goto L_0037B204;
    case 360u: goto L_0037B214;
    case 361u: goto L_0037B220;
    case 362u: goto L_0037B240;
    case 363u: goto L_0037B254;
    case 364u: goto L_0037B264;
    case 365u: goto L_0037B274;
    case 366u: goto L_0037B284;
    case 367u: goto L_0037B290;
    case 368u: goto L_0037B2F4;
    case 369u: goto L_0037B300;
    case 370u: goto L_0037B324;
    case 371u: goto L_0037B330;
    case 372u: goto L_0037B350;
    case 373u: goto L_0037B398;
    case 374u: goto L_0037B3C4;
    case 375u: goto L_0037B3DC;
    case 376u: goto L_0037B3FC;
    case 377u: goto L_0037B420;
    case 378u: goto L_0037B450;
    case 379u: goto L_0037B470;
    case 380u: goto L_0037B480;
    case 381u: goto L_0037B490;
    case 382u: goto L_0037B4BC;
    case 383u: goto L_0037B4C4;
    case 384u: goto L_0037B500;
    case 385u: goto L_0037B50C;
    case 386u: goto L_0037B51C;
    case 387u: goto L_0037B570;
    case 388u: goto L_0037B5E0;
    case 389u: goto L_0037B604;
    case 390u: goto L_0037B62C;
    case 391u: goto L_0037B674;
    case 392u: goto L_0037B764;
    case 393u: goto L_0037B794;
    case 394u: goto L_0037B7B0;
    case 395u: goto L_0037B7D4;
    case 396u: goto L_0037B7DC;
    case 397u: goto L_0037B7E4;
    case 398u: goto L_0037B820;
    case 399u: goto L_0037B838;
    case 400u: goto L_0037B85C;
    case 401u: goto L_0037B88C;
    case 402u: goto L_0037B8C8;
    case 403u: goto L_0037B9BC;
    case 404u: goto L_0037B9EC;
    case 405u: goto L_0037BA00;
    case 406u: goto L_0037BADC;
    case 407u: goto L_0037BAE8;
    case 408u: goto L_0037BB8C;
    case 409u: goto L_0037BBD0;
    case 410u: goto L_0037BBE4;
    case 411u: goto L_0037BC20;
    case 412u: goto L_0037BC40;
    case 413u: goto L_0037BC60;
    case 414u: goto L_0037BCB8;
    case 415u: goto L_0037BCE0;
    case 416u: goto L_0037BD00;
    case 417u: goto L_0037BD14;
    case 418u: goto L_0037BD40;
    case 419u: goto L_0037BD6C;
    case 420u: goto L_0037BD90;
    case 421u: goto L_0037BDC8;
    case 422u: goto L_0037BDD8;
    case 423u: goto L_0037BDF4;
    case 424u: goto L_0037BE10;
    case 425u: goto L_0037BE30;
    case 426u: goto L_0037BE40;
    case 427u: goto L_0037BE50;
    case 428u: goto L_0037BE60;
    case 429u: goto L_0037BE80;
    case 430u: goto L_0037BE90;
    case 431u: goto L_0037BEA0;
    case 432u: goto L_0037BEB0;
    case 433u: goto L_0037BED4;
    case 434u: goto L_0037BEE4;
    case 435u: goto L_0037BEEC;
    case 436u: goto L_0037BEF4;
    case 437u: goto L_0037BEFC;
    case 438u: goto L_0037BF1C;
    case 439u: goto L_0037BF24;
    case 440u: goto L_0037BF2C;
    case 441u: goto L_0037BF34;
    case 442u: goto L_0037BF3C;
    case 443u: goto L_0037BF50;
    case 444u: goto L_0037BF60;
    case 445u: goto L_0037BF68;
    case 446u: goto L_0037BF78;
    case 447u: goto L_0037BFA8;
    case 448u: goto L_0037BFB8;
    case 449u: goto L_0037BFC8;
    case 450u: goto L_0037BFE4;
    default: bad_entry(c, 0x00378000u); return;
    }
L_00378000:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00378024; } }
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00378020:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00378024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037802Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0037802Cu) [[unlikely]] return; }
L_0037802C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003780CC; } }
L_00378034:
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    c.r[2].d[0] = c.r[18].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00378054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00378080; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00378054:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[20].w[0]));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_00378084; } }
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00378080:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_00378084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037808Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0037808Cu) [[unlikely]] return; }
L_0037808C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003780CC; } }
L_00378094:
    c.r[2].d[0] = ld8((c.r[20].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003780B8; }
    c.r[2].d[0] = c.r[18].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003780BC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003780B8:
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_003780BC:
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003780C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003780C8u) [[unlikely]] return; }
L_003780C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003780CC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003780D0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_003780F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], 0u + 8192u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378120u); mmi::paddub(c.r[19], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00378120u) [[unlikely]] return; }
L_00378120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00378138; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24852u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003781BC; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00378138:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378140u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00378140u) [[unlikely]] return; }
L_00378140:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378154; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24852u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00378220; } }
L_00378154:
    c.r[2].d[0] = ld16((c.r[28].w[0] - 24852u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_00378174; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 24852u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003782B0; } }
    set32(c.r[4], 0u + 8192u);
    c.budget -= 1;
L_00378174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037817Cu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x0037817Cu) [[unlikely]] return; }
L_0037817C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_00378194; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24852u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_003781BC; } }
    set32(c.r[4], 0u + 4096u);
    c.budget -= 1;
L_00378194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037819Cu);  if (depth < kMaxDepth) unit_009E(c, 21u, depth + 1u); else { c.pc = 0x00378370u; return; } if (c.pc != 0x0037819Cu) [[unlikely]] return; }
L_0037819C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003781B4; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 24852u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00378220; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003781B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_003782B4; } }
L_003781BC:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[5], 0u + 43u);  if (t) { goto L_0037820C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_003781EC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00378214; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_003781EC:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 43u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378200u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00378200u) [[unlikely]] return; }
L_00378200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00378218; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_0037820C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378214u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00378214u) [[unlikely]] return; }
L_00378214:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00378218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003782B0; } }
L_00378220:
    c.r[2].d[0] = c.r[19].d[0] & 255ull;
    set32(c.r[5], c.r[2].w[0] - 1u);
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[1].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00378278; } }
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0037826C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003782B0; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037826C:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_003782A0; } }
L_00378278:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_003782A4; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003782B0; } }
L_003782A0:
    set32(c.r[5], 0u + 43u);
    c.budget -= 1;
L_003782A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003782ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003782ACu) [[unlikely]] return; }
L_003782AC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003782B0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003782B4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_003782D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 9436u));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003782F8; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 40u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00378304; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003782F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378304; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00378304:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 9436u));
    c.r[2].d[0] = c.r[2].d[0] & 64ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00378338; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00378344; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00378338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378344; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00378344:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378350:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 9436u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00378370:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 9440u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_00378390:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00196B40u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 259u, depth); }
L_003783A0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00196B50u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 260u, depth); }
L_003783B0:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197090u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 284u, depth); }
L_003783C0:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197090u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 284u, depth); }
L_003783D0:
    c.r[5].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 3;
    { set32(c.r[4], 0u + 2u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00197030u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 283u, depth); }
L_003783E0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00196A70u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 255u, depth); }
L_003783F0:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001972F0u | kUnwind; return; } [[clang::musttail]] return unit_0025(c, 295u, depth); }
L_00378400:
    c.budget -= 2;
    { mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EDB0u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 205u, depth); }
L_00378410:
    c.budget -= 2;
    { set32(c.r[6], 0u + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034EDB0u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 205u, depth); }
L_00378420:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0034ED90u | kUnwind; return; } [[clang::musttail]] return unit_0093(c, 204u, depth); }
L_00378430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EEE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 61167ull;
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 6212u)));
    c.budget -= 8;
    { c.f[13] = fp::mul(c.f[0], c.f[13]);  [[clang::musttail]] return unit_00A6(c, 147u, depth); }
L_00378450:
    c.r[5].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00378478; } }
L_0037845C:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 32u);  goto L_00378474; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00378488; } }
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 1;
L_00378474:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00378478:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037845Cu | kUnwind; return; } goto L_0037845C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00378488:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[18].d[0] = c.r[5].d[0] & 255ull;
    c.budget -= 11;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_003784E8; } }
    set32(c.r[6], 0u + 8u);
    c.budget -= 1;
L_003784C0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003784CCu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x003784CCu) [[unlikely]] return; }
L_003784CC:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 32u);  goto L_003784E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_003784F8; } }
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_003784E0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_003784E8:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003784C0u | kUnwind; return; } goto L_003784C0; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_003784F8:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00378520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378534u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00378534u) [[unlikely]] return; }
L_00378534:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003785F0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 21120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00378560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378568u); set32(c.r[4], 0u + 280u);  if (depth < kMaxDepth) unit_001F(c, 256u, depth + 1u); else { c.pc = 0x0017F530u; return; } if (c.pc != 0x00378568u) [[unlikely]] return; }
L_00378568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378570u);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x00378570u) [[unlikely]] return; }
L_00378570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378578u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x00378578u) [[unlikely]] return; }
L_00378578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003785F4; } }
L_00378580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378588u); set32(c.r[4], 0u + 281u);  if (depth < kMaxDepth) unit_001F(c, 256u, depth + 1u); else { c.pc = 0x0017F530u; return; } if (c.pc != 0x00378588u) [[unlikely]] return; }
L_00378588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378590u);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x00378590u) [[unlikely]] return; }
L_00378590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378598u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x00378598u) [[unlikely]] return; }
L_00378598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003785F0; } }
L_003785A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785A8u); set32(c.r[4], 0u + 282u);  if (depth < kMaxDepth) unit_001F(c, 256u, depth + 1u); else { c.pc = 0x0017F530u; return; } if (c.pc != 0x003785A8u) [[unlikely]] return; }
L_003785A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785B0u);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x003785B0u) [[unlikely]] return; }
L_003785B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785B8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x003785B8u) [[unlikely]] return; }
L_003785B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003785F0; } }
L_003785C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785C8u); set32(c.r[4], 0u + 283u);  if (depth < kMaxDepth) unit_001F(c, 256u, depth + 1u); else { c.pc = 0x0017F530u; return; } if (c.pc != 0x003785C8u) [[unlikely]] return; }
L_003785C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785D0u);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x003785D0u) [[unlikely]] return; }
L_003785D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x003785D8u) [[unlikely]] return; }
L_003785D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003785F0; } }
L_003785E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785E8u);  if (depth < kMaxDepth) unit_0017(c, 181u, depth + 1u); else { c.pc = 0x0015D730u; return; } if (c.pc != 0x003785E8u) [[unlikely]] return; }
L_003785E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003785F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x003785F0u) [[unlikely]] return; }
L_003785F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003785F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378600:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 8112u), c.r[4].w[0]);  if (t) { goto L_00378630; } }
L_00378614:
    set32(c.r[2], ld32((c.r[4].w[0] + 8112u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[6], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 8112u), c.r[2].w[0]);
    c.budget -= 7;
L_00378630:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 8120u)));
    c.r[2].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00378614u | kUnwind; return; } goto L_00378614; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 8124u)));
    c.r[2].d[0] = c.r[2].d[0] ^ c.r[6].d[0];
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;  c.pc = t; return; }
L_00378660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25320u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037867C; } }
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));
    st32((c.r[1].w[0] + 31044u), c.r[3].w[0]);
    c.budget -= 4;
L_0037867C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00378690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003786C4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 9392u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003786CC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003786C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00378710; } }
L_003786CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786D4u);  if (depth < kMaxDepth) unit_009E(c, 221u, depth + 1u); else { c.pc = 0x00379FD0u; return; } if (c.pc != 0x003786D4u) [[unlikely]] return; }
L_003786D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003786E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037870C; } }
L_003786E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003786ECu);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x003786ECu) [[unlikely]] return; }
L_003786EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003786FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037870C; } }
L_003786FC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25310u));
    c.r[2].d[0] = c.r[2].d[0] ^ 76ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
L_0037870C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00378710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00378720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378730u); set32(c.r[4], 0u + 256u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00378730u) [[unlikely]] return; }
L_00378730:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378748; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037889C; } }
L_00378748:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25310u));
    c.r[2].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00378798; } }
    c.r[2].d[0] = c.r[3].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 83ll ? 1ull : 0ull;  if (t) { goto L_00378774; } }
    c.r[1].d[0] = c.r[3].sd[0] < 73ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00378794; } }
    c.r[2].d[0] = c.r[3].sd[0] < 83ll ? 1ull : 0ull;
    c.budget -= 1;
L_00378774:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 140ll ? 1ull : 0ull;  if (t) { goto L_0037878C; } }
    c.r[1].d[0] = c.r[3].sd[0] < 135ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00378794; } }
    c.r[2].d[0] = c.r[3].sd[0] < 140ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037878C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 139u);  if (t) { goto L_003787A4; } }
L_00378794:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00378798:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003788A0; } }
    set32(c.r[2], 0u + 139u);
    c.budget -= 1;
L_003787A4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00378890; } }
    set32(c.r[2], 0u + 138u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 136u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 82u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 81u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 80u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 79u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 77u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 57u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 53u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 49u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 43u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    set32(c.r[2], 0u + 41u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037888C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037889C; } }
L_0037888C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00378890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037889C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037889C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003788A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003788B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + 31040u);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    st32((c.r[28].w[0] - 24824u), c.r[2].w[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[6], 0u + 132u);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[16], c.r[8], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003788FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003788FCu) [[unlikely]] return; }
L_003788FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 15u);
    st8((c.r[2].w[0] + 108u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 120u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 122u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld16((c.r[1].w[0] - 9440u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[1].d[0] = c.r[17].sd[0] < 128ll ? 1ull : 0ull;
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 25312u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 83u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 104u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 26;
    { const bool t = c.r[1].d[0] != 0ull; st32((c.r[2].w[0] + 8u), c.r[16].w[0]);  if (t) { goto L_00378968; } }
    set32(c.r[17], 0u + 127u);
    c.budget -= 1;
L_00378968:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], 0u + 38u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    st8((c.r[4].w[0] + 113u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], c.r[2].w[0] + 30400u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[6], 0u + 128u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st32((c.r[2].w[0] + 12u), c.r[20].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 16u), c.r[19].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 96u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 100u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 20u), c.r[18].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003789CCu); st8((c.r[2].w[0] + 125u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003789CCu) [[unlikely]] return; }
L_003789CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30272u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003789E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003789E0u) [[unlikely]] return; }
L_003789E0:
    c.r[2].d[0] = c.r[16].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378AD4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 185u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378A50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 9264u);
    set32(c.r[4], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378A10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x00378A10u) [[unlikely]] return; }
L_00378A10:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], c.r[20].w[0] + 140u);
    c.f[1] = c.r[5].w[0];
    set32(c.r[4], c.r[19].w[0] + 60u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = c.r[4].w[0];
    st32((c.r[3].w[0] + 12u), c.r[5].w[0]);
    st32((c.r[2].w[0] + 32u), c.f[1]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[3].w[0] + 16u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 40u), 0u);  if (t) { goto L_00378AD4; } }
L_00378A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 9264u);
    set32(c.r[5], 0u + 40u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378A64u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00378A64u) [[unlikely]] return; }
L_00378A64:
    c.f[0] = c.r[20].w[0];
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.f[1] = fp::cvt_s_w(c.f[0]);
    set32(c.r[3], c.r[19].w[0] + 62u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    st32((c.r[2].w[0] + 28u), c.r[6].w[0]);
    c.f[0] = c.r[3].w[0];
    st32((c.r[2].w[0] + 32u), c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[2].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[1].w[0] + 32664u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378AA0u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00378AA0u) [[unlikely]] return; }
L_00378AA0:
    set32(c.r[3], c.r[19].w[0] + 60u);
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.f[0] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    st32((c.r[6].w[0] + 12u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[1].w[0] + 32656u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378AC4u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00378AC4u) [[unlikely]] return; }
L_00378AC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    c.budget -= 4;
L_00378AD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[2], 0u - 129u);
    st8((c.r[3].w[0] + 79u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], 0u + 1u);  goto L_00378B1C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 13440u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00378000u < 16384u) { entry = entries_009E[(t - 0x00378000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00378B18:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00378B1C:
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00378B20:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378BA4; } }
L_00378B30:
    set32(c.r[2], 0u + 10u);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378BA4; } }
L_00378B48:
    set32(c.r[2], 0u + 50u);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378BA4; } }
L_00378B60:
    set32(c.r[2], 0u + 6u);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378BA4; } }
L_00378B78:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00378BA4; } }
L_00378B90:
    set32(c.r[2], 0u + 98u);
    st8((c.r[4].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00378BA4:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], 0u - 129u);
    set32(c.r[2], c.r[2].w[0] + 32480u);
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BD0u); st32((c.r[5].w[0] + 116u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x00378BD0u) [[unlikely]] return; }
L_00378BD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BE4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00378BE4u) [[unlikely]] return; }
L_00378BE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378BF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00378BF8u) [[unlikely]] return; }
L_00378BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C0Cu); set32(c.r[5], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00378C0Cu) [[unlikely]] return; }
L_00378C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C18u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00378C18u) [[unlikely]] return; }
L_00378C18:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C24u); st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 229u, depth + 1u); else { c.pc = 0x0037DDC0u; return; } if (c.pc != 0x00378C24u) [[unlikely]] return; }
L_00378C24:
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00378C50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + 31040u);
    c.f[21] = c.f[12];
    c.f[20] = c.f[13];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378C78u); st32((c.r[28].w[0] - 24824u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00378C78u) [[unlikely]] return; }
L_00378C78:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 96u), c.f[21]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 100u), c.f[20]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00378CA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[16], c.r[9], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378CC0u); st8((c.r[2].w[0] + 185u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00378CC0u) [[unlikely]] return; }
L_00378CC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[9], 0u + 1u);
    set32(c.r[8], 0u + 13u);
    set32(c.r[7], 0u + 16u);
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[6], c.r[2].w[0] + 32512u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 112u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 128u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 108u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 113u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 124u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 116u), c.r[6].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00378D2C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 32589u), static_cast<std::uint8_t>(c.r[9].w[0]));  if (t) { goto L_00378D34; } }
L_00378D2C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[1].w[0] + 32589u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00378D34:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 260u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull; st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00378D80; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[8], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x42400000u);
    set32(c.r[6], 0u + 273u);
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 96u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 12u), c.r[6].w[0]);  if (t) { goto L_00378DB0; } }
L_00378D80:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[9], 0u + 9u);
    set32(c.r[8], 0u + 6u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x43100000u);
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[6], 0u + 193u);
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(c.r[8].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 96u), c.r[7].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 12u), c.r[6].w[0]);
    c.budget -= 12;
L_00378DB0:
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    set32(c.r[7], 0u + 55u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[6].w[0] + 100u), c.r[8].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[6].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    c.budget -= 11;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 3u);  goto L_00378E50; }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[7], 0u + 15u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    st8((c.r[3].w[0] + 121u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 122u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 96u), c.r[6].w[0]);  if (t) { goto L_00378E10; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 25u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00378E1C; } }
L_00378E10:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 441u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_00378E1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42E00000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[3].w[0] + 100u), c.r[6].w[0]);
    set32(c.r[16], ld32((c.r[28].w[0] - 24824u)));
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378E44u); c.f[12] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00378E44u) [[unlikely]] return; }
L_00378E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00378EB0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00378E50:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_00378EB0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[7], 0u + 15u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43020000u);
    st8((c.r[2].w[0] + 124u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], 0u + 228u);
    set32(c.r[3], 0u + 62u);
    st32((c.r[2].w[0] + 104u), c.r[8].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 122u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 96u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 100u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 16u), c.r[3].w[0]);
    c.budget -= 22;
L_00378EB0:
    set32(c.r[17], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EBCu); c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 121u)));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00378EBCu) [[unlikely]] return; }
L_00378EBC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 6816u);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378EE4u); st8((c.r[17].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x00378EE4u) [[unlikely]] return; }
L_00378EE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00378F00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F10u);  if (depth < kMaxDepth) unit_009E(c, 188u, depth + 1u); else { c.pc = 0x00379BD0u; return; } if (c.pc != 0x00378F10u) [[unlikely]] return; }
L_00378F10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F18u);  if (depth < kMaxDepth) unit_009E(c, 129u, depth + 1u); else { c.pc = 0x003795E0u; return; } if (c.pc != 0x00378F18u) [[unlikely]] return; }
L_00378F18:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00378F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F30u);  if (depth < kMaxDepth) unit_009F(c, 93u, depth + 1u); else { c.pc = 0x0037C8B0u; return; } if (c.pc != 0x00378F30u) [[unlikely]] return; }
L_00378F30:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00378F54; } }
    set32(c.r[4], ld32((c.r[4].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00378F54u); set32(c.r[5], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00378F54u) [[unlikely]] return; }
L_00378F54:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[2].w[0] + 4u);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00378F6C; } }
    st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00378F6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00378F80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_003790C4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379044; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00379018; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00378FC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_003790DC; } }
L_00378FC8:
    c.f[1] = ld32((c.r[5].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[5].w[0] + 104u), c.f[0]);  if (t) { goto L_003790D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003790D8; } }
L_00379018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379020u);  if (depth < kMaxDepth) unit_009E(c, 104u, depth + 1u); else { c.pc = 0x003790F0u; return; } if (c.pc != 0x00379020u) [[unlikely]] return; }
L_00379020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003790D8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003790D8; } }
L_00379044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037904Cu);  if (depth < kMaxDepth) unit_009F(c, 148u, depth + 1u); else { c.pc = 0x0037D210u; return; } if (c.pc != 0x0037904Cu) [[unlikely]] return; }
L_0037904C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037907C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003790D8; } }
L_0037907C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[2] = 0u;
    c.f[1] = ld32((c.r[3].w[0] + 104u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[3].w[0] + 104u), c.f[0]);  if (t) { goto L_003790D8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 104u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003790D8; } }
L_003790C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003790CCu);  if (depth < kMaxDepth) unit_009F(c, 148u, depth + 1u); else { c.pc = 0x0037D210u; return; } if (c.pc != 0x003790CCu) [[unlikely]] return; }
L_003790CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[16], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    c.budget -= 3;
L_003790D8:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_003790DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003790F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 1u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_003794A4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003793BC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037912C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_003794F4; } }
L_0037912C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379134u);  if (depth < kMaxDepth) unit_009E(c, 129u, depth + 1u); else { c.pc = 0x003795E0u; return; } if (c.pc != 0x00379134u) [[unlikely]] return; }
L_00379134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037913Cu);  if (depth < kMaxDepth) unit_009F(c, 148u, depth + 1u); else { c.pc = 0x0037D210u; return; } if (c.pc != 0x0037913Cu) [[unlikely]] return; }
L_0037913C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379300; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379158u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009F(c, 299u, depth + 1u); else { c.pc = 0x0037ECF0u; return; } if (c.pc != 0x00379158u) [[unlikely]] return; }
L_00379158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379164u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00379164u) [[unlikely]] return; }
L_00379164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379184; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 124u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379184u);  if (depth < kMaxDepth) unit_009E(c, 405u, depth + 1u); else { c.pc = 0x0037BA00u; return; } if (c.pc != 0x00379184u) [[unlikely]] return; }
L_00379184:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003791AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 404u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003791C0; } }
L_003791AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 108u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003791C0u); set32(c.r[5], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0032(c, 128u, depth + 1u); else { c.pc = 0x001C91E0u; return; } if (c.pc != 0x003791C0u) [[unlikely]] return; }
L_003791C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003791CCu); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009F(c, 299u, depth + 1u); else { c.pc = 0x0037ECF0u; return; } if (c.pc != 0x003791CCu) [[unlikely]] return; }
L_003791CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 108u)));
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003791F0u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003791F0u) [[unlikely]] return; }
L_003791F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30912u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379218u); set32(c.r[4], c.r[2].w[0] + 304u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00379218u) [[unlikely]] return; }
L_00379218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379224u); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00379224u) [[unlikely]] return; }
L_00379224:
    set32(c.r[5], c.r[2].w[0] >> 1);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].d[0] = c.r[4].sd[0] < 9ll ? 1ull : 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = c.r[1].d[0] != 0ull; st8((c.r[2].w[0] + 368u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00379264; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[2].w[0] + 368u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_00379264:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 108u)));
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 404u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003792EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003792EC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_003792B0; } }
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 112u);  if (t) { goto L_003792D8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003792B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003792C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[5].w[0] + 84u);  if (t) { goto L_003792D8; } }
L_003792C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[2].w[0] + 16u);
    c.budget -= 6;
L_003792D8:
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003792ECu); set32(c.r[6], 0u + 16u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x003792ECu) [[unlikely]] return; }
L_003792EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379300u); set32(c.r[5], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00379300u) [[unlikely]] return; }
L_00379300:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003794F0; } }
    st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00379370; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379334u); set32(c.r[4], ld32((c.r[2].w[0] + 20u)));  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00379334u) [[unlikely]] return; }
L_00379334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037934C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00379370; } }
L_0037934C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[5], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037935Cu); set32(c.r[4], 0u - 1u);  if (depth < kMaxDepth) unit_0032(c, 121u, depth + 1u); else { c.pc = 0x001C90A0u; return; } if (c.pc != 0x0037935Cu) [[unlikely]] return; }
L_0037935C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379370; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 123u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00379370:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 123u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00379390; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003793B0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00379390:
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00380000u);
    set32(c.r[6], c.r[2].w[0] - 5984u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 123u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003793B0u); set32(c.r[5], c.r[2].w[0] - 1u);  if (depth < kMaxDepth) unit_009F(c, 230u, depth + 1u); else { c.pc = 0x0037DDD0u; return; } if (c.pc != 0x003793B0u) [[unlikely]] return; }
L_003793B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 4u), 0u);  if (t) { goto L_003794F0; } }
L_003793BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003793C4u);  if (depth < kMaxDepth) unit_009F(c, 148u, depth + 1u); else { c.pc = 0x0037D210u; return; } if (c.pc != 0x003793C4u) [[unlikely]] return; }
L_003793C4:
    set32(c.r[7], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 123u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003794F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3348u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 1008ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003794F0; } }
    c.r[3].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 123u)));
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379434u); st8((c.r[3].w[0] + 123u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00379434u) [[unlikely]] return; }
L_00379434:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379448u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00379448u) [[unlikely]] return; }
L_00379448:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30528u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037945Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037945Cu) [[unlikely]] return; }
L_0037945C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379470u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00379470u) [[unlikely]] return; }
L_00379470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30272u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379484u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00379484u) [[unlikely]] return; }
L_00379484:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379498u); st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00379498u) [[unlikely]] return; }
L_00379498:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_003794F0; } }
L_003794A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003794ACu);  if (depth < kMaxDepth) unit_009F(c, 148u, depth + 1u); else { c.pc = 0x0037D210u; return; } if (c.pc != 0x003794ACu) [[unlikely]] return; }
L_003794AC:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 123u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003794F0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 108u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3344u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld16((c.r[2].w[0]));
    st32((c.r[5].w[0] + 60u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
L_003794F0:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_003794F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379510:
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 64u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 60u)));
    c.r[2].d[0] = ~(c.r[2].d[0] | 0ull);
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];  if (t) { goto L_00379534; } }
    st8((c.r[6].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 2;
L_00379534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003795B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 72u));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[3].w[0] + 72u);  if (t) { goto L_00379574; } }
    c.r[2].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003795D4; } }
    set32(c.r[2], 0u + 158u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 68u), c.r[4].w[0]);  if (t) { goto L_003795D4; } }
L_00379574:
    set32(c.r[2], ld32((c.r[3].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003795D0; } }
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], 0u + 128u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_003795D0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], 0u + 132u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 72u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003795D4; } }
L_003795B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[2].w[0] + 68u);
    set32(c.r[2], ld32((c.r[2].w[0] + 68u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_003795D0; } }
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_003795D0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003795D4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_003795E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 125u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] + 125u);  if (t) { goto L_0037962C; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 60u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], c.r[2].w[0] + 3344u);
    st32((c.r[4].w[0] + 64u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 108u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 60u), c.r[2].w[0]);  if (t) { goto L_00379648; } }
L_0037962C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 60u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[2].w[0] + 64u), 0u);
    c.budget -= 7;
L_00379648:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 73u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00379684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379660u); c.r[4].d[0] = 0ull | 49148ull;  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x00379660u) [[unlikely]] return; }
L_00379660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379680; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379670u);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x00379670u) [[unlikely]] return; }
L_00379670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379678u);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x00379678u) [[unlikely]] return; }
L_00379678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003798DC; } }
L_00379680:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00379684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037968Cu);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x0037968Cu) [[unlikely]] return; }
L_0037968C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003796A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037969Cu);  if (depth < kMaxDepth) unit_009E(c, 165u, depth + 1u); else { c.pc = 0x003798F0u; return; } if (c.pc != 0x0037969Cu) [[unlikely]] return; }
L_0037969C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_003796A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796ACu);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x003796ACu) [[unlikely]] return; }
L_003796AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 512u);  if (t) { goto L_003796D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 372u, depth + 1u); else { c.pc = 0x0037B350u; return; } if (c.pc != 0x003796BCu) [[unlikely]] return; }
L_003796BC:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x003796C8u) [[unlikely]] return; }
L_003796C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_003796D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796D8u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x003796D8u) [[unlikely]] return; }
L_003796D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 256u);  if (t) { goto L_003796FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 420u, depth + 1u); else { c.pc = 0x0037BD90u; return; } if (c.pc != 0x003796E8u) [[unlikely]] return; }
L_003796E8:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003796F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x003796F4u) [[unlikely]] return; }
L_003796F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_003796FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379704u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x00379704u) [[unlikely]] return; }
L_00379704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_00379754; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379734; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379720u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x00379720u) [[unlikely]] return; }
L_00379720:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037972Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0037972Cu) [[unlikely]] return; }
L_0037972C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_00379734:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037974Cu); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0037974Cu) [[unlikely]] return; }
L_0037974C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_00379754:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 112u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 128u);  if (t) { goto L_003797C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037976Cu); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x0037976Cu) [[unlikely]] return; }
L_0037976C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  if (t) { goto L_003797BC; } }
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037979C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379788u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x00379788u) [[unlikely]] return; }
L_00379788:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379794u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379794u) [[unlikely]] return; }
L_00379794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_0037979C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003797B4u); st32((c.r[2].w[0] + 4u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x003797B4u) [[unlikely]] return; }
L_003797B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_003797BC:
    set32(c.r[4], 0u + 128u);
    c.budget -= 1;
L_003797C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003797C8u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x003797C8u) [[unlikely]] return; }
L_003797C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_003797EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003797D8u);  if (depth < kMaxDepth) unit_009E(c, 311u, depth + 1u); else { c.pc = 0x0037ACF0u; return; } if (c.pc != 0x003797D8u) [[unlikely]] return; }
L_003797D8:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003797E4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x003797E4u) [[unlikely]] return; }
L_003797E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_003797EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003797F4u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x003797F4u) [[unlikely]] return; }
L_003797F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00379818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379804u);  if (depth < kMaxDepth) unit_009E(c, 285u, depth + 1u); else { c.pc = 0x0037AB10u; return; } if (c.pc != 0x00379804u) [[unlikely]] return; }
L_00379804:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379810u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379810u) [[unlikely]] return; }
L_00379810:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_00379818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379820u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x00379820u) [[unlikely]] return; }
L_00379820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2048u);  if (t) { goto L_00379844; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379830u);  if (depth < kMaxDepth) unit_009E(c, 351u, depth + 1u); else { c.pc = 0x0037B150u; return; } if (c.pc != 0x00379830u) [[unlikely]] return; }
L_00379830:
    set32(c.r[5], 0u + 44u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037983Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0037983Cu) [[unlikely]] return; }
L_0037983C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003798D8; } }
L_00379844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037984Cu);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x0037984Cu) [[unlikely]] return; }
L_0037984C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1024u);  if (t) { goto L_0037985C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_0037989C; } }
L_0037985C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379864u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x00379864u) [[unlikely]] return; }
L_00379864:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_00379874; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0037989C; } }
L_00379874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037987Cu);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x0037987Cu) [[unlikely]] return; }
L_0037987C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0037988C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0037989C; } }
L_0037988C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379894u);  if (depth < kMaxDepth) unit_009E(c, 128u, depth + 1u); else { c.pc = 0x00379510u; return; } if (c.pc != 0x00379894u) [[unlikely]] return; }
L_00379894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_003798D8; } }
L_0037989C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 23792u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 79u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798C4u); st8((c.r[4].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x003798C4u) [[unlikely]] return; }
L_003798C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798CCu);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x003798CCu) [[unlikely]] return; }
L_003798CC:
    set32(c.r[5], 0u + 42u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003798D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x003798D8u) [[unlikely]] return; }
L_003798D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003798DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003798F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 77u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 79u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379AFC; } }
    set32(c.r[2], 0u + 76u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379AEC; } }
    set32(c.r[2], 0u + 75u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_00379ADC; } }
    set32(c.r[2], 0u + 74u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379AC8; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379AB8; } }
    set32(c.r[2], 0u + 71u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00379AA8; } }
    set32(c.r[2], 0u + 58u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A94; } }
    set32(c.r[2], 0u + 59u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A84; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A74; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A64; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A54; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A44; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A34; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A24; } }
    set32(c.r[2], 0u + 73u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A14; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00379A04; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003799F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003799F4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003799F4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003799F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B0C; } }
L_003799F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003799FCu);  if (depth < kMaxDepth) unit_009E(c, 280u, depth + 1u); else { c.pc = 0x0037AA30u; return; } if (c.pc != 0x003799FCu) [[unlikely]] return; }
L_003799FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_00379B18; } }
L_00379A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A0Cu);  if (depth < kMaxDepth) unit_009E(c, 296u, depth + 1u); else { c.pc = 0x0037ABF0u; return; } if (c.pc != 0x00379A0Cu) [[unlikely]] return; }
L_00379A0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A1Cu);  if (depth < kMaxDepth) unit_009E(c, 302u, depth + 1u); else { c.pc = 0x0037AC50u; return; } if (c.pc != 0x00379A1Cu) [[unlikely]] return; }
L_00379A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A2Cu);  if (depth < kMaxDepth) unit_009F(c, 68u, depth + 1u); else { c.pc = 0x0037C630u; return; } if (c.pc != 0x00379A2Cu) [[unlikely]] return; }
L_00379A2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A3Cu);  if (depth < kMaxDepth) unit_009F(c, 57u, depth + 1u); else { c.pc = 0x0037C4D0u; return; } if (c.pc != 0x00379A3Cu) [[unlikely]] return; }
L_00379A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A4Cu);  if (depth < kMaxDepth) unit_009E(c, 338u, depth + 1u); else { c.pc = 0x0037AFB0u; return; } if (c.pc != 0x00379A4Cu) [[unlikely]] return; }
L_00379A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A5Cu);  if (depth < kMaxDepth) unit_009E(c, 332u, depth + 1u); else { c.pc = 0x0037AF10u; return; } if (c.pc != 0x00379A5Cu) [[unlikely]] return; }
L_00379A5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A6Cu);  if (depth < kMaxDepth) unit_009E(c, 321u, depth + 1u); else { c.pc = 0x0037AD90u; return; } if (c.pc != 0x00379A6Cu) [[unlikely]] return; }
L_00379A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A7Cu);  if (depth < kMaxDepth) unit_009E(c, 351u, depth + 1u); else { c.pc = 0x0037B150u; return; } if (c.pc != 0x00379A7Cu) [[unlikely]] return; }
L_00379A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A8Cu);  if (depth < kMaxDepth) unit_009E(c, 355u, depth + 1u); else { c.pc = 0x0037B1B0u; return; } if (c.pc != 0x00379A8Cu) [[unlikely]] return; }
L_00379A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379A9Cu);  if (depth < kMaxDepth) unit_009E(c, 361u, depth + 1u); else { c.pc = 0x0037B220u; return; } if (c.pc != 0x00379A9Cu) [[unlikely]] return; }
L_00379A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00379AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AB0u);  if (depth < kMaxDepth) unit_009E(c, 420u, depth + 1u); else { c.pc = 0x0037BD90u; return; } if (c.pc != 0x00379AB0u) [[unlikely]] return; }
L_00379AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AC0u);  if (depth < kMaxDepth) unit_009E(c, 411u, depth + 1u); else { c.pc = 0x0037BC20u; return; } if (c.pc != 0x00379AC0u) [[unlikely]] return; }
L_00379AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379AC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AD0u);  if (depth < kMaxDepth) unit_009E(c, 367u, depth + 1u); else { c.pc = 0x0037B290u; return; } if (c.pc != 0x00379AD0u) [[unlikely]] return; }
L_00379AD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00379ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AE4u);  if (depth < kMaxDepth) unit_009E(c, 372u, depth + 1u); else { c.pc = 0x0037B350u; return; } if (c.pc != 0x00379AE4u) [[unlikely]] return; }
L_00379AE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379AF4u);  if (depth < kMaxDepth) unit_009F(c, 41u, depth + 1u); else { c.pc = 0x0037C2F0u; return; } if (c.pc != 0x00379AF4u) [[unlikely]] return; }
L_00379AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B04u);  if (depth < kMaxDepth) unit_009E(c, 405u, depth + 1u); else { c.pc = 0x0037BA00u; return; } if (c.pc != 0x00379B04u) [[unlikely]] return; }
L_00379B04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379B14; } }
L_00379B0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B14u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x00379B14u) [[unlikely]] return; }
L_00379B14:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_00379B18:
    set32(c.r[2], 0u + 9u);
    c.r[4].d[0] = ld8((c.r[3].w[0] + 79u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00379B44; } }
    set32(c.r[2], 0u + 72u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00379B54; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00379B54; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00379B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B4Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379B4Cu) [[unlikely]] return; }
L_00379B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_00379BB0; } }
L_00379B54:
    set32(c.r[2], ld32((c.r[3].w[0] + 116u)));
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_00379B90; } }
    set32(c.r[2], 0u + 70u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 44u);  if (t) { goto L_00379BA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B80u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x00379B80u) [[unlikely]] return; }
L_00379B80:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00379BA0; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_00379B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379B98u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379B98u) [[unlikely]] return; }
L_00379B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379BAC; } }
L_00379BA0:
    set32(c.r[5], 0u + 44u);
    c.budget -= 1;
L_00379BA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379BACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379BACu) [[unlikely]] return; }
L_00379BAC:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_00379BB0:
    set32(c.r[4], 0u + 10u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 79u));
    st8((c.r[5].w[0] + 109u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 110u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 83u));
    st8((c.r[4].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25312u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 83u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 82u));
    c.r[3].d[0] = c.r[3].d[0] & 128ull;
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + 82u);  if (t) { goto L_00379C34; } }
L_00379C04:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 83u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00379C80; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 84u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00379C80; } }
    set32(c.r[2], 0u + 158u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C2Cu); st8((c.r[5].w[0] + 82u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 192u, depth + 1u); else { c.pc = 0x00379C90u; return; } if (c.pc != 0x00379C2Cu) [[unlikely]] return; }
L_00379C2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00379C84; } }
L_00379C34:
    c.r[4].d[0] = ld8((c.r[5].w[0] + 83u));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 84u));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00379C78; } }
    c.r[4].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 128u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00379C80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], 0u + 132u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379C70u); st8((c.r[2].w[0] + 82u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 192u, depth + 1u); else { c.pc = 0x00379C90u; return; } if (c.pc != 0x00379C70u) [[unlikely]] return; }
L_00379C70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379C80; } }
L_00379C78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00379C04u | kUnwind; return; } goto L_00379C04; } }
L_00379C80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00379C84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00379C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 73u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00379CC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CB4u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x00379CB4u) [[unlikely]] return; }
L_00379CB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CBCu);  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x00379CBCu) [[unlikely]] return; }
L_00379CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379CC4u);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x00379CC4u) [[unlikely]] return; }
L_00379CC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[16].d[0] = ld8((c.r[3].w[0] + 83u));
    c.r[3].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 83ll ? 1ull : 0ull;  if (t) { goto L_00379CEC; } }
    c.r[1].d[0] = c.r[16].sd[0] < 73ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00379FB4; } }
L_00379CEC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 140ll ? 1ull : 0ull;  if (t) { goto L_00379D00; } }
    c.r[1].d[0] = c.r[16].sd[0] < 135ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00379FB4; } }
L_00379D00:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 139u);  if (t) { goto L_00379D10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00379FB8; } }
L_00379D10:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 138u);  if (t) { goto L_00379F54; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 136u);  if (t) { goto L_00379F44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 82u);  if (t) { goto L_00379F34; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 81u);  if (t) { goto L_00379F24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 80u);  if (t) { goto L_00379F14; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 79u);  if (t) { goto L_00379F04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 77u);  if (t) { goto L_00379EF4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 76u);  if (t) { goto L_00379EE4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 74u);  if (t) { goto L_00379ED4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 64u);  if (t) { goto L_00379EC4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 63u);  if (t) { goto L_00379EB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 59u);  if (t) { goto L_00379EA4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 58u);  if (t) { goto L_00379E94; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 57u);  if (t) { goto L_00379E84; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 53u);  if (t) { goto L_00379E74; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 48u);  if (t) { goto L_00379E64; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 47u);  if (t) { goto L_00379E54; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 44u);  if (t) { goto L_00379E44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00379E34; } }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 41u);  if (t) { goto L_00379E24; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 40u);  if (t) { goto L_00379E14; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 78u);  if (t) { goto L_00379E04; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 75u);  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 73u);  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 62u);  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 61u);  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 49u);  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0];  if (t) { goto L_00379FB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F64; } }
L_00379E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E0Cu);  if (depth < kMaxDepth) unit_009E(c, 411u, depth + 1u); else { c.pc = 0x0037BC20u; return; } if (c.pc != 0x00379E0Cu) [[unlikely]] return; }
L_00379E0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 41u);  if (t) { goto L_00379F70; } }
L_00379E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E1Cu);  if (depth < kMaxDepth) unit_009E(c, 413u, depth + 1u); else { c.pc = 0x0037BC60u; return; } if (c.pc != 0x00379E1Cu) [[unlikely]] return; }
L_00379E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E2Cu);  if (depth < kMaxDepth) unit_009E(c, 415u, depth + 1u); else { c.pc = 0x0037BCE0u; return; } if (c.pc != 0x00379E2Cu) [[unlikely]] return; }
L_00379E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E3Cu);  if (depth < kMaxDepth) unit_009E(c, 420u, depth + 1u); else { c.pc = 0x0037BD90u; return; } if (c.pc != 0x00379E3Cu) [[unlikely]] return; }
L_00379E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E4Cu);  if (depth < kMaxDepth) unit_009E(c, 424u, depth + 1u); else { c.pc = 0x0037BE10u; return; } if (c.pc != 0x00379E4Cu) [[unlikely]] return; }
L_00379E4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E5Cu);  if (depth < kMaxDepth) unit_009E(c, 428u, depth + 1u); else { c.pc = 0x0037BE60u; return; } if (c.pc != 0x00379E5Cu) [[unlikely]] return; }
L_00379E5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E6Cu);  if (depth < kMaxDepth) unit_009E(c, 432u, depth + 1u); else { c.pc = 0x0037BEB0u; return; } if (c.pc != 0x00379E6Cu) [[unlikely]] return; }
L_00379E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E7Cu);  if (depth < kMaxDepth) unit_009E(c, 443u, depth + 1u); else { c.pc = 0x0037BF50u; return; } if (c.pc != 0x00379E7Cu) [[unlikely]] return; }
L_00379E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E8Cu);  if (depth < kMaxDepth) unit_009F(c, 6u, depth + 1u); else { c.pc = 0x0037C030u; return; } if (c.pc != 0x00379E8Cu) [[unlikely]] return; }
L_00379E8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379E94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379E9Cu);  if (depth < kMaxDepth) unit_009F(c, 20u, depth + 1u); else { c.pc = 0x0037C140u; return; } if (c.pc != 0x00379E9Cu) [[unlikely]] return; }
L_00379E9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EACu);  if (depth < kMaxDepth) unit_009F(c, 34u, depth + 1u); else { c.pc = 0x0037C250u; return; } if (c.pc != 0x00379EACu) [[unlikely]] return; }
L_00379EAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379EB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EBCu);  if (depth < kMaxDepth) unit_009F(c, 41u, depth + 1u); else { c.pc = 0x0037C2F0u; return; } if (c.pc != 0x00379EBCu) [[unlikely]] return; }
L_00379EBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379EC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379ECCu);  if (depth < kMaxDepth) unit_009F(c, 49u, depth + 1u); else { c.pc = 0x0037C3A0u; return; } if (c.pc != 0x00379ECCu) [[unlikely]] return; }
L_00379ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EDCu);  if (depth < kMaxDepth) unit_009F(c, 50u, depth + 1u); else { c.pc = 0x0037C3E0u; return; } if (c.pc != 0x00379EDCu) [[unlikely]] return; }
L_00379EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EECu);  if (depth < kMaxDepth) unit_009F(c, 55u, depth + 1u); else { c.pc = 0x0037C470u; return; } if (c.pc != 0x00379EECu) [[unlikely]] return; }
L_00379EEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379EFCu);  if (depth < kMaxDepth) unit_009F(c, 57u, depth + 1u); else { c.pc = 0x0037C4D0u; return; } if (c.pc != 0x00379EFCu) [[unlikely]] return; }
L_00379EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F0Cu);  if (depth < kMaxDepth) unit_009F(c, 68u, depth + 1u); else { c.pc = 0x0037C630u; return; } if (c.pc != 0x00379F0Cu) [[unlikely]] return; }
L_00379F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F1Cu);  if (depth < kMaxDepth) unit_009E(c, 332u, depth + 1u); else { c.pc = 0x0037AF10u; return; } if (c.pc != 0x00379F1Cu) [[unlikely]] return; }
L_00379F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F2Cu);  if (depth < kMaxDepth) unit_009E(c, 338u, depth + 1u); else { c.pc = 0x0037AFB0u; return; } if (c.pc != 0x00379F2Cu) [[unlikely]] return; }
L_00379F2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F3Cu);  if (depth < kMaxDepth) unit_009F(c, 75u, depth + 1u); else { c.pc = 0x0037C750u; return; } if (c.pc != 0x00379F3Cu) [[unlikely]] return; }
L_00379F3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F4Cu);  if (depth < kMaxDepth) unit_009F(c, 86u, depth + 1u); else { c.pc = 0x0037C7F0u; return; } if (c.pc != 0x00379F4Cu) [[unlikely]] return; }
L_00379F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F5Cu);  if (depth < kMaxDepth) unit_009F(c, 89u, depth + 1u); else { c.pc = 0x0037C850u; return; } if (c.pc != 0x00379F5Cu) [[unlikely]] return; }
L_00379F5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379F6C; } }
L_00379F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379F6Cu);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x00379F6Cu) [[unlikely]] return; }
L_00379F6C:
    set32(c.r[2], 0u + 41u);
    c.budget -= 1;
L_00379F70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[2].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00379F98; } }
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 44u);  if (t) { goto L_00379FA8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00379FAC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00379F98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FA0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379FA0u) [[unlikely]] return; }
L_00379FA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00379FB4; } }
L_00379FA8:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00379FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00379FB4u);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00379FB4u) [[unlikely]] return; }
L_00379FB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00379FB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00379FD0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 68ull;  c.pc = t; return; }
L_00379FE0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 34ull;  c.pc = t; return; }
L_00379FF0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25309u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 17ull;  c.pc = t; return; }
L_0037A000:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 75u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 3ull;  c.pc = t; return; }
L_0037A010:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = c.r[4].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[5].w[0] + 75u));
    c.r[3].d[0] = c.r[3].d[0] & 12ull;
    st8((c.r[5].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 75u));
    c.r[3].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0037A040:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 75u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 4ull;  c.pc = t; return; }
L_0037A050:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 75u));
    c.r[3].d[0] = c.r[3].d[0] ^ 4ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0037A070:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 75u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 8ull;  c.pc = t; return; }
L_0037A080:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 75u));
    c.r[3].d[0] = c.r[3].d[0] ^ 8ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0037A0A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 75u));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0037A0C0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 75u));
    c.r[3].d[0] = c.r[3].d[0] & 247ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0037A0E0:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0037A1B0; } }
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A0F0:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037A100; } }
    c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A128; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A11C; } }
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A11C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A128; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A128:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037A13C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037A140; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037A13C:
    c.budget -= 1;
L_0037A140:
    set32(c.r[7], c.r[7].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = 0ll < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_0037A1B0; } }
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[8], c.r[2].w[0] - 2u);  if (t) { goto L_0037A180; } }
    c.budget -= 1;
L_0037A160:
    set32(c.r[6], c.r[6].w[0] + 2u);
    set32(c.r[4], c.r[4].w[0] + 2u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[8].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A160u | kUnwind; return; } goto L_0037A160; } }
    c.budget -= 1;
L_0037A180:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037A1B0; } }
    c.budget -= 1;
L_0037A190:
    set32(c.r[6], c.r[6].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[3].d[0] = c.r[6].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A190u | kUnwind; return; } goto L_0037A190; } }
    c.budget -= 1;
L_0037A1B0:
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0037A1C8; } }
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A0F0u | kUnwind; return; } goto L_0037A0F0; }
L_0037A1C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0037A1D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A1F4u); mmi::paddub(c.r[18], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A1F4u) [[unlikely]] return; }
L_0037A1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0037A208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037A2EC; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[18].w[0]));  if (t) { goto L_0037A274; } }
    c.r[2].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A214:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037A224; } }
    c.r[2].d[0] = c.r[5].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A250; } }
    c.r[2].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A240; } }
    c.r[2].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A240:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A250; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_0037A250:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0037A264; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037A268; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0037A264:
    c.budget -= 1;
L_0037A268:
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 3;
L_0037A274:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;  if (t) { goto L_0037A28C; } }
    c.r[2].d[0] = c.r[3].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A214u | kUnwind; return; } goto L_0037A214; } }
    c.r[1].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0037A28C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_0037A2A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037A2EC; } }
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0037A2A0:
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037A2B8; } }
    c.r[2].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A2B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0037A2E4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A2D4; } }
    c.r[2].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A2D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A2E0; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A2E0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0037A2E4:
    set32(c.r[3], 0u + 1u);
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[3].d[0];
    c.budget -= 2;
L_0037A2EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037A310:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[7], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A340u); mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A340u) [[unlikely]] return; }
L_0037A340:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A34Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A34Cu) [[unlikely]] return; }
L_0037A34C:
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.r[1].d[0] = c.r[20].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);  goto L_0037A380; }
    set32(c.r[3], c.r[20].w[0] - c.r[19].w[0]);
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0037A370; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    c.budget -= 2;
L_0037A370:
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[16], c.r[18].w[0] + c.r[16].w[0]);
    c.budget -= 4;
L_0037A380:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A38Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0037A38Cu) [[unlikely]] return; }
L_0037A38C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A39Cu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037A39Cu) [[unlikely]] return; }
L_0037A39C:
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A3A8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037A3A8u) [[unlikely]] return; }
L_0037A3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A3B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A3B0u) [[unlikely]] return; }
L_0037A3B0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0037A3D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 77u));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0037A400; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037A49C; } }
L_0037A400:
    set32(c.r[3], c.r[2].w[0] - 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30784u);
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A428u); c.r[18].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A428u) [[unlikely]] return; }
L_0037A428:
    set32(c.r[2], c.r[2].w[0] >> 2);
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[5].d[0] = c.r[18].d[0] & 65535ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037A488; } }
L_0037A43C:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 1u));
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0037A480; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 3u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037A49C; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037A480:
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 2;
L_0037A488:
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A43Cu | kUnwind; return; } goto L_0037A43C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A49C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037A4C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A4DCu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A4DCu) [[unlikely]] return; }
L_0037A4DC:
    c.r[1].d[0] = c.r[16].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037A4F8; } }
    set32(c.r[3], c.r[17].w[0] + c.r[16].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0037A4F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037A510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);  if (t) { goto L_0037A534; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037A548; } }
    set32(c.r[5], c.r[4].w[0] + c.r[16].w[0]);
    c.budget -= 1;
L_0037A534:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A53Cu); st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037A53Cu) [[unlikely]] return; }
L_0037A53C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0037A548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037A560:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[21], c.r[5], c.r[0]);
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A594u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A594u) [[unlikely]] return; }
L_0037A594:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 136u);  if (t) { goto L_0037A5AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037A7C0; } }
    set32(c.r[4], c.r[29].w[0] + 136u);
    c.budget -= 1;
L_0037A5AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (t) { goto L_0037A630; } }
    c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A5B8:
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037A5C8; } }
    c.r[2].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A5C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A5F0; } }
    c.r[2].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037A5E4; } }
    c.r[2].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A5E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A5F0; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A5F0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037A600; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0037A7C0; } }
L_0037A600:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], c.r[4].w[0] + 1u);  goto L_0037A62C; }
    c.r[1].d[0] = c.r[3].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037A628; } }
    set32(c.r[2], c.r[3].w[0] + 32u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0037A628:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0037A62C:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 1;
L_0037A630:
    c.r[6].d[0] = ld8((c.r[5].w[0]));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != 0ull; c.r[2].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A5B8u | kUnwind; return; } goto L_0037A5B8; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A648u); set32(c.r[4], c.r[29].w[0] + 136u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A648u) [[unlikely]] return; }
L_0037A648:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[18], c.r[2].w[0] + 24192u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
L_0037A658:
    set32(c.r[20], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A664u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A664u) [[unlikely]] return; }
L_0037A664:
    c.budget -= 2;
    if (c.r[19].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0037A7B0; }
    set32(c.r[4], c.r[29].w[0] + 136u);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A67Cu); mmi::paddub(c.r[6], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0037A67Cu) [[unlikely]] return; }
L_0037A67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A7AC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    set32(c.r[2], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 77u));
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 24196u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], c.r[22].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[3], 0u + 127u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[2].w[0] + 30911u);  if (t) { goto L_0037A6E8; } }
L_0037A6D4:
    c.r[2].d[0] = ld8((c.r[4].w[0] - 1u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.budget -= 5;
L_0037A6E8:
    c.r[2].d[0] = ld8((c.r[6].w[0] + 77u));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A6D4u | kUnwind; return; } goto L_0037A6D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A708u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037A708u) [[unlikely]] return; }
L_0037A708:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30784u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A72Cu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037A72Cu) [[unlikely]] return; }
L_0037A72C:
    set32(c.r[5], c.r[21].w[0] - 2u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A73Cu); mmi::paddub(c.r[4], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0037A73Cu) [[unlikely]] return; }
L_0037A73C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0037A784; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30784u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[3], c.r[3].w[0] - c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] - 2u);
    c.budget -= 8;
    { const bool t = c.r[22].d[0] != 0ull; set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_0037A770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] - 16632u);  if (t) { goto L_0037A778; } }
L_0037A770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 16624u);
    c.budget -= 2;
L_0037A778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A780u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037A780u) [[unlikely]] return; }
L_0037A780:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0037A784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A78Cu);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037A78Cu) [[unlikely]] return; }
L_0037A78C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[17].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037A7C0; } }
L_0037A7AC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0037A7B0:
    c.r[2].d[0] = c.r[16].sd[0] < 238ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A658u | kUnwind; return; } goto L_0037A658; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A7C0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0037A7F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A818u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037A818u) [[unlikely]] return; }
L_0037A818:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], 0u + 8u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[3], c.r[2].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], 0u + 8u);  if (t) { goto L_0037A834; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037A834:
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[29].w[0]);
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 30784u);
    set32(c.r[3], c.r[5].w[0] - c.r[6].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A854u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037A854u) [[unlikely]] return; }
L_0037A854:
    set32(c.r[5], c.r[29].w[0] + 66u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A860u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 253u, depth + 1u); else { c.pc = 0x0037A560u; return; } if (c.pc != 0x0037A860u) [[unlikely]] return; }
L_0037A860:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[29].w[0] + 68u);  if (t) { goto L_0037A8F4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A874u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 253u, depth + 1u); else { c.pc = 0x0037A560u; return; } if (c.pc != 0x0037A874u) [[unlikely]] return; }
L_0037A874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[29].w[0] + 70u);  if (t) { goto L_0037A8F4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A888u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 253u, depth + 1u); else { c.pc = 0x0037A560u; return; } if (c.pc != 0x0037A888u) [[unlikely]] return; }
L_0037A888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037A8F4; } }
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    set32(c.r[3], 0u + 78u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 110u);  if (t) { goto L_0037A8A8; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037A8F4; } }
L_0037A8A8:
    c.r[4].d[0] = ld8((c.r[18].w[0]));
    set32(c.r[3], 0u + 89u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 121u);  if (t) { goto L_0037A8F4; } }
    c.budget -= 2;
    if (c.r[4].d[0] != c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);  goto L_0037A8C8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0037A8F8; } }
L_0037A8C8:
    set32(c.r[4], c.r[2].w[0] + 30784u);
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[2], c.r[28].w[0] - 27096u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 77u));
    set32(c.r[6], 0u + 2u);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] - 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A8F4u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037A8F4u) [[unlikely]] return; }
L_0037A8F4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037A8F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037A910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], 0u + 130u);  if (t) { goto L_0037A990; } }
L_0037A918:
    c.r[8].d[0] = c.r[7].d[0] & 255ull;
    c.r[3].d[0] = c.r[8].sd[0] < 65ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[8].sd[0] < 97ll ? 1ull : 0ull;  if (t) { goto L_0037A950; } }
    c.r[1].d[0] = c.r[8].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037A94C; } }
    set32(c.r[3], c.r[8].w[0] + 31u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0037A990; } }
L_0037A94C:
    c.r[3].d[0] = c.r[8].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037A950:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037A97C; } }
    c.r[1].d[0] = c.r[8].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037A97C; } }
    set32(c.r[3], c.r[8].w[0] + 32u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0037A990; } }
L_0037A97C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 5;
L_0037A990:
    mmi::paddub(c.r[3], c.r[4], c.r[0]);
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != 0ull; set32(c.r[4], c.r[3].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A918u | kUnwind; return; } goto L_0037A918; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0037A9B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30400u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9C8u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0037A9C8u) [[unlikely]] return; }
L_0037A9C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9DCu); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 69u, depth + 1u); else { c.pc = 0x001BC8F0u; return; } if (c.pc != 0x0037A9DCu) [[unlikely]] return; }
L_0037A9DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037A9F0u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BC730u; return; } if (c.pc != 0x0037A9F0u) [[unlikely]] return; }
L_0037A9F0:
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[3].w[0] + 30400u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA08u); st32((c.r[6].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 31u, depth + 1u); else { c.pc = 0x00118618u; return; } if (c.pc != 0x0037AA08u) [[unlikely]] return; }
L_0037AA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037AA20; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 88u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037A9DCu | kUnwind; return; } goto L_0037A9DC; } }
L_0037AA20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0037AA30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AA40u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037AA40u) [[unlikely]] return; }
L_0037AA40:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 79u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037AAF8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037AAB0; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037AAA0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037AA84; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0037AA84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037AAE0; } }
L_0037AA84:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037AAF8; } }
    c.r[2].d[0] = c.r[4].d[0] | 4ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037AAE0; } }
L_0037AAA0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 92ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037AAF8; } }
L_0037AAB0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037AAF8; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 75u));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    st8((c.r[5].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 75u));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 79u));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st8((c.r[4].w[0] + 75u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
L_0037AAE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAE8u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037AAE8u) [[unlikely]] return; }
L_0037AAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAF0u);  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x0037AAF0u) [[unlikely]] return; }
L_0037AAF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AAF8u);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x0037AAF8u) [[unlikely]] return; }
L_0037AAF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AB10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB20u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037AB20u) [[unlikely]] return; }
L_0037AB20:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0037AB9C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0037AB78; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { mmi::paddub(c.r[4], c.r[3], c.r[0]);  goto L_0037AB68; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037AB54; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABC8; } }
L_0037AB54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB5Cu);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037AB5Cu) [[unlikely]] return; }
L_0037AB5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABC8; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_0037AB68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB70u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037AB70u) [[unlikely]] return; }
L_0037AB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABC8; } }
L_0037AB78:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 92ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037ABE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AB94u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037AB94u) [[unlikely]] return; }
L_0037AB94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABC8; } }
L_0037AB9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABA4u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037ABA4u) [[unlikely]] return; }
L_0037ABA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0037ABC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABB4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037ABB4u) [[unlikely]] return; }
L_0037ABB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037ABC8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037ABC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABC8u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037ABC8u) [[unlikely]] return; }
L_0037ABC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABD0u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037ABD0u) [[unlikely]] return; }
L_0037ABD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABD8u);  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x0037ABD8u) [[unlikely]] return; }
L_0037ABD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ABE0u);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x0037ABE0u) [[unlikely]] return; }
L_0037ABE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037ABF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037AC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC14u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037AC14u) [[unlikely]] return; }
L_0037AC14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037AC3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC24u);  if (depth < kMaxDepth) unit_009E(c, 227u, depth + 1u); else { c.pc = 0x0037A050u; return; } if (c.pc != 0x0037AC24u) [[unlikely]] return; }
L_0037AC24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC2Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037AC2Cu) [[unlikely]] return; }
L_0037AC2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC34u);  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x0037AC34u) [[unlikely]] return; }
L_0037AC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC3Cu);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x0037AC3Cu) [[unlikely]] return; }
L_0037AC3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AC50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037ACE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC74u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037AC74u) [[unlikely]] return; }
L_0037AC74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037ACE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037AC94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC94u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037AC94u) [[unlikely]] return; }
L_0037AC94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AC9Cu);  if (depth < kMaxDepth) unit_009E(c, 227u, depth + 1u); else { c.pc = 0x0037A050u; return; } if (c.pc != 0x0037AC9Cu) [[unlikely]] return; }
L_0037AC9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACA4u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037ACA4u) [[unlikely]] return; }
L_0037ACA4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037ACB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACB8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037ACB8u) [[unlikely]] return; }
L_0037ACB8:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 81u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037ACD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACD0u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037ACD0u) [[unlikely]] return; }
L_0037ACD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACD8u);  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x0037ACD8u) [[unlikely]] return; }
L_0037ACD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037ACE0u);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x0037ACE0u) [[unlikely]] return; }
L_0037ACE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037ACF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037AD84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD14u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037AD14u) [[unlikely]] return; }
L_0037AD14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037AD34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD24u);  if (depth < kMaxDepth) unit_009E(c, 227u, depth + 1u); else { c.pc = 0x0037A050u; return; } if (c.pc != 0x0037AD24u) [[unlikely]] return; }
L_0037AD24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD2Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037AD2Cu) [[unlikely]] return; }
L_0037AD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));  if (t) { goto L_0037AD60; } }
L_0037AD34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037AD4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD4Cu);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037AD4Cu) [[unlikely]] return; }
L_0037AD4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD54u);  if (depth < kMaxDepth) unit_009E(c, 227u, depth + 1u); else { c.pc = 0x0037A050u; return; } if (c.pc != 0x0037AD54u) [[unlikely]] return; }
L_0037AD54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD5Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037AD5Cu) [[unlikely]] return; }
L_0037AD5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 1;
L_0037AD60:
    c.r[2].d[0] = ld8((c.r[2].w[0] + 81u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037AD74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD74u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037AD74u) [[unlikely]] return; }
L_0037AD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD7Cu);  if (depth < kMaxDepth) unit_009F(c, 198u, depth + 1u); else { c.pc = 0x0037D920u; return; } if (c.pc != 0x0037AD7Cu) [[unlikely]] return; }
L_0037AD7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AD84u);  if (depth < kMaxDepth) unit_009F(c, 195u, depth + 1u); else { c.pc = 0x0037D840u; return; } if (c.pc != 0x0037AD84u) [[unlikely]] return; }
L_0037AD84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AD90:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 4u), c.r[4].w[0]);  c.pc = t; return; }
L_0037ADA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + 30784u);  if (t) { goto L_0037AE20; } }
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 1;
L_0037ADBC:
    set32(c.r[2], 0u + 78u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));  if (t) { goto L_0037ADD8; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 3;
    if (c.r[4].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 2u);  goto L_0037AE1C; }
    c.budget -= 1;
L_0037ADD8:
    set32(c.r[2], 0u + 89u);
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037AE18; } }
    set32(c.r[2], 0u + 121u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0037AE18; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 1u));
    set32(c.r[2], c.r[28].w[0] - 27096u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0] - 4u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037AE14u) [[unlikely]] return; }
L_0037AE14:
    c.budget -= 1;
L_0037AE18:
    set32(c.r[16], c.r[16].w[0] + 2u);
    c.budget -= 1;
L_0037AE1C:
    c.budget -= 1;
L_0037AE20:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037ADBCu | kUnwind; return; } goto L_0037ADBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE40u); set32(c.r[5], c.r[2].w[0] + 30656u);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037A910u; return; } if (c.pc != 0x0037AE40u) [[unlikely]] return; }
L_0037AE40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE5Cu); set32(c.r[6], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 47u, depth + 1u); else { c.pc = 0x001BC6D0u; return; } if (c.pc != 0x0037AE5Cu) [[unlikely]] return; }
L_0037AE5C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AE68u); st32((c.r[3].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037AE68u) [[unlikely]] return; }
L_0037AE68:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[1].w[0] + 30528u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 76u), static_cast<std::uint8_t>(c.r[4].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037AE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 92u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037AED0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEC0u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 71u, depth + 1u); else { c.pc = 0x001BC920u; return; } if (c.pc != 0x0037AEC0u) [[unlikely]] return; }
L_0037AEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEC8u);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037AEC8u) [[unlikely]] return; }
L_0037AEC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037AF00; } }
L_0037AED0:
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0037AEFC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AEF4u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BC730u; return; } if (c.pc != 0x0037AEF4u) [[unlikely]] return; }
L_0037AEF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0037AEFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037AF00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037AF10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037AFA4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30272u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037AFA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30016u);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[2].w[0] + 30272u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF5Cu); set32(c.r[8], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_002F(c, 55u, depth + 1u); else { c.pc = 0x001BC790u; return; } if (c.pc != 0x0037AF5Cu) [[unlikely]] return; }
L_0037AF5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF70u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 65u, depth + 1u); else { c.pc = 0x001BC890u; return; } if (c.pc != 0x0037AF70u) [[unlikely]] return; }
L_0037AF70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF84u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 67u, depth + 1u); else { c.pc = 0x001BC8C0u; return; } if (c.pc != 0x0037AF84u) [[unlikely]] return; }
L_0037AF84:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AF90u); st32((c.r[3].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037AF90u) [[unlikely]] return; }
L_0037AF90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30528u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037AFA4u); set32(c.r[5], c.r[2].w[0] + 30016u);  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037AFA4u) [[unlikely]] return; }
L_0037AFA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037AFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037B070; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30528u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037B070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 30016u);
    set32(c.r[4], ld32((c.r[4].w[0] + 88u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[7], c.r[2].w[0] + 30272u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B000u); set32(c.r[8], c.r[29].w[0] + 46u);  if (depth < kMaxDepth) unit_002F(c, 55u, depth + 1u); else { c.pc = 0x001BC790u; return; } if (c.pc != 0x0037B000u) [[unlikely]] return; }
L_0037B000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B014u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 65u, depth + 1u); else { c.pc = 0x001BC890u; return; } if (c.pc != 0x0037B014u) [[unlikely]] return; }
L_0037B014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B028u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 65u, depth + 1u); else { c.pc = 0x001BC890u; return; } if (c.pc != 0x0037B028u) [[unlikely]] return; }
L_0037B028:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B038u); st32((c.r[2].w[0] + 92u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009E(c, 275u, depth + 1u); else { c.pc = 0x0037A9B0u; return; } if (c.pc != 0x0037B038u) [[unlikely]] return; }
L_0037B038:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037B070; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B04Cu); set32(c.r[4], c.r[2].w[0] + 30528u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037B04Cu) [[unlikely]] return; }
L_0037B04C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B05Cu); set32(c.r[4], c.r[2].w[0] + 30400u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037B05Cu) [[unlikely]] return; }
L_0037B05C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 30528u);
    set32(c.r[4], c.r[16].w[0] - c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0037B070:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037B080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037B134; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B0B0u); set32(c.r[5], c.r[2].w[0] + 30656u);  if (depth < kMaxDepth) unit_009E(c, 273u, depth + 1u); else { c.pc = 0x0037A910u; return; } if (c.pc != 0x0037B0B0u) [[unlikely]] return; }
L_0037B0B0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B0D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B0CCu); set32(c.r[4], c.r[2].w[0] + 30656u);  if (depth < kMaxDepth) unit_002F(c, 53u, depth + 1u); else { c.pc = 0x001BC760u; return; } if (c.pc != 0x0037B0CCu) [[unlikely]] return; }
L_0037B0CC:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 76u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037B0D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B0F4u); set32(c.r[5], c.r[2].w[0] + 30656u);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037A310u; return; } if (c.pc != 0x0037B0F4u) [[unlikely]] return; }
L_0037B0F4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B10Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037B10Cu) [[unlikely]] return; }
L_0037B10C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B134u); st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B134u) [[unlikely]] return; }
L_0037B134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037B150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B1A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B170u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037B170u) [[unlikely]] return; }
L_0037B170:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037B1A4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 81u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B19C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B194u);  if (depth < kMaxDepth) unit_009F(c, 201u, depth + 1u); else { c.pc = 0x0037D960u; return; } if (c.pc != 0x0037B194u) [[unlikely]] return; }
L_0037B194:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037B1A8; } }
L_0037B19C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1A4u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B1A4u) [[unlikely]] return; }
L_0037B1A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B1A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B1B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1D0u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037B1D0u) [[unlikely]] return; }
L_0037B1D0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B1EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1E4u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037B1E4u) [[unlikely]] return; }
L_0037B1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037B218; } }
L_0037B1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B1F4u); set32(c.r[4], ld32((c.r[28].w[0] - 27108u)));  if (depth < kMaxDepth) unit_009E(c, 246u, depth + 1u); else { c.pc = 0x0037A3D0u; return; } if (c.pc != 0x0037B1F4u) [[unlikely]] return; }
L_0037B1F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B20C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B204u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037B204u) [[unlikely]] return; }
L_0037B204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B214; } }
L_0037B20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B214u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B214u) [[unlikely]] return; }
L_0037B214:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B218:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B240u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037B240u) [[unlikely]] return; }
L_0037B240:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B25C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B254u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037B254u) [[unlikely]] return; }
L_0037B254:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037B288; } }
L_0037B25C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B264u); set32(c.r[4], ld32((c.r[28].w[0] - 27104u)));  if (depth < kMaxDepth) unit_009E(c, 246u, depth + 1u); else { c.pc = 0x0037A3D0u; return; } if (c.pc != 0x0037B264u) [[unlikely]] return; }
L_0037B264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B27C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B274u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037B274u) [[unlikely]] return; }
L_0037B274:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B284; } }
L_0037B27C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B284u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B284u) [[unlikely]] return; }
L_0037B284:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B290:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 76u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B330; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B2D8; } }
    c.r[18].d[0] = ld8((c.r[4].w[0] + 77u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] + 30784u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 2u);  if (t) { goto L_0037B2F8; } }
L_0037B2D8:
    c.r[18].d[0] = ld8((c.r[4].w[0] + 80u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] + 30912u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B2F4u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 236u, depth + 1u); else { c.pc = 0x0037A1D0u; return; } if (c.pc != 0x0037B2F4u) [[unlikely]] return; }
L_0037B2F4:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 1;
L_0037B2F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B300u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037B300u) [[unlikely]] return; }
L_0037B300:
    c.r[1].d[0] = c.r[18].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037B330; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull;  if (t) { goto L_0037B330; } }
    set32(c.r[4], c.r[16].w[0] + c.r[18].w[0]);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B324u); st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037B324u) [[unlikely]] return; }
L_0037B324:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B330u); st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B330u) [[unlikely]] return; }
L_0037B330:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037B350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 76u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[5].w[0] + 76u);  if (t) { goto L_0037B404; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037B3AC; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 77u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 30784u);  if (t) { goto L_0037B438; } }
    set32(c.r[5], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B398u); st8((c.r[5].w[0] - 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037B398u) [[unlikely]] return; }
L_0037B398:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 77u));
    set32(c.r[2], c.r[2].w[0] - 2u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0037B3F0; } }
L_0037B3AC:
    c.r[5].d[0] = ld8((c.r[5].w[0] + 80u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[9], c.r[3].w[0] + 30912u);  if (t) { goto L_0037B438; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B3C4u); mmi::paddub(c.r[4], c.r[9], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 232u, depth + 1u); else { c.pc = 0x0037A0E0u; return; } if (c.pc != 0x0037B3C4u) [[unlikely]] return; }
L_0037B3C4:
    set32(c.r[5], c.r[9].w[0] + c.r[5].w[0]);
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    set32(c.r[2], c.r[5].w[0] - c.r[16].w[0]);
    mmi::paddub(c.r[4], c.r[9], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B3DCu); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 21u, depth + 1u); else { c.pc = 0x00118358u; return; } if (c.pc != 0x0037B3DCu) [[unlikely]] return; }
L_0037B3DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_0037B3F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B3FCu); st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B3FCu) [[unlikely]] return; }
L_0037B3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0037B43C; } }
L_0037B404:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037B42C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B420u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 49u, depth + 1u); else { c.pc = 0x001BC700u; return; } if (c.pc != 0x0037B420u) [[unlikely]] return; }
L_0037B420:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 88u), c.r[2].w[0]);  if (t) { goto L_0037B438; } }
L_0037B42C:
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0037B438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B43C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0037B450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 73u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B478; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B470u);  if (depth < kMaxDepth) unit_009E(c, 394u, depth + 1u); else { c.pc = 0x0037B7B0u; return; } if (c.pc != 0x0037B470u) [[unlikely]] return; }
L_0037B470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037B484; } }
L_0037B478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B480u);  if (depth < kMaxDepth) unit_009E(c, 381u, depth + 1u); else { c.pc = 0x0037B490u; return; } if (c.pc != 0x0037B480u) [[unlikely]] return; }
L_0037B480:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B484:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037B490:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B4BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4BCu);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037B4BCu) [[unlikely]] return; }
L_0037B4BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B4C4u);  if (depth < kMaxDepth) unit_009E(c, 222u, depth + 1u); else { c.pc = 0x00379FE0u; return; } if (c.pc != 0x0037B4C4u) [[unlikely]] return; }
L_0037B4C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], 0u + 1u);
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[2], 0u + 135u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 83u));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0037B4E4; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037B4E4:
    set32(c.r[2], 0u + 137u);
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037B4F8; } }
    c.r[6].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_0037B4F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B500u);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037B500u) [[unlikely]] return; }
L_0037B500:
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B50Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037B50Cu) [[unlikely]] return; }
L_0037B50C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0037B634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B51Cu);  if (depth < kMaxDepth) unit_009E(c, 228u, depth + 1u); else { c.pc = 0x0037A070u; return; } if (c.pc != 0x0037B51Cu) [[unlikely]] return; }
L_0037B51C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[6].d[0] & 255ull;  if (t) { goto L_0037B538; } }
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0037B534; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_0037B534:
    c.r[2].d[0] = c.r[6].d[0] & 255ull;
    c.budget -= 1;
L_0037B538:
    c.r[5].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 24112u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B570u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037B570u) [[unlikely]] return; }
L_0037B570:
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0037B5C8; } }
    c.r[4].d[0] = ld8((c.r[29].w[0] + 76u));
    c.r[2].d[0] = c.r[4].sd[0] < 65ll ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_0037B594; } }
    c.r[2].d[0] = c.r[4].sd[0] < 91ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037B594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;  if (t) { goto L_0037B5B8; } }
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B5AC; } }
    c.r[2].d[0] = c.r[4].sd[0] < 123ll ? 1ull : 0ull;
    c.budget -= 1;
L_0037B5AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037B5B8; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_0037B5B8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037B5C8; } }
    set32(c.r[2], c.r[17].w[0] + 1u);
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0037B5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 76u);
    set32(c.r[5], c.r[2].w[0] - 13408u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B5E0u); st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0037B5E0u) [[unlikely]] return; }
L_0037B5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B794; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 77u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 113u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B604u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037A310u; return; } if (c.pc != 0x0037B604u) [[unlikely]] return; }
L_0037B604:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 77u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; st8((c.r[5].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037B77C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B62Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 266u, depth + 1u); else { c.pc = 0x0037A7F0u; return; } if (c.pc != 0x0037B62Cu) [[unlikely]] return; }
L_0037B62C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B77C; } }
L_0037B634:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B794; } }
    c.r[2].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 27100u)));
    set32(c.r[5], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 24152u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B674u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 27u, depth + 1u); else { c.pc = 0x00118488u; return; } if (c.pc != 0x0037B674u) [[unlikely]] return; }
L_0037B674:
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 74u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_0037B6A8; } }
    c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0037B794; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B6A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_0037B798; } }
L_0037B6A4:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_0037B6A8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_0037B6D4; } }
    c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_0037B6C8; } }
    c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B6D0; } }
L_0037B6C8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0037B794; } }
L_0037B6D0:
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 1;
L_0037B6D4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_0037B710; } }
    c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_0037B6F4; } }
    c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B70C; } }
L_0037B6F4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_0037B794; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B70C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B794; } }
L_0037B70C:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0037B710:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0037B744; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_0037B72C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B744; } }
L_0037B72C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 42u);  if (t) { goto L_0037B744; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 35u);  if (t) { goto L_0037B744; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0037B794; } }
L_0037B744:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 80u));
    set32(c.r[7], ld32((c.r[5].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B764u); set32(c.r[5], c.r[29].w[0] + 76u);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037A310u; return; } if (c.pc != 0x0037B764u) [[unlikely]] return; }
L_0037B764:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[18], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0037B77C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_0037B78C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037B78C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B794u);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B794u) [[unlikely]] return; }
L_0037B794:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B798:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0037B7B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B7D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7D4u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037B7D4u) [[unlikely]] return; }
L_0037B7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7DCu);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037B7DCu) [[unlikely]] return; }
L_0037B7DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B7E4u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037B7E4u) [[unlikely]] return; }
L_0037B7E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[4].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_0037B894; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 24176u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 79u));
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] - 10u);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B820u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0037B820u) [[unlikely]] return; }
L_0037B820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 44u);
    set32(c.r[5], c.r[2].w[0] - 13408u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B838u); st8((c.r[29].w[0] + 46u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0037B838u) [[unlikely]] return; }
L_0037B838:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B9A0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 77u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 113u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B85Cu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037A310u; return; } if (c.pc != 0x0037B85Cu) [[unlikely]] return; }
L_0037B85C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 77u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 81u));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037B9D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B88Cu); set32(c.r[4], ld32((c.r[28].w[0] - 27112u)));  if (depth < kMaxDepth) unit_009E(c, 246u, depth + 1u); else { c.pc = 0x0037A3D0u; return; } if (c.pc != 0x0037B88Cu) [[unlikely]] return; }
L_0037B88C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B9D4; } }
L_0037B894:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037B9EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[3], c.r[28].w[0] - 27128u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 79u));
    set32(c.r[4], ld32((c.r[28].w[0] - 27100u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0] - 10u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B8C8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 27u, depth + 1u); else { c.pc = 0x00118488u; return; } if (c.pc != 0x0037B8C8u) [[unlikely]] return; }
L_0037B8C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[4].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 8ull;  if (t) { goto L_0037B8FC; } }
    c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;  if (t) { goto L_0037B9EC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0037B9F0; } }
L_0037B8F8:
    c.r[3].d[0] = c.r[4].d[0] & 8ull;
    c.budget -= 1;
L_0037B8FC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 16ull;  if (t) { goto L_0037B928; } }
    c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_0037B91C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B924; } }
L_0037B91C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0037B9EC; } }
L_0037B924:
    c.r[3].d[0] = c.r[4].d[0] & 16ull;
    c.budget -= 1;
L_0037B928:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[4].d[0] & 64ull;  if (t) { goto L_0037B964; } }
    c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[16].sd[0] < 65ll ? 1ull : 0ull;  if (t) { goto L_0037B948; } }
    c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B960; } }
L_0037B948:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 91ll ? 1ull : 0ull;  if (t) { goto L_0037B9EC; } }
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037B9EC; } }
L_0037B960:
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 1;
L_0037B964:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[16].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_0037B998; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 45u);  if (t) { goto L_0037B980; } }
    c.r[1].d[0] = c.r[16].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0037B998; } }
L_0037B980:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 42u);  if (t) { goto L_0037B998; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 35u);  if (t) { goto L_0037B998; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[3].d[0];  if (t) { goto L_0037B9EC; } }
L_0037B998:
    st8((c.r[29].w[0] + 44u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st8((c.r[29].w[0] + 45u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037B9A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    c.r[6].d[0] = ld8((c.r[3].w[0] + 80u));
    set32(c.r[7], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9BCu); set32(c.r[5], c.r[29].w[0] + 44u);  if (depth < kMaxDepth) unit_009E(c, 239u, depth + 1u); else { c.pc = 0x0037A310u; return; } if (c.pc != 0x0037B9BCu) [[unlikely]] return; }
L_0037B9BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
L_0037B9D4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0037B9E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[2].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_0037B9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037B9ECu);  if (depth < kMaxDepth) unit_009F(c, 203u, depth + 1u); else { c.pc = 0x0037D9F0u; return; } if (c.pc != 0x0037B9ECu) [[unlikely]] return; }
L_0037B9EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037B9F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0037BA00:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 76u));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BA30; } }
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BBFC; } }
L_0037BA30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 112u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BBFC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0037BBFC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 1u);  if (t) { goto L_0037BA6C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_0037BA74; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0037BA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 120u)));  if (t) { goto L_0037BA88; } }
L_0037BA74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 108u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 120u)));
    c.budget -= 5;
L_0037BA88:
    c.r[18].d[0] = c.r[2].d[0] << 56;
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 121u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[16], c.r[2].w[0] + 32592u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);
    set32(c.r[2], c.r[2].w[0] + 32592u);
    c.r[3].d[0] = c.hi.d[0];
    st8((c.r[6].w[0] + 120u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 122u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 120u)));
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BADCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 121u, depth + 1u); else { c.pc = 0x001C90A0u; return; } if (c.pc != 0x0037BADCu) [[unlikely]] return; }
L_0037BADC:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0037BAE8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 404u)));
    c.budget -= 5;
    if (c.r[4].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_0037BB9C; }
    set32(c.r[6], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] == c.r[2].d[0];  if (t) { goto L_0037BB98; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BB98; } }
    c.r[2].d[0] = c.r[4].d[0] << 56;
    c.r[3].d[0] = c.r[5].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0037BB98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 120u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 121u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[6].w[0] + 120u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 122u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BB8Cu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0032(c, 121u, depth + 1u); else { c.pc = 0x001C90A0u; return; } if (c.pc != 0x0037BB8Cu) [[unlikely]] return; }
L_0037BB8C:
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
L_0037BB98:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_0037BB9C:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0037BAE8u | kUnwind; return; } goto L_0037BAE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 122u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 120u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBD0u); set32(c.r[5], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0037BBD0u) [[unlikely]] return; }
L_0037BBD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30912u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BBE4u); st8((c.r[1].w[0] + 30784u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0037BBE4u) [[unlikely]] return; }
L_0037BBE4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0037BBFC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0037BC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0037BC48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BC40u);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037BC40u) [[unlikely]] return; }
L_0037BC40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BC58; } }
L_0037BC48:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    set32(c.r[4], 0u + 1u);
    st32((c.r[3].w[0] + 4u), c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
L_0037BC58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BC60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 76u);  if (t) { goto L_0037BC88; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 78u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0037BCC8; } }
L_0037BC88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_0037BCC4; } }
    st8((c.r[5].w[0] + 78u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30784u);
    set32(c.r[6], 0u + 128u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BCB8u); st8((c.r[3].w[0] + 77u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0037BCB8u) [[unlikely]] return; }
L_0037BCB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BCCC; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_0037BCC4:
    st32((c.r[5].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 1;
L_0037BCC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037BCCC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BCE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0037BD0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD00u);  if (depth < kMaxDepth) unit_009E(c, 223u, depth + 1u); else { c.pc = 0x00379FF0u; return; } if (c.pc != 0x0037BD00u) [[unlikely]] return; }
L_0037BD00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BD1C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0037BD0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD14u);  if (depth < kMaxDepth) unit_009E(c, 372u, depth + 1u); else { c.pc = 0x0037B350u; return; } if (c.pc != 0x0037BD14u) [[unlikely]] return; }
L_0037BD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BD84; } }
L_0037BD1C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BD58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 77u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD40u); set32(c.r[4], c.r[2].w[0] + 30784u);  if (depth < kMaxDepth) unit_009E(c, 251u, depth + 1u); else { c.pc = 0x0037A510u; return; } if (c.pc != 0x0037BD40u) [[unlikely]] return; }
L_0037BD40:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 77u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 77u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0037BD80; } }
L_0037BD58:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 80u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BD6Cu); set32(c.r[4], c.r[2].w[0] + 30912u);  if (depth < kMaxDepth) unit_009E(c, 251u, depth + 1u); else { c.pc = 0x0037A510u; return; } if (c.pc != 0x0037BD6Cu) [[unlikely]] return; }
L_0037BD6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24824u)));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.r[3].d[0] = ld8((c.r[4].w[0] + 80u));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0037BD80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037BD84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BD90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BDE0; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BDD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { goto L_0037BDFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDC8u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037BDC8u) [[unlikely]] return; }
L_0037BDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BE00; } }
L_0037BDD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDD8u);  if (depth < kMaxDepth) unit_009E(c, 322u, depth + 1u); else { c.pc = 0x0037ADA0u; return; } if (c.pc != 0x0037BDD8u) [[unlikely]] return; }
L_0037BDD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0037BDFC; } }
L_0037BDE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 30400u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BDF4u); set32(c.r[5], c.r[2].w[0] + 30272u);  if (depth < kMaxDepth) unit_002F(c, 51u, depth + 1u); else { c.pc = 0x001BC730u; return; } if (c.pc != 0x0037BDF4u) [[unlikely]] return; }
L_0037BDF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    st32((c.r[3].w[0] + 88u), c.r[2].w[0]);
    c.budget -= 2;
L_0037BDFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037BE00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BE10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BE50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE30u);  if (depth < kMaxDepth) unit_009E(c, 228u, depth + 1u); else { c.pc = 0x0037A070u; return; } if (c.pc != 0x0037BE30u) [[unlikely]] return; }
L_0037BE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE40u);  if (depth < kMaxDepth) unit_009E(c, 355u, depth + 1u); else { c.pc = 0x0037B1B0u; return; } if (c.pc != 0x0037BE40u) [[unlikely]] return; }
L_0037BE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BE54; } }
L_0037BE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE50u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037BE50u) [[unlikely]] return; }
L_0037BE50:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037BE54:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BE60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 76u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BEA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE80u);  if (depth < kMaxDepth) unit_009E(c, 228u, depth + 1u); else { c.pc = 0x0037A070u; return; } if (c.pc != 0x0037BE80u) [[unlikely]] return; }
L_0037BE80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BE98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BE90u);  if (depth < kMaxDepth) unit_009E(c, 361u, depth + 1u); else { c.pc = 0x0037B220u; return; } if (c.pc != 0x0037BE90u) [[unlikely]] return; }
L_0037BE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BEA4; } }
L_0037BE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEA0u);  if (depth < kMaxDepth) unit_009E(c, 378u, depth + 1u); else { c.pc = 0x0037B450u; return; } if (c.pc != 0x0037BEA0u) [[unlikely]] return; }
L_0037BEA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037BEA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0037BF3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BED4u);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037BED4u) [[unlikely]] return; }
L_0037BED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BF04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEE4u);  if (depth < kMaxDepth) unit_009E(c, 227u, depth + 1u); else { c.pc = 0x0037A050u; return; } if (c.pc != 0x0037BEE4u) [[unlikely]] return; }
L_0037BEE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037BEECu) [[unlikely]] return; }
L_0037BEEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEF4u);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x0037BEF4u) [[unlikely]] return; }
L_0037BEF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BEFCu);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x0037BEFCu) [[unlikely]] return; }
L_0037BEFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0037BF40; } }
L_0037BF04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] + 30784u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0037BF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF1Cu);  if (depth < kMaxDepth) unit_009E(c, 345u, depth + 1u); else { c.pc = 0x0037B080u; return; } if (c.pc != 0x0037BF1Cu) [[unlikely]] return; }
L_0037BF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF24u);  if (depth < kMaxDepth) unit_009E(c, 227u, depth + 1u); else { c.pc = 0x0037A050u; return; } if (c.pc != 0x0037BF24u) [[unlikely]] return; }
L_0037BF24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF2Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037BF2Cu) [[unlikely]] return; }
L_0037BF2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF34u);  if (depth < kMaxDepth) unit_009F(c, 213u, depth + 1u); else { c.pc = 0x0037DB50u; return; } if (c.pc != 0x0037BF34u) [[unlikely]] return; }
L_0037BF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF3Cu);  if (depth < kMaxDepth) unit_009F(c, 205u, depth + 1u); else { c.pc = 0x0037DA30u; return; } if (c.pc != 0x0037BF3Cu) [[unlikely]] return; }
L_0037BF3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0037BF40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0037BF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009E(c, 224u, depth + 1u); else { c.pc = 0x0037A000u; return; } if (c.pc != 0x0037BF60u) [[unlikely]] return; }
L_0037BF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF68u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 226u, depth + 1u); else { c.pc = 0x0037A040u; return; } if (c.pc != 0x0037BF68u) [[unlikely]] return; }
L_0037BF68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0037BFC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BF78u);  if (depth < kMaxDepth) unit_009E(c, 222u, depth + 1u); else { c.pc = 0x00379FE0u; return; } if (c.pc != 0x0037BF78u) [[unlikely]] return; }
L_0037BF78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 5u, depth); } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24824u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 74u));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 5u, depth); } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { goto L_0037BFB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFA8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037BFA8u) [[unlikely]] return; }
L_0037BFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 3u, depth); } }
L_0037BFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFB8u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037BFB8u) [[unlikely]] return; }
L_0037BFB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 3u, depth); } }
L_0037BFC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFC8u);  if (depth < kMaxDepth) unit_009E(c, 222u, depth + 1u); else { c.pc = 0x00379FE0u; return; } if (c.pc != 0x0037BFC8u) [[unlikely]] return; }
L_0037BFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0037BFF0; } }
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 5u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037BFE4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037BFE4u) [[unlikely]] return; }
L_0037BFE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_009F(c, 3u, depth); } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0037BFF0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[4].d[0];  if (t) { [[clang::musttail]] return unit_009F(c, 2u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0037C000u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009E(c, 225u, depth + 1u); else { c.pc = 0x0037A010u; return; } if (c.pc != 0x0037C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_009F(c, 1u, depth);
}

}
