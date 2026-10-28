#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_007E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13,
    0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0,
    22, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 38,
    0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0,
    0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0,
    153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0,
    0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0,
    0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0,
    0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0,
    0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0,
    0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352,
    0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0,
    0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0,
    390, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397,
    0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442,
    0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
};

void unit_007E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002F8000;
    case 2u: goto L_002F801C;
    case 3u: goto L_002F8024;
    case 4u: goto L_002F8034;
    case 5u: goto L_002F803C;
    case 6u: goto L_002F8044;
    case 7u: goto L_002F804C;
    case 8u: goto L_002F8054;
    case 9u: goto L_002F805C;
    case 10u: goto L_002F8064;
    case 11u: goto L_002F806C;
    case 12u: goto L_002F8074;
    case 13u: goto L_002F807C;
    case 14u: goto L_002F808C;
    case 15u: goto L_002F809C;
    case 16u: goto L_002F80A4;
    case 17u: goto L_002F80AC;
    case 18u: goto L_002F80B4;
    case 19u: goto L_002F80E0;
    case 20u: goto L_002F80E8;
    case 21u: goto L_002F80F8;
    case 22u: goto L_002F8100;
    case 23u: goto L_002F8108;
    case 24u: goto L_002F8110;
    case 25u: goto L_002F8118;
    case 26u: goto L_002F8140;
    case 27u: goto L_002F8174;
    case 28u: goto L_002F819C;
    case 29u: goto L_002F81B4;
    case 30u: goto L_002F81BC;
    case 31u: goto L_002F81C8;
    case 32u: goto L_002F81D8;
    case 33u: goto L_002F81F0;
    case 34u: goto L_002F8230;
    case 35u: goto L_002F825C;
    case 36u: goto L_002F826C;
    case 37u: goto L_002F8274;
    case 38u: goto L_002F827C;
    case 39u: goto L_002F8284;
    case 40u: goto L_002F8294;
    case 41u: goto L_002F82A4;
    case 42u: goto L_002F82AC;
    case 43u: goto L_002F82B4;
    case 44u: goto L_002F82D0;
    case 45u: goto L_002F830C;
    case 46u: goto L_002F8334;
    case 47u: goto L_002F833C;
    case 48u: goto L_002F8370;
    case 49u: goto L_002F83A0;
    case 50u: goto L_002F83AC;
    case 51u: goto L_002F83D0;
    case 52u: goto L_002F83F0;
    case 53u: goto L_002F83F8;
    case 54u: goto L_002F8424;
    case 55u: goto L_002F8434;
    case 56u: goto L_002F843C;
    case 57u: goto L_002F84B4;
    case 58u: goto L_002F84E0;
    case 59u: goto L_002F8500;
    case 60u: goto L_002F852C;
    case 61u: goto L_002F8588;
    case 62u: goto L_002F85A0;
    case 63u: goto L_002F85C0;
    case 64u: goto L_002F85E0;
    case 65u: goto L_002F8648;
    case 66u: goto L_002F8654;
    case 67u: goto L_002F866C;
    case 68u: goto L_002F8680;
    case 69u: goto L_002F868C;
    case 70u: goto L_002F86D8;
    case 71u: goto L_002F86F0;
    case 72u: goto L_002F8710;
    case 73u: goto L_002F877C;
    case 74u: goto L_002F883C;
    case 75u: goto L_002F8860;
    case 76u: goto L_002F8870;
    case 77u: goto L_002F8880;
    case 78u: goto L_002F88B4;
    case 79u: goto L_002F8908;
    case 80u: goto L_002F8920;
    case 81u: goto L_002F8940;
    case 82u: goto L_002F8960;
    case 83u: goto L_002F89B4;
    case 84u: goto L_002F89CC;
    case 85u: goto L_002F89D4;
    case 86u: goto L_002F89F0;
    case 87u: goto L_002F8A14;
    case 88u: goto L_002F8A1C;
    case 89u: goto L_002F8A24;
    case 90u: goto L_002F8A2C;
    case 91u: goto L_002F8A74;
    case 92u: goto L_002F8A84;
    case 93u: goto L_002F8A94;
    case 94u: goto L_002F8AA0;
    case 95u: goto L_002F8AB8;
    case 96u: goto L_002F8AC0;
    case 97u: goto L_002F8AE0;
    case 98u: goto L_002F8B8C;
    case 99u: goto L_002F8BB4;
    case 100u: goto L_002F8C48;
    case 101u: goto L_002F8C58;
    case 102u: goto L_002F8C6C;
    case 103u: goto L_002F8CB4;
    case 104u: goto L_002F8CC8;
    case 105u: goto L_002F8CE8;
    case 106u: goto L_002F8D08;
    case 107u: goto L_002F8D14;
    case 108u: goto L_002F8D78;
    case 109u: goto L_002F8D88;
    case 110u: goto L_002F8D90;
    case 111u: goto L_002F8D98;
    case 112u: goto L_002F8DC0;
    case 113u: goto L_002F8DD0;
    case 114u: goto L_002F8DE0;
    case 115u: goto L_002F8E14;
    case 116u: goto L_002F8E68;
    case 117u: goto L_002F8E80;
    case 118u: goto L_002F8EA0;
    case 119u: goto L_002F8EC0;
    case 120u: goto L_002F8EF8;
    case 121u: goto L_002F8F18;
    case 122u: goto L_002F8F30;
    case 123u: goto L_002F8F4C;
    case 124u: goto L_002F8F5C;
    case 125u: goto L_002F8F64;
    case 126u: goto L_002F8F6C;
    case 127u: goto L_002F8FA0;
    case 128u: goto L_002F8FC0;
    case 129u: goto L_002F8FF4;
    case 130u: goto L_002F904C;
    case 131u: goto L_002F9064;
    case 132u: goto L_002F90D8;
    case 133u: goto L_002F9238;
    case 134u: goto L_002F9244;
    case 135u: goto L_002F9288;
    case 136u: goto L_002F9298;
    case 137u: goto L_002F92A0;
    case 138u: goto L_002F92C0;
    case 139u: goto L_002F92D0;
    case 140u: goto L_002F92E0;
    case 141u: goto L_002F9314;
    case 142u: goto L_002F936C;
    case 143u: goto L_002F9384;
    case 144u: goto L_002F93A0;
    case 145u: goto L_002F93C0;
    case 146u: goto L_002F941C;
    case 147u: goto L_002F9430;
    case 148u: goto L_002F9438;
    case 149u: goto L_002F9454;
    case 150u: goto L_002F945C;
    case 151u: goto L_002F9464;
    case 152u: goto L_002F9478;
    case 153u: goto L_002F9480;
    case 154u: goto L_002F949C;
    case 155u: goto L_002F94AC;
    case 156u: goto L_002F94BC;
    case 157u: goto L_002F94C8;
    case 158u: goto L_002F94E0;
    case 159u: goto L_002F9500;
    case 160u: goto L_002F9590;
    case 161u: goto L_002F95D4;
    case 162u: goto L_002F95DC;
    case 163u: goto L_002F95F4;
    case 164u: goto L_002F9608;
    case 165u: goto L_002F9650;
    case 166u: goto L_002F9664;
    case 167u: goto L_002F9684;
    case 168u: goto L_002F96A4;
    case 169u: goto L_002F96B0;
    case 170u: goto L_002F96F4;
    case 171u: goto L_002F9704;
    case 172u: goto L_002F970C;
    case 173u: goto L_002F9714;
    case 174u: goto L_002F9740;
    case 175u: goto L_002F9750;
    case 176u: goto L_002F9760;
    case 177u: goto L_002F978C;
    case 178u: goto L_002F97E0;
    case 179u: goto L_002F9818;
    case 180u: goto L_002F9850;
    case 181u: goto L_002F9870;
    case 182u: goto L_002F9890;
    case 183u: goto L_002F98B0;
    case 184u: goto L_002F9974;
    case 185u: goto L_002F9988;
    case 186u: goto L_002F99D8;
    case 187u: goto L_002F99EC;
    case 188u: goto L_002F99F8;
    case 189u: goto L_002F9A04;
    case 190u: goto L_002F9A0C;
    case 191u: goto L_002F9A14;
    case 192u: goto L_002F9A1C;
    case 193u: goto L_002F9A24;
    case 194u: goto L_002F9A2C;
    case 195u: goto L_002F9A34;
    case 196u: goto L_002F9A50;
    case 197u: goto L_002F9A68;
    case 198u: goto L_002F9A78;
    case 199u: goto L_002F9A84;
    case 200u: goto L_002F9AC4;
    case 201u: goto L_002F9AD8;
    case 202u: goto L_002F9B4C;
    case 203u: goto L_002F9B70;
    case 204u: goto L_002F9C9C;
    case 205u: goto L_002F9CC4;
    case 206u: goto L_002F9D44;
    case 207u: goto L_002F9D4C;
    case 208u: goto L_002F9D70;
    case 209u: goto L_002F9D8C;
    case 210u: goto L_002F9DA0;
    case 211u: goto L_002F9DE4;
    case 212u: goto L_002F9DF8;
    case 213u: goto L_002F9E18;
    case 214u: goto L_002F9E38;
    case 215u: goto L_002F9E44;
    case 216u: goto L_002F9E88;
    case 217u: goto L_002F9E98;
    case 218u: goto L_002F9EA0;
    case 219u: goto L_002F9EA8;
    case 220u: goto L_002F9ED0;
    case 221u: goto L_002F9EE0;
    case 222u: goto L_002F9EF0;
    case 223u: goto L_002F9F14;
    case 224u: goto L_002F9F70;
    case 225u: goto L_002F9F88;
    case 226u: goto L_002F9FE8;
    case 227u: goto L_002FA010;
    case 228u: goto L_002FA040;
    case 229u: goto L_002FA070;
    case 230u: goto L_002FA0CC;
    case 231u: goto L_002FA0E4;
    case 232u: goto L_002FA160;
    case 233u: goto L_002FA1DC;
    case 234u: goto L_002FA1F0;
    case 235u: goto L_002FA258;
    case 236u: goto L_002FA26C;
    case 237u: goto L_002FA290;
    case 238u: goto L_002FA2D0;
    case 239u: goto L_002FA2E0;
    case 240u: goto L_002FA314;
    case 241u: goto L_002FA380;
    case 242u: goto L_002FA3A0;
    case 243u: goto L_002FA3D0;
    case 244u: goto L_002FA400;
    case 245u: goto L_002FA424;
    case 246u: goto L_002FA430;
    case 247u: goto L_002FA4A0;
    case 248u: goto L_002FA4C4;
    case 249u: goto L_002FA4CC;
    case 250u: goto L_002FA4D4;
    case 251u: goto L_002FA4DC;
    case 252u: goto L_002FA510;
    case 253u: goto L_002FA548;
    case 254u: goto L_002FA56C;
    case 255u: goto L_002FA594;
    case 256u: goto L_002FA59C;
    case 257u: goto L_002FA5A4;
    case 258u: goto L_002FA5AC;
    case 259u: goto L_002FA610;
    case 260u: goto L_002FA620;
    case 261u: goto L_002FA62C;
    case 262u: goto L_002FA63C;
    case 263u: goto L_002FA654;
    case 264u: goto L_002FA664;
    case 265u: goto L_002FA66C;
    case 266u: goto L_002FA678;
    case 267u: goto L_002FA69C;
    case 268u: goto L_002FA720;
    case 269u: goto L_002FA730;
    case 270u: goto L_002FA738;
    case 271u: goto L_002FA744;
    case 272u: goto L_002FA758;
    case 273u: goto L_002FA768;
    case 274u: goto L_002FA770;
    case 275u: goto L_002FA784;
    case 276u: goto L_002FA78C;
    case 277u: goto L_002FA798;
    case 278u: goto L_002FA7A0;
    case 279u: goto L_002FA7A8;
    case 280u: goto L_002FA7E0;
    case 281u: goto L_002FA824;
    case 282u: goto L_002FA84C;
    case 283u: goto L_002FA854;
    case 284u: goto L_002FA85C;
    case 285u: goto L_002FA864;
    case 286u: goto L_002FA890;
    case 287u: goto L_002FA914;
    case 288u: goto L_002FA938;
    case 289u: goto L_002FA94C;
    case 290u: goto L_002FA960;
    case 291u: goto L_002FA96C;
    case 292u: goto L_002FA974;
    case 293u: goto L_002FA984;
    case 294u: goto L_002FA98C;
    case 295u: goto L_002FA998;
    case 296u: goto L_002FA9AC;
    case 297u: goto L_002FA9BC;
    case 298u: goto L_002FA9C4;
    case 299u: goto L_002FA9D8;
    case 300u: goto L_002FA9E0;
    case 301u: goto L_002FAA0C;
    case 302u: goto L_002FAAB8;
    case 303u: goto L_002FAAE0;
    case 304u: goto L_002FAB04;
    case 305u: goto L_002FAB5C;
    case 306u: goto L_002FAB68;
    case 307u: goto L_002FAB7C;
    case 308u: goto L_002FAC00;
    case 309u: goto L_002FAC10;
    case 310u: goto L_002FAC18;
    case 311u: goto L_002FAC28;
    case 312u: goto L_002FAC40;
    case 313u: goto L_002FAC64;
    case 314u: goto L_002FACBC;
    case 315u: goto L_002FACF4;
    case 316u: goto L_002FAD04;
    case 317u: goto L_002FAD0C;
    case 318u: goto L_002FAD1C;
    case 319u: goto L_002FAD30;
    case 320u: goto L_002FAD3C;
    case 321u: goto L_002FADBC;
    case 322u: goto L_002FADF0;
    case 323u: goto L_002FAEA4;
    case 324u: goto L_002FAEAC;
    case 325u: goto L_002FAEE0;
    case 326u: goto L_002FAEF4;
    case 327u: goto L_002FAF18;
    case 328u: goto L_002FAF40;
    case 329u: goto L_002FAF6C;
    case 330u: goto L_002FAFCC;
    case 331u: goto L_002FAFDC;
    case 332u: goto L_002FAFE4;
    case 333u: goto L_002FB014;
    case 334u: goto L_002FB030;
    case 335u: goto L_002FB088;
    case 336u: goto L_002FB094;
    case 337u: goto L_002FB0A8;
    case 338u: goto L_002FB114;
    case 339u: goto L_002FB11C;
    case 340u: goto L_002FB12C;
    case 341u: goto L_002FB150;
    case 342u: goto L_002FB1B8;
    case 343u: goto L_002FB20C;
    case 344u: goto L_002FB214;
    case 345u: goto L_002FB224;
    case 346u: goto L_002FB238;
    case 347u: goto L_002FB25C;
    case 348u: goto L_002FB270;
    case 349u: goto L_002FB27C;
    case 350u: goto L_002FB2DC;
    case 351u: goto L_002FB2F0;
    case 352u: goto L_002FB2FC;
    case 353u: goto L_002FB308;
    case 354u: goto L_002FB320;
    case 355u: goto L_002FB32C;
    case 356u: goto L_002FB338;
    case 357u: goto L_002FB340;
    case 358u: goto L_002FB348;
    case 359u: goto L_002FB358;
    case 360u: goto L_002FB364;
    case 361u: goto L_002FB36C;
    case 362u: goto L_002FB380;
    case 363u: goto L_002FB3A4;
    case 364u: goto L_002FB428;
    case 365u: goto L_002FB438;
    case 366u: goto L_002FB440;
    case 367u: goto L_002FB44C;
    case 368u: goto L_002FB460;
    case 369u: goto L_002FB470;
    case 370u: goto L_002FB478;
    case 371u: goto L_002FB48C;
    case 372u: goto L_002FB494;
    case 373u: goto L_002FB4A8;
    case 374u: goto L_002FB4BC;
    case 375u: goto L_002FB500;
    case 376u: goto L_002FB510;
    case 377u: goto L_002FB520;
    case 378u: goto L_002FB538;
    case 379u: goto L_002FB540;
    case 380u: goto L_002FB548;
    case 381u: goto L_002FB560;
    case 382u: goto L_002FB590;
    case 383u: goto L_002FB59C;
    case 384u: goto L_002FB5A8;
    case 385u: goto L_002FB5BC;
    case 386u: goto L_002FB5D0;
    case 387u: goto L_002FB5E0;
    case 388u: goto L_002FB5F0;
    case 389u: goto L_002FB5F8;
    case 390u: goto L_002FB600;
    case 391u: goto L_002FB60C;
    case 392u: goto L_002FB61C;
    case 393u: goto L_002FB640;
    case 394u: goto L_002FB674;
    case 395u: goto L_002FB69C;
    case 396u: goto L_002FB6F4;
    case 397u: goto L_002FB6FC;
    case 398u: goto L_002FB704;
    case 399u: goto L_002FB710;
    case 400u: goto L_002FB718;
    case 401u: goto L_002FB740;
    case 402u: goto L_002FB7C4;
    case 403u: goto L_002FB7D4;
    case 404u: goto L_002FB7DC;
    case 405u: goto L_002FB840;
    case 406u: goto L_002FB8A4;
    case 407u: goto L_002FB8B0;
    case 408u: goto L_002FB8BC;
    case 409u: goto L_002FB8F0;
    case 410u: goto L_002FB91C;
    case 411u: goto L_002FB980;
    case 412u: goto L_002FB9A0;
    case 413u: goto L_002FB9D0;
    case 414u: goto L_002FBAA0;
    case 415u: goto L_002FBAB4;
    case 416u: goto L_002FBAD0;
    case 417u: goto L_002FBB8C;
    case 418u: goto L_002FBBA0;
    case 419u: goto L_002FBBC0;
    case 420u: goto L_002FBC00;
    case 421u: goto L_002FBC3C;
    case 422u: goto L_002FBC5C;
    case 423u: goto L_002FBC70;
    case 424u: goto L_002FBC90;
    case 425u: goto L_002FBCA4;
    case 426u: goto L_002FBCC0;
    case 427u: goto L_002FBCE0;
    case 428u: goto L_002FBD30;
    case 429u: goto L_002FBDC8;
    case 430u: goto L_002FBDDC;
    case 431u: goto L_002FBE04;
    case 432u: goto L_002FBE14;
    case 433u: goto L_002FBE48;
    case 434u: goto L_002FBE50;
    case 435u: goto L_002FBE58;
    case 436u: goto L_002FBE64;
    case 437u: goto L_002FBE6C;
    case 438u: goto L_002FBE98;
    case 439u: goto L_002FBEAC;
    case 440u: goto L_002FBECC;
    case 441u: goto L_002FBEE0;
    case 442u: goto L_002FBEFC;
    case 443u: goto L_002FBF20;
    case 444u: goto L_002FBF70;
    case 445u: goto L_002FBFB8;
    case 446u: goto L_002FBFEC;
    default: bad_entry(c, 0x002F8000u); return;
    }
