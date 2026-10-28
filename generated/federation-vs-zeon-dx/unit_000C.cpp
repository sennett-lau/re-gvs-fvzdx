#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000C[4096] = {
    1, 2, 0, 0, 3, 4, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0,
    0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32,
    0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0,
    59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0,
    77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 113, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124,
    125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0,
    136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 145, 0,
    146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 153, 0, 0, 0, 0, 0,
    154, 0, 155, 0, 0, 0, 0, 156, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0,
    181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0,
    217, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0,
    232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0,
    260, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314,
    0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 348, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    379, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0,
    416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0,
    0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460,
    0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0,
    0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0,
};

void unit_000C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00130000;
    case 2u: goto L_00130004;
    case 3u: goto L_00130010;
    case 4u: goto L_00130014;
    case 5u: goto L_00130018;
    case 6u: goto L_0013001C;
    case 7u: goto L_00130020;
    case 8u: goto L_00130054;
    case 9u: goto L_00130070;
    case 10u: goto L_00130094;
    case 11u: goto L_00130098;
    case 12u: goto L_001300C4;
    case 13u: goto L_001300D8;
    case 14u: goto L_0013010C;
    case 15u: goto L_00130110;
    case 16u: goto L_00130144;
    case 17u: goto L_00130158;
    case 18u: goto L_0013019C;
    case 19u: goto L_001301AC;
    case 20u: goto L_001301C0;
    case 21u: goto L_001301D0;
    case 22u: goto L_00130210;
    case 23u: goto L_00130238;
    case 24u: goto L_00130258;
    case 25u: goto L_00130274;
    case 26u: goto L_00130288;
    case 27u: goto L_0013029C;
    case 28u: goto L_001302C4;
    case 29u: goto L_001302E8;
    case 30u: goto L_00130320;
    case 31u: goto L_00130364;
    case 32u: goto L_0013037C;
    case 33u: goto L_00130384;
    case 34u: goto L_001303A0;
    case 35u: goto L_001303A8;
    case 36u: goto L_001303B0;
    case 37u: goto L_001303D8;
    case 38u: goto L_00130400;
    case 39u: goto L_00130438;
    case 40u: goto L_00130558;
    case 41u: goto L_00130578;
    case 42u: goto L_00130580;
    case 43u: goto L_00130588;
    case 44u: goto L_00130590;
    case 45u: goto L_001305C0;
    case 46u: goto L_001305D8;
    case 47u: goto L_00130620;
    case 48u: goto L_00130634;
    case 49u: goto L_00130638;
    case 50u: goto L_00130668;
    case 51u: goto L_0013067C;
    case 52u: goto L_00130698;
    case 53u: goto L_001306B8;
    case 54u: goto L_001306C0;
    case 55u: goto L_001306D8;
    case 56u: goto L_00130720;
    case 57u: goto L_00130764;
    case 58u: goto L_00130778;
    case 59u: goto L_00130780;
    case 60u: goto L_001307C0;
    case 61u: goto L_00130804;
    case 62u: goto L_0013080C;
    case 63u: goto L_00130818;
    case 64u: goto L_00130830;
    case 65u: goto L_00130850;
    case 66u: goto L_00130870;
    case 67u: goto L_001308B8;
    case 68u: goto L_001308FC;
    case 69u: goto L_00130914;
    case 70u: goto L_0013094C;
    case 71u: goto L_00130950;
    case 72u: goto L_00130980;
    case 73u: goto L_00130998;
    case 74u: goto L_001309CC;
    case 75u: goto L_001309E0;
    case 76u: goto L_001309F8;
    case 77u: goto L_00130A00;
    case 78u: goto L_00130A28;
    case 79u: goto L_00130A3C;
    case 80u: goto L_00130A40;
    case 81u: goto L_00130A60;
    case 82u: goto L_00130A78;
    case 83u: goto L_00130A90;
    case 84u: goto L_00130AD8;
    case 85u: goto L_00130AE8;
    case 86u: goto L_00130B10;
    case 87u: goto L_00130B30;
    case 88u: goto L_00130B3C;
    case 89u: goto L_00130B60;
    case 90u: goto L_00130B98;
    case 91u: goto L_00130BD0;
    case 92u: goto L_00130BEC;
    case 93u: goto L_00130C08;
    case 94u: goto L_00130C14;
    case 95u: goto L_00130C40;
    case 96u: goto L_00130C54;
    case 97u: goto L_00130C58;
    case 98u: goto L_00130C78;
    case 99u: goto L_00130C8C;
    case 100u: goto L_00130C90;
    case 101u: goto L_00130CB0;
    case 102u: goto L_00130CC0;
    case 103u: goto L_00130CE0;
    case 104u: goto L_00130CF8;
    case 105u: goto L_00130D08;
    case 106u: goto L_00130D18;
    case 107u: goto L_00130D28;
    case 108u: goto L_00130D78;
    case 109u: goto L_00130DA8;
    case 110u: goto L_00130DCC;
    case 111u: goto L_00130DDC;
    case 112u: goto L_00130DF4;
    case 113u: goto L_00130E14;
    case 114u: goto L_00130E18;
    case 115u: goto L_00130E24;
    case 116u: goto L_00130E3C;
    case 117u: goto L_00130E70;
    case 118u: goto L_00130E8C;
    case 119u: goto L_00130EA0;
    case 120u: goto L_00130EB0;
    case 121u: goto L_00130EC8;
    case 122u: goto L_00130ED0;
    case 123u: goto L_00130EE8;
    case 124u: goto L_00130EFC;
    case 125u: goto L_00130F00;
    case 126u: goto L_00130F20;
    case 127u: goto L_00130F28;
    case 128u: goto L_00130F30;
    case 129u: goto L_00130F50;
    case 130u: goto L_00130F80;
    case 131u: goto L_00130F9C;
    case 132u: goto L_00130FA0;
    case 133u: goto L_00130FC8;
    case 134u: goto L_00130FDC;
    case 135u: goto L_00130FE0;
    case 136u: goto L_00131000;
    case 137u: goto L_00131008;
    case 138u: goto L_00131010;
    case 139u: goto L_00131020;
    case 140u: goto L_00131028;
    case 141u: goto L_0013103C;
    case 142u: goto L_00131040;
    case 143u: goto L_00131060;
    case 144u: goto L_00131074;
    case 145u: goto L_00131078;
    case 146u: goto L_00131080;
    case 147u: goto L_00131098;
    case 148u: goto L_001310AC;
    case 149u: goto L_001310B0;
    case 150u: goto L_001310C0;
    case 151u: goto L_001310D0;
    case 152u: goto L_001310E4;
    case 153u: goto L_001310E8;
    case 154u: goto L_00131100;
    case 155u: goto L_00131108;
    case 156u: goto L_0013111C;
    case 157u: goto L_00131120;
    case 158u: goto L_00131140;
    case 159u: goto L_00131154;
    case 160u: goto L_00131158;
    case 161u: goto L_00131178;
    case 162u: goto L_00131180;
    case 163u: goto L_00131190;
    case 164u: goto L_001311A8;
    case 165u: goto L_001311B0;
    case 166u: goto L_001311B8;
    case 167u: goto L_001311C8;
    case 168u: goto L_001311D8;
    case 169u: goto L_001311E0;
    case 170u: goto L_001311F0;
    case 171u: goto L_00131200;
    case 172u: goto L_00131208;
    case 173u: goto L_00131220;
    case 174u: goto L_00131244;
    case 175u: goto L_00131260;
    case 176u: goto L_00131290;
    case 177u: goto L_001312C0;
    case 178u: goto L_00131338;
    case 179u: goto L_00131350;
    case 180u: goto L_00131370;
    case 181u: goto L_00131380;
    case 182u: goto L_00131388;
    case 183u: goto L_00131390;
    case 184u: goto L_001313A0;
    case 185u: goto L_001313B0;
    case 186u: goto L_001313E8;
    case 187u: goto L_001313F8;
    case 188u: goto L_00131424;
    case 189u: goto L_0013143C;
    case 190u: goto L_00131494;
    case 191u: goto L_001314B0;
    case 192u: goto L_001314EC;
    case 193u: goto L_00131518;
    case 194u: goto L_00131548;
    case 195u: goto L_00131584;
    case 196u: goto L_001315F4;
    case 197u: goto L_00131614;
    case 198u: goto L_0013163C;
    case 199u: goto L_00131648;
    case 200u: goto L_00131674;
    case 201u: goto L_001316B4;
    case 202u: goto L_001316BC;
    case 203u: goto L_001316E0;
    case 204u: goto L_001316E8;
    case 205u: goto L_001316F0;
    case 206u: goto L_00131710;
    case 207u: goto L_00131734;
    case 208u: goto L_00131750;
    case 209u: goto L_00131780;
    case 210u: goto L_001317A8;
    case 211u: goto L_001317C0;
    case 212u: goto L_001317C8;
    case 213u: goto L_00131840;
    case 214u: goto L_00131844;
    case 215u: goto L_0013184C;
    case 216u: goto L_00131870;
    case 217u: goto L_00131880;
    case 218u: goto L_00131884;
    case 219u: goto L_00131898;
    case 220u: goto L_001318B0;
    case 221u: goto L_001318B8;
    case 222u: goto L_001318C0;
    case 223u: goto L_001318C8;
    case 224u: goto L_001318E0;
    case 225u: goto L_00131900;
    case 226u: goto L_0013191C;
    case 227u: goto L_00131930;
    case 228u: goto L_00131940;
    case 229u: goto L_0013195C;
    case 230u: goto L_00131A5C;
    case 231u: goto L_00131A78;
    case 232u: goto L_00131A80;
    case 233u: goto L_00131AB4;
    case 234u: goto L_00131B08;
    case 235u: goto L_00131B14;
    case 236u: goto L_00131B44;
    case 237u: goto L_00131B80;
    case 238u: goto L_00131BB0;
    case 239u: goto L_00131BEC;
    case 240u: goto L_00131C3C;
    case 241u: goto L_00131CC0;
    case 242u: goto L_00131CE0;
    case 243u: goto L_00131D10;
    case 244u: goto L_00131D3C;
    case 245u: goto L_00131DA4;
    case 246u: goto L_00131DAC;
    case 247u: goto L_00131DD0;
    case 248u: goto L_00131DD8;
    case 249u: goto L_00131DE0;
    case 250u: goto L_00131DE8;
    case 251u: goto L_00131E08;
    case 252u: goto L_00131E2C;
    case 253u: goto L_00131E3C;
    case 254u: goto L_00131E48;
    case 255u: goto L_00131E78;
    case 256u: goto L_00131EB0;
    case 257u: goto L_00131F30;
    case 258u: goto L_00131F48;
    case 259u: goto L_00131F68;
    case 260u: goto L_00131F80;
    case 261u: goto L_00131F88;
    case 262u: goto L_00131F98;
    case 263u: goto L_00131FB8;
    case 264u: goto L_00132010;
    case 265u: goto L_00132038;
    case 266u: goto L_00132060;
    case 267u: goto L_00132080;
    case 268u: goto L_001320B0;
    case 269u: goto L_001320C0;
    case 270u: goto L_001320F8;
    case 271u: goto L_0013210C;
    case 272u: goto L_0013218C;
    case 273u: goto L_001321C0;
    case 274u: goto L_001321E0;
    case 275u: goto L_00132220;
    case 276u: goto L_00132248;
    case 277u: goto L_00132268;
    case 278u: goto L_001322F4;
    case 279u: goto L_00132348;
    case 280u: goto L_00132388;
    case 281u: goto L_001323B0;
    case 282u: goto L_00132424;
    case 283u: goto L_0013243C;
    case 284u: goto L_00132480;
    case 285u: goto L_001324AC;
    case 286u: goto L_00132520;
    case 287u: goto L_00132538;
    case 288u: goto L_00132560;
    case 289u: goto L_00132570;
    case 290u: goto L_00132598;
    case 291u: goto L_001325F8;
    case 292u: goto L_00132634;
    case 293u: goto L_0013263C;
    case 294u: goto L_00132648;
    case 295u: goto L_00132680;
    case 296u: goto L_00132698;
    case 297u: goto L_001326D4;
    case 298u: goto L_001326E8;
    case 299u: goto L_00132708;
    case 300u: goto L_00132740;
    case 301u: goto L_00132780;
    case 302u: goto L_001327A0;
    case 303u: goto L_001327EC;
    case 304u: goto L_00132818;
    case 305u: goto L_00132840;
    case 306u: goto L_00132858;
    case 307u: goto L_00132880;
    case 308u: goto L_00132898;
    case 309u: goto L_001328D0;
    case 310u: goto L_001328E8;
    case 311u: goto L_00132900;
    case 312u: goto L_00132934;
    case 313u: goto L_00132958;
    case 314u: goto L_0013297C;
    case 315u: goto L_00132998;
    case 316u: goto L_001329C0;
    case 317u: goto L_001329D8;
    case 318u: goto L_001329FC;
    case 319u: goto L_00132A08;
    case 320u: goto L_00132A40;
    case 321u: goto L_00132A60;
    case 322u: goto L_00132A9C;
    case 323u: goto L_00132AB0;
    case 324u: goto L_00132AC8;
    case 325u: goto L_00132B1C;
    case 326u: goto L_00132B40;
    case 327u: goto L_00132B70;
    case 328u: goto L_00132B78;
    case 329u: goto L_00132B90;
    case 330u: goto L_00132BC0;
    case 331u: goto L_00132BD8;
    case 332u: goto L_00132C20;
    case 333u: goto L_00132C34;
    case 334u: goto L_00132C38;
    case 335u: goto L_00132C68;
    case 336u: goto L_00132C7C;
    case 337u: goto L_00132C98;
    case 338u: goto L_00132CA8;
    case 339u: goto L_00132CE8;
    case 340u: goto L_00132D28;
    case 341u: goto L_00132D5C;
    case 342u: goto L_00132D70;
    case 343u: goto L_00132DA0;
    case 344u: goto L_00132DD0;
    case 345u: goto L_00132DE8;
    case 346u: goto L_00132E2C;
    case 347u: goto L_00132E38;
    case 348u: goto L_00132E3C;
    case 349u: goto L_00132E54;
    case 350u: goto L_00132E60;
    case 351u: goto L_00132E7C;
    case 352u: goto L_00132E88;
    case 353u: goto L_00132ED0;
    case 354u: goto L_00132EE0;
    case 355u: goto L_00132EF8;
    case 356u: goto L_00132F10;
    case 357u: goto L_00132F34;
    case 358u: goto L_00132F4C;
    case 359u: goto L_00132F60;
    case 360u: goto L_00132F8C;
    case 361u: goto L_00132F9C;
    case 362u: goto L_00132FB4;
    case 363u: goto L_00132FC8;
    case 364u: goto L_00133000;
    case 365u: goto L_00133020;
    case 366u: goto L_00133034;
    case 367u: goto L_00133040;
    case 368u: goto L_00133054;
    case 369u: goto L_00133078;
    case 370u: goto L_001330E0;
    case 371u: goto L_00133110;
    case 372u: goto L_00133120;
    case 373u: goto L_00133144;
    case 374u: goto L_0013314C;
    case 375u: goto L_00133158;
    case 376u: goto L_00133190;
    case 377u: goto L_001331BC;
    case 378u: goto L_001331D0;
    case 379u: goto L_00133200;
    case 380u: goto L_00133210;
    case 381u: goto L_00133218;
    case 382u: goto L_00133240;
    case 383u: goto L_0013326C;
    case 384u: goto L_00133274;
    case 385u: goto L_001332B0;
    case 386u: goto L_001332D4;
    case 387u: goto L_00133308;
    case 388u: goto L_00133334;
    case 389u: goto L_00133340;
    case 390u: goto L_0013335C;
    case 391u: goto L_00133378;
    case 392u: goto L_00133388;
    case 393u: goto L_00133398;
    case 394u: goto L_001333E0;
    case 395u: goto L_001333F8;
    case 396u: goto L_00133430;
    case 397u: goto L_0013343C;
    case 398u: goto L_00133440;
    case 399u: goto L_00133450;
    case 400u: goto L_00133460;
    case 401u: goto L_00133470;
    case 402u: goto L_00133480;
    case 403u: goto L_00133490;
    case 404u: goto L_001334A0;
    case 405u: goto L_001334B0;
    case 406u: goto L_001334C0;
    case 407u: goto L_001334D0;
    case 408u: goto L_001334E0;
    case 409u: goto L_001334F0;
    case 410u: goto L_00133514;
    case 411u: goto L_00133524;
    case 412u: goto L_00133534;
    case 413u: goto L_00133550;
    case 414u: goto L_00133560;
    case 415u: goto L_00133574;
    case 416u: goto L_00133580;
    case 417u: goto L_00133598;
    case 418u: goto L_001335A8;
    case 419u: goto L_001335B4;
    case 420u: goto L_001335C8;
    case 421u: goto L_001335D0;
    case 422u: goto L_00133614;
    case 423u: goto L_00133628;
    case 424u: goto L_0013363C;
    case 425u: goto L_00133674;
    case 426u: goto L_00133690;
    case 427u: goto L_001336B0;
    case 428u: goto L_001336C8;
    case 429u: goto L_001336D8;
    case 430u: goto L_001336F0;
    case 431u: goto L_00133720;
    case 432u: goto L_0013375C;
    case 433u: goto L_00133778;
    case 434u: goto L_00133788;
    case 435u: goto L_001337BC;
    case 436u: goto L_001337C8;
    case 437u: goto L_00133830;
    case 438u: goto L_001338C0;
    case 439u: goto L_001338D0;
    case 440u: goto L_001338E0;
    case 441u: goto L_00133900;
    case 442u: goto L_00133920;
    case 443u: goto L_00133A0C;
    case 444u: goto L_00133A20;
    case 445u: goto L_00133A44;
    case 446u: goto L_00133A90;
    case 447u: goto L_00133AA0;
    case 448u: goto L_00133B94;
    case 449u: goto L_00133C70;
    case 450u: goto L_00133C80;
    case 451u: goto L_00133CA8;
    case 452u: goto L_00133CB4;
    case 453u: goto L_00133CC4;
    case 454u: goto L_00133CD8;
    case 455u: goto L_00133CF0;
    case 456u: goto L_00133D00;
    case 457u: goto L_00133D28;
    case 458u: goto L_00133D34;
    case 459u: goto L_00133D44;
    case 460u: goto L_00133DFC;
    case 461u: goto L_00133E08;
    case 462u: goto L_00133E28;
    case 463u: goto L_00133E38;
    case 464u: goto L_00133E48;
    case 465u: goto L_00133E84;
    case 466u: goto L_00133E98;
    case 467u: goto L_00133EA4;
    case 468u: goto L_00133EB0;
    case 469u: goto L_00133ED4;
    case 470u: goto L_00133F00;
    case 471u: goto L_00133F20;
    case 472u: goto L_00133F2C;
    case 473u: goto L_00133F4C;
    case 474u: goto L_00133F58;
    case 475u: goto L_00133F64;
    case 476u: goto L_00133F88;
    case 477u: goto L_00133FB4;
    case 478u: goto L_00133FD8;
    case 479u: goto L_00133FE4;
    default: bad_entry(c, 0x00130000u); return;
    }
L_00130000:
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.budget -= 1;
L_00130004:
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00130040; } }
    goto L_00130014;
L_00130010:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 1;
L_00130014:
    set32(c.r[4], ld32((c.r[28].w[0] - 32152u)));
    c.budget -= 1;
L_00130018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130020u); set32(c.r[4], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_0002(c, 344u, depth + 1u); else { c.pc = 0x0010AAB8u; return; } if (c.pc != 0x00130020u) [[unlikely]] return; }
    goto L_00130020;
L_0013001C:
    set32(c.r[4], c.r[4].w[0] + 64u);
    c.budget -= 1;
L_00130020:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[4], c.r[2].w[0] + 64u);
    c.r[3].d[0] = c.r[3].d[0] | 65472ull;
    set32(c.r[5], 0u + 1u);
    c.r[4].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st8((c.r[28].w[0] - 32140u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[28].w[0] - 32144u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 32148u), c.r[2].w[0]);
    c.budget -= 8;
L_00130040:
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[20].w[0] + 4368u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130054u); set32(c.r[6], 0u + 192u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00130054u) [[unlikely]] return; }
L_00130054:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 32156u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[17], ld32((c.r[28].w[0] - 32144u)));  if (t) { goto L_001301F0; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], 0u + 24u);
    c.budget -= 3;
L_00130070:
    set32(c.r[3], c.r[20].w[0] + 4368u);
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[4].d[0] = c.r[17].d[0] & 63ull;
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_001300B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130094u); set32(c.r[4], c.r[4].w[0] + 18432u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130094u) [[unlikely]] return; }
L_00130094:
    c.budget -= 1;
L_00130098:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130098u | kUnwind; return; } goto L_00130098; } }
L_001300B4:
    set32(c.r[4], 0u + 1u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300C4u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000C(c, 296u, depth + 1u); else { c.pc = 0x00132698u; return; } if (c.pc != 0x001300C4u) [[unlikely]] return; }
L_001300C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001300F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001300D8u); set32(c.r[4], c.r[4].w[0] + 18480u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001300D8u) [[unlikely]] return; }
L_001300D8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001300D8u | kUnwind; return; } goto L_001300D8; } }
L_001300F4:
    set32(c.r[17], c.r[17].w[0] + 256u);
    c.r[2].d[0] = c.r[17].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0013012C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013010Cu); set32(c.r[4], c.r[4].w[0] + 18536u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0013010Cu) [[unlikely]] return; }
L_0013010C:
    c.budget -= 1;
L_00130110:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130110u | kUnwind; return; } goto L_00130110; } }
L_0013012C:
    set32(c.r[2], c.r[18].w[0] << 8);
    set32(c.r[5], c.r[19].w[0] + 4560u);
    set32(c.r[5], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130144u); set32(c.r[6], 0u + 256u);  if (depth < kMaxDepth) unit_000C(c, 255u, depth + 1u); else { c.pc = 0x00131E78u; return; } if (c.pc != 0x00130144u) [[unlikely]] return; }
L_00130144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00130174; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130158u); set32(c.r[4], c.r[4].w[0] + 18584u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130158u) [[unlikely]] return; }
L_00130158:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130158u | kUnwind; return; } goto L_00130158; } }
L_00130174:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[2], 0u + 16384u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[6], c.r[16].w[0] + 16u);
    st32((c.r[16].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013019Cu); set32(c.r[17], c.r[17].w[0] + 16384u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013019Cu) [[unlikely]] return; }
L_0013019C:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301ACu); set32(c.r[5], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000C(c, 338u, depth + 1u); else { c.pc = 0x00132CA8u; return; } if (c.pc != 0x001301ACu) [[unlikely]] return; }
L_001301AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001301DC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001301C0u); set32(c.r[4], c.r[4].w[0] + 18640u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001301C0u) [[unlikely]] return; }
L_001301C0:
    c.budget -= 4;
L_001301D0:
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001301C0u | kUnwind; return; } goto L_001301C0; } }
L_001301DC:
    set32(c.r[2], ld32((c.r[28].w[0] - 32156u)));
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130070u | kUnwind; return; } goto L_00130070; } }
L_001301F0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00130210:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32156u)));
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_001302AC; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], 0u + 24u);
    c.budget -= 2;
L_00130238:
    set32(c.r[3], c.r[18].w[0] + 4368u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 6;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_0013025C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130258u);  if (depth < kMaxDepth) unit_000C(c, 298u, depth + 1u); else { c.pc = 0x001326E8u; return; } if (c.pc != 0x00130258u) [[unlikely]] return; }
L_00130258:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0013025C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  goto L_00130278; }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130274u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130274u) [[unlikely]] return; }
L_00130274:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 1;
L_00130278:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[16].d[0] + 0ull;  goto L_0013028C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130288u);  if (depth < kMaxDepth) unit_000C(c, 343u, depth + 1u); else { c.pc = 0x00132DA0u; return; } if (c.pc != 0x00130288u) [[unlikely]] return; }
L_00130288:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013028C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 24u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013029Cu); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0013029Cu) [[unlikely]] return; }
L_0013029C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32156u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 24u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130238u | kUnwind; return; } goto L_00130238; } }
L_001302AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 32140u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001302D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001302C4u); set32(c.r[4], ld32((c.r[28].w[0] - 32148u)));  if (depth < kMaxDepth) unit_0002(c, 350u, depth + 1u); else { c.pc = 0x0010AC20u; return; } if (c.pc != 0x001302C4u) [[unlikely]] return; }
L_001302C4:
    st32((c.r[28].w[0] - 32148u), 0u);
    st8((c.r[28].w[0] - 32140u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_001302D0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001302E8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[4], ld32((c.r[28].w[0] - 32156u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[4].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00130340; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4368u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 4368u);  if (t) { goto L_00130340; } }
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_00130320:
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 24u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 24u);  if (t) { goto L_00130340; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130320u | kUnwind; return; } goto L_00130320; } }
L_00130340:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    if (c.r[5].d[0] != c.r[2].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_00130354; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00130390; } }
L_00130354:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130364u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130364u) [[unlikely]] return; }
L_00130364:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013037Cu); set32(c.r[6], c.r[16].w[0] + 16u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013037Cu) [[unlikely]] return; }
L_0013037C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130384u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132780u; return; } if (c.pc != 0x00130384u) [[unlikely]] return; }
L_00130384:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00130390:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001303A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_001303A8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[5], ld32((c.r[5].w[0])));  goto L_001303CC; }
L_001303B0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001303B0u | kUnwind; return; } goto L_001303B0; } }
L_001303CC:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001303F4; } }
    c.budget -= 1;
L_001303D8:
    set32(c.r[5], c.r[5].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001303D8u | kUnwind; return; } goto L_001303D8; } }
L_001303F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00130400:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[7], c.r[3].w[0] + 6672u);
    set32(c.r[24], c.r[2].w[0] + 368u);
    set32(c.r[15], c.r[7].w[0] + 672u);
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[14], 0u + 1u);
    set32(c.r[13], 0u + 2u);
    set32(c.r[12], 0u + 3u);
    set32(c.r[11], 0u + 4u);
    set32(c.r[10], 0u + 5u);
    set32(c.r[6], c.r[5].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 14;
L_00130438:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[14].d[0]) { set32(c.r[7], c.r[7].w[0] + 84u);  goto L_00130540; }
    set32(c.r[9], 0u + 128u);
    c.budget -= 3;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_0013054C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 37u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00130480; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[13].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 36u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 36u));
    st8((c.r[7].w[0] + 37u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00130480:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_0013054C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 39u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001304BC; } }
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[12].w[0]));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 38u)));
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.r[2].d[0] = ld8((c.r[7].w[0] + 38u));
    st8((c.r[7].w[0] + 39u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_001304BC:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_0013054C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 44u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001304F4; } }
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[8], c.r[8].w[0] + 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 40u)));
    st32((c.r[6].w[0] + 4u), c.r[2].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[11].w[0]));
    st32((c.r[7].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[6], c.r[6].w[0] + 16u);
    c.budget -= 8;
L_001304F4:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0];  if (t) { goto L_0013054C; } }
    set32(c.r[3], ld32((c.r[7].w[0] + 48u)));
    set32(c.r[2], ld32((c.r[7].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], c.r[3].w[0] << 2);  if (t) { goto L_00130538; } }
    set32(c.r[4], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[2], c.r[24].w[0] - c.r[2].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[10].w[0]));
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st32((c.r[6].w[0] + 8u), 0u);
    st32((c.r[6].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[6].w[0] + 4u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[7].w[0] + 48u)));
    set32(c.r[6], c.r[6].w[0] + 16u);
    st32((c.r[7].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 11;
L_00130538:
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[9].d[0]; set32(c.r[7], c.r[7].w[0] + 84u);  if (t) { goto L_0013054C; } }
L_00130540:
    c.r[2].d[0] = c.r[7].sd[0] < c.r[15].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130438u | kUnwind; return; } goto L_00130438; }