L_002F8000:
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F801Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F801Cu) [[unlikely]] return; }
L_002F801C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8024u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F8024u) [[unlikely]] return; }
L_002F8024:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8034u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F8034u) [[unlikely]] return; }
L_002F8034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F803Cu); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F803Cu) [[unlikely]] return; }
L_002F803C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8044u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F8044u) [[unlikely]] return; }
L_002F8044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F804Cu); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F804Cu) [[unlikely]] return; }
L_002F804C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8054u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F8054u) [[unlikely]] return; }
L_002F8054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F811C; } }
L_002F805C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8064u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F8064u) [[unlikely]] return; }
L_002F8064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F806Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F806Cu) [[unlikely]] return; }
L_002F806C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8074u); set32(c.r[4], c.r[17].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F8074u) [[unlikely]] return; }
L_002F8074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F807Cu); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x002F807Cu) [[unlikely]] return; }
L_002F807C:
    c.f[21] = ld32((c.r[17].w[0] + 2676u));
    c.f[22] = ld32((c.r[17].w[0] + 2680u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F808Cu); c.f[20] = ld32((c.r[17].w[0] + 2672u));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F808Cu) [[unlikely]] return; }
L_002F808C:
    c.f[12] = c.f[20];
    c.f[13] = c.f[21];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F809Cu); c.f[14] = c.f[22];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F809Cu) [[unlikely]] return; }
L_002F809C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80A4u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F80A4u) [[unlikely]] return; }
L_002F80A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80ACu); set32(c.r[4], 0u + 8192u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F80ACu) [[unlikely]] return; }
L_002F80AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80B4u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F80B4u) [[unlikely]] return; }
L_002F80B4:
    st32((c.r[29].w[0] + 80u), 0u);
    st32((c.r[29].w[0] + 84u), 0u);
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80E0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F80E0u) [[unlikely]] return; }
L_002F80E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80E8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F80E8u) [[unlikely]] return; }
L_002F80E8:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F80F8u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F80F8u) [[unlikely]] return; }
L_002F80F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8100u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F8100u) [[unlikely]] return; }
L_002F8100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8108u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F8108u) [[unlikely]] return; }
L_002F8108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8110u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F8110u) [[unlikely]] return; }
L_002F8110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8118u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F8118u) [[unlikely]] return; }
L_002F8118:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F811C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[22] = ld32((c.r[29].w[0] + 8u));
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002F8140:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002F81D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F81D0; } }
    set32(c.r[16], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8174u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F8174u) [[unlikely]] return; }
L_002F8174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F819Cu);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F819Cu) [[unlikely]] return; }
L_002F819C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFC80000u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81B4u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F81B4u) [[unlikely]] return; }
L_002F81B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81BCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F81BCu) [[unlikely]] return; }
L_002F81BC:
    set32(c.r[5], ld32((c.r[17].w[0] + 188u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 92u, depth + 1u); else { c.pc = 0x0016DB00u; return; } if (c.pc != 0x002F81C8u) [[unlikely]] return; }
L_002F81C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002F81DC; } }
L_002F81D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F81D8u);  if (depth < kMaxDepth) unit_0081(c, 136u, depth + 1u); else { c.pc = 0x00306190u; return; } if (c.pc != 0x002F81D8u) [[unlikely]] return; }
L_002F81D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F81DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F81F0:
    c.f[1] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 56u));
    c.f[0] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.f[0]);  c.pc = t; return; }
L_002F8230:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002F828C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F825Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F825Cu) [[unlikely]] return; }
L_002F825C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F826Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F826Cu) [[unlikely]] return; }
L_002F826C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8274u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F8274u) [[unlikely]] return; }
L_002F8274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F827Cu); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F827Cu) [[unlikely]] return; }
L_002F827C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8284u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F8284u) [[unlikely]] return; }
L_002F8284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002F82B8; } }
L_002F828C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8294u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F8294u) [[unlikely]] return; }
L_002F8294:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82A4u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F82A4u) [[unlikely]] return; }
L_002F82A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82ACu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F82ACu) [[unlikely]] return; }
L_002F82AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F82B4u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F82B4u) [[unlikely]] return; }
L_002F82B4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F82B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F82D0:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    mmi::paddub(c.r[22], c.r[4], c.r[0]);
    set32(c.r[17], c.r[22].w[0] + 320u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F830Cu); set32(c.r[4], c.r[22].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F830Cu) [[unlikely]] return; }