L_0013054C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0]), c.r[8].w[0]);  c.pc = t; return; }
L_00130558:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32136u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 32160u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[3].w[0] + 1u);  if (t) { goto L_00130684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130578u);  if (depth < kMaxDepth) unit_000C(c, 313u, depth + 1u); else { c.pc = 0x00132958u; return; } if (c.pc != 0x00130578u) [[unlikely]] return; }
L_00130578:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130580u);  if (depth < kMaxDepth) unit_000C(c, 328u, depth + 1u); else { c.pc = 0x00132B78u; return; } if (c.pc != 0x00130580u) [[unlikely]] return; }
L_00130580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130588u);  if (depth < kMaxDepth) unit_000B(c, 53u, depth + 1u); else { c.pc = 0x0012C6F0u; return; } if (c.pc != 0x00130588u) [[unlikely]] return; }
L_00130588:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130590u);  if (depth < kMaxDepth) unit_000B(c, 474u, depth + 1u); else { c.pc = 0x0012FFF0u; return; } if (c.pc != 0x00130590u) [[unlikely]] return; }
L_00130590:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65472ull;
    set32(c.r[2], c.r[2].w[0] + 7408u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 2176u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32128u)));
    st32((c.r[28].w[0] - 32120u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 32132u), c.r[2].w[0]);  if (t) { goto L_001305F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305C0u); set32(c.r[4], 0u + 2256u);  if (depth < kMaxDepth) unit_0002(c, 344u, depth + 1u); else { c.pc = 0x0010AAB8u; return; } if (c.pc != 0x001305C0u) [[unlikely]] return; }
L_001305C0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 32128u), c.r[3].w[0]);  if (t) { goto L_001305F4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001305D8u); set32(c.r[4], c.r[4].w[0] + 18696u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001305D8u) [[unlikely]] return; }
L_001305D8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001305D8u | kUnwind; return; } goto L_001305D8; } }
L_001305F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32128u)));
    c.budget -= 1;
L_001305F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 32132u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[7], ld32((c.r[28].w[0] - 32120u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[28].w[0] - 32128u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130620u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012C3D8u; return; } if (c.pc != 0x00130620u) [[unlikely]] return; }
L_00130620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32124u), c.r[2].w[0]);  if (t) { goto L_00130654; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130634u); set32(c.r[4], c.r[4].w[0] + 18744u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130634u) [[unlikely]] return; }
L_00130634:
    c.budget -= 1;
L_00130638:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130638u | kUnwind; return; } goto L_00130638; } }
L_00130654:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 32124u)));
    set32(c.r[5], c.r[5].w[0] + 936u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130668u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 44u, depth + 1u); else { c.pc = 0x0012C5A0u; return; } if (c.pc != 0x00130668u) [[unlikely]] return; }
L_00130668:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 32124u)));
    set32(c.r[5], c.r[5].w[0] + 1024u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013067Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 45u, depth + 1u); else { c.pc = 0x0012C5B0u; return; } if (c.pc != 0x0013067Cu) [[unlikely]] return; }
L_0013067C:
    set32(c.r[3], ld32((c.r[28].w[0] - 32136u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_00130684:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32136u), c.r[3].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00130698:
    set32(c.r[2], ld32((c.r[28].w[0] - 32136u)));
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32136u), c.r[2].w[0]);  if (t) { goto L_001306CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001306B8u);  if (depth < kMaxDepth) unit_000B(c, 58u, depth + 1u); else { c.pc = 0x0012C798u; return; } if (c.pc != 0x001306B8u) [[unlikely]] return; }
L_001306B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001306C0u);  if (depth < kMaxDepth) unit_000C(c, 337u, depth + 1u); else { c.pc = 0x00132C98u; return; } if (c.pc != 0x001306C0u) [[unlikely]] return; }
L_001306C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  goto L_00132998; }
L_001306CC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001306D8:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    set32(c.r[20], c.r[2].w[0] + 6672u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6672u)));
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_00130740; } }
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.r[3].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 2;
L_00130720:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 84u);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 84u);  if (t) { goto L_00130740; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130720u | kUnwind; return; } goto L_00130720; } }
L_00130740:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00130754; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00130924; } }
L_00130754:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 84u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130764u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00130764u) [[unlikely]] return; }
L_00130764:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[20].w[0] + 4u), c.r[19].w[0]);  if (t) { goto L_001307A4; } }
    set32(c.r[18], c.r[20].w[0] + 8u);
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.budget -= 3;
L_00130778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130780u);  if (depth < kMaxDepth) unit_000C(c, 29u, depth + 1u); else { c.pc = 0x001302E8u; return; } if (c.pc != 0x00130780u) [[unlikely]] return; }
L_00130780:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130778u | kUnwind; return; } goto L_00130778; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0]), c.r[19].w[0]);  if (t) { goto L_001307AC; } }
L_001307A4:
    set32(c.r[16], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0]), c.r[19].w[0]);
    c.budget -= 2;
L_001307AC:
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[29].w[0] + 4u), 0u);  if (t) { goto L_001307EC; } }
    set32(c.r[18], c.r[20].w[0] + 8u);
    c.budget -= 2;
L_001307C0:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[17].w[0] + 2u);
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[5], c.r[29].w[0] + c.r[3].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[5].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001307C0u | kUnwind; return; } goto L_001307C0; } }
L_001307EC:
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], 0u + 8u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130804u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00130804u) [[unlikely]] return; }
L_00130804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[20].w[0] + 32u), c.r[2].w[0]);  if (t) { goto L_00130820; } }
L_0013080C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130818u); set32(c.r[4], c.r[4].w[0] + 18784u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130818u) [[unlikely]] return; }
L_00130818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00130924; } }
L_00130820:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00130860; } }
    set32(c.r[18], c.r[20].w[0] + 8u);
    set32(c.r[21], c.r[20].w[0] + 16u);
    c.budget -= 2;
L_00130830:
    set32(c.r[16], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] + c.r[22].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130850u); set32(c.r[5], ld32((c.r[6].w[0] + 8u)));  if (depth < kMaxDepth) unit_000A(c, 531u, depth + 1u); else { c.pc = 0x0012BF90u; return; } if (c.pc != 0x00130850u) [[unlikely]] return; }
L_00130850:
    set32(c.r[16], c.r[21].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130830u | kUnwind; return; } goto L_00130830; } }
L_00130860:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00130890; } }
    set32(c.r[5], c.r[20].w[0] + 24u);
    c.budget -= 2;
L_00130870:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[22].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130870u | kUnwind; return; } goto L_00130870; } }
L_00130890:
    st8((c.r[20].w[0] + 36u), static_cast<std::uint8_t>(0u));
    c.r[17].d[0] = 0ull + 0ull;
    st8((c.r[20].w[0] + 37u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 38u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st8((c.r[20].w[0] + 39u), static_cast<std::uint8_t>(c.r[19].w[0]));
    st32((c.r[20].w[0] + 48u), 0u);
    c.budget -= 8;
    { const bool t = c.r[19].sd[0] <= 0; st32((c.r[20].w[0] + 52u), 0u);  if (t) { goto L_001308D8; } }
    set32(c.r[5], c.r[20].w[0] + 56u);
    set32(c.r[4], c.r[20].w[0] + 64u);
    c.budget -= 2;
L_001308B8:
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[3], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[3].w[0]), 0u);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[17].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[2].w[0]), 0u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001308B8u | kUnwind; return; } goto L_001308B8; } }
L_001308D8:
    set32(c.r[17], 0u + 1u);
    st8((c.r[20].w[0] + 72u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 73u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[20].w[0] + 76u), 0u);
    set32(c.r[4], ld32((c.r[22].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001308FCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001308FCu) [[unlikely]] return; }
L_001308FC:
    set32(c.r[4], ld32((c.r[22].w[0])));
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130914u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130914u) [[unlikely]] return; }
L_00130914:
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[20].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[20].w[0] + 80u), c.r[16].w[0]);
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 4;
L_00130924:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0013094C:
    c.budget -= 1;
L_00130950:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001309A8; } }
    set32(c.r[18], c.r[17].w[0] + 16u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 3;
L_00130980:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0013099C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130998u);  if (depth < kMaxDepth) unit_000B(c, 6u, depth + 1u); else { c.pc = 0x0012C060u; return; } if (c.pc != 0x00130998u) [[unlikely]] return; }
L_00130998:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_0013099C:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130980u | kUnwind; return; } goto L_00130980; } }
L_001309A8:
    set32(c.r[2], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[4], 0u + 9u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[6], 0u + 1u);
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001309CCu); c.r[16].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x001309CCu) [[unlikely]] return; }
L_001309CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[18], c.r[17].w[0] + 8u);  if (t) { goto L_00130A08; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_001309E0:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001309FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001309F8u);  if (depth < kMaxDepth) unit_000C(c, 34u, depth + 1u); else { c.pc = 0x001303A0u; return; } if (c.pc != 0x001309F8u) [[unlikely]] return; }
L_001309F8:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 1;
L_001309FC:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00130A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001309E0u | kUnwind; return; } goto L_001309E0; } }
L_00130A08:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00130A28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A3Cu); set32(c.r[4], c.r[4].w[0] + 18824u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130A3Cu) [[unlikely]] return; }
L_00130A3C:
    c.budget -= 1;
L_00130A40:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130A40u | kUnwind; return; } goto L_00130A40; } }
    c.budget -= 1;
L_00130A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130A78u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 83u, depth + 1u); else { c.pc = 0x00130A90u; return; } if (c.pc != 0x00130A78u) [[unlikely]] return; }
L_00130A78:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  goto L_00130B98; }
L_00130A90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[20].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 38u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st8((c.r[19].w[0] + 72u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00130B00; } }
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00130B74; } }
    set32(c.r[18], c.r[19].w[0] + 16u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 3;
L_00130AD8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130AE8u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000B(c, 8u, depth + 1u); else { c.pc = 0x0012C088u; return; } if (c.pc != 0x00130AE8u) [[unlikely]] return; }
L_00130AE8:
    set32(c.r[2], ld32((c.r[19].w[0] + 4u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130AD8u | kUnwind; return; } goto L_00130AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00130B78; } }
L_00130B00:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00130B74; } }
    set32(c.r[18], c.r[19].w[0] + 16u);
    c.budget -= 2;
L_00130B10:
    set32(c.r[17], c.r[16].w[0] << 2);
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[5].d[0]; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00130B4C; } }
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00130B30:
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B3Cu); set32(c.r[4], ld32((c.r[3].w[0] + 44u)));  if (depth < kMaxDepth) unit_0000(c, 561u, depth + 1u); else { c.pc = 0x00103F40u; return; } if (c.pc != 0x00130B3Cu) [[unlikely]] return; }
L_00130B3C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130B30u | kUnwind; return; } goto L_00130B30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);  if (t) { goto L_00130B50; } }
L_00130B4C:
    set32(c.r[3], c.r[18].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00130B50:
    set32(c.r[2], ld32((c.r[3].w[0])));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130B60u); set32(c.r[4], ld32((c.r[3].w[0])));  if (depth < kMaxDepth) unit_000B(c, 9u, depth + 1u); else { c.pc = 0x0012C098u; return; } if (c.pc != 0x00130B60u) [[unlikely]] return; }
L_00130B60:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 72u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[19].w[0] + 73u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130B10u | kUnwind; return; } goto L_00130B10; } }
L_00130B74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00130B78:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00130B98:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] != 0ull; st8((c.r[18].w[0] + 36u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00130C24; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00130C24; } }
    set32(c.r[19], c.r[18].w[0] + 8u);
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 2;
L_00130BD0:
    set32(c.r[16], c.r[19].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130BECu); set32(c.r[17], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130BECu) [[unlikely]] return; }
L_00130BEC:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], c.r[2].w[0] + 16u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C08u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130C08u) [[unlikely]] return; }
L_00130C08:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C14u); set32(c.r[4], ld32((c.r[3].w[0] + 4u)));  if (depth < kMaxDepth) unit_000C(c, 301u, depth + 1u); else { c.pc = 0x00132780u; return; } if (c.pc != 0x00130C14u) [[unlikely]] return; }
L_00130C14:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130BD0u | kUnwind; return; } goto L_00130BD0; } }
L_00130C24:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00130C40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C54u); set32(c.r[4], c.r[4].w[0] + 18856u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130C54u) [[unlikely]] return; }
L_00130C54:
    c.budget -= 1;
L_00130C58:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130C58u | kUnwind; return; } goto L_00130C58; } }
    c.budget -= 1;
L_00130C78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130C8Cu); set32(c.r[4], c.r[4].w[0] + 18896u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130C8Cu) [[unlikely]] return; }
L_00130C8C:
    c.budget -= 1;
L_00130C90:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130C90u | kUnwind; return; } goto L_00130C90; } }
    c.budget -= 1;
L_00130CB0:
    st32((c.r[5].w[0]), 0u);
    c.r[2].d[0] = 0ull | 48000ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_00130CC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130CE0u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130CE0u) [[unlikely]] return; }
L_00130CE0:
    set32(c.r[3], 0u + 16384u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] >> 1);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00130CF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 8u)));
    c.budget -= 4;
L_00130D08:
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D18u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130D18u) [[unlikely]] return; }
L_00130D18:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00130D28:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 36u)));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00130E50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_00130E54; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130D78u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130D78u) [[unlikely]] return; }
L_00130D78:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[6].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(63ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00130E4C; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[19], c.r[2].w[0] - c.r[6].w[0]);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_00130E4C; } }
    set32(c.r[20], c.r[18].w[0] + 24u);
    set32(c.r[16], c.r[17].w[0] << 2);
    c.budget -= 3;
L_00130DA8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[16], c.r[20].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130DCCu); set32(c.r[17], c.r[17].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130DCCu) [[unlikely]] return; }
L_00130DCC:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130DDCu); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00130DDCu) [[unlikely]] return; }
L_00130DDC:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130DF4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130DF4u) [[unlikely]] return; }
L_00130DF4:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 4u)));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E14u); set32(c.r[6], c.r[19].w[0] - c.r[6].w[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130E14u) [[unlikely]] return; }
L_00130E14:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_00130E18:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E24u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00130E24u) [[unlikely]] return; }
L_00130E24:
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E3Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00130E3Cu) [[unlikely]] return; }
L_00130E3C:
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.r[2].d[0] = c.r[17].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130DA8u | kUnwind; return; } goto L_00130DA8; } }
L_00130E4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00130E50:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_00130E54:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00130E70:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130E8Cu); set32(c.r[18], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 166u, depth + 1u); else { c.pc = 0x001311B8u; return; } if (c.pc != 0x00130E8Cu) [[unlikely]] return; }
L_00130E8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[16], c.r[2].w[0] + 6672u);
    set32(c.r[17], c.r[16].w[0] + 672u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 5;
L_00130EA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 84u);  goto L_00130EB4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130EB0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 107u, depth + 1u); else { c.pc = 0x00130D28u; return; } if (c.pc != 0x00130EB0u) [[unlikely]] return; }
L_00130EB0:
    set32(c.r[16], c.r[16].w[0] + 84u);
    c.budget -= 1;
L_00130EB4:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00130EA0u | kUnwind; return; } goto L_00130EA0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130EC8u);  if (depth < kMaxDepth) unit_000C(c, 167u, depth + 1u); else { c.pc = 0x001311C8u; return; } if (c.pc != 0x00130EC8u) [[unlikely]] return; }
L_00130EC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130ED0u);  if (depth < kMaxDepth) unit_000A(c, 524u, depth + 1u); else { c.pc = 0x0012BEC8u; return; } if (c.pc != 0x00130ED0u) [[unlikely]] return; }
L_00130ED0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_00132B70; }
L_00130EE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130EFCu); set32(c.r[4], c.r[4].w[0] + 18936u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130EFCu) [[unlikely]] return; }
L_00130EFC:
    c.budget -= 1;
L_00130F00:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130F00u | kUnwind; return; } goto L_00130F00; } }
    c.budget -= 1;
L_00130F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 38u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00130F28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_00130F30:
    c.r[3].d[0] = c.r[5].sd[0] < 1ll ? 1ull : 0ull;
    set32(c.r[2], 0u - 1000u);
    if (c.r[3].d[0] == 0) c.r[5].d[0] = 0ull;
    set32(c.r[6], 0u - 999u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[6].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 48u), c.r[5].w[0]);  c.pc = t; return; }
L_00130F50:
    set32(c.r[2], 0u - 16u);
    set32(c.r[3], 0u - 15u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] << 2);
    if (c.r[2].d[0] != 0) c.r[3].d[0] = c.r[6].d[0];
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    set32(c.r[2], 0u + 15u);
    if (c.r[6].d[0] == 0) c.r[3].d[0] = c.r[2].d[0];
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 56u), c.r[3].w[0]);  c.pc = t; return; }
L_00130F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00130FBC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130F9Cu); set32(c.r[4], c.r[4].w[0] + 18976u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130F9Cu) [[unlikely]] return; }
L_00130F9C:
    c.budget -= 1;
L_00130FA0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130FA0u | kUnwind; return; } goto L_00130FA0; } }
L_00130FBC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00130FC8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00130FDCu); set32(c.r[4], c.r[4].w[0] + 19024u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00130FDCu) [[unlikely]] return; }
L_00130FDC:
    c.budget -= 1;
L_00130FE0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00130FE0u | kUnwind; return; } goto L_00130FE0; } }
    c.budget -= 1;
L_00131000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  c.pc = t; return; }
L_00131008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 48u)));  c.pc = t; return; }
L_00131010:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 56u)));  c.pc = t; return; }
L_00131020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 16u);  c.pc = t; return; }
L_00131028:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013103Cu); set32(c.r[4], c.r[4].w[0] + 19064u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0013103Cu) [[unlikely]] return; }
L_0013103C:
    c.budget -= 1;
L_00131040:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131040u | kUnwind; return; } goto L_00131040; } }
    c.budget -= 1;
L_00131060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131074u); set32(c.r[4], c.r[4].w[0] + 19104u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00131074u) [[unlikely]] return; }
L_00131074:
    c.budget -= 1;
L_00131078:
    c.budget -= 2;
L_00131080:
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131078u | kUnwind; return; } goto L_00131078; } }
    c.budget -= 1;
L_00131098:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310ACu); set32(c.r[4], c.r[4].w[0] + 19144u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001310ACu) [[unlikely]] return; }
L_001310AC:
    c.budget -= 1;
L_001310B0:
    c.budget -= 4;
L_001310C0:
    c.budget -= 3;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001310B0u | kUnwind; return; } goto L_001310B0; } }
    c.budget -= 1;
L_001310D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001310E4u); set32(c.r[4], c.r[4].w[0] + 19176u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x001310E4u) [[unlikely]] return; }
L_001310E4:
    c.budget -= 1;
L_001310E8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001310E8u | kUnwind; return; } goto L_001310E8; } }
    goto L_00131104;
L_00131100:
    c.budget -= 1;
L_00131104:
    c.budget -= 1;
L_00131108:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013111Cu); set32(c.r[4], c.r[4].w[0] + 19216u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0013111Cu) [[unlikely]] return; }
L_0013111C:
    c.budget -= 1;
L_00131120:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131120u | kUnwind; return; } goto L_00131120; } }
    c.budget -= 1;
L_00131140:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131154u); set32(c.r[4], c.r[4].w[0] + 19264u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00131154u) [[unlikely]] return; }
L_00131154:
    c.budget -= 1;
L_00131158:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131158u | kUnwind; return; } goto L_00131158; } }
    c.budget -= 1;
L_00131178:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_00131180:
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 8u)));  c.pc = t; return; }
L_00131190:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] + 4u)));  c.pc = t; return; }
L_001311A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32116u), 0u);  c.pc = t; return; }
L_001311B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32116u), 0u);  c.pc = t; return; }
L_001311B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 32116u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32116u), c.r[2].w[0]);  c.pc = t; return; }
L_001311C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 32116u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32116u), c.r[2].w[0]);  c.pc = t; return; }
L_001311D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32108u), 0u);  c.pc = t; return; }
L_001311E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 32108u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32108u), c.r[2].w[0]);  c.pc = t; return; }
L_001311F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 32108u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32108u), c.r[2].w[0]);  c.pc = t; return; }
L_00131200:
    c.budget -= 2;
L_00131208:
    c.budget -= 5;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131200u | kUnwind; return; } goto L_00131200; } }
    c.budget -= 1;
L_00131220:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32100u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00131248; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131244u); set32(c.r[6], 0u + 1152u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00131244u) [[unlikely]] return; }
L_00131244:
    set32(c.r[2], ld32((c.r[28].w[0] - 32100u)));
    c.budget -= 1;
L_00131248:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32100u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00131260:
    set32(c.r[2], ld32((c.r[28].w[0] - 32100u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32100u), c.r[2].w[0]);  if (t) { goto L_00131284; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 9648u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 1152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_00131284:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[6].w[0] + 9648u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[7].d[0] = c.r[5].d[0] + 0ull;
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001312D8; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001312C0:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 36u);  if (t) { goto L_001312D8; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001312C0u | kUnwind; return; } goto L_001312C0; }
L_001312D8:
    set32(c.r[2], 0u + 32u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 36u);  if (t) { goto L_001312EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013133C; } }
L_001312EC:
    set32(c.r[4], c.r[6].w[0] + 9648u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[3], c.r[3].w[0] + 9600u);
    set32(c.r[5], c.r[5].w[0] + 19304u);
    set32(c.r[6], c.r[6].w[0] + 4608u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[8].w[0]);
    st32((c.r[16].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131338u); st32((c.r[16].w[0] + 32u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 184u, depth + 1u); else { c.pc = 0x001313A0u; return; } if (c.pc != 0x00131338u) [[unlikely]] return; }
L_00131338:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0013133C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00131374; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131370u); set32(c.r[6], 0u + 36u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00131370u) [[unlikely]] return; }
L_00131370:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_00131374:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131380:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x00131384u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00131388:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00131390:
    st32((c.r[4].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[5].w[0]);  c.pc = t; return; }
L_001313A0:
    set32(c.r[2], ld32((c.r[4].w[0] + 24u)));
    st32((c.r[4].w[0] + 16u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  c.pc = t; return; }
L_001313B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001313C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_001313EC; } }
L_001313C8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001313EC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001313EC; }
    set32(c.r[4], ld32((c.r[4].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001313E8u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001313E8u) [[unlikely]] return; }
L_001313E8:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001313EC:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001313F8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131424u); c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131424u) [[unlikely]] return; }
L_00131424:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00131438; } }
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00131494; } }
L_00131438:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 28u)));  goto L_0013147C; }
    goto L_00131440;
L_0013143C:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 1;
L_00131440:
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[16].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 12u), c.r[3].w[0]);  if (t) { goto L_00131494; } }
L_0013147C:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00131494; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131494u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131494u) [[unlikely]] return; }
L_00131494:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_001314B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00131530; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131534; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001314ECu);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x001314ECu) [[unlikely]] return; }
L_001314EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00131518; } }
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013151C; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    st32((c.r[16].w[0]), 0u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_0013151C; } }
    set32(c.r[4], ld32((c.r[18].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131518u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131518u) [[unlikely]] return; }
L_00131518:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0013151C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_00131530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131534:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131548:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013162C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131584u);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131584u) [[unlikely]] return; }
L_00131584:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001315DC; } }
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_001315FC; }
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[4], c.r[4].w[0] - c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0])));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    if (c.r[2].d[0] == 0) c.r[4].d[0] = 0ull;
    set32(c.r[7], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[16].w[0] + 16u), c.r[4].w[0]);
    set32(c.r[6], c.r[6].w[0] - c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[5].d[0] = c.r[7].d[0];
    c.budget -= 18;
    { const bool t = c.r[4].d[0] == c.r[6].d[0]; st32((c.r[16].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00131614; } }
L_001315DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131618; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001315F4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001315F4u) [[unlikely]] return; }
L_001315F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131618; } }
L_001315FC:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00131614; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131614u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131614u) [[unlikely]] return; }
L_00131614:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131618:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_0013162C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131630:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_0013163C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131648:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131674u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131674u) [[unlikely]] return; }
L_00131674:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00131684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001316B4; } }
L_00131684:
    c.budget -= 2;
    if (c.r[17].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 28u)));  goto L_001316A0; }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[17].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[17].d[0] = c.r[18].d[0];  if (t) { goto L_001316B4; } }
L_001316A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = 0ull + 0ull;  if (t) { goto L_001316B4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 32u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001316B4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001316B4u) [[unlikely]] return; }
L_001316B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001316BCu); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x001316BCu) [[unlikely]] return; }
L_001316BC:
    c.r[2].d[0] = c.r[17].d[0] ^ c.r[18].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001316E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 20u)));  c.pc = t; return; }
L_001316E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 24u)));  c.pc = t; return; }
L_001316F0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001316F0u | kUnwind; return; } goto L_001316F0; } }
    c.budget -= 1;
L_00131710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32092u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00131738; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131734u); set32(c.r[6], 0u + 3072u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00131734u) [[unlikely]] return; }
L_00131734:
    set32(c.r[2], ld32((c.r[28].w[0] - 32092u)));
    c.budget -= 1;
L_00131738:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32092u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00131750:
    set32(c.r[2], ld32((c.r[28].w[0] - 32092u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32092u), c.r[2].w[0]);  if (t) { goto L_00131774; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 10848u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 3072u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_00131774:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131780:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001317A8u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x001317A8u) [[unlikely]] return; }
L_001317A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[4].w[0] + 10848u);
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001317E0; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 1;
L_001317C0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_001317C8:
    c.r[2].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_001317E0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001317C8u | kUnwind; return; } goto L_001317C8; }
L_001317E0:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 48u);  if (t) { goto L_001317F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00131844; } }
L_001317F4:
    set32(c.r[4], c.r[4].w[0] + 10848u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[3], c.r[3].w[0] + 10800u);
    set32(c.r[5], c.r[5].w[0] + 19368u);
    set32(c.r[6], c.r[6].w[0] + 5872u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 32u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[16].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[7].w[0]);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131844u); st32((c.r[16].w[0] + 40u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_000C(c, 223u, depth + 1u); else { c.pc = 0x001318C8u; return; } if (c.pc != 0x00131844u) [[unlikely]] return; }
    goto L_00131844;
L_00131840:
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 1;
L_00131844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013184Cu);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x0013184Cu) [[unlikely]] return; }
L_0013184C:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00131870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131884u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131884u) [[unlikely]] return; }
    goto L_00131884;
L_00131880:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 1;
L_00131884:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0013189C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131898u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00131898u) [[unlikely]] return; }
L_00131898:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_0013189C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_001318B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_001318B8:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_001318C0:
    st32((c.r[4].w[0] + 40u), c.r[5].w[0]);
    c.budget -= 1;
    c.pc = 0x001318C4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_001318C8:
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[4].w[0] + 24u), 0u);
    st32((c.r[4].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 12u), 0u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 20u), 0u);  c.pc = t; return; }
L_001318E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001318F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  if (t) { goto L_00131920; } }
L_001318F8:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0] + 40u)));  goto L_00131908; }
L_00131900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  if (t) { goto L_00131920; } }
L_00131908:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00131920; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0013191Cu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0013191Cu) [[unlikely]] return; }
L_0013191C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00131920:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00131930:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 4;
L_00131940:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013195Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0013195Cu) [[unlikely]] return; }
L_0013195C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001319D0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 20;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001319B0u);  goto L_001319B4; }
L_001319B4:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00131A5C; } }
L_001319D0:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_00131A44; }
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[5].d[0];
    c.r[4].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[4].d[0] == 0) c.r[2].d[0] = c.r[19].d[0];
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    st32((c.r[17].w[0]), c.r[6].w[0]);
    c.budget -= 20;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00131A24u);  goto L_00131A28; }
L_00131A28:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.r[5].d[0] = c.hi.d[0];
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00131A5C; } }
L_00131A44:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00131A5C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131A5Cu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131A5Cu) [[unlikely]] return; }
L_00131A5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_00131A78:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 2;
L_00131A80:
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] <= 0; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00131B98; } }
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131B9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131AB4u);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131AB4u) [[unlikely]] return; }
L_00131AB4:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != c.r[2].d[0];  if (t) { goto L_00131B4C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[9], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[7], c.r[5].w[0] - c.r[9].w[0]);
    c.r[3].d[0] = c.r[7].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[17].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00131B10; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    c.r[2].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[3].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B08u); set32(c.r[4], c.r[9].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00131B08u) [[unlikely]] return; }