L_002F830C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    set32(c.r[19], c.r[29].w[0] + 148u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    set32(c.r[21], c.r[29].w[0] + 152u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8334u); st32((c.r[21].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F8334u) [[unlikely]] return; }
L_002F8334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F833Cu); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F833Cu) [[unlikely]] return; }
L_002F833C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    set32(c.r[18], c.r[29].w[0] + 164u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    set32(c.r[20], c.r[29].w[0] + 168u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8370u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F8370u) [[unlikely]] return; }
L_002F8370:
    c.f[5] = ld32((c.r[29].w[0] + 144u));
    c.f[4] = ld32((c.r[29].w[0] + 160u));
    c.f[1] = ld32((c.r[21].w[0]));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[3] = ld32((c.r[19].w[0]));
    c.f[2] = ld32((c.r[18].w[0]));
    c.f[4] = fp::sub(c.f[5], c.f[4]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.facc = fp::mul(c.f[4], c.f[4]);
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83A0u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F83A0u) [[unlikely]] return; }
L_002F83A0:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83ACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002F83ACu) [[unlikely]] return; }
L_002F83AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 8u), c.f[0]);  if (t) { goto L_002F84B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83D0u); set32(c.r[4], c.r[22].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F83D0u) [[unlikely]] return; }
L_002F83D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC80000u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    st32((c.r[29].w[0] + 144u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 62915ull;
    st32((c.r[19].w[0]), c.r[2].w[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83F0u); st32((c.r[21].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F83F0u) [[unlikely]] return; }
L_002F83F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F83F8u); set32(c.r[4], c.r[16].w[0] + 2624u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F83F8u) [[unlikely]] return; }
L_002F83F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E800000u);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF330000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[20].w[0]), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8424u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F8424u) [[unlikely]] return; }
L_002F8424:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[29].w[0] + 160u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8434u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002F8434u) [[unlikely]] return; }
L_002F8434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F843Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002F843Cu) [[unlikely]] return; }
L_002F843C:
    c.f[2] = ld32((c.r[17].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    set32(c.r[2], c.r[29].w[0] + 180u);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[29].w[0] + 184u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    mmi::paddub(c.r[4], c.r[22], c.r[0]);
    st32((c.r[29].w[0] + 176u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[3].w[0]), c.f[0]);
    c.f[1] = ld32((c.r[22].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[1] = ld32((c.r[22].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[22].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[22].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F84B4u); st32((c.r[22].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_007E(c, 34u, depth + 1u); else { c.pc = 0x002F8230u; return; } if (c.pc != 0x002F84B4u) [[unlikely]] return; }
L_002F84B4:
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_002F84E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 420u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_002F84F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 100u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002F84F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));  c.pc = t; return; }
L_002F8500:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F852Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F852Cu) [[unlikely]] return; }
L_002F852C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F85A0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 25u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31296u);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 531u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8588u); st8((c.r[16].w[0] + 531u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F8588u) [[unlikely]] return; }
L_002F8588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F85A0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F85A0u) [[unlikely]] return; }
L_002F85A0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F85C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F85E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7120u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    st128((c.r[5].w[0]) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7104u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[3], 0u + 32u);
    set32(c.r[5], 0u + 62u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[2], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 26;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8648u); st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002F8648u) [[unlikely]] return; }
L_002F8648:
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8654u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F8654u) [[unlikely]] return; }
L_002F8654:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 64u);  if (t) { goto L_002F8678; } }
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F866Cu); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F866Cu) [[unlikely]] return; }
L_002F866C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[17].w[0] + 192u);  if (t) { goto L_002F8684; } }
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002F8678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8680u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F8680u) [[unlikely]] return; }
L_002F8680:
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 1;
L_002F8684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F868Cu);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F868Cu) [[unlikely]] return; }
L_002F868C:
    set32(c.r[2], 0u + 16384u);
    st32((c.r[17].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[4], 0u + 256u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBF000000u);
    set32(c.r[2], 0u + 30u);
    st32((c.r[17].w[0] + 84u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 88u), 0u);
    st32((c.r[17].w[0] + 92u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 48u), 0u);
    st32((c.r[17].w[0] + 52u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 56u), 0u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F86D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 71u, depth + 1u); else { c.pc = 0x002F86F0u; return; } if (c.pc != 0x002F86D8u) [[unlikely]] return; }
L_002F86D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F86F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002F8784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8710u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F8710u) [[unlikely]] return; }
L_002F8710:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8758; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2480000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8758; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8758; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F878C; } }
L_002F8758:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], 0u + 73u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F877Cu); st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002F877Cu) [[unlikely]] return; }
L_002F877C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 52u));  if (t) { goto L_002F8790; } }
L_002F8784:
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002F878C:
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.budget -= 1;
L_002F8790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC0000000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0xBCA30000u);  goto L_002F87B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_002F87CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCA30000u);
    c.budget -= 1;
L_002F87B8:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 5;
L_002F87CC:
    c.f[1] = ld32((c.r[16].w[0] + 48u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.r[4].d[0] = 0ull | 32768ull;
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 56u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 40u), c.f[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 80u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    c.r[2].d[0] = ld16((c.r[16].w[0] + 80u));
    st32((c.r[16].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 23;
    if (c.r[2].d[0] != 0ull) { mmi::paddub(c.r[4], c.r[16], c.r[0]);  goto L_002F8834; }
    st32((c.r[16].w[0] + 80u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 92u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002F8834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F883Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_005D(c, 694u, depth + 1u); else { c.pc = 0x002763B0u; return; } if (c.pc != 0x002F883Cu) [[unlikely]] return; }
L_002F883C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002F8860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F8870:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F8880:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F88B4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F88B4u) [[unlikely]] return; }
L_002F88B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F8920; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 26u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - 30400u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8908u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F8908u) [[unlikely]] return; }
L_002F8908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 82u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8920u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F8920u) [[unlikely]] return; }
L_002F8920:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F8940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 6928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F8960:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 32u);
    set32(c.r[3], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 150u);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89B4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F89B4u) [[unlikely]] return; }
L_002F89B4:
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89CCu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F89CCu) [[unlikely]] return; }
L_002F89CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F89D4u) [[unlikely]] return; }
L_002F89D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 7088u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F89F0u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F89F0u) [[unlikely]] return; }
L_002F89F0:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 144u), c.f[3]);
    st32((c.r[17].w[0] + 148u), c.f[2]);
    st32((c.r[17].w[0] + 152u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A14u); st32((c.r[17].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F8A14u) [[unlikely]] return; }
L_002F8A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F8A1Cu) [[unlikely]] return; }
L_002F8A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A24u); c.r[4].d[0] = 0ull | 49152ull;  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F8A24u) [[unlikely]] return; }
L_002F8A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F8A2Cu) [[unlikely]] return; }
L_002F8A2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_002F8A4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 64u), c.r[2].w[0]);  if (t) { goto L_002F8A58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_002F8A4C:
    st32((c.r[16].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[2], 0u + 180u);
    st16((c.r[16].w[0] + 68u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002F8A58:
    st32((c.r[29].w[0] + 48u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A74u); st32((c.r[29].w[0] + 56u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F8A74u) [[unlikely]] return; }
L_002F8A74:
    set32(c.r[6], 0u + 4096u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A84u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002F8A84u) [[unlikely]] return; }
L_002F8A84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002F8AA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8A94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F8A94u) [[unlikely]] return; }
L_002F8A94:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AA0u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F8AA0u) [[unlikely]] return; }
L_002F8AA0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002F8AA4:
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AB8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 136u, depth + 1u); else { c.pc = 0x00235AE0u; return; } if (c.pc != 0x002F8AB8u) [[unlikely]] return; }
L_002F8AB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8AC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 97u, depth + 1u); else { c.pc = 0x002F8AE0u; return; } if (c.pc != 0x002F8AC0u) [[unlikely]] return; }
L_002F8AC0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F8AE0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002F8BA8; } }
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8B70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F8B70; } }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8B70; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_002F8B84; } }
L_002F8B70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F8DA0; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002F8B84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8B8Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F8B8Cu) [[unlikely]] return; }
L_002F8B8C:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F8BFC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F8BFC; } }
L_002F8BA8:
    set32(c.r[4], c.r[4].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8BB4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F8BB4u) [[unlikely]] return; }
L_002F8BB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8BE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F8DA0; } }
L_002F8BE0:
    c.r[3].d[0] = ld16((c.r[16].w[0] + 68u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 68u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[16].w[0] + 68u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8BFC; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002F8BFC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F8C1C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8C1C; } }
    c.r[3].d[0] = ld8((c.r[18].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002F8C64; } }
L_002F8C1C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002F8DA0; } }
    set32(c.r[4], c.r[18].w[0] + 144u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C48u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_0046(c, 159u, depth + 1u); else { c.pc = 0x0021B030u; return; } if (c.pc != 0x002F8C48u) [[unlikely]] return; }
L_002F8C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8DA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C58u); set32(c.r[4], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_004A(c, 197u, depth + 1u); else { c.pc = 0x0022B140u; return; } if (c.pc != 0x002F8C58u) [[unlikely]] return; }
L_002F8C58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F8DA4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F8C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8C6Cu);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x002F8C6Cu) [[unlikely]] return; }
L_002F8C6C:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F8C7C; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002F8C7C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8D24; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002F8D20; }
    set32(c.r[2], 0u + 2u);
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CB4u); set32(c.r[4], ld32((c.r[18].w[0] + 520u)));  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002F8CB4u) [[unlikely]] return; }
L_002F8CB4:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CC8u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F8CC8u) [[unlikely]] return; }
L_002F8CC8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F8D24; } }
    set32(c.r[6], 0u + 128u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8CE8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002F8CE8u) [[unlikely]] return; }
L_002F8CE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F8D24; } }
    st32((c.r[29].w[0] + 80u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 64u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D08u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F8D08u) [[unlikely]] return; }
L_002F8D08:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D14u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F8D14u) [[unlikely]] return; }
L_002F8D14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[3] = ld32((c.r[18].w[0] + 32u));  if (t) { goto L_002F8D28; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002F8D20:
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F8D24:
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.budget -= 1;
L_002F8D28:
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[18].w[0] + 144u), c.f[3]);
    st32((c.r[18].w[0] + 148u), c.f[2]);
    st32((c.r[18].w[0] + 152u), c.f[1]);
    st32((c.r[18].w[0] + 156u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D78u); st32((c.r[18].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F8D78u) [[unlikely]] return; }
L_002F8D78:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D88u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F8D88u) [[unlikely]] return; }
L_002F8D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F8D90u) [[unlikely]] return; }
L_002F8D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8D98u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F8D98u) [[unlikely]] return; }
L_002F8D98:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F8DA0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F8DA4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002F8DC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F8DD0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F8DE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F8E14u) [[unlikely]] return; }
L_002F8E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F8E80; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 27u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29024u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E68u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F8E68u) [[unlikely]] return; }
L_002F8E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8E80u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F8E80u) [[unlikely]] return; }
L_002F8E80:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F8EA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 6832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F8EC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], 0u + 96u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8EF8u); st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F8EF8u) [[unlikely]] return; }
L_002F8EF8:
    c.r[2].d[0] = c.r[2].d[0] & 31ull;
    set32(c.r[2], c.r[2].w[0] + 400u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F18u); st8((c.r[17].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F8F18u) [[unlikely]] return; }