L_00131B08:
    set32(c.r[5], ld32((c.r[16].w[0])));
    set32(c.r[9], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 2;
L_00131B10:
    set32(c.r[8], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 1;
L_00131B14:
    set32(c.r[3], c.r[5].w[0] - c.r[9].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[7], c.r[3].w[0] + c.r[8].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], c.r[7].w[0] - c.r[4].w[0]);  if (t) { goto L_00131B80; } }
    c.r[2].d[0] = c.r[8].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[9].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[6].d[0] = c.r[8].d[0];
    set32(c.r[5], c.r[7].w[0] - c.r[6].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B44u); set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00131B44u) [[unlikely]] return; }
L_00131B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131B84; } }
L_00131B4C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_00131B68; }
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00131B80; } }
L_00131B68:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00131B80; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131B80u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131B80u) [[unlikely]] return; }
L_00131B80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131B84:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_00131B98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131B9C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131BB0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00131CF8; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131CFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131BECu);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131BECu) [[unlikely]] return; }
L_00131BEC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00131C4C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00131C00u);  goto L_00131C04; }
L_00131C04:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.r[7].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
    if (c.r[7].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_00131CAC; }
    st32((c.r[16].w[0] + 20u), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 2;
L_00131C3C:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00131CE0; } }
L_00131C4C:
    c.budget -= 2;
    if (c.r[18].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_00131CC8; }
    set32(c.r[2], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00131C60u);  goto L_00131C64; }
L_00131C64:
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    set32(c.r[6], ld32((c.r[16].w[0] + 28u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] - c.r[6].w[0]);
    c.r[5].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[4].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 12;
    if (c.r[5].d[0] != c.r[3].d[0]) { set32(c.r[2], ld32((c.r[16].w[0] + 40u)));  goto L_00131CAC; }
    st32((c.r[16].w[0] + 24u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00131CE0; } }
L_00131CAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131CE4; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CC0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131CC0u) [[unlikely]] return; }
L_00131CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00131CE4; } }
L_00131CC8:
    st32((c.r[17].w[0]), 0u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 4u), 0u);  if (t) { goto L_00131CE0; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131CE0u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131CE0u) [[unlikely]] return; }
L_00131CE0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131CE4:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_00131CF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00131CFC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00131D10:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131D3Cu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00131D3Cu) [[unlikely]] return; }
L_00131D3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00131D5C; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 16u)));  if (t) { goto L_00131D78; } }
L_00131D5C:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 40u)));  goto L_00131D90; }
    set32(c.r[2], ld32((c.r[17].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 5;
L_00131D78:
    set32(c.r[16], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].d[0] = c.r[4].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[4].d[0];
    c.r[3].d[0] = c.r[16].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[16].d[0] = c.r[18].d[0];  if (t) { goto L_00131DA4; } }
L_00131D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00131DA4; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00131DA4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00131DA4u) [[unlikely]] return; }
L_00131DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131DACu); st32((c.r[19].w[0]), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x00131DACu) [[unlikely]] return; }
L_00131DAC:
    c.r[2].d[0] = c.r[16].d[0] ^ c.r[18].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00131DD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 28u)));  c.pc = t; return; }
L_00131DD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 32u)));  c.pc = t; return; }
L_00131DE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 36u)));  c.pc = t; return; }
L_00131DE8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131DE8u | kUnwind; return; } goto L_00131DE8; } }
    c.budget -= 1;
L_00131E08:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32088u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00131E30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13968u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131E2Cu); set32(c.r[6], 0u + 3072u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00131E2Cu) [[unlikely]] return; }
L_00131E2C:
    set32(c.r[2], ld32((c.r[28].w[0] - 32088u)));
    c.budget -= 1;
L_00131E30:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32088u), c.r[2].w[0]);
    c.budget -= 3;
L_00131E3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00131E48:
    set32(c.r[2], ld32((c.r[28].w[0] - 32088u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32088u), c.r[2].w[0]);  if (t) { goto L_00131E6C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 13968u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 3072u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_00131E6C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00131E78:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[3], c.r[8].w[0] + 13968u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[10].d[0] = c.r[5].d[0] + 0ull;
    c.r[9].d[0] = c.r[4].d[0] + 0ull;
    c.r[7].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00131EC8; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00131EB0:
    c.r[2].d[0] = c.r[5].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 48u);  if (t) { goto L_00131EC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00131EB0u | kUnwind; return; } goto L_00131EB0; }
L_00131EC8:
    set32(c.r[2], 0u + 64u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 48u);  if (t) { goto L_00131EDC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00131F34; } }
L_00131EDC:
    set32(c.r[4], c.r[8].w[0] + 13968u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[3], c.r[3].w[0] + 13920u);
    set32(c.r[5], c.r[5].w[0] + 19384u);
    set32(c.r[7], c.r[7].w[0] >> 4);
    set32(c.r[6], c.r[6].w[0] + 7656u);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0]), c.r[3].w[0]);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[16].w[0] + 8u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[10].w[0]);
    st32((c.r[16].w[0] + 16u), c.r[7].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[6].w[0]);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F30u); st32((c.r[16].w[0] + 44u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000C(c, 262u, depth + 1u); else { c.pc = 0x00131F98u; return; } if (c.pc != 0x00131F30u) [[unlikely]] return; }
L_00131F30:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00131F34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131F48:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00131F6C; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00131F68u); set32(c.r[6], 0u + 48u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00131F68u) [[unlikely]] return; }
L_00131F68:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00131F6C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00131F80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 8u)));  c.pc = t; return; }
L_00131F88:
    st32((c.r[4].w[0] + 44u), c.r[6].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 40u), c.r[5].w[0]);  c.pc = t; return; }
L_00131F98:
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[6].w[0] + 12u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[6].w[0] + 20u), c.r[7].w[0]);  if (t) { goto L_00131FF0; } }
    set32(c.r[8], c.r[6].w[0] + 24u);
    c.budget -= 1;
L_00131FB8:
    set32(c.r[2], c.r[5].w[0] << 4);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st32((c.r[4].w[0] + 12u), 0u);
    set32(c.r[2], c.r[2].w[0] + 16u);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    st32((c.r[4].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[6].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[4].w[0]), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00131FB8u | kUnwind; return; } goto L_00131FB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[5].w[0] << 4);  if (t) { goto L_00131FF8; } }
L_00131FF0:
    set32(c.r[8], c.r[6].w[0] + 24u);
    set32(c.r[2], c.r[5].w[0] << 4);
    c.budget -= 2;
L_00131FF8:
    set32(c.r[4], c.r[8].w[0] + 12u);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[5], 0u + 3u);
    st32((c.r[2].w[0] + 12u), 0u);
    st32((c.r[2].w[0]), 0u);
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 6;
L_00132010:
    st32((c.r[4].w[0]), 0u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[5].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132010u | kUnwind; return; } goto L_00132010; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132038:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00132068; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_001320A0; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132060u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132060u) [[unlikely]] return; }
L_00132060:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001320A0; } }
L_00132068:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0013209C; } }
    c.budget -= 1;
L_00132080:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132080u | kUnwind; return; } goto L_00132080; } }
L_0013209C:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001320A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001320B0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 4;
L_001320C0:
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_00132104; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001320FC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001320F8u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001320F8u) [[unlikely]] return; }
L_001320F8:
    st32((c.r[16].w[0] + 4u), 0u);
    c.budget -= 1;
L_001320FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), 0u);  if (t) { goto L_001321C0; } }
L_00132104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013210Cu);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0013210Cu) [[unlikely]] return; }
L_0013210C:
    set32(c.r[3], c.r[17].w[0] << 2);
    set32(c.r[2], c.r[18].w[0] + 24u);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[3].w[0])));
    c.budget -= 6;
    if (c.r[17].d[0] == 0ull) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001321B4; }
    ldl(c.r[2], (c.r[17].w[0] + 15u));
    ldr(c.r[2], (c.r[17].w[0] + 8u));
    sdl(c.r[2], (c.r[29].w[0] + 7u));
    sdr(c.r[2], (c.r[29].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.r[2].d[0] = c.r[19].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    if (c.r[2].d[0] != 0ull) { c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));  goto L_0013216C; }
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[17].w[0])));
    st32((c.r[3].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[18].w[0] + 20u)));
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 20u), c.r[17].w[0]);  if (t) { goto L_001321B8; } }
L_0013216C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { st32((c.r[16].w[0] + 4u), 0u);  goto L_001321B4; }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013218Cu); set32(c.r[7], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x0013218Cu) [[unlikely]] return; }
L_0013218C:
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 7u));
    sdr(c.r[2], (c.r[16].w[0]));
    ldl(c.r[6], (c.r[29].w[0] + 23u));
    ldr(c.r[6], (c.r[29].w[0] + 16u));
    sdl(c.r[6], (c.r[17].w[0] + 15u));
    sdr(c.r[6], (c.r[17].w[0] + 8u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001321B8; } }
L_001321B4:
    st32((c.r[16].w[0]), 0u);
    c.budget -= 1;
L_001321B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001321C0u);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x001321C0u) [[unlikely]] return; }
L_001321C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001321E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00132228; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00132330; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132220u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132220u) [[unlikely]] return; }
L_00132220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00132330; } }
L_00132228:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00132330; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00132334; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132248u);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00132248u) [[unlikely]] return; }
L_00132248:
    set32(c.r[2], c.r[18].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 24u);
    set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0013228C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    c.budget -= 2;
L_00132268:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132268u | kUnwind; return; } goto L_00132268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[2].w[0] << 24);  if (t) { goto L_00132294; } }
L_0013228C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 2;
L_00132294:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_001322D4; }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_001322D4; }
    set32(c.r[2], ld32((c.r[4].w[0] + 8u)));
    set32(c.r[6], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[4], ld32((c.r[16].w[0] + 20u)));  goto L_001322D4; }
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00132318; } }
L_001322D4:
    c.budget -= 2;
    if (c.r[4].d[0] != 0ull) { set32(c.r[2], ld32((c.r[4].w[0])));  goto L_001322FC; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013231C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001322F4u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001322F4u) [[unlikely]] return; }
L_001322F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013231C; } }
L_001322FC:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0]), 0u);
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[4].w[0] + 15u));
    sdr(c.r[2], (c.r[4].w[0] + 8u));
    st32((c.r[5].w[0]), c.r[4].w[0]);
    c.budget -= 7;
L_00132318:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0013231C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_00132330:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00132334:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132348:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00132390; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013246C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132388u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132388u) [[unlikely]] return; }
L_00132388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013246C; } }
L_00132390:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0013246C; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  goto L_00132470; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001323B0u);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x001323B0u) [[unlikely]] return; }
L_001323B0:
    set32(c.r[5], c.r[18].w[0] << 2);
    set32(c.r[8], c.r[16].w[0] + 24u);
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[6], ld32((c.r[2].w[0])));  if (t) { goto L_00132400; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  goto L_00132404; }
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[6].w[0] + 8u)));
    set32(c.r[2], c.r[4].w[0] + c.r[7].w[0]);
    c.budget -= 6;
    if (c.r[2].d[0] != c.r[3].d[0]) { set32(c.r[6], ld32((c.r[16].w[0] + 20u)));  goto L_00132404; }
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    st32((c.r[6].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_00132454; } }
L_00132400:
    set32(c.r[6], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_00132404:
    c.budget -= 2;
    if (c.r[6].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0])));  goto L_0013242C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00132458; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132424u); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132424u) [[unlikely]] return; }
L_00132424:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00132458; } }
L_0013242C:
    set32(c.r[3], c.r[8].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[6].w[0]), 0u);
    ldl(c.r[2], (c.r[17].w[0] + 7u));
    c.budget -= 4;
L_0013243C:
    ldr(c.r[2], (c.r[17].w[0]));
    sdl(c.r[2], (c.r[6].w[0] + 15u));
    sdr(c.r[2], (c.r[6].w[0] + 8u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[3].w[0]), c.r[6].w[0]);
    c.budget -= 6;
L_00132454:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00132458:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_0013246C:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00132470:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[7].w[0]), 0u);
    c.r[2].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_001324B4; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_00132510; }
    set32(c.r[4], ld32((c.r[4].w[0] + 44u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001324ACu); set32(c.r[5], 0u - 3u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001324ACu) [[unlikely]] return; }
L_001324AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132510; } }
L_001324B4:
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001324D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132510; } }
L_001324D0:
    ldl(c.r[3], (c.r[2].w[0] + 15u));
    ldr(c.r[3], (c.r[2].w[0] + 8u));
    sdl(c.r[3], (c.r[29].w[0] + 7u));
    sdr(c.r[3], (c.r[29].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    st32((c.r[7].w[0]), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 10;
    if (c.r[2].d[0] != c.r[5].d[0]) { c.r[3].d[0] = c.r[3].d[0] ^ c.r[6].d[0];  goto L_00132508; }
    c.r[3].d[0] = c.r[3].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; if (c.r[3].d[0] == 0) c.r[2].d[0] = c.r[5].d[0];  if (t) { goto L_00132510; } }
L_00132508:
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 2;
L_00132510:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132520:
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132554; } }
    c.budget -= 1;
L_00132538:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132538u | kUnwind; return; } goto L_00132538; } }
L_00132554:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132560:
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0013258C; } }
    c.budget -= 1;
L_00132570:
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132570u | kUnwind; return; } goto L_00132570; } }
L_0013258C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00132598:
    ldl(c.r[2], (c.r[4].w[0] + 7u));
    ldr(c.r[2], (c.r[4].w[0]));
    sdl(c.r[2], (c.r[6].w[0] + 7u));
    sdr(c.r[2], (c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    st32((c.r[7].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], ld32((c.r[7].w[0] + 4u)));  goto L_001325CC; }
    st32((c.r[6].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[7].w[0] + 4u)));
    c.budget -= 3;
L_001325CC:
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[7].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_001325E0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), 0u);  c.pc = t; return; }
L_001325E0:
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[3], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[7].w[0]), c.r[2].w[0]);  c.pc = t; return; }
L_001325F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[2].w[0] - 15616u);
    st32((c.r[2].w[0] - 15616u), c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], 0u + 32u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[7], c.r[16].w[0] - 15360u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132634u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132634u) [[unlikely]] return; }
L_00132634:
    set32(c.r[2], ld32((c.r[16].w[0] - 15360u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 2;
L_0013263C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132648:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[2].w[0] - 15616u);
    st32((c.r[2].w[0] - 15616u), c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], 0u + 33u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[7], c.r[16].w[0] - 15360u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132680u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132680u) [[unlikely]] return; }
L_00132680:
    set32(c.r[2], ld32((c.r[16].w[0] - 15360u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132698:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[2].w[0] - 15616u);
    st32((c.r[2].w[0] - 15616u), c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], 0u + 34u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[7], c.r[16].w[0] - 15360u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001326D4u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x001326D4u) [[unlikely]] return; }
L_001326D4:
    set32(c.r[2], ld32((c.r[16].w[0] - 15360u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001326E8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[5].w[0] - 15616u), c.r[4].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15616u);
    set32(c.r[4], 0u + 35u);
    c.budget -= 8;
    { c.r[8].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C810u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 61u, depth); }
L_00132708:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[6], 0u + 1u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], c.r[17].w[0] - 15360u);
    st32((c.r[5].w[0] - 15616u), c.r[4].w[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] - 15616u);
    set32(c.r[4], 0u + 36u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132740u); set32(c.r[8], 0u + 4u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132740u) [[unlikely]] return; }
L_00132740:
    set32(c.r[7], ld32((c.r[17].w[0] - 15360u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[8], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[3], c.r[5].w[0] - 15680u);
    set32(c.r[6], ld32((c.r[16].w[0] + 4u)));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[5].w[0] - 15680u), c.r[7].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132780:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], 0u + 1u);
    st32((c.r[5].w[0] - 15616u), c.r[4].w[0]);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[5], c.r[5].w[0] - 15616u);
    set32(c.r[4], 0u + 37u);
    c.budget -= 8;
    { c.r[8].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C810u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 61u, depth); }
L_001327A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], c.r[3].w[0] - 15616u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[3].w[0] - 15616u), c.r[4].w[0]);
    set32(c.r[16], c.r[17].w[0] - 15360u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 38u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001327ECu); set32(c.r[8], 0u + 2u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x001327ECu) [[unlikely]] return; }
L_001327EC:
    set32(c.r[3], ld32((c.r[17].w[0] - 15360u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132818:
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[2].w[0] - 15616u);
    st32((c.r[2].w[0] - 15616u), c.r[4].w[0]);
    set32(c.r[6], 0u + 4u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 39u);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
L_00132840:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 5;
    { st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C810u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 61u, depth); }
L_00132858:
    c.r[9].d[0] = c.r[6].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[7], ld32((c.r[9].w[0])));
    set32(c.r[3], c.r[2].w[0] - 15616u);
    st32((c.r[2].w[0] - 15616u), c.r[4].w[0]);
    set32(c.r[6], 0u + 4u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 40u);
    st32((c.r[3].w[0] + 8u), c.r[7].w[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 10;
L_00132880:
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[9].w[0] + 4u)));
    c.budget -= 5;
    { st32((c.r[3].w[0] + 12u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C810u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 61u, depth); }
L_00132898:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[2].w[0] - 15616u);
    st32((c.r[2].w[0] - 15616u), c.r[4].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[4], 0u + 41u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[7], c.r[16].w[0] - 15360u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[6], 0u + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001328D0u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x001328D0u) [[unlikely]] return; }
L_001328D0:
    set32(c.r[2], ld32((c.r[16].w[0] - 15360u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001328E8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], c.r[3].w[0] - 15616u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 6;
L_00132900:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[3].w[0] - 15616u), c.r[4].w[0]);
    set32(c.r[16], c.r[17].w[0] - 15360u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 42u);
    st32((c.r[2].w[0] + 8u), c.r[6].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[6], 0u + 3u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132934u); set32(c.r[8], 0u + 1u);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132934u) [[unlikely]] return; }
L_00132934:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], ld32((c.r[17].w[0] - 15360u)));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00132958:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 17044u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_00132984; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013297Cu);  if (depth < kMaxDepth) unit_000B(c, 53u, depth + 1u); else { c.pc = 0x0012C6F0u; return; } if (c.pc != 0x0013297Cu) [[unlikely]] return; }
L_0013297C:
    set32(c.r[2], ld32((c.r[16].w[0] + 17044u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_00132984:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] + 17044u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132998:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 17044u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] + 17044u), c.r[2].w[0]);  if (t) { goto L_001329B4; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C798u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 58u, depth); }
L_001329B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001329C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_001329F4; } }
L_001329D8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001329D8u | kUnwind; return; } goto L_001329D8; } }
L_001329F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001329FCu); set32(c.r[17], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x001329FCu) [[unlikely]] return; }
L_001329FC:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_00132A4C; } }
    c.budget -= 1;
L_00132A08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00132A44; }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00132A44; }
    set32(c.r[4], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[6], c.r[16].w[0] + 8u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132A40u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132A40u) [[unlikely]] return; }
L_00132A40:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00132A44:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132A08u | kUnwind; return; } goto L_00132A08; } }
L_00132A4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001311F0u | kUnwind; return; } goto L_001311F0; }
L_00132A60:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[23].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    set32(c.r[23], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[20], c.r[21].w[0] + 16u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132A9Cu); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x00132A9Cu) [[unlikely]] return; }
L_00132A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[17], c.r[2].w[0] + 17048u);
    set32(c.r[22], c.r[17].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 5;
L_00132AB0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[23].d[0]) { set32(c.r[17], c.r[17].w[0] + 20u);  goto L_00132B2C; }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[19], 0u + 128u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[2].w[0] + c.r[20].w[0]);  if (t) { goto L_00132AF8; } }
L_00132AC8:
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[17].w[0] + 12u));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ldl(c.r[2], (c.r[29].w[0] + 7u));
    ldr(c.r[2], (c.r[29].w[0]));
    sdl(c.r[2], (c.r[16].w[0] + 15u));
    sdr(c.r[2], (c.r[16].w[0] + 8u));
    c.r[2].d[0] = ld16((c.r[17].w[0] + 2u));
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.budget -= 12;
L_00132AF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == c.r[19].d[0]; c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);  if (t) { goto L_00132B38; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B1Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132B1Cu) [[unlikely]] return; }
L_00132B1C:
    set32(c.r[3], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132AC8u | kUnwind; return; } goto L_00132AC8; }
    set32(c.r[17], c.r[17].w[0] + 20u);
    c.budget -= 1;
L_00132B2C:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[22].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132AB0u | kUnwind; return; } goto L_00132AB0; }
L_00132B38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B40u);  if (depth < kMaxDepth) unit_000C(c, 170u, depth + 1u); else { c.pc = 0x001311F0u; return; } if (c.pc != 0x00132B40u) [[unlikely]] return; }
L_00132B40:
    st32((c.r[21].w[0]), c.r[18].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_00132B70:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012C918u | kUnwind; return; } [[clang::musttail]] return unit_000B(c, 65u, depth); }
L_00132B78:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32080u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00132C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132B90u);  if (depth < kMaxDepth) unit_000B(c, 53u, depth + 1u); else { c.pc = 0x0012C6F0u; return; } if (c.pc != 0x00132B90u) [[unlikely]] return; }
L_00132B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65472ull;
    set32(c.r[2], c.r[2].w[0] + 17432u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set32(c.r[4], 0u + 2176u);
    set32(c.r[3], ld32((c.r[28].w[0] - 32072u)));
    st32((c.r[28].w[0] - 32064u), c.r[4].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 32076u), c.r[2].w[0]);  if (t) { goto L_00132BF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132BC0u); set32(c.r[4], 0u + 2256u);  if (depth < kMaxDepth) unit_0002(c, 344u, depth + 1u); else { c.pc = 0x0010AAB8u; return; } if (c.pc != 0x00132BC0u) [[unlikely]] return; }
L_00132BC0:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 32072u), c.r[3].w[0]);  if (t) { goto L_00132BF4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132BD8u); set32(c.r[4], c.r[4].w[0] + 19496u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00132BD8u) [[unlikely]] return; }
L_00132BD8:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132BD8u | kUnwind; return; } goto L_00132BD8; } }
L_00132BF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 32072u)));
    c.budget -= 1;
L_00132BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    set32(c.r[3], c.r[3].w[0] + 64u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    set32(c.r[5], ld32((c.r[28].w[0] - 32076u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    set32(c.r[7], ld32((c.r[28].w[0] - 32064u)));
    c.r[6].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[28].w[0] - 32072u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C20u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 35u, depth + 1u); else { c.pc = 0x0012C3D8u; return; } if (c.pc != 0x00132C20u) [[unlikely]] return; }
L_00132C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[28].w[0] - 32068u), c.r[2].w[0]);  if (t) { goto L_00132C54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C34u); set32(c.r[4], c.r[4].w[0] + 19544u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00132C34u) [[unlikely]] return; }
L_00132C34:
    c.budget -= 1;
L_00132C38:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132C38u | kUnwind; return; } goto L_00132C38; } }
L_00132C54:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 32068u)));
    set32(c.r[5], c.r[5].w[0] + 10688u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C68u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 44u, depth + 1u); else { c.pc = 0x0012C5A0u; return; } if (c.pc != 0x00132C68u) [[unlikely]] return; }
L_00132C68:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], ld32((c.r[28].w[0] - 32068u)));
    set32(c.r[5], c.r[5].w[0] + 10848u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132C7Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 45u, depth + 1u); else { c.pc = 0x0012C5B0u; return; } if (c.pc != 0x00132C7Cu) [[unlikely]] return; }
L_00132C7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 32080u)));
    c.budget -= 1;
L_00132C80:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32080u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00132C98:
    set32(c.r[2], ld32((c.r[28].w[0] - 32080u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32080u), c.r[2].w[0]);  c.pc = t; return; }
L_00132CA8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 17048u)));
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 14;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] + 17048u);  if (t) { goto L_00132D08; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[3].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00132CE8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 20u);
    c.r[2].d[0] = c.r[4].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 20u);  if (t) { goto L_00132D08; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[3].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00132CE8u | kUnwind; return; } goto L_00132CE8; } }
L_00132D08:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00132D1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132D84; } }
L_00132D1C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D28u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00132D28u) [[unlikely]] return; }
L_00132D28:
    st32((c.r[16].w[0] + 12u), c.r[19].w[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[18].w[0]);
    set32(c.r[6], 0u + 4u);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[8], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[19].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D5Cu); st32((c.r[29].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132D5Cu) [[unlikely]] return; }
L_00132D5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_00132D78; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132D70u); set32(c.r[4], c.r[4].w[0] + 19584u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00132D70u) [[unlikely]] return; }
L_00132D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00132D84; } }
L_00132D78:
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00132D84:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00132DA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], 0u + 1u);
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132DD0u); st32((c.r[29].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132DD0u) [[unlikely]] return; }
L_00132DD0:
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132DE8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], 0u + 2u);
    c.r[3].d[0] = ld16((c.r[8].w[0] + 2u));
    c.r[7].d[0] = 0ull + 0ull;
    set32(c.r[9], ld32((c.r[8].w[0] + 16u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[2], c.r[3].w[0] << 16);
    st32((c.r[29].w[0]), c.r[9].w[0]);
    st16((c.r[8].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E2Cu); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000B(c, 61u, depth + 1u); else { c.pc = 0x0012C810u; return; } if (c.pc != 0x00132E2Cu) [[unlikely]] return; }
L_00132E2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132E38:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 1;
L_00132E3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26864u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00132E54; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26860u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E54u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132E54u) [[unlikely]] return; }
L_00132E54:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00132E60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26856u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00132E7C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26852u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132E7Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132E7Cu) [[unlikely]] return; }
L_00132E7C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00132E88:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[2].w[0] + 19672u);
    st64((c.r[29].w[0] + 120u), c.r[5].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[6].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 136u), c.r[7].d[0]);
    set32(c.r[6], 0u + 256u);
    st64((c.r[29].w[0] + 144u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[10].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132ED0u); st64((c.r[29].w[0] + 168u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00132ED0u) [[unlikely]] return; }
L_00132ED0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132EE0u); set32(c.r[6], c.r[29].w[0] + 120u);  if (depth < kMaxDepth) unit_0006(c, 193u, depth + 1u); else { c.pc = 0x0011AAD8u; return; } if (c.pc != 0x00132EE0u) [[unlikely]] return; }
L_00132EE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00132EFC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26844u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132EF8u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132EF8u) [[unlikely]] return; }
L_00132EF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00132EFC:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00132F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 19672u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F34u); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x00132F34u) [[unlikely]] return; }
L_00132F34:
    set32(c.r[2], ld32((c.r[28].w[0] - 26848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00132F50; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26844u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F4Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132F4Cu) [[unlikely]] return; }
L_00132F4C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00132F50:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00132F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[6], 0u + 255u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 19672u);
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F8Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x00132F8Cu) [[unlikely]] return; }
L_00132F8C:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00132F9Cu); set32(c.r[6], 0u + 255u);  if (depth < kMaxDepth) unit_0006(c, 47u, depth + 1u); else { c.pc = 0x001189B0u; return; } if (c.pc != 0x00132F9Cu) [[unlikely]] return; }
L_00132F9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26848u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00132FB8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26844u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00132FB4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00132FB4u) [[unlikely]] return; }
L_00132FB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00132FB8:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00132FC8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[19].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 14;
L_00133000:
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00133044; } }
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    set32(c.r[17], c.r[20].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133020u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x0011B518u; return; } if (c.pc != 0x00133020u) [[unlikely]] return; }
L_00133020:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133034u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0011ACA0u; return; } if (c.pc != 0x00133034u) [[unlikely]] return; }
L_00133034:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133000u | kUnwind; return; } goto L_00133000; } }
L_00133040:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00133044:
    set32(c.r[16], c.r[21].w[0] - 15104u);
    c.r[18].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133054u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00133054u) [[unlikely]] return; }
L_00133054:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[2].d[0] >> 32;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[19].d[0];
    c.budget -= 6;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001330A8; } }
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + static_cast<std::uint64_t>(-1ll);
    c.budget -= 3;