L_002F8F18:
    st32((c.r[17].w[0] + 80u), 0u);
    st32((c.r[17].w[0] + 84u), 0u);
    st32((c.r[17].w[0] + 88u), 0u);
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F30u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F8F30u) [[unlikely]] return; }
L_002F8F30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 6912u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F4Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F8F4Cu) [[unlikely]] return; }
L_002F8F4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    set32(c.r[2], 0u + 13107u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F5Cu); mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]); c.r[4].d[0] = c.lo.d[0];  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F8F5Cu) [[unlikely]] return; }
L_002F8F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F64u); c.r[4].d[0] = 0ull | 51200ull;  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F8F64u) [[unlikely]] return; }
L_002F8F64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8F6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F8F6Cu) [[unlikely]] return; }
L_002F8F6C:
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 52u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FA0u); st32((c.r[17].w[0] + 68u), 0u);  if (depth < kMaxDepth) unit_007E(c, 128u, depth + 1u); else { c.pc = 0x002F8FC0u; return; } if (c.pc != 0x002F8FA0u) [[unlikely]] return; }
L_002F8FA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002F8FC0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_002F900C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F8FF4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F8FF4u) [[unlikely]] return; }
L_002F8FF4:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F900C; } }
    set32(c.r[18], 0u + 1u);
    c.budget -= 1;
L_002F900C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_002F9038; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9038; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9038; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 1u);  if (t) { goto L_002F9070; } }
L_002F9038:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F904Cu); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F904Cu) [[unlikely]] return; }
L_002F904C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9064u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002F9064u) [[unlikely]] return; }
L_002F9064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F92AC; } }
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002F9070:
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002F9180; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002F9094; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 64u), 0u);  if (t) { goto L_002F921C; } }
L_002F9094:
    c.f[1] = ld32((c.r[16].w[0] + 84u));
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[4].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 68u), c.f[0]);  if (t) { goto L_002F9218; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], 0u + 36u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), c.r[4].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F90D8u); st8((c.r[17].w[0] + 576u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002F90D8u) [[unlikely]] return; }
L_002F90D8:
    c.r[3].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);  if (t) { goto L_002F9168; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);  if (t) { goto L_002F914C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0xBDA30000u);  if (t) { goto L_002F9130; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);  if (t) { goto L_002F9114; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.budget -= 1;
L_002F9114:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBB830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002F9218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.budget -= 1;
L_002F9130:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002F9218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D230000u);
    c.budget -= 1;
L_002F914C:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBB030000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002F9218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD230000u);
    c.budget -= 1;
L_002F9168:
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B030000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002F9218; } }
L_002F9180:
    c.f[2] = ld32((c.r[17].w[0] + 68u));
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = 0u;
    c.f[1] = fp::add(c.f[1], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 68u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F91E4; } }
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBDA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F9218; } }
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 68u), c.r[2].w[0]);  if (t) { goto L_002F9218; } }
L_002F91E4:
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DA30000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9218; } }
    st32((c.r[17].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBB830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    st32((c.r[17].w[0] + 68u), c.r[2].w[0]);
    c.budget -= 4;
L_002F9218:
    st32((c.r[29].w[0] + 64u), 0u);
    c.budget -= 1;
L_002F921C:
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[18], c.r[29].w[0] + 72u);
    set32(c.r[16], c.r[29].w[0] + 68u);
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9238u); st32((c.r[18].w[0]), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F9238u) [[unlikely]] return; }
L_002F9238:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9244u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F9244u) [[unlikely]] return; }
L_002F9244:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9288u); st32((c.r[17].w[0] + 36u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F9288u) [[unlikely]] return; }
L_002F9288:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9298u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F9298u) [[unlikely]] return; }
L_002F9298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F92A0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F92A0u) [[unlikely]] return; }
L_002F92A0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002F92AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F92C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F92D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F92E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9314u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F9314u) [[unlikely]] return; }
L_002F9314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F9384; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 28u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[19].w[0]);
    set32(c.r[2], c.r[2].w[0] - 27744u);
    st32((c.r[16].w[0] + 28u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F936Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F936Cu) [[unlikely]] return; }
L_002F936C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 91u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9384u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F9384u) [[unlikely]] return; }
L_002F9384:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F93A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 6784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F93C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[5], 0u + 32u);
    set32(c.r[3], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 150u);
    st8((c.r[4].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[17], c.r[18].w[0] + 320u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F941Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F941Cu) [[unlikely]] return; }
L_002F941C:
    st32((c.r[18].w[0] + 80u), 0u);
    st32((c.r[18].w[0] + 84u), 0u);
    set32(c.r[4], c.r[16].w[0] + 2112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9430u); st32((c.r[18].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F9430u) [[unlikely]] return; }
L_002F9430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9438u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F9438u) [[unlikely]] return; }
L_002F9438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 6816u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9454u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F9454u) [[unlikely]] return; }
L_002F9454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F945Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F945Cu) [[unlikely]] return; }
L_002F945C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9464u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F9464u) [[unlikely]] return; }
L_002F9464:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[4], 0u + 11264u);
    set32(c.r[2], 0u + 15360u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9478u); if (c.r[3].d[0] == 0) c.r[4].d[0] = c.r[2].d[0];  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F9478u) [[unlikely]] return; }
L_002F9478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9480u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F9480u) [[unlikely]] return; }
L_002F9480:
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[18].w[0] + 48u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F949Cu); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F949Cu) [[unlikely]] return; }
L_002F949C:
    set32(c.r[6], 0u + 1536u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94ACu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002F94ACu) [[unlikely]] return; }
L_002F94AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F94CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F94BCu) [[unlikely]] return; }
L_002F94BC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94C8u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F94C8u) [[unlikely]] return; }
L_002F94C8:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F94CC:
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F94E0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 159u, depth + 1u); else { c.pc = 0x002F9500u; return; } if (c.pc != 0x002F94E0u) [[unlikely]] return; }
L_002F94E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F9500:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.f[0] = ld32((c.r[4].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 13;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002F9574; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F9574; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9574; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[17].w[0] + 32u);  if (t) { goto L_002F9588; } }
L_002F9574:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F971C; } }
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002F9588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9590u);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F9590u) [[unlikely]] return; }
L_002F9590:
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F95BC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F95BC; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002F9600; } }
L_002F95BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 19u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95D4u); st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002F95D4u) [[unlikely]] return; }
L_002F95D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95DCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F95DCu) [[unlikely]] return; }
L_002F95DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[17].w[0] + 32u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F95F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002F95F4u) [[unlikely]] return; }
L_002F95F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F9720; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002F9600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9608u);  if (depth < kMaxDepth) unit_004D(c, 91u, depth + 1u); else { c.pc = 0x00234DE0u; return; } if (c.pc != 0x002F9608u) [[unlikely]] return; }
L_002F9608:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9618; } }
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002F9618:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F96C0; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 166u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002F96BC; }
    set32(c.r[2], 0u + 4u);
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9650u); set32(c.r[4], ld32((c.r[17].w[0] + 520u)));  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002F9650u) [[unlikely]] return; }
L_002F9650:
    set32(c.r[2], ld32((c.r[17].w[0] + 520u)));
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9664u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F9664u) [[unlikely]] return; }
L_002F9664:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F96C0; } }
    set32(c.r[6], 0u + 256u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9684u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002F9684u) [[unlikely]] return; }
L_002F9684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F96C0; } }
    st32((c.r[29].w[0] + 64u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 68u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96A4u); st32((c.r[29].w[0] + 72u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F96A4u) [[unlikely]] return; }
L_002F96A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96B0u); set32(c.r[5], c.r[17].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F96B0u) [[unlikely]] return; }
L_002F96B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 48u));  if (t) { goto L_002F96C4; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002F96BC:
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F96C0:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.budget -= 1;
L_002F96C4:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F96F4u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F96F4u) [[unlikely]] return; }
L_002F96F4:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9704u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F9704u) [[unlikely]] return; }
L_002F9704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F970Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F970Cu) [[unlikely]] return; }
L_002F970C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9714u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F9714u) [[unlikely]] return; }
L_002F9714:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F971C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F9720:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002F9740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F9750:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F9760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F978Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F978Cu) [[unlikely]] return; }
L_002F978C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002F9870; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 29u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[16].w[0] + 24u), c.r[18].w[0]);
    set32(c.r[2], c.r[2].w[0] - 26480u);
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] + 24976u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F97E0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F97E0u) [[unlikely]] return; }
L_002F97E0:
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 62ll ? 1ull : 0ull;  if (t) { goto L_002F9824; } }
    c.r[1].d[0] = c.r[3].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F9820; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9818u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F9818u) [[unlikely]] return; }
L_002F9818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002F9874; } }
L_002F9820:
    c.r[2].d[0] = c.r[3].sd[0] < 62ll ? 1ull : 0ull;
    c.budget -= 1;
L_002F9824:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9858; } }
    c.r[1].d[0] = c.r[3].sd[0] < 66ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F9858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 91u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9850u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F9850u) [[unlikely]] return; }
L_002F9850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002F9870; } }
L_002F9858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[7], 0u + 81u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9870u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002F9870u) [[unlikely]] return; }
L_002F9870:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F9874:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002F9890:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002F98B0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[16], ld32((c.r[4].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[19].w[0] + 320u);  if (t) { goto L_002F9900; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 6768u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_002F9928; } }
L_002F9900:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] - 2832u);
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));
    set32(c.r[2], c.r[2].w[0] + 30u);
    st16((c.r[17].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 10;
L_002F9928:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[4], 0u + 32u);
    set32(c.r[3], 0u + 96u);
    set32(c.r[2], 0u - 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[19].w[0] + 576u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[19].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[19].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_002F9988; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 46u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002F9980; } }
    c.r[6].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9974u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002F9974u) [[unlikely]] return; }
L_002F9974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));  if (t) { goto L_002F998C; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002F9980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9988u);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x002F9988u) [[unlikely]] return; }
L_002F9988:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));
    c.budget -= 1;
L_002F998C:
    st16((c.r[17].w[0] + 64u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 6u)));
    st16((c.r[17].w[0] + 66u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 12u));
    st32((c.r[17].w[0] + 68u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 44u)));
    st8((c.r[17].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 38u)));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[17].w[0] + 72u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 14;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002F99E0; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99D8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F99D8u) [[unlikely]] return; }
L_002F99D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002F99F0; } }
L_002F99E0:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99ECu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F99ECu) [[unlikely]] return; }
L_002F99EC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002F99F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F99F8u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F99F8u) [[unlikely]] return; }
L_002F99F8:
    set32(c.r[4], c.r[18].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A04u); set32(c.r[5], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002F9A04u) [[unlikely]] return; }
L_002F9A04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A0Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F9A0Cu) [[unlikely]] return; }
L_002F9A0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A14u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002F9A14u) [[unlikely]] return; }
L_002F9A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A1Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 36u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002F9A1Cu) [[unlikely]] return; }
L_002F9A1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A24u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 34u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002F9A24u) [[unlikely]] return; }
L_002F9A24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A2Cu); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 32u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002F9A2Cu) [[unlikely]] return; }
L_002F9A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A34u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F9A34u) [[unlikely]] return; }
L_002F9A34:
    st32((c.r[29].w[0] + 80u), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 68u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 48u);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A50u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F9A50u) [[unlikely]] return; }