L_00133078:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[3].d[0] = c.r[18].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[20].w[0] + c.r[3].w[0]);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.r[18].d[0] = c.r[18].d[0] + static_cast<std::uint64_t>(1ll);
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[2].d[0] = c.r[18].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133078u | kUnwind; return; } goto L_00133078; } }
L_001330A8:
    c.r[2].d[0] = c.r[18].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    set32(c.r[2], c.r[20].w[0] + c.r[2].w[0]);
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001330E0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133110u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 363u, depth + 1u); else { c.pc = 0x00132FC8u; return; } if (c.pc != 0x00133110u) [[unlikely]] return; }
L_00133110:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133120u); set32(c.r[16], c.r[16].w[0] - 6592u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00133120u) [[unlikely]] return; }
L_00133120:
    c.r[2].d[0] = c.r[2].d[0] << 32;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] >> 32;
    c.r[17].d[0] = c.r[17].d[0] - c.r[2].d[0];
    c.r[17].d[0] = c.r[17].d[0] + static_cast<std::uint64_t>(-1ll);
    c.r[6].d[0] = c.r[17].d[0] << 32;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 32);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133144u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 47u, depth + 1u); else { c.pc = 0x001189B0u; return; } if (c.pc != 0x00133144u) [[unlikely]] return; }
L_00133144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013314Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0013314Cu) [[unlikely]] return; }
L_0013314C:
    set32(c.r[16], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133158u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00133158u) [[unlikely]] return; }
L_00133158:
    set32(c.r[6], 0u + 4u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[6], c.r[6].w[0] - c.r[2].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] << 32;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[6].d[0] = c.r[6].d[0] >> 32;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132FC8u | kUnwind; return; } goto L_00132FC8; }
L_00133190:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001331BCu); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00132E38u; return; } if (c.pc != 0x001331BCu) [[unlikely]] return; }
L_001331BC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] << 5);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - 15072u);  if (t) { goto L_001331E4; } }
    c.budget -= 1;
L_001331D0:
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] - 15072u);  if (t) { goto L_001331FC; } }
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 2;
L_001331E4:
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001331D0u | kUnwind; return; } goto L_001331D0; }
    st32((c.r[2].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[2].w[0]), c.r[19].w[0]);
    c.budget -= 2;
L_001331FC:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00133200:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00133210; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133210u); set32(c.r[4], c.r[4].w[0] + 19672u);  if (depth < kMaxDepth) unit_000C(c, 356u, depth + 1u); else { c.pc = 0x00132F10u; return; } if (c.pc != 0x00133210u) [[unlikely]] return; }
L_00133210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133218u);  if (depth < kMaxDepth) unit_000C(c, 350u, depth + 1u); else { c.pc = 0x00132E60u; return; } if (c.pc != 0x00133218u) [[unlikely]] return; }
L_00133218:
    c.r[3].d[0] = c.r[17].d[0] ^ 4ull;
    set32(c.r[2], 0u - 1u);
    if (c.r[3].d[0] != 0) c.r[2].d[0] = c.r[17].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00133240:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0013326C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013326Cu); set32(c.r[4], c.r[4].w[0] + 19720u);  if (depth < kMaxDepth) unit_000C(c, 356u, depth + 1u); else { c.pc = 0x00132F10u; return; } if (c.pc != 0x0013326Cu) [[unlikely]] return; }
L_0013326C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133274u);  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00132E38u; return; } if (c.pc != 0x00133274u) [[unlikely]] return; }
L_00133274:
    set32(c.r[4], c.r[17].w[0] << 5);
    set32(c.r[3], c.r[16].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 15072u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0]), 0u);
    st32((c.r[4].w[0] + 4u), 0u);
    c.budget -= 14;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132E60u | kUnwind; return; } goto L_00132E60; }
L_001332B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001332D4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00132E38u; return; } if (c.pc != 0x001332D4u) [[unlikely]] return; }
L_001332D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - 14880u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132E60u | kUnwind; return; } goto L_00132E60; }
L_00133308:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] - 14880u);
    set32(c.r[2], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_00133334; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[5].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00133334u); set32(c.r[4], ld32((c.r[2].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00133334u) [[unlikely]] return; }
L_00133334:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013335Cu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 347u, depth + 1u); else { c.pc = 0x00132E38u; return; } if (c.pc != 0x0013335Cu) [[unlikely]] return; }
L_0013335C:
    st32((c.r[28].w[0] - 26848u), c.r[16].w[0]);
    st32((c.r[28].w[0] - 26844u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00132E60u | kUnwind; return; } goto L_00132E60; }
L_00133378:
    st32((c.r[28].w[0] - 26864u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26860u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133388:
    st32((c.r[28].w[0] - 26856u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26852u), c.r[5].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00133398:
    set32(c.r[29], c.r[29].w[0] - 96u);
    set32(c.r[3], c.r[4].w[0] << 2);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    set32(c.r[5], c.r[5].w[0] - 15072u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[2], c.r[2].w[0] + 19648u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], c.r[4].w[0] << 5);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], c.r[3].w[0] + c.r[2].w[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[19].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    set32(c.r[16], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[20], 0u + 1u);
    set32(c.r[17], 0u + 3u);
    c.budget -= 18;
L_001333E0:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_00133404; }
    st32((c.r[18].w[0]), c.r[20].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001333F8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001333F8u) [[unlikely]] return; }
L_001333F8:
    st32((c.r[18].w[0]), 0u);
    c.r[19].d[0] = c.r[19].d[0] | c.r[2].d[0];
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
L_00133404:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001333E0u | kUnwind; return; } goto L_001333E0; } }
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00133430:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133440u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000C(c, 393u, depth + 1u); else { c.pc = 0x00133398u; return; } if (c.pc != 0x00133440u) [[unlikely]] return; }
    goto L_00133440;
L_0013343C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00133440:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133460u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000C(c, 393u, depth + 1u); else { c.pc = 0x00133398u; return; } if (c.pc != 0x00133460u) [[unlikely]] return; }
L_00133460:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133480u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_000C(c, 393u, depth + 1u); else { c.pc = 0x00133398u; return; } if (c.pc != 0x00133480u) [[unlikely]] return; }
L_00133480:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133490:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334A0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_000C(c, 393u, depth + 1u); else { c.pc = 0x00133398u; return; } if (c.pc != 0x001334A0u) [[unlikely]] return; }
L_001334A0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001334B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334C0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_000C(c, 393u, depth + 1u); else { c.pc = 0x00133398u; return; } if (c.pc != 0x001334C0u) [[unlikely]] return; }
L_001334C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001334D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001334E0u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_000C(c, 393u, depth + 1u); else { c.pc = 0x00133398u; return; } if (c.pc != 0x001334E0u) [[unlikely]] return; }
L_001334E0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001334F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32052u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00133538; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] + 19648u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133514u); set32(c.r[6], 0u + 24u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00133514u) [[unlikely]] return; }
L_00133514:
    set32(c.r[4], c.r[28].w[0] - 26864u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133524u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00133524u) [[unlikely]] return; }
L_00133524:
    set32(c.r[4], c.r[28].w[0] - 26856u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133534u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00133534u) [[unlikely]] return; }
L_00133534:
    set32(c.r[2], ld32((c.r[28].w[0] - 32052u)));
    c.budget -= 1;
L_00133538:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[28].w[0] - 32052u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133550:
    set32(c.r[2], ld32((c.r[28].w[0] - 32052u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32052u), c.r[2].w[0]);  c.pc = t; return; }
L_00133560:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133574u); set32(c.r[4], c.r[2].w[0] + 19792u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00133574u) [[unlikely]] return; }
L_00133574:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133574u | kUnwind; return; } goto L_00133574; } }
    c.budget -= 1;
L_00133580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133598u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0009(c, 18u, depth + 1u); else { c.pc = 0x00124230u; return; } if (c.pc != 0x00133598u) [[unlikely]] return; }
L_00133598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], c.r[2].w[0] + 13664u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 630u, depth + 1u); else { c.pc = 0x00127FB0u; return; } if (c.pc != 0x001335A8u) [[unlikely]] return; }
L_001335A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[17], c.r[2].w[0] + 19936u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 3;
L_001335B4:
    set32(c.r[5], ld32((c.r[17].w[0])));
    set32(c.r[7], ld32((c.r[17].w[0] + 4u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335C8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0008(c, 239u, depth + 1u); else { c.pc = 0x001229B0u; return; } if (c.pc != 0x001335C8u) [[unlikely]] return; }
L_001335C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001335D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0008(c, 253u, depth + 1u); else { c.pc = 0x00122BA0u; return; } if (c.pc != 0x001335D0u) [[unlikely]] return; }
L_001335D0:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001335F4; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001335B4u | kUnwind; return; } goto L_001335B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001335C8u | kUnwind; return; } goto L_001335C8; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001335F4:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001335B4u | kUnwind; return; } goto L_001335B4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x005E0000u);
    set32(c.r[17], c.r[2].w[0] + 28096u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[18], c.r[2].w[0] - 14832u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 5;
L_00133614:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | 49316ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133628u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0009(c, 455u, depth + 1u); else { c.pc = 0x00126C08u; return; } if (c.pc != 0x00133628u) [[unlikely]] return; }
L_00133628:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00133640; } }
    set32(c.r[4], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013363Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 584u, depth + 1u); else { c.pc = 0x00127C78u; return; } if (c.pc != 0x0013363Cu) [[unlikely]] return; }
L_0013363C:
    c.budget -= 1;
L_00133640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 49316ull;
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133614u | kUnwind; return; } goto L_00133614; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[5], c.r[2].w[0] - 4928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00050000u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133674u); c.r[6].d[0] = c.r[2].d[0] | 32996ull;  if (depth < kMaxDepth) unit_0009(c, 455u, depth + 1u); else { c.pc = 0x00126C08u; return; } if (c.pc != 0x00133674u) [[unlikely]] return; }
L_00133674:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[1].w[0] - 14824u), c.r[2].w[0]);  if (t) { goto L_00133690; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 14824u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133690u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 584u, depth + 1u); else { c.pc = 0x00127C78u; return; } if (c.pc != 0x00133690u) [[unlikely]] return; }
L_00133690:
    st32((c.r[28].w[0] - 26840u), 0u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001336B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001336D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336C8u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 8u, depth + 1u); else { c.pc = 0x001A4310u; return; } if (c.pc != 0x001336C8u) [[unlikely]] return; }
L_001336C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001336DC; } }
L_001336D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001336D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 8u, depth + 1u); else { c.pc = 0x001A4310u; return; } if (c.pc != 0x001336D8u) [[unlikely]] return; }
L_001336D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001336DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001336F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(9ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_00133728; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[2].w[0] + 19824u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133720u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x00133720u) [[unlikely]] return; }
L_00133720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00133814; } }
L_00133728:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0] + 8u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[8], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[10], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[9], c.r[4].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0013375Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 4u, depth + 1u); else { c.pc = 0x001A4140u; return; } if (c.pc != 0x0013375Cu) [[unlikely]] return; }
L_0013375C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00133770; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00133818; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00133770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133778u);  if (depth < kMaxDepth) unit_0029(c, 9u, depth + 1u); else { c.pc = 0x001A43A0u; return; } if (c.pc != 0x00133778u) [[unlikely]] return; }
L_00133778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[2].d[0] | 12ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133788u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 26u, depth + 1u); else { c.pc = 0x001A4600u; return; } if (c.pc != 0x00133788u) [[unlikely]] return; }
L_00133788:
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133778u | kUnwind; return; } goto L_00133778; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 4336u);
    set32(c.r[3], c.r[18].w[0] << 9);
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[4].w[0]);
    set32(c.r[6], 0u + 512u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001337BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001337BCu) [[unlikely]] return; }
L_001337BC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001337F0; } }
L_001337C8:
    st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 4u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 14u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[16].w[0] + 5u));
    st8((c.r[18].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 16u);
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 10;
L_001337F0:
    c.r[1].d[0] = c.r[4].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00133814; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] >> 4);
    c.r[2].d[0] = c.r[4].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001337C8u | kUnwind; return; } goto L_001337C8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00133814:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00133818:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00133830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[2], c.r[2].w[0] - 4336u);
    set32(c.r[3], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[1].d[0] == 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001338C0; } }
    c.r[3].d[0] = ld8((c.r[8].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001338C0; } }
    c.r[3].d[0] = ld8((c.r[8].w[0] + 2u));
    set32(c.r[2], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[7].w[0] << 2);  if (t) { goto L_00133884; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00133890; } }
    set32(c.r[2], c.r[7].w[0] << 2);
    c.budget -= 1;
L_00133884:
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 3;
L_00133890:
    c.r[3].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[4], c.r[3].w[0] << 16);
    c.r[3].d[0] = c.r[5].d[0] & 127ull;
    c.r[5].d[0] = c.r[6].d[0] << 56;
    set32(c.r[3], c.r[3].w[0] << 8);
    set32(c.r[6], 0u - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 127ull;
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001338C0u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0028(c, 299u, depth + 1u); else { c.pc = 0x001A3EF0u; return; } if (c.pc != 0x001338C0u) [[unlikely]] return; }
L_001338C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001338D0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0029(c, 7u, depth); }
L_001338E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 4333u);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_00133900:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[3].w[0] - 4335u);
    set32(c.r[4], c.r[4].w[0] << 9);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = ld8((c.r[2].w[0]));  c.pc = t; return; }
L_00133920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[2].d[0];
    set32(c.r[10], c.r[2].w[0] >> 16);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.r[2].d[0] = c.r[6].d[0] & 65280ull;
    c.r[9].d[0] = c.r[6].d[0] & 255ull;
    set32(c.r[3], c.r[3].w[0] - 4336u);
    set32(c.r[6], c.r[4].w[0] << 9);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[7], c.r[3].w[0] + c.r[6].w[0]);
    c.r[1].d[0] = c.r[5].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] >> 8);  if (t) { goto L_00133A0C; } }
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[8], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_00133A0C; } }
    c.r[6].d[0] = ld8((c.r[7].w[0] + 2u));
    set32(c.r[3], 0u + 255u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[10].w[0] << 2);  if (t) { goto L_00133990; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0013399C; } }
    set32(c.r[3], c.r[10].w[0] << 2);
    c.budget -= 1;
L_00133990:
    set32(c.r[3], c.r[3].w[0] + c.r[10].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[10], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 3;
L_0013399C:
    c.r[6].d[0] = ld8((c.r[7].w[0] + 1u));
    c.r[3].d[0] = c.r[6].d[0] & 128ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001339B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[7].d[0] = c.r[6].d[0] & 127ull;  if (t) { goto L_001339CC; } }