L_002F9A50:
    set32(c.r[6], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002F9A88; } }
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A68u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002F9A68u) [[unlikely]] return; }
L_002F9A68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9A84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A78u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F9A78u) [[unlikely]] return; }
L_002F9A78:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9A84u); set32(c.r[5], c.r[19].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F9A84u) [[unlikely]] return; }
L_002F9A84:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002F9A88:
    st16((c.r[19].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[19].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (t) { goto L_002F9AD0; } }
    c.r[1].d[0] = c.r[3].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F9ACC; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AC4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 136u, depth + 1u); else { c.pc = 0x00235AE0u; return; } if (c.pc != 0x002F9AC4u) [[unlikely]] return; }
L_002F9AC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  if (t) { goto L_002F9ADC; } }
L_002F9ACC:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 1;
L_002F9AD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9AD8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 136u, depth + 1u); else { c.pc = 0x00235AE0u; return; } if (c.pc != 0x002F9AD8u) [[unlikely]] return; }
L_002F9AD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 1;
L_002F9ADC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002F9AF4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F9B44; } }
L_002F9AF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;  if (t) { goto L_002F9B20; } }
    c.r[1].d[0] = c.r[3].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F9B1C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F9B44; } }
L_002F9B1C:
    c.r[2].d[0] = c.r[3].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 1;
L_002F9B20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9B40; } }
    c.r[1].d[0] = c.r[3].sd[0] < 54ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F9B40; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002F9B44; } }
L_002F9B40:
    st8((c.r[17].w[0] + 77u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002F9B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9B4Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 203u, depth + 1u); else { c.pc = 0x002F9B70u; return; } if (c.pc != 0x002F9B4Cu) [[unlikely]] return; }
L_002F9B4C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F9B70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[16], c.r[18].w[0] + 320u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002F9CB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].sd[0] < 24ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002F9C20; } }
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43900000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9C10; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44CE0000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F9C10; } }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9C10; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_002F9C94; } }
L_002F9C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F9EB0; } }
L_002F9C20:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9C80; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44F10000u);
    c.f[2] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F9C80; } }
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9C80; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9C90; } }
L_002F9C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F9EB0; } }
L_002F9C90:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002F9C94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9C9Cu);  if (depth < kMaxDepth) unit_0045(c, 192u, depth + 1u); else { c.pc = 0x00217510u; return; } if (c.pc != 0x002F9C9Cu) [[unlikely]] return; }
L_002F9C9C:
    c.f[1] = ld32((c.r[18].w[0] + 36u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002F9D0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002F9D0C; } }
L_002F9CB8:
    set32(c.r[4], c.r[4].w[0] + 592u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9CC4u); set32(c.r[5], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F9CC4u) [[unlikely]] return; }
L_002F9CC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x442F0000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9CF0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002F9EB0; } }
L_002F9CF0:
    c.r[2].d[0] = ld16((c.r[16].w[0] + 78u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 78u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[16].w[0] + 78u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9D0C; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_002F9D0C:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_002F9D2C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9D2C; } }
    c.r[2].d[0] = ld8((c.r[18].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9D78; } }
L_002F9D2C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[5], 0u + 19u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D44u); st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002F9D44u) [[unlikely]] return; }
L_002F9D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D4Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002F9D4Cu) [[unlikely]] return; }
L_002F9D4C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 76u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002F9EB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D70u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 206u, depth + 1u); else { c.pc = 0x002E9E60u; return; } if (c.pc != 0x002F9D70u) [[unlikely]] return; }
L_002F9D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002F9EB4; } }
L_002F9D78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 77u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002F9D98; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9D8Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004D(c, 91u, depth + 1u); else { c.pc = 0x00234DE0u; return; } if (c.pc != 0x002F9D8Cu) [[unlikely]] return; }
L_002F9D8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 520u)));  if (t) { goto L_002F9DA4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002F9D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DA0u);  if (depth < kMaxDepth) unit_004D(c, 93u, depth + 1u); else { c.pc = 0x00234E80u; return; } if (c.pc != 0x002F9DA0u) [[unlikely]] return; }
L_002F9DA0:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 1;
L_002F9DA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002F9DB0; } }
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_002F9DB0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9E54; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 166u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_002F9E50; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 64u)));
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 72u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DE4u); set32(c.r[4], ld32((c.r[18].w[0] + 520u)));  if (depth < kMaxDepth) unit_0079(c, 262u, depth + 1u); else { c.pc = 0x002E6F50u; return; } if (c.pc != 0x002F9DE4u) [[unlikely]] return; }
L_002F9DE4:
    set32(c.r[2], ld32((c.r[18].w[0] + 520u)));
    set32(c.r[5], c.r[18].w[0] + 32u);
    c.f[20] = c.f[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9DF8u); set32(c.r[4], c.r[2].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002F9DF8u) [[unlikely]] return; }
L_002F9DF8:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002F9E54; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E18u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 145u, depth + 1u); else { c.pc = 0x002DD910u; return; } if (c.pc != 0x002F9E18u) [[unlikely]] return; }
L_002F9E18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002F9E54; } }
    st32((c.r[29].w[0] + 80u), 0u);
    c.f[0] = ld32((c.r[16].w[0] + 68u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E38u); st32((c.r[29].w[0] + 88u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002F9E38u) [[unlikely]] return; }
L_002F9E38:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E44u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002F9E44u) [[unlikely]] return; }
L_002F9E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[18].w[0] + 48u));  if (t) { goto L_002F9E58; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_002F9E50:
    st16((c.r[18].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_002F9E54:
    c.f[1] = ld32((c.r[18].w[0] + 48u));
    c.budget -= 1;
L_002F9E58:
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 52u));
    c.f[0] = ld32((c.r[18].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[18].w[0] + 56u));
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E88u); st32((c.r[18].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002F9E88u) [[unlikely]] return; }
L_002F9E88:
    c.f[13] = ld32((c.r[18].w[0] + 36u));
    c.f[14] = ld32((c.r[18].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9E98u); c.f[12] = ld32((c.r[18].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002F9E98u) [[unlikely]] return; }
L_002F9E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002F9EA0u) [[unlikely]] return; }
L_002F9EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9EA8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002F9EA8u) [[unlikely]] return; }
L_002F9EA8:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002F9EB0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002F9EB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002F9ED0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002F9EE0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002F9EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F14u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F9F14u) [[unlikely]] return; }
L_002F9F14:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_002F9F7C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24560u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F70u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F9F70u) [[unlikely]] return; }
L_002F9F70:
    st32((c.r[16].w[0] + 520u), 0u);
    st32((c.r[16].w[0] + 524u), 0u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
L_002F9F7C:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9F88u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002F9F88u) [[unlikely]] return; }
L_002F9F88:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002F9FF0; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 17u);
    set32(c.r[3], 0u + 30u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 8u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st32((c.r[16].w[0] + 24u), c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] - 24560u);
    st32((c.r[16].w[0] + 168u), 0u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 184u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002F9FE8u); st32((c.r[16].w[0] + 188u), 0u);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002F9FE8u) [[unlikely]] return; }
L_002F9FE8:
    st32((c.r[16].w[0] + 520u), 0u);
    st32((c.r[16].w[0] + 524u), 0u);
    c.budget -= 2;
L_002F9FF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FA010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1136u);
    set32(c.r[5], ld32((c.r[4].w[0] + 24u)));
    set32(c.r[6], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FA040:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 33u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[4].w[0] + 88u), 0u);
    st32((c.r[4].w[0] + 84u), 0u);
    st32((c.r[4].w[0] + 80u), 0u);
    st8((c.r[4].w[0] + 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
    { st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_002FA070; }
L_002FA070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8386u)));
    set32(c.r[3], 0u + 38u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002FA0A4; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002FA0B0; } }
L_002FA0A4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002FA140; } }
L_002FA0B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA0CCu); set32(c.r[7], c.r[16].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA0CCu) [[unlikely]] return; }
L_002FA0CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[6], c.r[17].w[0] + 192u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[7], c.r[3].w[0] + 1984u);
    c.budget -= 6;
L_002FA0E4:
    set32(c.r[4], ld32((c.r[7].w[0])));
    set32(c.r[3], ld32((c.r[7].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] - 1u);
    st32((c.r[6].w[0]), c.r[4].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FA0E4u | kUnwind; return; } goto L_002FA0E4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2032u));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2036u));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 6);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 2040u));
    st32((c.r[17].w[0] + 40u), c.f[0]);
    c.budget -= 15;
L_002FA140:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FA160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FA1DC; } }
    c.r[3].d[0] = c.r[3].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[9], c.r[3].w[0] << 1);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], c.r[3].w[0] + 1120u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[9], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[3], 0u - 1u);
    set32(c.r[8], c.r[8].w[0] + c.r[9].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    c.budget -= 12;
    { const bool t = c.r[8].d[0] == c.r[3].d[0];  if (t) { goto L_002FA1DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7784u)));
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 7786u)));
    st16((c.r[6].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[6], c.r[8], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA1DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002FA1DCu) [[unlikely]] return; }
L_002FA1DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FA1F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 3u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[7], c.r[0]);  if (t) { goto L_002FA244; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7784u)));
    c.budget -= 4;
    if (c.r[4].d[0] != c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_002FA248; }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 7786u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002FA26C; } }
L_002FA244:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002FA248:
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[19].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA258u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FA258u) [[unlikely]] return; }
L_002FA258:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    mmi::paddub(c.r[6], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA26Cu); mmi::paddub(c.r[7], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 232u, depth + 1u); else { c.pc = 0x002FA160u; return; } if (c.pc != 0x002FA26Cu) [[unlikely]] return; }
L_002FA26C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FA290:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002FA2C8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 742u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA2BC; } }
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FA2C8; } }
L_002FA2BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002FA2C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002FA2D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FA2E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA314u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002FA314u) [[unlikely]] return; }
L_002FA314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002FA380; } }
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 31u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] - 23648u);
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] - 19168u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA380u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002FA380u) [[unlikely]] return; }
L_002FA380:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FA3A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] + 2256u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[6].w[0] + 320u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FA3D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { mmi::paddub(c.r[5], c.r[7], c.r[0]);  goto L_002FA3F8; }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FA408; } }
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.budget -= 1;
L_002FA3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA400u);  if (depth < kMaxDepth) unit_007E(c, 405u, depth + 1u); else { c.pc = 0x002FB840u; return; } if (c.pc != 0x002FA400u) [[unlikely]] return; }
L_002FA400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002FA428; } }
L_002FA408:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[28].w[0] - 28272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA424u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA424u) [[unlikely]] return; }
L_002FA424:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FA428:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FA430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 16u));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002FA4F0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u - 16384u);
    set32(c.r[2], 0u + 224u);
    set32(c.r[4], c.r[16].w[0] + 2048u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 80u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 84u), 0u);
    st8((c.r[18].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4A0u); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA4A0u) [[unlikely]] return; }
L_002FA4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1152u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4C4u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA4C4u) [[unlikely]] return; }
L_002FA4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4CCu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FA4CCu) [[unlikely]] return; }
L_002FA4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4D4u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FA4D4u) [[unlikely]] return; }
L_002FA4D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA4DCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FA4DCu) [[unlikely]] return; }
L_002FA4DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA4F0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FA4F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FA510:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[4], c.r[16].w[0] + 2048u);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA548u); mmi::paddub(c.r[19], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA548u) [[unlikely]] return; }
L_002FA548:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1152u);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[13] = ld32((c.r[2].w[0] + 4u));
    c.f[14] = ld32((c.r[2].w[0] + 8u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA56Cu); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA56Cu) [[unlikely]] return; }
L_002FA56C:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBFA00000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[13] = c.f[12];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA594u); c.f[14] = c.f[0];  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA594u) [[unlikely]] return; }
L_002FA594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA59Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FA59Cu) [[unlikely]] return; }
L_002FA59C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5A4u); set32(c.r[4], ld32((c.r[18].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FA5A4u) [[unlikely]] return; }
L_002FA5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA5ACu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FA5ACu) [[unlikely]] return; }
L_002FA5AC:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC2200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002FA790; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 2048u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA610u); st8((c.r[2].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA610u) [[unlikely]] return; }
L_002FA610:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA620u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002FA620u) [[unlikely]] return; }
L_002FA620:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA62Cu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002FA62Cu) [[unlikely]] return; }
L_002FA62C:
    set32(c.r[20], c.r[29].w[0] + 120u);
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA63Cu); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002FA63Cu) [[unlikely]] return; }
L_002FA63C:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA654u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002FA654u) [[unlikely]] return; }
L_002FA654:
    set32(c.r[21], c.r[29].w[0] + 116u);
    c.f[12] = ld32((c.r[21].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA664u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002FA664u) [[unlikely]] return; }
L_002FA664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA66Cu); st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002FA66Cu) [[unlikely]] return; }
L_002FA66C:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA678u); c.r[19].d[0] = c.r[2].d[0] & 1ull;  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002FA678u) [[unlikely]] return; }
L_002FA678:
    set32(c.r[2], c.r[28].w[0] - 28304u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], 0u + 793u);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA69Cu); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002FA69Cu) [[unlikely]] return; }
L_002FA69C:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FA6DC; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_002FA6DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1184u);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 2048u);
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    st32((c.r[18].w[0] + 144u), 0u);
    st32((c.r[18].w[0] + 148u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA720u); st32((c.r[18].w[0] + 152u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA720u) [[unlikely]] return; }
L_002FA720:
    c.f[13] = ld32((c.r[18].w[0] + 148u));
    c.f[14] = ld32((c.r[18].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA730u); c.f[12] = ld32((c.r[18].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA730u) [[unlikely]] return; }
L_002FA730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA738u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FA738u) [[unlikely]] return; }
L_002FA738:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA744u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FA744u) [[unlikely]] return; }
L_002FA744:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA758u); set32(c.r[5], c.r[2].w[0] + 1248u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FA758u) [[unlikely]] return; }
L_002FA758:
    c.f[14] = ld32((c.r[20].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA768u); c.f[13] = ld32((c.r[21].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA768u) [[unlikely]] return; }
L_002FA768:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA770u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FA770u) [[unlikely]] return; }
L_002FA770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA784u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FA784u) [[unlikely]] return; }
L_002FA784:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA78Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FA78Cu) [[unlikely]] return; }
L_002FA78C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002FA790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA798u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA798u) [[unlikely]] return; }
L_002FA798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7A0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FA7A0u) [[unlikely]] return; }
L_002FA7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA7A8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FA7A8u) [[unlikely]] return; }
L_002FA7A8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA7BC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FA7BC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FA7E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002FA818; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FA82C; } }
L_002FA818:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA824u); mmi::paddub(c.r[5], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 405u, depth + 1u); else { c.pc = 0x002FB840u; return; } if (c.pc != 0x002FA824u) [[unlikely]] return; }
L_002FA824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002FA87C; } }
L_002FA82C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA84Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FA84Cu) [[unlikely]] return; }
L_002FA84C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA854u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA854u) [[unlikely]] return; }
L_002FA854:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA85Cu); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FA85Cu) [[unlikely]] return; }
L_002FA85C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA864u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FA864u) [[unlikely]] return; }
L_002FA864:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FA878; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FA878:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FA87C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FA890:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[3] = c.r[2].w[0];
    set32(c.r[6], ld32((c.r[4].w[0] + 92u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 88u)));
    c.f[2] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    st32((c.r[4].w[0] + 92u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 96u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 100u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 108u));
    c.f[1] = ld32((c.r[4].w[0] + 104u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[0], c.f[3]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 80u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 33;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA914u); c.f[12] = fp::mul(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002FA914u) [[unlikely]] return; }
L_002FA914:
    st32((c.r[19].w[0] + 80u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[19].w[0] + 84u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA938u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002FA938u) [[unlikely]] return; }
L_002FA938:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[19].w[0] + 128u);
    set32(c.r[6], c.r[19].w[0] + 144u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA94Cu); st32((c.r[19].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FA94Cu) [[unlikely]] return; }
L_002FA94C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA960u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FA960u) [[unlikely]] return; }
L_002FA960:
    set32(c.r[4], c.r[19].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA96Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FA96Cu) [[unlikely]] return; }
L_002FA96C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA974u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FA974u) [[unlikely]] return; }
L_002FA974:
    c.f[13] = ld32((c.r[19].w[0] + 148u));
    c.f[14] = ld32((c.r[19].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA984u); c.f[12] = ld32((c.r[19].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA984u) [[unlikely]] return; }
L_002FA984:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA98Cu); set32(c.r[4], ld32((c.r[19].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FA98Cu) [[unlikely]] return; }
L_002FA98C:
    set32(c.r[2], ld32((c.r[19].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA998u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FA998u) [[unlikely]] return; }
L_002FA998:
    c.f[12] = ld32((c.r[19].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9ACu); set32(c.r[5], c.r[2].w[0] + 1248u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FA9ACu) [[unlikely]] return; }
L_002FA9AC:
    c.f[13] = ld32((c.r[29].w[0] + 84u));
    c.f[14] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9BCu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FA9BCu) [[unlikely]] return; }
L_002FA9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9C4u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FA9C4u) [[unlikely]] return; }
L_002FA9C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9D8u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FA9D8u) [[unlikely]] return; }
L_002FA9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FA9E0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FA9E0u) [[unlikely]] return; }
L_002FA9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAAC4; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FAA0C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAA0Cu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002FAA0Cu) [[unlikely]] return; }
L_002FAA0C:
    set32(c.r[4], ld32((c.r[19].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_002FAAC0; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAAC0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAAC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FAAC0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[3].d[0] = c.r[2].d[0] | 55050ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[19].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[19].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[19].w[0] + 108u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    set32(c.r[6], 0u + 34u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8u)));
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    st8((c.r[19].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0] + 520u)));
    c.f[3] = ld32((c.r[2].w[0] + 80u));
    c.f[2] = ld32((c.r[2].w[0] + 84u));
    c.f[1] = ld32((c.r[2].w[0] + 88u));
    c.f[0] = ld32((c.r[2].w[0] + 92u));
    st32((c.r[18].w[0] + 64u), c.f[3]);
    st32((c.r[18].w[0] + 68u), c.f[2]);
    st32((c.r[18].w[0] + 72u), c.f[1]);
    st32((c.r[18].w[0] + 76u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 530u));
    c.r[2].d[0] = c.r[2].d[0] | 64ull;
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAAB8u); st8((c.r[19].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002FAAB8u) [[unlikely]] return; }
L_002FAAB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002FAAC8; } }
L_002FAAC0:
    st32((c.r[19].w[0] + 520u), 0u);
    c.budget -= 1;
L_002FAAC4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FAAC8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FAAE0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB04u); mmi::paddub(c.r[18], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 401u, depth + 1u); else { c.pc = 0x002FB740u; return; } if (c.pc != 0x002FAB04u) [[unlikely]] return; }
L_002FAB04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FAC28; } }
    c.f[1] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[17].w[0] + 104u), c.f[0]);  if (t) { goto L_002FAB34; } }
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002FAB34:
    c.f[0] = ld32((c.r[16].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 64u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 20u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 24u));
    st32((c.r[29].w[0] + 72u), c.f[0]);
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB5Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FAB5Cu) [[unlikely]] return; }
L_002FAB5C:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB68u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FAB68u) [[unlikely]] return; }
L_002FAB68:
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[7], 0u + 512u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAB7Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 393u, depth + 1u); else { c.pc = 0x002FB640u; return; } if (c.pc != 0x002FAB7Cu) [[unlikely]] return; }
L_002FAB7C:
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 100u), c.f[1]);  if (t) { goto L_002FAC28; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    set32(c.r[4], 0u + 300u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[3], c.r[28].w[0] - 28296u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.r[7].d[0] = c.r[7].d[0] & 1ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC00u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 381u, depth + 1u); else { c.pc = 0x002FB560u; return; } if (c.pc != 0x002FAC00u) [[unlikely]] return; }
L_002FAC00:
    set32(c.r[5], c.r[16].w[0] + 80u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC10u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FAC10u) [[unlikely]] return; }
L_002FAC10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC18u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FAC18u) [[unlikely]] return; }
L_002FAC18:
    c.f[12] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[4], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC28u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FAC28u) [[unlikely]] return; }
L_002FAC28:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FAC40:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAC64u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 401u, depth + 1u); else { c.pc = 0x002FB740u; return; } if (c.pc != 0x002FAC64u) [[unlikely]] return; }
L_002FAC64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FADD8; } }
    c.f[1] = ld32((c.r[17].w[0] + 100u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002FADC8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FACBC; } }
    set32(c.r[2], c.r[28].w[0] - 28288u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACBCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002FACBCu) [[unlikely]] return; }
L_002FACBC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (t) { goto L_002FACE8; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 3;
L_002FACE8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FACF4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 381u, depth + 1u); else { c.pc = 0x002FB560u; return; } if (c.pc != 0x002FACF4u) [[unlikely]] return; }
L_002FACF4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD04u); set32(c.r[6], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FAD04u) [[unlikely]] return; }
L_002FAD04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD0Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002FAD0Cu) [[unlikely]] return; }
L_002FAD0C:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD1Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FAD1Cu) [[unlikely]] return; }
L_002FAD1C:
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], 0u + 3072u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD30u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 393u, depth + 1u); else { c.pc = 0x002FB640u; return; } if (c.pc != 0x002FAD30u) [[unlikely]] return; }
L_002FAD30:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAD3Cu); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FAD3Cu) [[unlikely]] return; }
L_002FAD3C:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002FAD5C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_002FADB4; } }
L_002FAD5C:
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 300u);  if (t) { goto L_002FAD90; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002FADD8; } }
    set32(c.r[3], 0u + 300u);
    c.budget -= 1;
L_002FAD90:
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[17].w[0] + 96u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[4].w[0] + 16u);
    st32((c.r[17].w[0] + 96u), c.r[4].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 100u), c.r[3].w[0]);  if (t) { goto L_002FADD8; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002FADB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FADBCu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FADBCu) [[unlikely]] return; }
L_002FADBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_002FADDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002FADC8:
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.budget -= 4;
L_002FADD8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FADDC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FADF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 524u)));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[4], c.r[0]);  if (t) { goto L_002FAE90; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[6], c.r[17].w[0] + 64u);  if (t) { goto L_002FAE94; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 2u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAE90; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAE90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAE90; } }
    c.f[3] = ld32((c.r[3].w[0] + 80u));
    c.f[2] = ld32((c.r[3].w[0] + 84u));
    c.f[1] = ld32((c.r[3].w[0] + 88u));
    c.f[0] = ld32((c.r[3].w[0] + 92u));
    st32((c.r[17].w[0] + 64u), c.f[3]);
    st32((c.r[17].w[0] + 68u), c.f[2]);
    st32((c.r[17].w[0] + 72u), c.f[1]);
    st32((c.r[17].w[0] + 76u), c.f[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FAE90; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAE90; } }
    st32((c.r[18].w[0] + 520u), 0u);
    c.budget -= 1;