L_001339B4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[3].w[0] + 19968u);
    set32(c.r[6], c.r[9].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[3].w[0])));
    c.budget -= 6;
L_001339CC:
    c.r[3].d[0] = c.r[8].d[0] & 1ull;
    set32(c.r[6], c.r[3].w[0] << 7);
    c.r[3].d[0] = c.r[10].d[0] & 127ull;
    c.r[3].d[0] = c.r[6].d[0] | c.r[3].d[0];
    c.r[6].d[0] = c.r[7].d[0] << 56;
    c.r[4].d[0] = c.r[4].d[0] & 127ull;
    set32(c.r[7], c.r[4].w[0] << 16);
    c.r[4].d[0] = c.r[5].d[0] & 127ull;
    set32(c.r[4], c.r[4].w[0] << 8);
    c.r[4].d[0] = c.r[7].d[0] | c.r[4].d[0];
    c.r[5].d[0] = c.r[2].d[0] << 56;
    set32(c.r[7], 0u - 1u);
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A0Cu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0028(c, 298u, depth + 1u); else { c.pc = 0x001A3DC0u; return; } if (c.pc != 0x00133A0Cu) [[unlikely]] return; }
L_00133A0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 60u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 48u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 52u), c.f[12]);
    st32((c.r[4].w[0] + 56u), 0u);
    mmi::paddub(c.r[8], c.r[4], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00133A60; } }
L_00133A44:
    st8((c.r[8].w[0] + 61u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[8], c.r[8].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133A44u | kUnwind; return; } goto L_00133A44; } }
L_00133A60:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_00133A90; } }
    c.f[3] = ld32((c.r[7].w[0]));
    c.f[2] = ld32((c.r[7].w[0] + 4u));
    c.f[1] = ld32((c.r[7].w[0] + 8u));
    c.f[0] = ld32((c.r[7].w[0] + 12u));
    st32((c.r[5].w[0]), c.f[3]);
    st32((c.r[5].w[0] + 4u), c.f[2]);
    st32((c.r[5].w[0] + 8u), c.f[1]);
    st32((c.r[5].w[0] + 12u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133A90u); mmi::paddub(c.r[5], c.r[7], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 24u, depth + 1u); else { c.pc = 0x001342A0u; return; } if (c.pc != 0x00133A90u) [[unlikely]] return; }
L_00133A90:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00133AA0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 16u), c.f[24]);
    st32((c.r[29].w[0] + 12u), c.f[23]);
    set32(c.r[2], c.r[7].w[0] << 3);
    st32((c.r[29].w[0] + 8u), c.f[22]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], c.r[2].w[0] + c.r[7].w[0]);
    c.f[1] = ld32((c.r[4].w[0] + 52u));
    mmi::paddub(c.r[22], c.r[6], c.r[0]);
    set32(c.r[6], c.r[2].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + 20032u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 60u));
    set32(c.r[20], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    c.r[3].d[0] = c.r[3].d[0] | 26214ull;
    c.f[0] = c.r[3].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F330000u);
    c.f[20] = fp::mul(c.f[0], c.f[1]);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.f[0] = c.r[3].w[0];
    c.budget -= 34;
    { const bool t = c.r[2].sd[0] < 0; c.f[21] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_00133B34; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00133B50; } }
L_00133B34:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00133B50:
    c.f[1] = fp::mul(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[16].w[0] + 16u);
    c.f[0] = c.r[2].w[0];
    c.f[22] = fp::mul(c.f[20], c.f[20]);
    c.f[24] = fp::sub(c.f[1], c.f[0]);
    c.f[23] = fp::mul(c.f[21], c.f[21]);
    c.f[24] = fp::mul(c.f[24], c.f[24]);
    ld128((c.r[16].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[5].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[16].w[0]) & ~15u, c.vu0.vf[6]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    set32(c.r[21], c.r[16].w[0] + 64u);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 2u);  if (t) { goto L_00133BE8; } }
    set32(c.r[3], c.r[21].w[0] + 16u);
    c.budget -= 1;
L_00133B94:
    set32(c.r[2], c.r[21].w[0] + 32u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[6]);
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 36u), c.f[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 4u)));
    c.vu0.vf[5] = c.r[8];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 14u, 6u, 6u, 4u);
    st128((c.r[21].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[21], c.r[21].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 21;
L_00133BE8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[3], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133B94u | kUnwind; return; } goto L_00133B94; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[3], c.r[21].w[0] + 16u);  if (t) { goto L_00133C14; } }
    set32(c.r[2], c.r[21].w[0] + 16u);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[22].w[0]) & ~15u, c.vu0.vf[6]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st128((c.r[21].w[0]) & ~15u, c.vu0.vf[6]);  if (t) { goto L_00133C5C; } }
    set32(c.r[3], c.r[21].w[0] + 16u);
    c.budget -= 1;
L_00133C14:
    set32(c.r[2], c.r[21].w[0] + 32u);
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    vu::sub(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[6]);
    c.f[1] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[20].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[21].w[0] + 36u), c.f[0]);
    set32(c.r[8], ld32((c.r[20].w[0] + 4u)));
    c.vu0.vf[5] = c.r[8];
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[6]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[5].w[0]);
    vu::add(c.vu0, 14u, 6u, 6u, 4u);
    st128((c.r[21].w[0]) & ~15u, c.vu0.vf[6]);
    c.budget -= 18;
L_00133C5C:
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[16].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C70u); mmi::paddub(c.r[21], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133C70u) [[unlikely]] return; }
L_00133C70:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133C80u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000D(c, 27u, depth + 1u); else { c.pc = 0x00134560u; return; } if (c.pc != 0x00133C80u) [[unlikely]] return; }
L_00133C80:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00133CC4; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[16].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CA8u); set32(c.r[6], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133CA8u) [[unlikely]] return; }
L_00133CA8:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CB4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 111u, depth + 1u); else { c.pc = 0x00135660u; return; } if (c.pc != 0x00133CB4u) [[unlikely]] return; }
L_00133CB4:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[21] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CC4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00133CC4u) [[unlikely]] return; }
L_00133CC4:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    set32(c.r[21], c.r[21].w[0] + 64u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 2u);  if (t) { goto L_00133D98; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 1;
L_00133CD8:
    ld128((c.r[4].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[29].w[0] + 160u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[21], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133CF0u); st128((c.r[3].w[0]) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133CF0u) [[unlikely]] return; }
L_00133CF0:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D00u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000D(c, 27u, depth + 1u); else { c.pc = 0x00134560u; return; } if (c.pc != 0x00133D00u) [[unlikely]] return; }
L_00133D00:
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00133D48; } }
    set32(c.r[4], c.r[29].w[0] + 176u);
    set32(c.r[5], c.r[21].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D28u); set32(c.r[6], c.r[21].w[0] + 16u);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133D28u) [[unlikely]] return; }
L_00133D28:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D34u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 111u, depth + 1u); else { c.pc = 0x00135660u; return; } if (c.pc != 0x00133D34u) [[unlikely]] return; }
L_00133D34:
    set32(c.r[4], c.r[29].w[0] + 176u);
    c.f[12] = c.f[21] ^ fp::kSign;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133D44u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00133D44u) [[unlikely]] return; }
L_00133D44:
    c.budget -= 1;
L_00133D48:
    set32(c.r[8], ld32((c.r[20].w[0] + 20u)));
    set32(c.r[3], c.r[29].w[0] + 176u);
    c.f[0] = ld32((c.r[20].w[0] + 24u));
    set32(c.r[2], c.r[29].w[0] + 160u);
    c.vu0.vf[8] = c.r[8];
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[5]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    vu::mulbc(c.vu0, 14u, 5u, 5u, c.vu0.vf[8].w[0]);
    vu::sub(c.vu0, 14u, 6u, 5u, 4u);
    set32(c.r[8], c.f[0]);
    c.vu0.vf[8] = c.r[8];
    vu::mulbc(c.vu0, 14u, 6u, 6u, c.vu0.vf[8].w[0]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 4u, 5u, 6u);
    st128((c.r[21].w[0]) & ~15u, c.vu0.vf[4]);
    set32(c.r[21], c.r[21].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 20;
L_00133D98:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 176u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133CD8u | kUnwind; return; } goto L_00133CD8; } }
    c.budget -= 2;
    { const bool t = c.r[22].d[0] != 0ull;  if (t) { goto L_00133DD4; } }
    c.f[0] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 28u));
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    set32(c.r[8], c.f[0]);
    ld128((c.r[2].w[0]) & ~15u, c.vu0.vf[4]);
    c.vu0.vf[8] = c.r[8];
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    vu::mulbc(c.vu0, 14u, 4u, 4u, c.vu0.vf[8].w[0]);
    vu::sub(c.vu0, 14u, 5u, 5u, 4u);
    st128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    c.budget -= 11;
L_00133DD4:
    c.budget -= 2;
    { const bool t = c.r[22].d[0] == 0ull; set32(c.r[18], 0u + 2u);  if (t) { [[clang::musttail]] return unit_000D(c, 2u, depth); } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    set32(c.r[4], c.r[29].w[0] + 192u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[21], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133DFCu); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133DFCu) [[unlikely]] return; }
L_00133DFC:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E08u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 208u, depth + 1u); else { c.pc = 0x001024A0u; return; } if (c.pc != 0x00133E08u) [[unlikely]] return; }
L_00133E08:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[24]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[18], 0u + 5u);  if (t) { goto L_00133E7C; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[19], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E28u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 111u, depth + 1u); else { c.pc = 0x00135660u; return; } if (c.pc != 0x00133E28u) [[unlikely]] return; }
L_00133E28:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133E38u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 219u, depth + 1u); else { c.pc = 0x00102668u; return; } if (c.pc != 0x00133E38u) [[unlikely]] return; }
L_00133E38:
    set32(c.r[3], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[19], c.r[0]);  if (t) { goto L_00133E60; } }
    set32(c.r[2], c.r[21].w[0] + 64u);
    c.budget -= 1;
L_00133E48:
    ld128((c.r[3].w[0]) & ~15u, c.vu0.vf[4]);
    ld128((c.r[21].w[0]) & ~15u, c.vu0.vf[5]);
    vu::add(c.vu0, 14u, 6u, 5u, 4u);
    st128((c.r[2].w[0]) & ~15u, c.vu0.vf[6]);
    set32(c.r[21], c.r[21].w[0] + 64u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 6;
L_00133E60:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    c.r[2].d[0] = c.r[17].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[21].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133E48u | kUnwind; return; } goto L_00133E48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0] + 48u)));  if (t) { [[clang::musttail]] return unit_000D(c, 22u, depth); } }
    set32(c.r[18], 0u + 5u);
    c.budget -= 1;
L_00133E7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00133FF8; } }
L_00133E84:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    mmi::paddub(c.r[21], c.r[16], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 2u);  if (t) { goto L_00133F08; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00133E98:
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EA4u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133EA4u) [[unlikely]] return; }
L_00133EA4:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133EB0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 208u, depth + 1u); else { c.pc = 0x001024A0u; return; } if (c.pc != 0x00133EB0u) [[unlikely]] return; }
L_00133EB0:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00133EDC; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[20];
    set32(c.r[6], c.r[21].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133ED4u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 29u, depth + 1u); else { c.pc = 0x00134690u; return; } if (c.pc != 0x00133ED4u) [[unlikely]] return; }
L_00133ED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] + 64u);  if (t) { goto L_00133F04; } }
L_00133EDC:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00133F00; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[21];
    set32(c.r[6], c.r[21].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F00u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 29u, depth + 1u); else { c.pc = 0x00134690u; return; } if (c.pc != 0x00133F00u) [[unlikely]] return; }
L_00133F00:
    set32(c.r[21], c.r[21].w[0] + 64u);
    c.budget -= 1;
L_00133F04:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00133F08:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133E98u | kUnwind; return; } goto L_00133E98; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F20u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133F20u) [[unlikely]] return; }
L_00133F20:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F2Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 208u, depth + 1u); else { c.pc = 0x001024A0u; return; } if (c.pc != 0x00133F2Cu) [[unlikely]] return; }
L_00133F2C:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_000D(c, 21u, depth); } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 60u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[2].w[0] - 2u);  if (t) { goto L_00133FC0; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 1;
L_00133F4C:
    set32(c.r[6], c.r[21].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F58u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133F58u) [[unlikely]] return; }
L_00133F58:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F64u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 208u, depth + 1u); else { c.pc = 0x001024A0u; return; } if (c.pc != 0x00133F64u) [[unlikely]] return; }
L_00133F64:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00133F90; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[20];
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133F88u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 29u, depth + 1u); else { c.pc = 0x00134690u; return; } if (c.pc != 0x00133F88u) [[unlikely]] return; }
L_00133F88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[21], c.r[21].w[0] - 64u);  if (t) { goto L_00133FBC; } }
L_00133F90:
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[23]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00133FB8; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.f[12] = c.f[21];
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FB4u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 29u, depth + 1u); else { c.pc = 0x00134690u; return; } if (c.pc != 0x00133FB4u) [[unlikely]] return; }
L_00133FB4:
    c.budget -= 1;
L_00133FB8:
    set32(c.r[21], c.r[21].w[0] - 64u);
    c.budget -= 1;
L_00133FBC:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00133FC0:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 192u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133F4Cu | kUnwind; return; } goto L_00133F4C; } }
    set32(c.r[4], c.r[29].w[0] + 192u);
    set32(c.r[5], c.r[21].w[0] + 64u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FD8u); mmi::paddub(c.r[6], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 216u, depth + 1u); else { c.pc = 0x00102638u; return; } if (c.pc != 0x00133FD8u) [[unlikely]] return; }
L_00133FD8:
    set32(c.r[4], c.r[29].w[0] + 192u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00133FE4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 208u, depth + 1u); else { c.pc = 0x001024A0u; return; } if (c.pc != 0x00133FE4u) [[unlikely]] return; }
L_00133FE4:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[22]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { [[clang::musttail]] return unit_000D(c, 21u, depth); } }
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 1;
L_00133FF8:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00133E84u | kUnwind; return; } goto L_00133E84; } }
    [[clang::musttail]] return unit_000D(c, 1u, depth);
}

}