L_002FAE90:
    set32(c.r[6], c.r[17].w[0] + 64u);
    c.budget -= 1;
L_002FAE94:
    set32(c.r[7], 0u + 1024u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEA4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 393u, depth + 1u); else { c.pc = 0x002FB640u; return; } if (c.pc != 0x002FAEA4u) [[unlikely]] return; }
L_002FAEA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEACu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 237u, depth + 1u); else { c.pc = 0x002DEC00u; return; } if (c.pc != 0x002FAEACu) [[unlikely]] return; }
L_002FAEAC:
    c.f[2] = ld32((c.r[17].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 100u), c.f[1]);  if (t) { goto L_002FAF24; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002FAEE0u) [[unlikely]] return; }
L_002FAEE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FAF18; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAEF4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002FAEF4u) [[unlikely]] return; }
L_002FAEF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28280u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF18u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002FAF18u) [[unlikely]] return; }
L_002FAF18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002FAF24:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FAF40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    set32(c.r[6], c.r[16].w[0] + 64u);
    set32(c.r[7], 0u + 1024u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAF6Cu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 393u, depth + 1u); else { c.pc = 0x002FB640u; return; } if (c.pc != 0x002FAF6Cu) [[unlikely]] return; }
L_002FAF6C:
    c.f[2] = ld32((c.r[16].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 100u), c.f[1]);  if (t) { goto L_002FB014; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2160u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFCCu); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 381u, depth + 1u); else { c.pc = 0x002FB560u; return; } if (c.pc != 0x002FAFCCu) [[unlikely]] return; }
L_002FAFCC:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFDCu); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FAFDCu) [[unlikely]] return; }
L_002FAFDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FAFE4u); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FAFE4u) [[unlikely]] return; }
L_002FAFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[17].w[0] + 530u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB014u); st8((c.r[17].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FB014u) [[unlikely]] return; }
L_002FB014:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FB030:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 108u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.f[2] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_002FB078; } }
    st32((c.r[18].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_002FB078:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB088u); set32(c.r[5], c.r[18].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FB088u) [[unlikely]] return; }
L_002FB088:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB094u); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FB094u) [[unlikely]] return; }
L_002FB094:
    set32(c.r[6], c.r[17].w[0] + 64u);
    set32(c.r[7], 0u + 3072u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB0A8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 393u, depth + 1u); else { c.pc = 0x002FB640u; return; } if (c.pc != 0x002FB0A8u) [[unlikely]] return; }
L_002FB0A8:
    c.f[2] = ld32((c.r[17].w[0] + 100u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 100u), c.f[1]);  if (t) { goto L_002FB12C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41180000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[17].w[0] + 80u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[18].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 100u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[6], c.r[18].w[0] + 32u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB114u); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FB114u) [[unlikely]] return; }
L_002FB114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB11Cu); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FB11Cu) [[unlikely]] return; }
L_002FB11C:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB12Cu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FB12Cu) [[unlikely]] return; }
L_002FB12C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002FB150:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[5].w[0] + 100u));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[19], c.r[7], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 17;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_002FB4C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002FB1B8; } }
    set32(c.r[2], c.r[28].w[0] - 28288u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB1B8u); c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002FB1B8u) [[unlikely]] return; }
L_002FB1B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002FB1E0; } }
    set32(c.r[2], 0u + 10u);
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FB1E0:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[21], c.r[29].w[0] + 116u);
    set32(c.r[20], c.r[29].w[0] + 120u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    set32(c.r[5], c.r[18].w[0] + 32u);
    st32((c.r[21].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB20Cu); st32((c.r[20].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002FB20Cu) [[unlikely]] return; }
L_002FB20C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB214u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FB214u) [[unlikely]] return; }
L_002FB214:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    set32(c.r[4], c.r[18].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB224u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FB224u) [[unlikely]] return; }
L_002FB224:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC1F00000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB238u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FB238u) [[unlikely]] return; }
L_002FB238:
    c.f[0] = ld32((c.r[16].w[0] + 2096u));
    set32(c.r[4], c.r[17].w[0] + 80u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    st32((c.r[17].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2100u));
    st32((c.r[17].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2104u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB25Cu); st32((c.r[17].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FB25Cu) [[unlikely]] return; }
L_002FB25C:
    set32(c.r[6], c.r[17].w[0] + 80u);
    set32(c.r[7], 0u + 3072u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB270u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 393u, depth + 1u); else { c.pc = 0x002FB640u; return; } if (c.pc != 0x002FB270u) [[unlikely]] return; }
L_002FB270:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB27Cu); set32(c.r[5], c.r[17].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002FB27Cu) [[unlikely]] return; }
L_002FB27C:
    c.f[1] = ld32((c.r[18].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[4], c.r[18].w[0] + 32u);  if (t) { goto L_002FB4B4; } }
    c.f[3] = ld32((c.r[17].w[0] + 80u));
    c.f[2] = ld32((c.r[17].w[0] + 84u));
    c.f[1] = ld32((c.r[17].w[0] + 88u));
    c.f[0] = ld32((c.r[17].w[0] + 92u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 2048u);
    st32((c.r[18].w[0] + 32u), c.f[3]);
    st32((c.r[18].w[0] + 36u), c.f[2]);
    st32((c.r[18].w[0] + 40u), c.f[1]);
    st32((c.r[18].w[0] + 44u), c.f[0]);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[18].w[0] + 520u), 0u);
    st32((c.r[18].w[0] + 524u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2DCu); st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FB2DCu) [[unlikely]] return; }
L_002FB2DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2F0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002FB2F0u) [[unlikely]] return; }
L_002FB2F0:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB2FCu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002FB2FCu) [[unlikely]] return; }
L_002FB2FC:
    c.f[13] = ld32((c.r[20].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB308u); c.f[12] = ld32((c.r[29].w[0] + 112u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002FB308u) [[unlikely]] return; }
L_002FB308:
    st32((c.r[18].w[0] + 96u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB320u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002FB320u) [[unlikely]] return; }
L_002FB320:
    c.f[12] = ld32((c.r[21].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB32Cu); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002FB32Cu) [[unlikely]] return; }
L_002FB32C:
    set32(c.r[4], c.r[16].w[0] + 2048u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB338u); st32((c.r[18].w[0] + 92u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FB338u) [[unlikely]] return; }
L_002FB338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB340u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FB340u) [[unlikely]] return; }
L_002FB340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB348u); set32(c.r[4], ld32((c.r[18].w[0] + 92u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FB348u) [[unlikely]] return; }
L_002FB348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB358u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002FB358u) [[unlikely]] return; }
L_002FB358:
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB364u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002FB364u) [[unlikely]] return; }
L_002FB364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB36Cu);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002FB36Cu) [[unlikely]] return; }
L_002FB36C:
    c.r[19].d[0] = c.r[2].d[0] & 1ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 108u)));
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB380u); st8((c.r[18].w[0] + 10u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000F(c, 20u, depth + 1u); else { c.pc = 0x0013C9E0u; return; } if (c.pc != 0x002FB380u) [[unlikely]] return; }
L_002FB380:
    set32(c.r[2], c.r[28].w[0] - 28304u);
    set32(c.r[3], c.r[19].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[18].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    set32(c.r[2], 0u + 793u);
    st32((c.r[18].w[0] + 108u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB3A4u); st32((c.r[18].w[0] + 88u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x002FB3A4u) [[unlikely]] return; }
L_002FB3A4:
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1216u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB3E4; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 88u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 88u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 100u)));
    set32(c.r[2], 0u - c.r[2].w[0]);
    st32((c.r[18].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 6;
L_002FB3E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 1184u);
    set32(c.r[3], c.r[19].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[4], c.r[16].w[0] + 2048u);
    st32((c.r[18].w[0] + 128u), c.f[3]);
    st32((c.r[18].w[0] + 132u), c.f[2]);
    st32((c.r[18].w[0] + 136u), c.f[1]);
    st32((c.r[18].w[0] + 140u), c.f[0]);
    st32((c.r[18].w[0] + 144u), 0u);
    st32((c.r[18].w[0] + 148u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB428u); st32((c.r[18].w[0] + 152u), 0u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FB428u) [[unlikely]] return; }
L_002FB428:
    c.f[13] = ld32((c.r[18].w[0] + 148u));
    c.f[14] = ld32((c.r[18].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB438u); c.f[12] = ld32((c.r[18].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FB438u) [[unlikely]] return; }
L_002FB438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB440u); set32(c.r[4], ld32((c.r[18].w[0] + 96u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FB440u) [[unlikely]] return; }
L_002FB440:
    set32(c.r[2], ld32((c.r[18].w[0] + 92u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB44Cu); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FB44Cu) [[unlikely]] return; }
L_002FB44C:
    c.f[12] = ld32((c.r[18].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB460u); set32(c.r[5], c.r[2].w[0] + 1248u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FB460u) [[unlikely]] return; }
L_002FB460:
    c.f[14] = ld32((c.r[20].w[0]));
    c.f[12] = ld32((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB470u); c.f[13] = ld32((c.r[21].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002FB470u) [[unlikely]] return; }
L_002FB470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB478u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002FB478u) [[unlikely]] return; }
L_002FB478:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[3], c.r[3].w[0] << 15);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB48Cu); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FB48Cu) [[unlikely]] return; }
L_002FB48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB494u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FB494u) [[unlikely]] return; }
L_002FB494:
    c.r[2].d[0] = ld8((c.r[18].w[0] + 530u));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 191ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4A8u); st8((c.r[18].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x002FB4A8u) [[unlikely]] return; }
L_002FB4A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002FB4DC; } }
    set32(c.r[4], c.r[18].w[0] + 32u);
    c.budget -= 1;
L_002FB4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB4BCu); set32(c.r[5], c.r[18].w[0] + 48u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002FB4BCu) [[unlikely]] return; }
L_002FB4BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002FB4D8; } }
L_002FB4C4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 100u), c.f[0]);
    c.budget -= 5;
L_002FB4D8:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FB4DC:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FB500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002FB510:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_002FB520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB538u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FB538u) [[unlikely]] return; }
L_002FB538:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB540u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002FB540u) [[unlikely]] return; }
L_002FB540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB548u); set32(c.r[4], ld32((c.r[16].w[0] + 188u)));  if (depth < kMaxDepth) unit_000F(c, 36u, depth + 1u); else { c.pc = 0x0013CD20u; return; } if (c.pc != 0x002FB548u) [[unlikely]] return; }
L_002FB548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002FB560:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    set32(c.r[5], c.r[18].w[0] + 64u);
    set32(c.r[6], c.r[29].w[0] + 80u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB590u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_005B(c, 138u, depth + 1u); else { c.pc = 0x0026E440u; return; } if (c.pc != 0x002FB590u) [[unlikely]] return; }
L_002FB590:
    c.f[13] = ld32((c.r[29].w[0] + 88u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB59Cu); c.f[12] = ld32((c.r[29].w[0] + 80u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002FB59Cu) [[unlikely]] return; }
L_002FB59C:
    set32(c.r[16], ld32((c.r[18].w[0] + 96u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5A8u); mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FB5A8u) [[unlikely]] return; }
L_002FB5A8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    set32(c.r[2], c.r[2].w[0] << 12);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5BCu); set32(c.r[4], c.r[19].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002FB5BCu) [[unlikely]] return; }
L_002FB5BC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5D0u); set32(c.r[4], c.r[2].w[0] << 12);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002FB5D0u) [[unlikely]] return; }
L_002FB5D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[2].w[0] + 1248u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5E0u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002FB5E0u) [[unlikely]] return; }
L_002FB5E0:
    c.f[12] = ld32((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5F0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002FB5F0u) [[unlikely]] return; }
L_002FB5F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB5F8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FB5F8u) [[unlikely]] return; }
L_002FB5F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB600u); set32(c.r[4], c.r[17].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002FB600u) [[unlikely]] return; }
L_002FB600:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB60Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002FB60Cu) [[unlikely]] return; }
L_002FB60C:
    set32(c.r[4], c.r[18].w[0] + 80u);
    set32(c.r[6], c.r[18].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB61Cu); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x002FB61Cu) [[unlikely]] return; }
L_002FB61C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002FB640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[2], c.r[4], c.r[0]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[2].w[0] + 32u);
    mmi::paddub(c.r[18], c.r[7], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB674u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FB674u) [[unlikely]] return; }
L_002FB674:
    c.f[0] = ld32((c.r[19].w[0] + 16u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    set32(c.r[6], c.r[29].w[0] + 112u);
    st32((c.r[29].w[0] + 96u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 20u));
    st32((c.r[29].w[0] + 100u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 24u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB69Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x002FB69Cu) [[unlikely]] return; }
L_002FB69C:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_002FB6C8; } }
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 112u);  if (t) { goto L_002FB6E8; } }
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_002FB6E4; } }
L_002FB6C8:
    c.r[2].d[0] = c.r[18].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FB6E4; } }
    set32(c.r[16], 0u - c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 2;
L_002FB6E4:
    set32(c.r[5], c.r[29].w[0] + 112u);
    c.budget -= 1;
L_002FB6E8:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6F4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002FB6F4u) [[unlikely]] return; }
L_002FB6F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB6FCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FB6FCu) [[unlikely]] return; }
L_002FB6FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB704u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002FB704u) [[unlikely]] return; }
L_002FB704:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB710u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x002FB710u) [[unlikely]] return; }
L_002FB710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB718u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FB718u) [[unlikely]] return; }
L_002FB718:
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002FB740:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 520u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002FB820; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FB788; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FB788; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002FB800; } }
L_002FB788:
    st32((c.r[17].w[0] + 520u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[17].w[0] + 524u), 0u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2160u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7C4u); st32((c.r[16].w[0] + 96u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_007E(c, 381u, depth + 1u); else { c.pc = 0x002FB560u; return; } if (c.pc != 0x002FB7C4u) [[unlikely]] return; }
L_002FB7C4:
    set32(c.r[4], c.r[17].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7D4u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FB7D4u) [[unlikely]] return; }
L_002FB7D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB7DCu); set32(c.r[4], c.r[17].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002FB7DCu) [[unlikely]] return; }
L_002FB7DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F230000u);
    c.r[2].d[0] = c.r[2].d[0] | 55050ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st32((c.r[16].w[0] + 100u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002FB824; } }
L_002FB800:
    c.f[3] = ld32((c.r[4].w[0] + 80u));
    c.f[2] = ld32((c.r[4].w[0] + 84u));
    c.f[1] = ld32((c.r[4].w[0] + 88u));
    c.f[0] = ld32((c.r[4].w[0] + 92u));
    st32((c.r[16].w[0] + 64u), c.f[3]);
    st32((c.r[16].w[0] + 68u), c.f[2]);
    st32((c.r[16].w[0] + 72u), c.f[1]);
    st32((c.r[16].w[0] + 76u), c.f[0]);
    c.budget -= 8;
L_002FB820:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002FB824:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FB840:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[6], 0u + 255u);
    set32(c.r[3], 0u + 90u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st8((c.r[2].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 18u)));
    set32(c.r[4], c.r[16].w[0] + 32u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 18u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002A(c, 384u, depth + 1u); else { c.pc = 0x001AB3A0u; return; } if (c.pc != 0x002FB8A4u) [[unlikely]] return; }
L_002FB8A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[18], c.r[2].w[0] + 2192u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_002FB8B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB8BCu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_004C(c, 283u, depth + 1u); else { c.pc = 0x002335D0u; return; } if (c.pc != 0x002FB8BCu) [[unlikely]] return; }
L_002FB8BC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002FB8B0u | kUnwind; return; } goto L_002FB8B0; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FB8F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], 0u + 1u);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB91Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002FB91Cu) [[unlikely]] return; }
L_002FB91C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_002FB980; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 17u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 18u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[2], c.r[2].w[0] - 18016u);
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[2], c.r[2].w[0] - 15168u);
    st32((c.r[16].w[0] + 168u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 180u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 4u)));
    st32((c.r[16].w[0] + 184u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FB980u); st32((c.r[16].w[0] + 188u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002FB980u) [[unlikely]] return; }
L_002FB980:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FB9A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[6], ld32((c.r[4].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] + 2496u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[7], c.r[6].w[0] + 320u);
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002F8000u < 16384u) { entry = entries_007E[(t - 0x002F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002FB9D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 742u));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_002FBA14; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBA14; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002FBAB4; } }
L_002FBA14:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_002FBA40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBA3C; } }
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FBAB4; } }
L_002FBA3C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002FBA40:
    set32(c.r[2], 0u + 100u);
    st8((c.r[18].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[18].w[0] + 514u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[18].w[0] + 516u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[6], 0u + 41u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[17].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAA0u); st8((c.r[17].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002FBAA0u) [[unlikely]] return; }
L_002FBAA0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBAB4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 41u, depth + 1u); else { c.pc = 0x002FC600u; return; } if (c.pc != 0x002FBAB4u) [[unlikely]] return; }
L_002FBAB4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002FBAD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002FBAF8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 514u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBB08; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002FBAF8:
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (t) { goto L_002FBB8C; } }
L_002FBB08:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 65u));
    st8((c.r[5].w[0] + 66u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 67u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 4u));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[5].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[5].w[0] + 65u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 66u));
    c.budget -= 18;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002FBB6C; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 128u), 0u);
    st32((c.r[4].w[0] + 132u), 0u);
    st32((c.r[4].w[0] + 136u), 0u);
    st32((c.r[4].w[0] + 96u), 0u);
    c.budget -= 7;
L_002FBB6C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 64u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBB8Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002FBB8Cu) [[unlikely]] return; }
L_002FBB8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002FBBA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBBC0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 41u, depth + 1u); else { c.pc = 0x002FC600u; return; } if (c.pc != 0x002FBBC0u) [[unlikely]] return; }
L_002FBBC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBBE0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBBE0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FBBE0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002FBC00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[20], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC3Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002FBC3Cu) [[unlikely]] return; }
L_002FBC3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28260u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC5Cu); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002FBC5Cu) [[unlikely]] return; }
L_002FBC5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBC74; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC70u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002FBC70u) [[unlikely]] return; }
L_002FBC70:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FBC74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FBCA8; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBC90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002FBC90u) [[unlikely]] return; }
L_002FBC90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBCA8; } }
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCA4u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002FBCA4u) [[unlikely]] return; }
L_002FBCA4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FBCA8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FBCC0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCC0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002FBCC0u) [[unlikely]] return; }
L_002FBCC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[7], 0u + 1u);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBCE0u); st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_007F(c, 41u, depth + 1u); else { c.pc = 0x002FC600u; return; } if (c.pc != 0x002FBCE0u) [[unlikely]] return; }
L_002FBCE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBD00; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBD00; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FBD00:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_002FBD30:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[7], c.r[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_002FBD70; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002FBD70:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 578u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002FBDD4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[8], 0u + 48u);
    set32(c.r[2], 0u + 3u);
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st8((c.r[19].w[0] + 64u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[19].w[0] + 65u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 520u), 0u);
    st32((c.r[20].w[0] + 128u), 0u);
    st32((c.r[20].w[0] + 132u), 0u);
    st32((c.r[20].w[0] + 136u), 0u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[7], c.r[17], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDC8u); st32((c.r[20].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_007E(c, 444u, depth + 1u); else { c.pc = 0x002FBF70u; return; } if (c.pc != 0x002FBDC8u) [[unlikely]] return; }
L_002FBDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);  if (t) { goto L_002FBF44; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002FBDD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBDDCu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x002FBDDCu) [[unlikely]] return; }
L_002FBDDC:
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    set32(c.r[4], c.r[29].w[0] + 128u);
    set32(c.r[5], c.r[18].w[0] + 1328u);
    set32(c.r[6], c.r[20].w[0] + 32u);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 36u));
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[0] = ld32((c.r[19].w[0] + 40u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE04u); st32((c.r[29].w[0] + 120u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002FBE04u) [[unlikely]] return; }
L_002FBE04:
    set32(c.r[4], c.r[29].w[0] + 112u);
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE14u); set32(c.r[6], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x002FBE14u) [[unlikely]] return; }
L_002FBE14:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[16].sd[0] < 512ll ? 1ull : 0ull;  if (t) { goto L_002FBE2C; } }
    set32(c.r[16], 0u + 512u);
    c.r[1].d[0] = c.r[16].sd[0] < 512ll ? 1ull : 0ull;
    c.budget -= 2;
L_002FBE2C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[29].w[0] + 144u);  if (t) { goto L_002FBE3C; } }
    set32(c.r[16], 0u - 512u);
    set32(c.r[5], c.r[29].w[0] + 144u);
    c.budget -= 2;
L_002FBE3C:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE48u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x002FBE48u) [[unlikely]] return; }
L_002FBE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE50u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002FBE50u) [[unlikely]] return; }
L_002FBE50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE58u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002FBE58u) [[unlikely]] return; }
L_002FBE58:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE64u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x002FBE64u) [[unlikely]] return; }
L_002FBE64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE6Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002FBE6Cu) [[unlikely]] return; }
L_002FBE6C:
    c.r[2].d[0] = ld8((c.r[19].w[0] + 65u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[7], 0u + 1u);  if (t) { goto L_002FBF10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28260u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[21].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBE98u); mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002FBE98u) [[unlikely]] return; }
L_002FBE98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBEB0; } }
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEACu); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002FBEACu) [[unlikely]] return; }
L_002FBEAC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FBEB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002FBEE4; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBECCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002FBECCu) [[unlikely]] return; }
L_002FBECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002FBEE4; } }
    set32(c.r[5], c.r[21].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEE0u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002FBEE0u) [[unlikely]] return; }
L_002FBEE0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_002FBEE4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002FBEFC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8386u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBEFCu); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 35u, depth + 1u); else { c.pc = 0x00198550u; return; } if (c.pc != 0x002FBEFCu) [[unlikely]] return; }
L_002FBEFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 3u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 1u);
    c.budget -= 5;
L_002FBF10:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBF20u); mmi::paddub(c.r[6], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_007F(c, 41u, depth + 1u); else { c.pc = 0x002FC600u; return; } if (c.pc != 0x002FBF20u) [[unlikely]] return; }
L_002FBF20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 760u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002FBF40; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 1260u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002FBF40; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[20].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002FBF40:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002FBF44:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_002FBF70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[28].w[0] - 28264u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[7], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFB8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002FBFB8u) [[unlikely]] return; }
L_002FBFB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[3], c.r[28].w[0] - 28264u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[18], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[18], c.r[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002FBFECu); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_005B(c, 214u, depth + 1u); else { c.pc = 0x0026EED0u; return; } if (c.pc != 0x002FBFECu) [[unlikely]] return; }
L_002FBFEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 2528u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 5;
    [[clang::musttail]] return unit_007F(c, 1u, depth);
}

}
