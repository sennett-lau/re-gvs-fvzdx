#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0002[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 5, 6, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0,
    11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0,
    17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0,
    23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0,
    0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46,
    0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0,
    69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0,
    80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 92, 0, 0,
    0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0,
    0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0,
    0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0,
    0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 167, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 188, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0,
    0, 244, 0, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0,
    322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0002(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00108000;
    case 2u: goto L_0010801C;
    case 3u: goto L_0010802C;
    case 4u: goto L_00108034;
    case 5u: goto L_0010803C;
    case 6u: goto L_00108040;
    case 7u: goto L_0010804C;
    case 8u: goto L_0010805C;
    case 9u: goto L_0010806C;
    case 10u: goto L_00108074;
    case 11u: goto L_00108080;
    case 12u: goto L_00108084;
    case 13u: goto L_001080A8;
    case 14u: goto L_001080C0;
    case 15u: goto L_001080E0;
    case 16u: goto L_001080EC;
    case 17u: goto L_00108100;
    case 18u: goto L_00108104;
    case 19u: goto L_00108128;
    case 20u: goto L_0010813C;
    case 21u: goto L_00108140;
    case 22u: goto L_00108168;
    case 23u: goto L_00108180;
    case 24u: goto L_00108194;
    case 25u: goto L_001081D0;
    case 26u: goto L_0010820C;
    case 27u: goto L_00108248;
    case 28u: goto L_00108258;
    case 29u: goto L_00108260;
    case 30u: goto L_00108274;
    case 31u: goto L_00108284;
    case 32u: goto L_0010829C;
    case 33u: goto L_001082AC;
    case 34u: goto L_001082B4;
    case 35u: goto L_001082E0;
    case 36u: goto L_00108320;
    case 37u: goto L_0010832C;
    case 38u: goto L_00108344;
    case 39u: goto L_00108368;
    case 40u: goto L_001083A8;
    case 41u: goto L_001083D4;
    case 42u: goto L_00108404;
    case 43u: goto L_0010843C;
    case 44u: goto L_00108440;
    case 45u: goto L_00108468;
    case 46u: goto L_0010847C;
    case 47u: goto L_00108488;
    case 48u: goto L_001084B4;
    case 49u: goto L_001084C4;
    case 50u: goto L_001084CC;
    case 51u: goto L_001084DC;
    case 52u: goto L_001084EC;
    case 53u: goto L_00108504;
    case 54u: goto L_00108514;
    case 55u: goto L_0010851C;
    case 56u: goto L_00108550;
    case 57u: goto L_00108590;
    case 58u: goto L_0010859C;
    case 59u: goto L_001085B4;
    case 60u: goto L_001085D8;
    case 61u: goto L_00108618;
    case 62u: goto L_0010863C;
    case 63u: goto L_00108644;
    case 64u: goto L_00108680;
    case 65u: goto L_001086BC;
    case 66u: goto L_00108708;
    case 67u: goto L_00108720;
    case 68u: goto L_00108770;
    case 69u: goto L_00108780;
    case 70u: goto L_00108788;
    case 71u: goto L_0010879C;
    case 72u: goto L_001087AC;
    case 73u: goto L_001087C4;
    case 74u: goto L_001087D4;
    case 75u: goto L_001087DC;
    case 76u: goto L_00108810;
    case 77u: goto L_00108850;
    case 78u: goto L_0010885C;
    case 79u: goto L_00108878;
    case 80u: goto L_00108880;
    case 81u: goto L_00108894;
    case 82u: goto L_001088DC;
    case 83u: goto L_00108900;
    case 84u: goto L_00108940;
    case 85u: goto L_00108980;
    case 86u: goto L_001089D4;
    case 87u: goto L_00108A40;
    case 88u: goto L_00108A90;
    case 89u: goto L_00108AB4;
    case 90u: goto L_00108ADC;
    case 91u: goto L_00108AEC;
    case 92u: goto L_00108AF4;
    case 93u: goto L_00108B08;
    case 94u: goto L_00108B18;
    case 95u: goto L_00108B28;
    case 96u: goto L_00108B30;
    case 97u: goto L_00108B60;
    case 98u: goto L_00108BA8;
    case 99u: goto L_00108BB4;
    case 100u: goto L_00108BCC;
    case 101u: goto L_00108BE8;
    case 102u: goto L_00108C24;
    case 103u: goto L_00108C50;
    case 104u: goto L_00108C7C;
    case 105u: goto L_00108CB0;
    case 106u: goto L_00108CC0;
    case 107u: goto L_00108CC8;
    case 108u: goto L_00108CDC;
    case 109u: goto L_00108CEC;
    case 110u: goto L_00108CFC;
    case 111u: goto L_00108D04;
    case 112u: goto L_00108D38;
    case 113u: goto L_00108D78;
    case 114u: goto L_00108D90;
    case 115u: goto L_00108DB8;
    case 116u: goto L_00108E1C;
    case 117u: goto L_00108E3C;
    case 118u: goto L_00108E58;
    case 119u: goto L_00108E68;
    case 120u: goto L_00108E70;
    case 121u: goto L_00108E84;
    case 122u: goto L_00108E94;
    case 123u: goto L_00108EA4;
    case 124u: goto L_00108EAC;
    case 125u: goto L_00108EE0;
    case 126u: goto L_00108EF0;
    case 127u: goto L_00108F00;
    case 128u: goto L_00108F40;
    case 129u: goto L_00108F58;
    case 130u: goto L_00108F80;
    case 131u: goto L_00108FEC;
    case 132u: goto L_00109028;
    case 133u: goto L_00109038;
    case 134u: goto L_00109040;
    case 135u: goto L_00109054;
    case 136u: goto L_00109064;
    case 137u: goto L_00109074;
    case 138u: goto L_0010907C;
    case 139u: goto L_001090B0;
    case 140u: goto L_001090C0;
    case 141u: goto L_001090D0;
    case 142u: goto L_00109118;
    case 143u: goto L_00109130;
    case 144u: goto L_00109150;
    case 145u: goto L_001091B8;
    case 146u: goto L_001091F8;
    case 147u: goto L_00109218;
    case 148u: goto L_00109270;
    case 149u: goto L_00109290;
    case 150u: goto L_001092B8;
    case 151u: goto L_001092C8;
    case 152u: goto L_001092D0;
    case 153u: goto L_001092E4;
    case 154u: goto L_001092F4;
    case 155u: goto L_00109304;
    case 156u: goto L_0010930C;
    case 157u: goto L_00109340;
    case 158u: goto L_0010936C;
    case 159u: goto L_00109384;
    case 160u: goto L_001093A0;
    case 161u: goto L_001093EC;
    case 162u: goto L_001093FC;
    case 163u: goto L_00109404;
    case 164u: goto L_00109418;
    case 165u: goto L_00109428;
    case 166u: goto L_00109438;
    case 167u: goto L_0010943C;
    case 168u: goto L_00109440;
    case 169u: goto L_00109460;
    case 170u: goto L_00109470;
    case 171u: goto L_00109480;
    case 172u: goto L_001094A0;
    case 173u: goto L_001094B8;
    case 174u: goto L_001094C0;
    case 175u: goto L_001094C8;
    case 176u: goto L_001094E4;
    case 177u: goto L_001094F8;
    case 178u: goto L_0010950C;
    case 179u: goto L_0010952C;
    case 180u: goto L_00109548;
    case 181u: goto L_00109570;
    case 182u: goto L_0010957C;
    case 183u: goto L_00109594;
    case 184u: goto L_001095B8;
    case 185u: goto L_001095DC;
    case 186u: goto L_00109628;
    case 187u: goto L_00109638;
    case 188u: goto L_0010963C;
    case 189u: goto L_00109640;
    case 190u: goto L_00109658;
    case 191u: goto L_00109668;
    case 192u: goto L_00109678;
    case 193u: goto L_00109680;
    case 194u: goto L_001096B0;
    case 195u: goto L_001096D8;
    case 196u: goto L_001096E4;
    case 197u: goto L_001096FC;
    case 198u: goto L_00109720;
    case 199u: goto L_00109748;
    case 200u: goto L_00109794;
    case 201u: goto L_001097A4;
    case 202u: goto L_001097AC;
    case 203u: goto L_001097C0;
    case 204u: goto L_001097D0;
    case 205u: goto L_001097E0;
    case 206u: goto L_001097E8;
    case 207u: goto L_00109808;
    case 208u: goto L_0010983C;
    case 209u: goto L_00109840;
    case 210u: goto L_00109848;
    case 211u: goto L_00109860;
    case 212u: goto L_00109880;
    case 213u: goto L_001098E8;
    case 214u: goto L_00109924;
    case 215u: goto L_00109934;
    case 216u: goto L_0010993C;
    case 217u: goto L_00109950;
    case 218u: goto L_00109960;
    case 219u: goto L_00109970;
    case 220u: goto L_00109978;
    case 221u: goto L_001099A8;
    case 222u: goto L_001099F0;
    case 223u: goto L_00109A08;
    case 224u: goto L_00109A28;
    case 225u: goto L_00109B14;
    case 226u: goto L_00109B34;
    case 227u: goto L_00109B5C;
    case 228u: goto L_00109B6C;
    case 229u: goto L_00109B74;
    case 230u: goto L_00109B88;
    case 231u: goto L_00109B98;
    case 232u: goto L_00109BA8;
    case 233u: goto L_00109BB0;
    case 234u: goto L_00109BE8;
    case 235u: goto L_00109C24;
    case 236u: goto L_00109C3C;
    case 237u: goto L_00109C60;
    case 238u: goto L_00109CC0;
    case 239u: goto L_00109D0C;
    case 240u: goto L_00109D30;
    case 241u: goto L_00109D58;
    case 242u: goto L_00109D68;
    case 243u: goto L_00109D70;
    case 244u: goto L_00109D84;
    case 245u: goto L_00109D94;
    case 246u: goto L_00109DA4;
    case 247u: goto L_00109DAC;
    case 248u: goto L_00109DD8;
    case 249u: goto L_00109DE8;
    case 250u: goto L_00109DF8;
    case 251u: goto L_00109E34;
    case 252u: goto L_00109E3C;
    case 253u: goto L_00109E4C;
    case 254u: goto L_00109E70;
    case 255u: goto L_00109ED4;
    case 256u: goto L_00109F10;
    case 257u: goto L_00109F20;
    case 258u: goto L_00109F28;
    case 259u: goto L_00109F3C;
    case 260u: goto L_00109F4C;
    case 261u: goto L_00109F5C;
    case 262u: goto L_00109F64;
    case 263u: goto L_00109F90;
    case 264u: goto L_00109FE0;
    case 265u: goto L_00109FF8;
    case 266u: goto L_0010A018;
    case 267u: goto L_0010A040;
    case 268u: goto L_0010A070;
    case 269u: goto L_0010A0B0;
    case 270u: goto L_0010A0D0;
    case 271u: goto L_0010A12C;
    case 272u: goto L_0010A14C;
    case 273u: goto L_0010A174;
    case 274u: goto L_0010A184;
    case 275u: goto L_0010A18C;
    case 276u: goto L_0010A1A0;
    case 277u: goto L_0010A1B0;
    case 278u: goto L_0010A1C0;
    case 279u: goto L_0010A1C8;
    case 280u: goto L_0010A200;
    case 281u: goto L_0010A210;
    case 282u: goto L_0010A220;
    case 283u: goto L_0010A258;
    case 284u: goto L_0010A264;
    case 285u: goto L_0010A27C;
    case 286u: goto L_0010A2A0;
    case 287u: goto L_0010A2E0;
    case 288u: goto L_0010A30C;
    case 289u: goto L_0010A348;
    case 290u: goto L_0010A384;
    case 291u: goto L_0010A3C0;
    case 292u: goto L_0010A3D0;
    case 293u: goto L_0010A3D8;
    case 294u: goto L_0010A3EC;
    case 295u: goto L_0010A3FC;
    case 296u: goto L_0010A414;
    case 297u: goto L_0010A424;
    case 298u: goto L_0010A42C;
    case 299u: goto L_0010A43C;
    case 300u: goto L_0010A458;
    case 301u: goto L_0010A4A4;
    case 302u: goto L_0010A4C4;
    case 303u: goto L_0010A4E0;
    case 304u: goto L_0010A550;
    case 305u: goto L_0010A5B0;
    case 306u: goto L_0010A5D8;
    case 307u: goto L_0010A600;
    case 308u: goto L_0010A610;
    case 309u: goto L_0010A618;
    case 310u: goto L_0010A62C;
    case 311u: goto L_0010A63C;
    case 312u: goto L_0010A64C;
    case 313u: goto L_0010A654;
    case 314u: goto L_0010A688;
    case 315u: goto L_0010A6C4;
    case 316u: goto L_0010A6DC;
    case 317u: goto L_0010A700;
    case 318u: goto L_0010A760;
    case 319u: goto L_0010A7AC;
    case 320u: goto L_0010A7E8;
    case 321u: goto L_0010A7F8;
    case 322u: goto L_0010A800;
    case 323u: goto L_0010A814;
    case 324u: goto L_0010A824;
    case 325u: goto L_0010A834;
    case 326u: goto L_0010A83C;
    case 327u: goto L_0010A868;
    case 328u: goto L_0010A8AC;
    case 329u: goto L_0010A8C4;
    case 330u: goto L_0010A8F0;
    case 331u: goto L_0010A954;
    case 332u: goto L_0010A970;
    case 333u: goto L_0010A9AC;
    case 334u: goto L_0010A9BC;
    case 335u: goto L_0010A9C4;
    case 336u: goto L_0010A9D8;
    case 337u: goto L_0010A9E8;
    case 338u: goto L_0010A9F8;
    case 339u: goto L_0010AA00;
    case 340u: goto L_0010AA30;
    case 341u: goto L_0010AA48;
    case 342u: goto L_0010AA50;
    case 343u: goto L_0010AA84;
    case 344u: goto L_0010AAB8;
    case 345u: goto L_0010AB0C;
    case 346u: goto L_0010AB28;
    case 347u: goto L_0010AB8C;
    case 348u: goto L_0010ABA8;
    case 349u: goto L_0010AC04;
    case 350u: goto L_0010AC20;
    case 351u: goto L_0010AC30;
    case 352u: goto L_0010AC3C;
    case 353u: goto L_0010AC40;
    case 354u: goto L_0010AC90;
    case 355u: goto L_0010AD14;
    case 356u: goto L_0010AD30;
    case 357u: goto L_0010AD58;
    case 358u: goto L_0010AD6C;
    case 359u: goto L_0010ADB0;
    case 360u: goto L_0010ADF0;
    case 361u: goto L_0010AE30;
    case 362u: goto L_0010AE6C;
    case 363u: goto L_0010AE84;
    case 364u: goto L_0010AE98;
    case 365u: goto L_0010AEC0;
    case 366u: goto L_0010AEE8;
    case 367u: goto L_0010AEF8;
    case 368u: goto L_0010AF30;
    case 369u: goto L_0010AF40;
    case 370u: goto L_0010AF8C;
    case 371u: goto L_0010AFF0;
    case 372u: goto L_0010B080;
    case 373u: goto L_0010B0BC;
    case 374u: goto L_0010B100;
    case 375u: goto L_0010B138;
    case 376u: goto L_0010B148;
    case 377u: goto L_0010B194;
    case 378u: goto L_0010B1F8;
    case 379u: goto L_0010B288;
    case 380u: goto L_0010B2C4;
    case 381u: goto L_0010B308;
    case 382u: goto L_0010B320;
    case 383u: goto L_0010B330;
    case 384u: goto L_0010B374;
    case 385u: goto L_0010B398;
    case 386u: goto L_0010B3AC;
    case 387u: goto L_0010B3BC;
    case 388u: goto L_0010B3E4;
    case 389u: goto L_0010B418;
    case 390u: goto L_0010B438;
    case 391u: goto L_0010B450;
    case 392u: goto L_0010B460;
    case 393u: goto L_0010B4A4;
    case 394u: goto L_0010B4C8;
    case 395u: goto L_0010B4D8;
    case 396u: goto L_0010B4E8;
    case 397u: goto L_0010B4F8;
    case 398u: goto L_0010B508;
    case 399u: goto L_0010B540;
    case 400u: goto L_0010B550;
    case 401u: goto L_0010B578;
    case 402u: goto L_0010B5B0;
    case 403u: goto L_0010B618;
    case 404u: goto L_0010B6A8;
    case 405u: goto L_0010B6EC;
    case 406u: goto L_0010B730;
    case 407u: goto L_0010B744;
    case 408u: goto L_0010B750;
    case 409u: goto L_0010B760;
    case 410u: goto L_0010B770;
    case 411u: goto L_0010B7A0;
    case 412u: goto L_0010B7B0;
    case 413u: goto L_0010B7DC;
    case 414u: goto L_0010B7F0;
    case 415u: goto L_0010B820;
    case 416u: goto L_0010B878;
    case 417u: goto L_0010B888;
    case 418u: goto L_0010B898;
    case 419u: goto L_0010B8B4;
    case 420u: goto L_0010B8C0;
    case 421u: goto L_0010B8E8;
    case 422u: goto L_0010B938;
    case 423u: goto L_0010B9B0;
    case 424u: goto L_0010B9D4;
    case 425u: goto L_0010BA5C;
    case 426u: goto L_0010BA90;
    case 427u: goto L_0010BAAC;
    case 428u: goto L_0010BAB8;
    case 429u: goto L_0010BAE0;
    case 430u: goto L_0010BB5C;
    case 431u: goto L_0010BB68;
    case 432u: goto L_0010BB74;
    case 433u: goto L_0010BB84;
    case 434u: goto L_0010BB90;
    case 435u: goto L_0010BBA0;
    case 436u: goto L_0010BBAC;
    case 437u: goto L_0010BBD0;
    case 438u: goto L_0010BBE0;
    case 439u: goto L_0010BBF8;
    case 440u: goto L_0010BC08;
    case 441u: goto L_0010BC20;
    case 442u: goto L_0010BC30;
    case 443u: goto L_0010BC58;
    case 444u: goto L_0010BC9C;
    case 445u: goto L_0010BCAC;
    case 446u: goto L_0010BCB4;
    case 447u: goto L_0010BCC8;
    case 448u: goto L_0010BD00;
    case 449u: goto L_0010BD2C;
    case 450u: goto L_0010BD40;
    case 451u: goto L_0010BD58;
    case 452u: goto L_0010BD88;
    case 453u: goto L_0010BDA0;
    case 454u: goto L_0010BDC4;
    case 455u: goto L_0010BDD4;
    case 456u: goto L_0010BDE8;
    case 457u: goto L_0010BDF8;
    case 458u: goto L_0010BE00;
    case 459u: goto L_0010BE10;
    case 460u: goto L_0010BE68;
    case 461u: goto L_0010BE84;
    case 462u: goto L_0010BEB8;
    case 463u: goto L_0010BED8;
    case 464u: goto L_0010BEFC;
    case 465u: goto L_0010BF40;
    case 466u: goto L_0010BF70;
    case 467u: goto L_0010BF78;
    case 468u: goto L_0010BFAC;
    case 469u: goto L_0010BFC8;
    case 470u: goto L_0010BFD0;
    default: bad_entry(c, 0x00108000u); return;
    }
L_00108000:
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010801Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010801Cu) [[unlikely]] return; }
L_0010801C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_0010803C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010802Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010802Cu) [[unlikely]] return; }
L_0010802C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108034u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108034u) [[unlikely]] return; }
L_00108034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108084; } }
L_0010803C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 1;
L_00108040:
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010804Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010804Cu) [[unlikely]] return; }
L_0010804C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00108064; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010805Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010805Cu) [[unlikely]] return; }
L_0010805C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108084; } }
L_00108064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010806Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010806Cu) [[unlikely]] return; }
L_0010806C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108074u) [[unlikely]] return; }
L_00108074:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
L_00108080:
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 1;
L_00108084:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001080A8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
L_001080C0:
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[21].w[0] + 11520u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001080E0u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x001080E0u) [[unlikely]] return; }
L_001080E0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001080ECu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x001080ECu) [[unlikely]] return; }
L_001080EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010810C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108104u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108104u) [[unlikely]] return; }
    goto L_00108104;
L_00108100:
    c.budget -= 1;
L_00108104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001082B8; } }
L_0010810C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00108120; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00108130; } }
L_00108120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108128u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108128u) [[unlikely]] return; }
L_00108128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001082B8; } }
L_00108130:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 15808u);
    st32((c.r[17].w[0] + 16u), c.r[18].w[0]);
    c.budget -= 3;
L_0010813C:
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    c.budget -= 1;
L_00108140:
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 20u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108168u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00108168u) [[unlikely]] return; }
L_00108168:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 6;
L_00108180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 11520u), c.r[18].w[0]);  if (t) { goto L_00108214; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108194u); set32(c.r[4], ld32((c.r[20].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00108194u) [[unlikely]] return; }
L_00108194:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 22016u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_001081C8; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 11520u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 22016u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 11520u), c.r[2].w[0]);  if (t) { goto L_00108204; } }
    c.budget -= 1;
L_001081C8:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_001081D0:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00108204; } }
    set32(c.r[3], c.r[7].w[0] + 22016u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001081D0u | kUnwind; return; } goto L_001081D0; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00108204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010820Cu); set32(c.r[4], ld32((c.r[20].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010820Cu) [[unlikely]] return; }
L_0010820C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 14656u);  if (t) { goto L_00108220; } }
L_00108214:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 14656u);
    c.budget -= 3;
L_00108220:
    set32(c.r[4], c.r[22].w[0] + 16320u);
    set32(c.r[7], c.r[21].w[0] + 11520u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 28u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108248u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00108248u) [[unlikely]] return; }
L_00108248:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00108268; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108258u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108258u) [[unlikely]] return; }
L_00108258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108260u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108260u) [[unlikely]] return; }
L_00108260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001082B8; } }
L_00108268:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108274u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108274u) [[unlikely]] return; }
L_00108274:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_0010828C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108284u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108284u) [[unlikely]] return; }
L_00108284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001082B8; } }
L_0010828C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001082A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010829Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010829Cu) [[unlikely]] return; }
L_0010829C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001082B8; } }
L_001082A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082ACu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001082ACu) [[unlikely]] return; }
L_001082AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001082B4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001082B4u) [[unlikely]] return; }
L_001082B4:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001082B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_001082E0:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[20].w[0] + 11520u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108320u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x00108320u) [[unlikely]] return; }
L_00108320:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010832Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010832Cu) [[unlikely]] return; }
L_0010832C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010834C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108344u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108344u) [[unlikely]] return; }
L_00108344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00108520; } }
L_0010834C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00108360; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00108370; }
L_00108360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108368u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108368u) [[unlikely]] return; }
L_00108368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00108520; } }
L_00108370:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 15808u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[17].w[0] + 16u), c.r[22].w[0]);
    st32((c.r[17].w[0] + 20u), c.r[23].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083A8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001083A8u) [[unlikely]] return; }
L_001083A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[20].w[0] + 11520u), c.r[18].w[0]);  if (t) { goto L_00108448; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001083D4u); set32(c.r[4], ld32((c.r[16].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001083D4u) [[unlikely]] return; }
L_001083D4:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 22016u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00108400; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 11520u)));
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 22016u), c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 11520u), c.r[2].w[0]);  if (t) { goto L_00108438; } }
L_00108400:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00108404:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_00108438; } }
    set32(c.r[3], c.r[7].w[0] + 22016u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108404u | kUnwind; return; } goto L_00108404; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00108438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108440u); set32(c.r[4], ld32((c.r[16].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00108440u) [[unlikely]] return; }
    goto L_00108440;
L_0010843C:
    set32(c.r[4], ld32((c.r[16].w[0] + 22156u)));
    c.budget -= 1;
L_00108440:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00108450; } }
L_00108448:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.budget -= 2;
L_00108450:
    c.r[2].d[0] = c.r[19].d[0] & c.r[21].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010846C; } }
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108468u); c.r[5].d[0] = c.r[23].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00108468u) [[unlikely]] return; }
L_00108468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010846C:
    set32(c.r[5], 0u + 164u);
    set32(c.r[4], c.r[2].w[0] + 14720u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010847Cu); set32(c.r[16], c.r[30].w[0] + 14656u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010847Cu) [[unlikely]] return; }
L_0010847C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108488u); set32(c.r[5], 0u + 32u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00108488u) [[unlikely]] return; }
L_00108488:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[20].w[0] + 11520u);
    set32(c.r[4], c.r[2].w[0] + 16320u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084B4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x001084B4u) [[unlikely]] return; }
L_001084B4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[21].d[0] | c.r[16].d[0];  if (t) { goto L_001084D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084C4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001084C4u) [[unlikely]] return; }
L_001084C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084CCu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001084CCu) [[unlikely]] return; }
L_001084CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108520; } }
L_001084D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084DCu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001084DCu) [[unlikely]] return; }
L_001084DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_001084F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001084ECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001084ECu) [[unlikely]] return; }
L_001084EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108520; } }
L_001084F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010850C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108504u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108504u) [[unlikely]] return; }
L_00108504:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108520; } }
L_0010850C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108514u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00108514u) [[unlikely]] return; }
L_00108514:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010851Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010851Cu) [[unlikely]] return; }
L_0010851C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00108520:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00108550:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[23].w[0] + 11520u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108590u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x00108590u) [[unlikely]] return; }
L_00108590:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010859Cu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010859Cu) [[unlikely]] return; }
L_0010859C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001085BC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001085B4u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001085B4u) [[unlikely]] return; }
L_001085B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001087E0; } }
L_001085BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001085D0; } }
    set32(c.r[22], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[22].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001085E0; }
L_001085D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001085D8u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001085D8u) [[unlikely]] return; }
L_001085D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001087E0; } }
L_001085E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 15808u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[18].w[0] + 44u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 20u), c.r[21].w[0]);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108618u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00108618u) [[unlikely]] return; }
L_00108618:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[18].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[22].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[23].w[0] + 11520u), c.r[20].w[0]);  if (t) { goto L_001086C4; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_0010863C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108644u); set32(c.r[4], ld32((c.r[19].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00108644u) [[unlikely]] return; }
L_00108644:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 22016u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[16].d[0] = c.r[17].d[0] & 15ull;  if (t) { goto L_00108678; } }
    set32(c.r[3], ld32((c.r[23].w[0] + 11520u)));
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 22016u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[23].w[0] + 11520u), c.r[2].w[0]);  if (t) { goto L_001086B4; } }
    c.budget -= 1;
L_00108678:
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00108680:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_001086B4; } }
    set32(c.r[3], c.r[7].w[0] + 22016u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108680u | kUnwind; return; } goto L_00108680; } }
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_001086B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001086BCu); set32(c.r[4], ld32((c.r[19].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001086BCu) [[unlikely]] return; }
L_001086BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001086CC; } }
L_001086C4:
    c.r[16].d[0] = c.r[17].d[0] & 15ull;
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_001086CC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], c.r[17].w[0] >> 4);  if (t) { goto L_001086DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_001086E8; } }
L_001086DC:
    set32(c.r[3], c.r[17].w[0] - 16u);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[16], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 3;
L_001086E8:
    c.r[3].d[0] = c.r[21].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.r[19].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[22].d[0] & c.r[19].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; if (c.r[3].d[0] != 0) c.r[16].d[0] = c.r[21].d[0];  if (t) { goto L_00108708; } }
    c.r[5].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108708u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00108708u) [[unlikely]] return; }
L_00108708:
    c.r[17].d[0] = c.r[17].d[0] | c.r[19].d[0];
    st32((c.r[18].w[0] + 24u), c.r[16].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00108740; } }
    set32(c.r[6], c.r[18].w[0] + 28u);
    c.budget -= 2;
L_00108720:
    set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108720u | kUnwind; return; } goto L_00108720; } }
L_00108740:
    set32(c.r[16], c.r[30].w[0] + 14656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[2].w[0] + 16320u);
    set32(c.r[7], c.r[23].w[0] + 11520u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 48u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108770u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00108770u) [[unlikely]] return; }
L_00108770:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00108790; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108780u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108780u) [[unlikely]] return; }
L_00108780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108788u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108788u) [[unlikely]] return; }
L_00108788:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001087E0; } }
L_00108790:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010879Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010879Cu) [[unlikely]] return; }
L_0010879C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[22].d[0] & 32768ull;  if (t) { goto L_001087B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087ACu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001087ACu) [[unlikely]] return; }
L_001087AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001087E0; } }
L_001087B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001087CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087C4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001087C4u) [[unlikely]] return; }
L_001087C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001087E0; } }
L_001087CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087D4u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001087D4u) [[unlikely]] return; }
L_001087D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001087DCu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001087DCu) [[unlikely]] return; }
L_001087DC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001087E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00108810:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[21], 0u + 1u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108850u); set32(c.r[19], c.r[22].w[0] + 11520u);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x00108850u) [[unlikely]] return; }
L_00108850:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010885Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010885Cu) [[unlikely]] return; }
L_0010885C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[20].w[0] + 11460u), c.r[18].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00108878; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108878u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00108878u) [[unlikely]] return; }
L_00108878:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010888C; } }
L_00108880:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st32((c.r[19].w[0] + 1044u), 0u);  goto L_0010889C; }
L_0010888C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108894u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108894u) [[unlikely]] return; }
L_00108894:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00108B34; } }
L_0010889C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; st32((c.r[19].w[0] + 1048u), 0u);  if (t) { goto L_00108948; } }
    c.r[2].d[0] = c.r[17].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_001088C4; } }
    c.budget -= 2;
    if (c.r[17].d[0] == c.r[21].d[0]) { c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  goto L_001088D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_00108988; } }
L_001088C4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00108964; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_00108988; } }
L_001088D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001088DCu); set32(c.r[4], ld32((c.r[16].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001088DCu) [[unlikely]] return; }
L_001088DC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[5].w[0] + 22016u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 32u);  if (t) { goto L_0010891C; } }
    set32(c.r[3], c.r[5].w[0] + 22016u);
    set32(c.r[5], 0u - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 3;
L_00108900:
    c.r[2].d[0] = c.r[4].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 4u);  if (t) { goto L_00108918; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[5].d[0]) { set32(c.r[4], c.r[4].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108900u | kUnwind; return; } goto L_00108900; }
L_00108918:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_0010891C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; set32(c.r[3], ld32((c.r[20].w[0] + 11460u)));  if (t) { goto L_00108930; } }
    set32(c.r[2], ld32((c.r[20].w[0] + 11460u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0]), 0u);  if (t) { goto L_00108938; } }
L_00108930:
    set32(c.r[2], 0u + 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 2;
L_00108938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108940u); set32(c.r[4], ld32((c.r[16].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00108940u) [[unlikely]] return; }
L_00108940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00108978; } }
L_00108948:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[3].w[0]);  if (t) { goto L_00108978; } }
L_00108964:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 14736u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[3].d[0] = ld64((c.r[2].w[0]));
    st64((c.r[18].w[0]), c.r[3].d[0]);
    c.budget -= 5;
L_00108978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108980u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108980u) [[unlikely]] return; }
L_00108980:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00108B34; } }
L_00108988:
    st32((c.r[19].w[0] + 16u), c.r[17].w[0]);
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; st32((c.r[19].w[0] + 12u), c.r[2].w[0]);  if (t) { goto L_001089A8; } }
    st32((c.r[19].w[0] + 1052u), 0u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00108A74; } }
L_001089A8:
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[4], c.r[19].w[0] + 20u);
    set32(c.r[3], 0u + 1024u);
    c.r[2].d[0] = c.r[6].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[19].w[0] + 1052u), c.r[3].w[0]);  if (t) { goto L_00108A30; } }
    set32(c.r[2], c.r[6].w[0] + 1024u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
L_001089D4:
    ldl(c.r[3], (c.r[6].w[0] + 7u));
    ldr(c.r[3], (c.r[6].w[0]));
    ldl(c.r[5], (c.r[6].w[0] + 15u));
    ldr(c.r[5], (c.r[6].w[0] + 8u));
    ldl(c.r[7], (c.r[6].w[0] + 23u));
    ldr(c.r[7], (c.r[6].w[0] + 16u));
    ldl(c.r[8], (c.r[6].w[0] + 31u));
    ldr(c.r[8], (c.r[6].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[5], (c.r[4].w[0] + 15u));
    sdr(c.r[5], (c.r[4].w[0] + 8u));
    sdl(c.r[7], (c.r[4].w[0] + 23u));
    sdr(c.r[7], (c.r[4].w[0] + 16u));
    sdl(c.r[8], (c.r[4].w[0] + 31u));
    sdr(c.r[8], (c.r[4].w[0] + 24u));
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001089D4u | kUnwind; return; } goto L_001089D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00108A78; } }
L_00108A30:
    set32(c.r[2], c.r[6].w[0] + 1024u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
L_00108A40:
    c.r[3].d[0] = ld64((c.r[6].w[0]));
    c.r[5].d[0] = ld64((c.r[6].w[0] + 8u));
    c.r[7].d[0] = ld64((c.r[6].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[6].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[3].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[5].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[6], c.r[6].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00108A40u | kUnwind; return; } goto L_00108A40; } }
L_00108A74:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00108A78:
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108A90u); set32(c.r[20], c.r[17].w[0] + 14656u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00108A90u) [[unlikely]] return; }
L_00108A90:
    set32(c.r[16], c.r[22].w[0] + 11520u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1056u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AB4u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00108AB4u) [[unlikely]] return; }
L_00108AB4:
    set32(c.r[4], c.r[21].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1056u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108ADCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00108ADCu) [[unlikely]] return; }
L_00108ADC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00108AFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AECu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108AECu) [[unlikely]] return; }
L_00108AEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108AF4u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108AF4u) [[unlikely]] return; }
L_00108AF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108B34; } }
L_00108AFC:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B08u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108B08u) [[unlikely]] return; }
L_00108B08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00108B20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B18u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108B18u) [[unlikely]] return; }
L_00108B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108B34; } }
L_00108B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B28u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00108B28u) [[unlikely]] return; }
L_00108B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108B30u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108B30u) [[unlikely]] return; }
L_00108B30:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00108B34:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00108B60:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[23].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BA8u); set32(c.r[17], c.r[22].w[0] + 11520u);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x00108BA8u) [[unlikely]] return; }
L_00108BA8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BB4u); set32(c.r[4], 0u + 26u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00108BB4u) [[unlikely]] return; }
L_00108BB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00108BCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BCCu);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00108BCCu) [[unlikely]] return; }
L_00108BCC:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] == 0ull;  if (t) { goto L_00108BE0; } }
    set32(c.r[2], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_00108BF0; } }
L_00108BE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108BE8u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108BE8u) [[unlikely]] return; }
L_00108BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00108D08; } }
L_00108BF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_00108C00; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00108C08; } }
L_00108C00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_00108D08; } }
L_00108C08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00108C18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1052u), 0u);  if (t) { goto L_00108C24; } }
L_00108C18:
    set32(c.r[4], c.r[17].w[0] + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C24u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00108C24u) [[unlikely]] return; }
L_00108C24:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[16], c.r[22].w[0] + 11520u);
    st32((c.r[17].w[0] + 1052u), c.r[19].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C50u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00108C50u) [[unlikely]] return; }
L_00108C50:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 1048u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1056u);
    st32((c.r[17].w[0] + 1044u), c.r[23].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108C7Cu); st32((c.r[17].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00108C7Cu) [[unlikely]] return; }
L_00108C7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[17], c.r[2].w[0] + 14656u);
    set32(c.r[4], c.r[4].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 26u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1056u);
    c.r[9].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CB0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00108CB0u) [[unlikely]] return; }
L_00108CB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00108CD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CC0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108CC0u) [[unlikely]] return; }
L_00108CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CC8u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108CC8u) [[unlikely]] return; }
L_00108CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108D08; } }
L_00108CD0:
    c.r[2].d[0] = c.r[17].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CDCu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108CDCu) [[unlikely]] return; }
L_00108CDC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00108CF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CECu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108CECu) [[unlikely]] return; }
L_00108CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108D08; } }
L_00108CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108CFCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00108CFCu) [[unlikely]] return; }
L_00108CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D04u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108D04u) [[unlikely]] return; }
L_00108D04:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00108D08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00108D38:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[22].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] + 11520u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D78u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00108D78u) [[unlikely]] return; }
L_00108D78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00108D94; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108D90u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00108D90u) [[unlikely]] return; }
L_00108D90:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00108D94:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00108DE4; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_00108DB8:
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_00108DF0; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108DB8u | kUnwind; return; } goto L_00108DB8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00108DF4; } }
L_00108DE4:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00108DF0:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00108DF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00108E04; } }
    st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    c.budget -= 2;
L_00108E04:
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E1Cu); set32(c.r[20], c.r[20].w[0] + 14656u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00108E1Cu) [[unlikely]] return; }
L_00108E1C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 16320u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    set32(c.r[7], c.r[23].w[0] + 11520u);
    c.budget -= 8;
L_00108E3C:
    set32(c.r[8], c.r[16].w[0] + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E58u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00108E58u) [[unlikely]] return; }
L_00108E58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00108E78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108E68u) [[unlikely]] return; }
L_00108E68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E70u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108E70u) [[unlikely]] return; }
L_00108E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108EB0; } }
L_00108E78:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E84u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00108E84u) [[unlikely]] return; }
L_00108E84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00108E9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108E94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108E94u) [[unlikely]] return; }
L_00108E94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00108EB0; } }
L_00108E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108EA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00108EA4u) [[unlikely]] return; }
L_00108EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108EACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00108EACu) [[unlikely]] return; }
L_00108EAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00108EB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00108EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108EF0u); set32(c.r[5], 0u + 6u);  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108D38u; return; } if (c.pc != 0x00108EF0u) [[unlikely]] return; }
L_00108EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00108F00:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 7u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] + 11520u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F40u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00108F40u) [[unlikely]] return; }
L_00108F40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00108F5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108F58u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00108F58u) [[unlikely]] return; }
L_00108F58:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00108F5C:
    c.r[16].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00108FAC; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 5;
L_00108F80:
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_00108FB8; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00108F80u | kUnwind; return; } goto L_00108F80; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00108FBC; } }
L_00108FAC:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00108FB8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00108FBC:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 12u), c.r[22].w[0]);  goto L_00108FD0; }
    st8((c.r[18].w[0] + 1039u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 3;
L_00108FD0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[20], c.r[20].w[0] + 14656u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00108FECu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00108FECu) [[unlikely]] return; }
L_00108FEC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 16320u);
    set32(c.r[7], c.r[23].w[0] + 11520u);
    set32(c.r[8], c.r[16].w[0] + 17u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109028u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109028u) [[unlikely]] return; }
L_00109028:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00109048; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109038u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109038u) [[unlikely]] return; }
L_00109038:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109040u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109040u) [[unlikely]] return; }
L_00109040:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109080; } }
L_00109048:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109054u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109054u) [[unlikely]] return; }
L_00109054:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010906C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109064u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109064u) [[unlikely]] return; }
L_00109064:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109080; } }
L_0010906C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109074u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109074u) [[unlikely]] return; }
L_00109074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010907Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010907Cu) [[unlikely]] return; }
L_0010907C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00109080:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001090B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001090C0u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108D38u; return; } if (c.pc != 0x001090C0u) [[unlikely]] return; }
L_001090C0:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001090D0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[22].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 14u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[19], c.r[23].w[0] + 11520u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109118u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00109118u) [[unlikely]] return; }
L_00109118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_00109134; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109130u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109130u) [[unlikely]] return; }
L_00109130:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00109134:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010917C; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_00109150:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_00109180; } }
    set32(c.r[4], c.r[19].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00109150u | kUnwind; return; } goto L_00109150; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00109184; } }
L_0010917C:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_00109180:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00109184:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[19].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0010918C; }
L_0010918C:
    c.budget -= 2;
    if (c.r[18].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_0010919C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[19].w[0] + 1036u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001091E8; } }
L_0010919C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001091DC; } }
    set32(c.r[6], c.r[19].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_001091B8:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[5].w[0]);  if (t) { goto L_001091DC; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001091B8u | kUnwind; return; } goto L_001091B8; }
L_001091DC:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[19].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_001091E8; }
L_001091E8:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_00109200; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001091F8u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001091F8u) [[unlikely]] return; }
L_001091F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_00109310; } }
L_00109200:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00109240; } }
    set32(c.r[6], c.r[19].w[0] + 2060u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
L_00109218:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109218u | kUnwind; return; } goto L_00109218; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[19].w[0] + 3084u), c.r[17].w[0]);  if (t) { goto L_00109250; } }
L_00109240:
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 3084u), c.r[17].w[0]);
    c.budget -= 4;
L_00109250:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[16], c.r[23].w[0] + 11520u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109270u); set32(c.r[20], c.r[20].w[0] + 14656u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00109270u) [[unlikely]] return; }
L_00109270:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[18].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3088u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109290u); st32((c.r[19].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00109290u) [[unlikely]] return; }
L_00109290:
    set32(c.r[4], c.r[21].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 14u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3088u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092B8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x001092B8u) [[unlikely]] return; }
L_001092B8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_001092D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001092C8u) [[unlikely]] return; }
L_001092C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092D0u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001092D0u) [[unlikely]] return; }
L_001092D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109310; } }
L_001092D8:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092E4u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001092E4u) [[unlikely]] return; }
L_001092E4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001092FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001092F4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001092F4u) [[unlikely]] return; }
L_001092F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109310; } }
L_001092FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109304u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109304u) [[unlikely]] return; }
L_00109304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010930Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010930Cu) [[unlikely]] return; }
L_0010930C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00109310:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00109340:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 15u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010936Cu); set32(c.r[16], c.r[19].w[0] + 11520u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010936Cu) [[unlikely]] return; }
L_0010936C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { st32((c.r[16].w[0] + 12u), c.r[17].w[0]);  goto L_00109388; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109384u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109384u) [[unlikely]] return; }
L_00109384:
    st32((c.r[16].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 1;
L_00109388:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093A0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001093A0u) [[unlikely]] return; }
L_001093A0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 11520u), c.r[17].w[0]);
    set32(c.r[18], c.r[2].w[0] + 14656u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 15u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 16u);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093ECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x001093ECu) [[unlikely]] return; }
L_001093EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010940C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001093FCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001093FCu) [[unlikely]] return; }
L_001093FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109404u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109404u) [[unlikely]] return; }
L_00109404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00109444; } }
L_0010940C:
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109418u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109418u) [[unlikely]] return; }
L_00109418:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00109430; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109428u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109428u) [[unlikely]] return; }
L_00109428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00109444; } }
L_00109430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109438u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109438u) [[unlikely]] return; }
L_00109438:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109440u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109440u) [[unlikely]] return; }
    goto L_00109440;
L_0010943C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00109440:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00109444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00109460:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109470u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108D38u; return; } if (c.pc != 0x00109470u) [[unlikely]] return; }
L_00109470:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109480:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[4], 0u + 9u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094A0u); st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x001094A0u) [[unlikely]] return; }
L_001094A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001094B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094B8u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x001094B8u) [[unlikely]] return; }
L_001094B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094C0u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001094C0u) [[unlikely]] return; }
L_001094C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094C8u);  if (depth < kMaxDepth) unit_0001(c, 394u, depth + 1u); else { c.pc = 0x00107408u; return; } if (c.pc != 0x001094C8u) [[unlikely]] return; }
L_001094C8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[18].d[0] != 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001094DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 19u);  if (t) { goto L_00109530; } }
L_001094DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094E4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108D38u; return; } if (c.pc != 0x001094E4u) [[unlikely]] return; }
L_001094E4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00109504; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001094F8u); set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001094F8u) [[unlikely]] return; }
L_001094F8:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));  if (t) { goto L_00109524; } }
L_00109504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010950Cu); set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010950Cu) [[unlikely]] return; }
L_0010950C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    set32(c.r[3], c.r[3].w[0] + 15808u);
    set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));
    set32(c.r[3], c.r[18].w[0] - c.r[3].w[0]);
    set32(c.r[17], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 4));
    c.budget -= 6;
L_00109524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010952Cu);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010952Cu) [[unlikely]] return; }
L_0010952C:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00109530:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00109548:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] + 11520u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109570u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x00109570u) [[unlikely]] return; }
L_00109570:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010957Cu); set32(c.r[4], 0u + 10u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010957Cu) [[unlikely]] return; }
L_0010957C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010959C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109594u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109594u) [[unlikely]] return; }
L_00109594:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00109690; } }
L_0010959C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001095B0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_001095C0; }
L_001095B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001095B8u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001095B8u) [[unlikely]] return; }
L_001095B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_00109690; } }
L_001095C0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001095DCu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001095DCu) [[unlikely]] return; }
L_001095DC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[20].w[0] + 11520u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] + 14656u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16320u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 10u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 20u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109628u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109628u) [[unlikely]] return; }
L_00109628:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { st32((c.r[16].w[0] + 4u), 0u);  goto L_00109648; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109638u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109638u) [[unlikely]] return; }
L_00109638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109640u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109640u) [[unlikely]] return; }
    goto L_00109640;
L_0010963C:
    c.budget -= 1;
L_00109640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109690; } }
L_00109648:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109658u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109658u) [[unlikely]] return; }
L_00109658:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00109670; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109668u) [[unlikely]] return; }
L_00109668:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109690; } }
L_00109670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109678u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109678u) [[unlikely]] return; }
L_00109678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109680u) [[unlikely]] return; }
L_00109680:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 4;
L_00109690:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001096B0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096D8u); set32(c.r[18], c.r[19].w[0] + 11520u);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x001096D8u) [[unlikely]] return; }
L_001096D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096E4u); set32(c.r[4], 0u + 11u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x001096E4u) [[unlikely]] return; }
L_001096E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00109704; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001096FCu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001096FCu) [[unlikely]] return; }
L_001096FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001097EC; } }
L_00109704:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00109718; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_00109728; }
L_00109718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109720u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109720u) [[unlikely]] return; }
L_00109720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_001097EC; } }
L_00109728:
    set32(c.r[3], 0u + 1u);
    st32((c.r[18].w[0] + 16u), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[18].w[0] + 12u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[3].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109748u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00109748u) [[unlikely]] return; }
L_00109748:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[19].w[0] + 11520u), c.r[17].w[0]);
    set32(c.r[16], c.r[2].w[0] + 14656u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16320u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 11u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109794u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109794u) [[unlikely]] return; }
L_00109794:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_001097B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097A4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001097A4u) [[unlikely]] return; }
L_001097A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097ACu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001097ACu) [[unlikely]] return; }
L_001097AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001097EC; } }
L_001097B4:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097C0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001097C0u) [[unlikely]] return; }
L_001097C0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_001097D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001097D0u) [[unlikely]] return; }
L_001097D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_001097EC; } }
L_001097D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097E0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001097E0u) [[unlikely]] return; }
L_001097E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001097E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x001097E8u) [[unlikely]] return; }
L_001097E8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_001097EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00109808:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 12u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[23].w[0] + 11520u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 13;
L_0010983C:
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 1;
L_00109840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109848u); st64((c.r[29].w[0] + 64u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00109848u) [[unlikely]] return; }
L_00109848:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00109864; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109860u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109860u) [[unlikely]] return; }
L_00109860:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00109864:
    c.r[16].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 16u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001098A8; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00109880:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);  if (t) { goto L_001098B4; } }
    set32(c.r[4], c.r[18].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109880u | kUnwind; return; } goto L_00109880; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_001098B8; } }
L_001098A8:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_001098B4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_001098B8:
    c.budget -= 2;
    if (c.r[16].d[0] != c.r[2].d[0]) { st32((c.r[18].w[0] + 12u), c.r[22].w[0]);  goto L_001098CC; }
    st8((c.r[18].w[0] + 1039u), static_cast<std::uint8_t>(0u));
    set32(c.r[16], 0u + 1023u);
    st32((c.r[18].w[0] + 12u), c.r[22].w[0]);
    c.budget -= 3;
L_001098CC:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[20], c.r[20].w[0] + 14656u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001098E8u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001098E8u) [[unlikely]] return; }
L_001098E8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 16320u);
    set32(c.r[7], c.r[23].w[0] + 11520u);
    set32(c.r[8], c.r[16].w[0] + 17u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 12u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109924u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109924u) [[unlikely]] return; }
L_00109924:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00109944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109934u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109934u) [[unlikely]] return; }
L_00109934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010993Cu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010993Cu) [[unlikely]] return; }
L_0010993C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010997C; } }
L_00109944:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109950u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109950u) [[unlikely]] return; }
L_00109950:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00109968; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109960u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109960u) [[unlikely]] return; }
L_00109960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010997C; } }
L_00109968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109970u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109970u) [[unlikely]] return; }
L_00109970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109978u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109978u) [[unlikely]] return; }
L_00109978:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0010997C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_001099A8:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    set32(c.r[4], 0u + 13u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[19], c.r[30].w[0] + 11520u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001099F0u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x001099F0u) [[unlikely]] return; }
L_001099F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[18].w[0]));  goto L_00109A0C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109A08u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109A08u) [[unlikely]] return; }
L_00109A08:
    c.r[2].d[0] = ld8((c.r[18].w[0]));
    c.budget -= 1;
L_00109A0C:
    c.r[17].d[0] = 0ull + 0ull;
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[19].w[0] + 80u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00109A50; } }
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00109A28:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);  if (t) { goto L_00109A5C; } }
    set32(c.r[4], c.r[19].w[0] + c.r[17].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[4].w[0] + 80u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00109A28u | kUnwind; return; } goto L_00109A28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00109A60; } }
L_00109A50:
    set32(c.r[20], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00109A5C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00109A60:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_00109A70; } }
    st8((c.r[19].w[0] + 1103u), static_cast<std::uint8_t>(0u));
    set32(c.r[17], 0u + 1023u);
    c.budget -= 2;
L_00109A70:
    ldl(c.r[3], (c.r[16].w[0] + 7u));
    ldr(c.r[3], (c.r[16].w[0]));
    ldl(c.r[4], (c.r[16].w[0] + 15u));
    ldr(c.r[4], (c.r[16].w[0] + 8u));
    ldl(c.r[5], (c.r[16].w[0] + 23u));
    ldr(c.r[5], (c.r[16].w[0] + 16u));
    ldl(c.r[6], (c.r[16].w[0] + 31u));
    ldr(c.r[6], (c.r[16].w[0] + 24u));
    sdl(c.r[3], (c.r[19].w[0] + 23u));
    sdr(c.r[3], (c.r[19].w[0] + 16u));
    sdl(c.r[4], (c.r[19].w[0] + 31u));
    sdr(c.r[4], (c.r[19].w[0] + 24u));
    sdl(c.r[5], (c.r[19].w[0] + 39u));
    sdr(c.r[5], (c.r[19].w[0] + 32u));
    sdl(c.r[6], (c.r[19].w[0] + 47u));
    sdr(c.r[6], (c.r[19].w[0] + 40u));
    ldl(c.r[3], (c.r[16].w[0] + 39u));
    ldr(c.r[3], (c.r[16].w[0] + 32u));
    ldl(c.r[4], (c.r[16].w[0] + 47u));
    ldr(c.r[4], (c.r[16].w[0] + 40u));
    ldl(c.r[5], (c.r[16].w[0] + 55u));
    ldr(c.r[5], (c.r[16].w[0] + 48u));
    ldl(c.r[6], (c.r[16].w[0] + 63u));
    ldr(c.r[6], (c.r[16].w[0] + 56u));
    sdl(c.r[3], (c.r[19].w[0] + 55u));
    sdr(c.r[3], (c.r[19].w[0] + 48u));
    sdl(c.r[4], (c.r[19].w[0] + 63u));
    sdr(c.r[4], (c.r[19].w[0] + 56u));
    sdl(c.r[5], (c.r[19].w[0] + 71u));
    sdr(c.r[5], (c.r[19].w[0] + 64u));
    sdl(c.r[6], (c.r[19].w[0] + 79u));
    sdr(c.r[6], (c.r[19].w[0] + 72u));
    set32(c.r[2], 0u + 1u);
    st32((c.r[19].w[0] + 12u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[30].w[0] + 11520u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[21], c.r[21].w[0] + 14656u);
    c.budget -= 41;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B14u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00109B14u) [[unlikely]] return; }
L_00109B14:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[19].w[0] + 4u), c.r[20].w[0]);
    st32((c.r[19].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1104u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B34u); st32((c.r[19].w[0]), c.r[18].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00109B34u) [[unlikely]] return; }
L_00109B34:
    set32(c.r[4], c.r[22].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], c.r[17].w[0] + 81u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 13u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[9].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B5Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109B5Cu) [[unlikely]] return; }
L_00109B5C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00109B7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109B6Cu) [[unlikely]] return; }
L_00109B6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B74u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109B74u) [[unlikely]] return; }
L_00109B74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109BB4; } }
L_00109B7C:
    c.r[2].d[0] = c.r[21].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B88u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109B88u) [[unlikely]] return; }
L_00109B88:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00109BA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109B98u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109B98u) [[unlikely]] return; }
L_00109B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109BB4; } }
L_00109BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BA8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109BA8u) [[unlikely]] return; }
L_00109BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109BB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109BB0u) [[unlikely]] return; }
L_00109BB0:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00109BB4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_00109BE8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] + 11520u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109C24u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00109C24u) [[unlikely]] return; }
L_00109C24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00109C40; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109C3Cu);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109C3Cu) [[unlikely]] return; }
L_00109C3C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00109C40:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00109C8C; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00109C60:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00109C98; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00109C60u | kUnwind; return; } goto L_00109C60; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00109C9C; } }
L_00109C8C:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00109C98:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00109C9C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_00109CA4; }
L_00109CA4:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00109CE4; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_00109CC0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_00109CE4; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00109CC0u | kUnwind; return; } goto L_00109CC0; }
L_00109CE4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_00109CF0; }
L_00109CF0:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D0Cu); set32(c.r[16], c.r[22].w[0] + 11520u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00109D0Cu) [[unlikely]] return; }
L_00109D0C:
    set32(c.r[20], c.r[20].w[0] + 14656u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2060u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D30u); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00109D30u) [[unlikely]] return; }
L_00109D30:
    set32(c.r[4], c.r[21].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 17u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D58u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109D58u) [[unlikely]] return; }
L_00109D58:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00109D78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D68u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109D68u) [[unlikely]] return; }
L_00109D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D70u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109D70u) [[unlikely]] return; }
L_00109D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109DB0; } }
L_00109D78:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D84u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109D84u) [[unlikely]] return; }
L_00109D84:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00109D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109D94u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109D94u) [[unlikely]] return; }
L_00109D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109DB0; } }
L_00109D9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DA4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109DA4u) [[unlikely]] return; }
L_00109DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DACu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109DACu) [[unlikely]] return; }
L_00109DAC:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00109DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00109DD8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109DE8u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108D38u; return; } if (c.pc != 0x00109DE8u) [[unlikely]] return; }
L_00109DE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00109DF8:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[4], 0u + 19u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    set32(c.r[16], c.r[22].w[0] + 11520u);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E34u); st64((c.r[29].w[0] + 96u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00109E34u) [[unlikely]] return; }
L_00109E34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 2;
L_00109E3C:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_00109E50; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109E4Cu);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109E4Cu) [[unlikely]] return; }
L_00109E4C:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_00109E50:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00109E9C; } }
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_00109E70:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_00109EA8; } }
    set32(c.r[4], c.r[16].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00109E70u | kUnwind; return; } goto L_00109E70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00109EAC; } }
L_00109E9C:
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00109EA8:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00109EAC:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[16].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_00109EB4; }
L_00109EB4:
    st32((c.r[16].w[0] + 16u), c.r[21].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[19], c.r[19].w[0] + 14656u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109ED4u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00109ED4u) [[unlikely]] return; }
L_00109ED4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[16].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0]), c.r[17].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[20].w[0] + 16320u);
    set32(c.r[7], c.r[22].w[0] + 11520u);
    set32(c.r[5], 0u + 19u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1044u);
    c.r[9].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F10u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00109F10u) [[unlikely]] return; }
L_00109F10:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00109F30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F20u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109F20u) [[unlikely]] return; }
L_00109F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F28u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109F28u) [[unlikely]] return; }
L_00109F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109F68; } }
L_00109F30:
    c.r[2].d[0] = c.r[19].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F3Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00109F3Cu) [[unlikely]] return; }
L_00109F3C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_00109F54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109F4Cu) [[unlikely]] return; }
L_00109F4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00109F68; } }
L_00109F54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F5Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00109F5Cu) [[unlikely]] return; }
L_00109F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109F64u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00109F64u) [[unlikely]] return; }
L_00109F64:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_00109F68:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00109F90:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 20u);
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[30].w[0] + 11520u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109FE0u); st64((c.r[29].w[0] + 128u), c.r[20].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00109FE0u) [[unlikely]] return; }
L_00109FE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_00109FFC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00109FF8u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00109FF8u) [[unlikely]] return; }
L_00109FF8:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00109FFC:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010A044; } }
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0010A018:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0010A048; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A018u | kUnwind; return; } goto L_0010A018; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0010A04C; } }
    goto L_0010A044;
L_0010A040:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0010A044:
    c.r[7].d[0] = c.r[17].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_0010A048:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0010A04C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0010A054; }
L_0010A054:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010A094; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0010A070:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[5].w[0]);  if (t) { goto L_0010A094; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A070u | kUnwind; return; } goto L_0010A070; }
L_0010A094:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_0010A0A0; }
L_0010A0A0:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != 0ull;  if (t) { goto L_0010A0B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A0B0u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A0B0u) [[unlikely]] return; }
L_0010A0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 7u);  if (t) { goto L_0010A1CC; } }
L_0010A0B8:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010A0F8; } }
    set32(c.r[6], c.r[18].w[0] + 2060u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
L_0010A0D0:
    set32(c.r[2], c.r[22].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A0D0u | kUnwind; return; } goto L_0010A0D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);  if (t) { goto L_0010A108; } }
L_0010A0F8:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 3088u), c.r[17].w[0]);
    c.budget -= 4;
L_0010A108:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 3084u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[16], c.r[30].w[0] + 11520u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[20], c.r[20].w[0] + 14656u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A12Cu); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010A12Cu) [[unlikely]] return; }
L_0010A12C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 3092u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A14Cu); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010A14Cu) [[unlikely]] return; }
L_0010A14C:
    set32(c.r[4], c.r[21].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 20u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 3092u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A174u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010A174u) [[unlikely]] return; }
L_0010A174:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010A194; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A184u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A184u) [[unlikely]] return; }
L_0010A184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A18Cu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A18Cu) [[unlikely]] return; }
L_0010A18C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A1CC; } }
L_0010A194:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1A0u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A1A0u) [[unlikely]] return; }
L_0010A1A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010A1B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1B0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A1B0u) [[unlikely]] return; }
L_0010A1B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A1CC; } }
L_0010A1B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1C0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010A1C0u) [[unlikely]] return; }
L_0010A1C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A1C8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A1C8u) [[unlikely]] return; }
L_0010A1C8:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0010A1CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0010A200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A210u); set32(c.r[5], 0u + 21u);  if (depth < kMaxDepth) unit_0002(c, 112u, depth + 1u); else { c.pc = 0x00108D38u; return; } if (c.pc != 0x0010A210u) [[unlikely]] return; }
L_0010A210:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010A220:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[17], c.r[21].w[0] + 11520u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A258u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x0010A258u) [[unlikely]] return; }
L_0010A258:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A264u); set32(c.r[4], 0u + 22u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010A264u) [[unlikely]] return; }
L_0010A264:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A284; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A27Cu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A27Cu) [[unlikely]] return; }
L_0010A27C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010A430; } }
L_0010A284:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0010A298; } }
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010A2A8; } }
L_0010A298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2A0u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A2A0u) [[unlikely]] return; }
L_0010A2A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { goto L_0010A430; } }
L_0010A2A8:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] + 15808u);
    st64((c.r[17].w[0] + 16u), c.r[18].d[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[17].w[0] + 24u), c.r[20].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A2E0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010A2E0u) [[unlikely]] return; }
L_0010A2E0:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], c.r[29].w[0] + 48u);
    st32((c.r[17].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[19].d[0] & 32768ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[21].w[0] + 11520u), c.r[18].w[0]);  if (t) { goto L_0010A38C; } }
    c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A30Cu); set32(c.r[4], ld32((c.r[20].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010A30Cu) [[unlikely]] return; }
L_0010A30C:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 22016u)));
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010A340; } }
    set32(c.r[3], ld32((c.r[21].w[0] + 11520u)));
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u - c.r[3].w[0]);
    st32((c.r[7].w[0] + 22016u), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 11520u), c.r[2].w[0]);  if (t) { goto L_0010A37C; } }
    c.budget -= 1;
L_0010A340:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_0010A348:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] << 2);  if (t) { goto L_0010A37C; } }
    set32(c.r[3], c.r[7].w[0] + 22016u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A348u | kUnwind; return; } goto L_0010A348; } }
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], 0u - c.r[2].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_0010A37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A384u); set32(c.r[4], ld32((c.r[20].w[0] + 22156u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010A384u) [[unlikely]] return; }
L_0010A384:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 14656u);  if (t) { goto L_0010A398; } }
L_0010A38C:
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[16].w[0] + 14656u);
    c.budget -= 3;
L_0010A398:
    set32(c.r[4], c.r[22].w[0] + 16320u);
    set32(c.r[7], c.r[21].w[0] + 11520u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 22u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3C0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010A3C0u) [[unlikely]] return; }
L_0010A3C0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010A3E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3D0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A3D0u) [[unlikely]] return; }
L_0010A3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3D8u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A3D8u) [[unlikely]] return; }
L_0010A3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A430; } }
L_0010A3E0:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3ECu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A3ECu) [[unlikely]] return; }
L_0010A3EC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] & 32768ull;  if (t) { goto L_0010A404; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A3FCu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A3FCu) [[unlikely]] return; }
L_0010A3FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A430; } }
L_0010A404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0010A41C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A414u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A414u) [[unlikely]] return; }
L_0010A414:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010A430; } }
L_0010A41C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A424u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010A424u) [[unlikely]] return; }
L_0010A424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A42Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A42Cu) [[unlikely]] return; }
L_0010A42C:
    c.r[2].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0010A430:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.budget -= 3;
L_0010A43C:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0010A458:
    set32(c.r[29], c.r[29].w[0] - 224u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[30].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.r[22].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    set32(c.r[4], 0u + 23u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A4A4u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010A4A4u) [[unlikely]] return; }
L_0010A4A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[2].w[0] + 11520u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0010A4C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A4C4u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x0010A4C4u) [[unlikely]] return; }
L_0010A4C4:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0010A4C8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010A50C; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0010A4E0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0010A510; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A4E0u | kUnwind; return; } goto L_0010A4E0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0010A514; } }
L_0010A50C:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 1;
L_0010A510:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0010A514:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0010A51C; }
L_0010A51C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; c.r[2].d[0] = c.r[22].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;  if (t) { goto L_0010A52C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0010A534; } }
L_0010A52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 22u);  if (t) { goto L_0010A658; } }
L_0010A534:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_0010A578; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
L_0010A550:
    set32(c.r[2], c.r[20].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A550u | kUnwind; return; } goto L_0010A550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 2064u), c.r[16].w[0]);  if (t) { goto L_0010A588; } }
L_0010A578:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 2064u), c.r[16].w[0]);
    c.budget -= 4;
L_0010A588:
    set32(c.r[2], 0u + 1u);
    st32((c.r[18].w[0] + 2060u), c.r[23].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[20], c.r[17].w[0] + 14656u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[29].w[0] + 24u), 0u);
    set32(c.r[16], c.r[2].w[0] + 11520u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A5B0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010A5B0u) [[unlikely]] return; }
L_0010A5B0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 2072u), c.r[22].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[5], 0u + 2076u);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    st32((c.r[18].w[0] + 2068u), c.r[30].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A5D8u); st32((c.r[18].w[0]), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010A5D8u) [[unlikely]] return; }
L_0010A5D8:
    set32(c.r[4], c.r[21].w[0] + 16320u);
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 23u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2076u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A600u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010A600u) [[unlikely]] return; }
L_0010A600:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010A620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A610u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A610u) [[unlikely]] return; }
L_0010A610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A618u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A618u) [[unlikely]] return; }
L_0010A618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A658; } }
L_0010A620:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A62Cu); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A62Cu) [[unlikely]] return; }
L_0010A62C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010A644; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A63Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A63Cu) [[unlikely]] return; }
L_0010A63C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A658; } }
L_0010A644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A64Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010A64Cu) [[unlikely]] return; }
L_0010A64C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A654u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A654u) [[unlikely]] return; }
L_0010A654:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0010A658:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 224u);  c.pc = t; return; }
L_0010A688:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    set32(c.r[18], c.r[22].w[0] + 11520u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6C4u); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010A6C4u) [[unlikely]] return; }
L_0010A6C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[3].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[16].w[0]));  goto L_0010A6E0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A6DCu);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x0010A6DCu) [[unlikely]] return; }
L_0010A6DC:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0010A6E0:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010A72C; } }
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 4;
L_0010A700:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_0010A738; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A700u | kUnwind; return; } goto L_0010A700; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0010A73C; } }
L_0010A72C:
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0010A738:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0010A73C:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1035u), static_cast<std::uint8_t>(0u));  goto L_0010A744; }
L_0010A744:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 1036u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010A784; } }
    set32(c.r[6], c.r[18].w[0] + 1036u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 2;
L_0010A760:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0010A784; } }
    set32(c.r[4], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A760u | kUnwind; return; } goto L_0010A760; }
L_0010A784:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 2059u), static_cast<std::uint8_t>(0u));  goto L_0010A790; }
L_0010A790:
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 36u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7ACu); set32(c.r[16], c.r[20].w[0] + 14656u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010A7ACu) [[unlikely]] return; }
L_0010A7AC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[21].w[0] + 16320u);
    set32(c.r[7], c.r[22].w[0] + 11520u);
    set32(c.r[5], 0u + 24u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7E8u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010A7E8u) [[unlikely]] return; }
L_0010A7E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010A808; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A7F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A7F8u) [[unlikely]] return; }
L_0010A7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A800u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A800u) [[unlikely]] return; }
L_0010A800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A840; } }
L_0010A808:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A814u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A814u) [[unlikely]] return; }
L_0010A814:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010A82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A824u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A824u) [[unlikely]] return; }
L_0010A824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010A840; } }
L_0010A82C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A834u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010A834u) [[unlikely]] return; }
L_0010A834:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A83Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A83Cu) [[unlikely]] return; }
L_0010A83C:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0010A840:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_0010A868:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    set32(c.r[4], 0u + 17u);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[23].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[18], c.r[23].w[0] + 11520u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8ACu); st64((c.r[29].w[0] + 112u), c.r[19].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x0010A8ACu) [[unlikely]] return; }
L_0010A8AC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { c.r[2].d[0] = ld8((c.r[17].w[0]));  goto L_0010A8C8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A8C4u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x0010A8C4u) [[unlikely]] return; }
L_0010A8C4:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 1;
L_0010A8C8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; st8((c.r[18].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010A91C; } }
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_0010A8F0:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] + c.r[5].w[0]);  if (t) { goto L_0010A92C; } }
    set32(c.r[4], c.r[18].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010A8F0u | kUnwind; return; } goto L_0010A8F0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_0010A930; } }
L_0010A91C:
    c.r[6].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(1024ll) ? 1ull : 0ull;
    set32(c.r[19], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
L_0010A92C:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_0010A930:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[18].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_0010A938; }
L_0010A938:
    set32(c.r[2], 0u + 1023u);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    if (c.r[6].d[0] == 0) c.r[16].d[0] = c.r[2].d[0];
    st32((c.r[18].w[0] + 16u), c.r[21].w[0]);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A954u); st32((c.r[18].w[0] + 12u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010A954u) [[unlikely]] return; }
L_0010A954:
    set32(c.r[16], c.r[20].w[0] + 14656u);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 24u), 0u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A970u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010A970u) [[unlikely]] return; }
L_0010A970:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[18].w[0] + 4u), c.r[19].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0]), c.r[17].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] + 16320u);
    set32(c.r[7], c.r[23].w[0] + 11520u);
    set32(c.r[5], 0u + 25u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 2060u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9ACu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010A9ACu) [[unlikely]] return; }
L_0010A9AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_0010A9CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9BCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A9BCu) [[unlikely]] return; }
L_0010A9BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9C4u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A9C4u) [[unlikely]] return; }
L_0010A9C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010AA04; } }
L_0010A9CC:
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9D8u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x0010A9D8u) [[unlikely]] return; }
L_0010A9D8:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0010A9F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9E8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010A9E8u) [[unlikely]] return; }
L_0010A9E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_0010AA04; } }
L_0010A9F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010A9F8u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010A9F8u) [[unlikely]] return; }
L_0010A9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA00u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x0010AA00u) [[unlikely]] return; }
L_0010AA00:
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 1;
L_0010AA04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_0010AA30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0010AA6C; } }
L_0010AA48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010AA50:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AA50u | kUnwind; return; } goto L_0010AA50; } }
L_0010AA6C:
    set32(c.r[16], c.r[17].w[0] + 16512u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 3ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AA84u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010AA84u) [[unlikely]] return; }
L_0010AA84:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0010AA94; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010AAA4; } }
L_0010AA94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AA48u | kUnwind; return; } goto L_0010AA48; } }
    st32((c.r[2].w[0] + 22168u), 0u);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0010AAA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010AAB8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22168u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] < 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0010AB14; } }
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[7].w[0] + 16640u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 16512u);
    set32(c.r[7], c.r[7].w[0] + 16640u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] + 16576u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB0Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010AB0Cu) [[unlikely]] return; }
L_0010AB0C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] + 16576u)));  if (t) { goto L_0010AB18; } }
L_0010AB14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010AB18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010AB28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22168u)));
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] < 0; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010AB98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] + 16640u);
    st32((c.r[2].w[0] + 16640u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[7].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[3].w[0] + 8u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16512u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[5], 0u + 4u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 12u);
    set32(c.r[9], c.r[16].w[0] + 16576u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AB8Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010AB8Cu) [[unlikely]] return; }
L_0010AB8C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] + 16576u)));  if (t) { goto L_0010AB98; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010AB98:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010ABA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22168u)));
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0010ABCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010AC10; } }
L_0010ABCC:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[7].w[0] + 16640u), c.r[5].w[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 16512u);
    set32(c.r[7], c.r[7].w[0] + 16640u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    set32(c.r[9], c.r[16].w[0] + 16576u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC04u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010AC04u) [[unlikely]] return; }
L_0010AC04:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] + 16576u)));  if (t) { goto L_0010AC10; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0010AC10:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010AC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AC30u);  if (depth < kMaxDepth) unit_0002(c, 348u, depth + 1u); else { c.pc = 0x0010ABA8u; return; } if (c.pc != 0x0010AC30u) [[unlikely]] return; }
L_0010AC30:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010AC3C:
    c.budget -= 1;
L_0010AC40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22168u)));
    c.r[6].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0010AC64; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010AD20; } }
L_0010AC64:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[7].w[0] + 16704u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] << 24);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[8].d[0] = 0ull + 0ull;  if (t) { goto L_0010ACC0; } }
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 4;
L_0010AC90:
    c.r[2].d[0] = c.r[8].sd[0] < 252ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[6].w[0] + c.r[8].w[0]);  if (t) { goto L_0010ACC8; } }
    set32(c.r[3], c.r[7].w[0] + 16704u);
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[8].w[0]);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[4].w[0] << 24);
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AC90u | kUnwind; return; } goto L_0010AC90; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 252u);  if (t) { goto L_0010ACCC; } }
L_0010ACC0:
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_0010ACC8:
    set32(c.r[2], 0u + 252u);
    c.budget -= 1;
L_0010ACCC:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[2].d[0]) { st32((c.r[7].w[0] + 16704u), c.r[5].w[0]);  goto L_0010ACE4; }
    set32(c.r[2], c.r[7].w[0] + 16704u);
    set32(c.r[8], 0u + 251u);
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    st32((c.r[7].w[0] + 16704u), c.r[5].w[0]);
    c.budget -= 4;
L_0010ACE4:
    set32(c.r[2], c.r[7].w[0] + 16704u);
    set32(c.r[4], c.r[9].w[0] + 16512u);
    st8((c.r[2].w[0] + 255u), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[8], c.r[8].w[0] + 5u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[16].w[0] + 16576u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD14u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010AD14u) [[unlikely]] return; }
L_0010AD14:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[16].w[0] + 16576u)));  if (t) { goto L_0010AD20; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0010AD20:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010AD30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[18].w[0] + 22176u)));
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0; st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (t) { goto L_0010AE14; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[17].w[0] + 17472u);
    c.budget -= 2;
L_0010AD58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 6ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AD6Cu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010AD6Cu) [[unlikely]] return; }
L_0010AD6C:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 36u)));  goto L_0010AD7C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0010AE18; } }
L_0010AD7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010ADE4; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[18].w[0] + 22176u), 0u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 255u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    set32(c.r[9], c.r[17].w[0] + 16960u);
    set32(c.r[10], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010ADB0u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010ADB0u) [[unlikely]] return; }
L_0010ADB0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010ADC4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010AE18; } }
L_0010ADC4:
    set32(c.r[7], c.r[17].w[0] + 16960u);
    set32(c.r[6], c.r[3].w[0] + 17512u);
    lwl(c.r[4], (c.r[7].w[0] + 3u));
    lwr(c.r[4], (c.r[7].w[0]));
    swl(c.r[4], (c.r[6].w[0] + 3u));
    swr(c.r[4], (c.r[6].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010AE18; } }
L_0010ADE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_0010ADF0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010ADF0u | kUnwind; return; } goto L_0010ADF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[17].w[0] + 17472u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AD58u | kUnwind; return; } goto L_0010AD58; } }
L_0010AE14:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010AE18:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010AE30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] + 20012u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] + 17512u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE6Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x0010AE6Cu) [[unlikely]] return; }
L_0010AE6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010AE9C; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 22180u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE84u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x0010AE84u) [[unlikely]] return; }
L_0010AE84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 22180u)));  if (t) { goto L_0010AE9C; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AE98u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x0010AE98u) [[unlikely]] return; }
L_0010AE98:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_0010AE9C:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010AEC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[4], c.r[4].w[0] + 17512u);
    st32((c.r[2].w[0] + 22176u), c.r[3].w[0]);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AEE8u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0010AEE8u) [[unlikely]] return; }
L_0010AEE8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010AEF8:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF30u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010AF30u) [[unlikely]] return; }
L_0010AF30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B0D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010AF40u);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010AF40u) [[unlikely]] return; }
L_0010AF40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010AF54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B0D8; } }
L_0010AF54:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] + 16960u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 16960u), c.r[19].w[0]);  if (t) { goto L_0010B088; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010B074; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010AFE8; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_0010AF8C:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AF8Cu | kUnwind; return; } goto L_0010AF8C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B024; } }
L_0010AFE8:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_0010AFF0:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010AFF0u | kUnwind; return; } goto L_0010AFF0; } }
L_0010B024:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] + 16960u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0010B090; } }
L_0010B074:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B080u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0010B080u) [[unlikely]] return; }
L_0010B080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0010B08C; } }
L_0010B088:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0010B08C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010B090:
    set32(c.r[16], c.r[21].w[0] + 16960u);
    set32(c.r[4], c.r[5].w[0] + 17472u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 6u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B0BCu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B0BCu) [[unlikely]] return; }
L_0010B0BC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0010B0D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010B0D8; } }
L_0010B0D0:
    set32(c.r[2], ld32((c.r[20].w[0] + 16960u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0010B0D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010B100:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[22].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B138u); st64((c.r[29].w[0] + 48u), c.r[18].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B138u) [[unlikely]] return; }
L_0010B138:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B2E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B148u);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010B148u) [[unlikely]] return; }
L_0010B148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010B15C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B2E0; } }
L_0010B15C:
    c.r[21].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[18], c.r[20].w[0] + 16960u);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; st32((c.r[20].w[0] + 16960u), c.r[19].w[0]);  if (t) { goto L_0010B290; } }
    c.r[2].d[0] = c.r[17].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010B27C; } }
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010B1F0; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_0010B194:
    ldl(c.r[3], (c.r[7].w[0] + 7u));
    ldr(c.r[3], (c.r[7].w[0]));
    ldl(c.r[6], (c.r[7].w[0] + 15u));
    ldr(c.r[6], (c.r[7].w[0] + 8u));
    ldl(c.r[8], (c.r[7].w[0] + 23u));
    ldr(c.r[8], (c.r[7].w[0] + 16u));
    ldl(c.r[9], (c.r[7].w[0] + 31u));
    ldr(c.r[9], (c.r[7].w[0] + 24u));
    sdl(c.r[3], (c.r[4].w[0] + 7u));
    sdr(c.r[3], (c.r[4].w[0]));
    sdl(c.r[6], (c.r[4].w[0] + 15u));
    sdr(c.r[6], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B194u | kUnwind; return; } goto L_0010B194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B22C; } }
L_0010B1F0:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_0010B1F8:
    c.r[10].d[0] = ld64((c.r[7].w[0]));
    c.r[3].d[0] = ld64((c.r[7].w[0] + 8u));
    c.r[6].d[0] = ld64((c.r[7].w[0] + 16u));
    c.r[8].d[0] = ld64((c.r[7].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[10].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[3].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[6].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[8].d[0]);
    set32(c.r[7], c.r[7].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[7].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B1F8u | kUnwind; return; } goto L_0010B1F8; } }
L_0010B22C:
    ldl(c.r[9], (c.r[7].w[0] + 7u));
    ldr(c.r[9], (c.r[7].w[0]));
    ldl(c.r[10], (c.r[7].w[0] + 15u));
    ldr(c.r[10], (c.r[7].w[0] + 8u));
    ldl(c.r[6], (c.r[7].w[0] + 23u));
    ldr(c.r[6], (c.r[7].w[0] + 16u));
    lwl(c.r[8], (c.r[7].w[0] + 27u));
    lwr(c.r[8], (c.r[7].w[0] + 24u));
    sdl(c.r[9], (c.r[4].w[0] + 7u));
    sdr(c.r[9], (c.r[4].w[0]));
    sdl(c.r[10], (c.r[4].w[0] + 15u));
    sdr(c.r[10], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    swl(c.r[8], (c.r[4].w[0] + 27u));
    set32(c.r[3], c.r[21].w[0] + 16960u);
    set32(c.r[2], 0u + 252u);
    swr(c.r[8], (c.r[4].w[0] + 24u));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0010B298; } }
L_0010B27C:
    set32(c.r[4], c.r[18].w[0] + 260u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B288u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0010B288u) [[unlikely]] return; }
L_0010B288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0010B294; } }
L_0010B290:
    st32((c.r[18].w[0] + 4u), 0u);
    c.budget -= 1;
L_0010B294:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010B298:
    set32(c.r[16], c.r[21].w[0] + 16960u);
    set32(c.r[4], c.r[5].w[0] + 17472u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 7u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B2C4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B2C4u) [[unlikely]] return; }
L_0010B2C4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0010B2D8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010B2E0; } }
L_0010B2D8:
    set32(c.r[2], ld32((c.r[20].w[0] + 16960u)));
    st32((c.r[22].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0010B2E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0010B308:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B320u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B320u) [[unlikely]] return; }
L_0010B320:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B330u);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010B330u) [[unlikely]] return; }
L_0010B330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010B344; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B384; } }
L_0010B344:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[16].w[0] + 16960u);
    st32((c.r[16].w[0] + 16960u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17472u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 8u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B374u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B374u) [[unlikely]] return; }
L_0010B374:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 16960u)));  goto L_0010B384; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0010B384:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010B398:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B3ACu); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B3ACu) [[unlikely]] return; }
L_0010B3AC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B3BCu);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010B3BCu) [[unlikely]] return; }
L_0010B3BC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010B3D0; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B428; } }
L_0010B3D0:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] + 16968u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B3E4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010B3E4u) [[unlikely]] return; }
L_0010B3E4:
    set32(c.r[3], c.r[16].w[0] - 8u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].d[0] = c.r[3].d[0] + 0ull;
    st8((c.r[3].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[4].w[0] + 17472u);
    set32(c.r[5], 0u + 9u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B418u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B418u) [[unlikely]] return; }
L_0010B418:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] - 8u)));  goto L_0010B428; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0010B428:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0010B438:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B450u); st64((c.r[29].w[0] + 16u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B450u) [[unlikely]] return; }
L_0010B450:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B4B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B460u);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010B460u) [[unlikely]] return; }
L_0010B460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010B474; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B4B4; } }
L_0010B474:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], c.r[16].w[0] + 16960u);
    st32((c.r[16].w[0] + 16960u), c.r[17].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17472u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 10u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B4A4u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B4A4u) [[unlikely]] return; }
L_0010B4A4:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0] + 16960u)));  goto L_0010B4B4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 2;
L_0010B4B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010B4C8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B4D8u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 367u, depth + 1u); else { c.pc = 0x0010AEF8u; return; } if (c.pc != 0x0010B4D8u) [[unlikely]] return; }
L_0010B4D8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B4E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B4F8u);  if (depth < kMaxDepth) unit_0002(c, 367u, depth + 1u); else { c.pc = 0x0010AEF8u; return; } if (c.pc != 0x0010B4F8u) [[unlikely]] return; }
L_0010B4F8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B508:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B540u); st64((c.r[29].w[0] + 96u), c.r[21].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B540u) [[unlikely]] return; }
L_0010B540:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B708; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B550u);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010B550u) [[unlikely]] return; }
L_0010B550:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010B564; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B708; } }
L_0010B564:
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 16968u);
    set32(c.r[6], 0u + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B578u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010B578u) [[unlikely]] return; }
L_0010B578:
    set32(c.r[2], c.r[17].w[0] - 8u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; st8((c.r[2].w[0] + 259u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0010B6B0; } }
    c.r[2].d[0] = c.r[18].sd[0] < 253ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010B698; } }
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010B60C; } }
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0010B5B0:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    ldl(c.r[9], (c.r[3].w[0] + 31u));
    ldr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    sdl(c.r[9], (c.r[4].w[0] + 31u));
    sdr(c.r[9], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B5B0u | kUnwind; return; } goto L_0010B5B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010B64C; } }
L_0010B60C:
    set32(c.r[2], c.r[16].w[0] + 224u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_0010B618:
    c.r[6].d[0] = ld64((c.r[3].w[0]));
    c.r[7].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[8].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[6].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[7].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[8].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[9].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010B618u | kUnwind; return; } goto L_0010B618; } }
L_0010B64C:
    ldl(c.r[6], (c.r[3].w[0] + 7u));
    ldr(c.r[6], (c.r[3].w[0]));
    ldl(c.r[7], (c.r[3].w[0] + 15u));
    ldr(c.r[7], (c.r[3].w[0] + 8u));
    ldl(c.r[8], (c.r[3].w[0] + 23u));
    ldr(c.r[8], (c.r[3].w[0] + 16u));
    lwl(c.r[9], (c.r[3].w[0] + 27u));
    lwr(c.r[9], (c.r[3].w[0] + 24u));
    sdl(c.r[6], (c.r[4].w[0] + 7u));
    sdr(c.r[6], (c.r[4].w[0]));
    sdl(c.r[7], (c.r[4].w[0] + 15u));
    sdr(c.r[7], (c.r[4].w[0] + 8u));
    sdl(c.r[8], (c.r[4].w[0] + 23u));
    sdr(c.r[8], (c.r[4].w[0] + 16u));
    swl(c.r[9], (c.r[4].w[0] + 27u));
    set32(c.r[2], 0u + 252u);
    swr(c.r[9], (c.r[4].w[0] + 24u));
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 16960u), c.r[2].w[0]);  if (t) { goto L_0010B6C0; } }
L_0010B698:
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.r[6].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6A8u); c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0010B6A8u) [[unlikely]] return; }
L_0010B6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] - 8u), c.r[18].w[0]);  if (t) { goto L_0010B6BC; } }
L_0010B6B0:
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(0u));
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] - 8u), 0u);
    c.budget -= 3;
L_0010B6BC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010B6C0:
    set32(c.r[16], c.r[21].w[0] + 16960u);
    set32(c.r[4], c.r[5].w[0] + 17472u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 8u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B6ECu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B6ECu) [[unlikely]] return; }
L_0010B6EC:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[3], ld32((c.r[16].w[0] + 4u)));  goto L_0010B700; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010B708; } }
L_0010B700:
    set32(c.r[2], ld32((c.r[21].w[0] + 16960u)));
    st32((c.r[20].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_0010B708:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010B730:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[8].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B744u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 398u, depth + 1u); else { c.pc = 0x0010B508u; return; } if (c.pc != 0x0010B744u) [[unlikely]] return; }
L_0010B744:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0010B750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B760u); c.r[8].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 398u, depth + 1u); else { c.pc = 0x0010B508u; return; } if (c.pc != 0x0010B760u) [[unlikely]] return; }
L_0010B760:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B770:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B7A0u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B7A0u) [[unlikely]] return; }
L_0010B7A0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B7B0u);  if (depth < kMaxDepth) unit_0002(c, 361u, depth + 1u); else { c.pc = 0x0010AE30u; return; } if (c.pc != 0x0010B7B0u) [[unlikely]] return; }
L_0010B7B0:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  goto L_0010B7C4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_0010B854; } }
L_0010B7C4:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] + 16968u);
    set32(c.r[6], 0u + 252u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B7DCu); set32(c.r[16], c.r[17].w[0] - 8u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010B7DCu) [[unlikely]] return; }
L_0010B7DC:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    st8((c.r[16].w[0] + 259u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], c.r[17].w[0] + 252u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B7F0u); set32(c.r[6], 0u + 252u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0010B7F0u) [[unlikely]] return; }
L_0010B7F0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st8((c.r[16].w[0] + 511u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[4], c.r[4].w[0] + 17472u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[8], 0u + 512u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B820u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B820u) [[unlikely]] return; }
L_0010B820:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] - 8u)));  goto L_0010B834; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010B854; } }
L_0010B834:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { st32((c.r[20].w[0]), c.r[2].w[0]);  goto L_0010B848; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65533ull;  if (t) { goto L_0010B854; } }
L_0010B848:
    c.r[2].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[20].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0010B854:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0010B878:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B888u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 410u, depth + 1u); else { c.pc = 0x0010B770u; return; } if (c.pc != 0x0010B888u) [[unlikely]] return; }
L_0010B888:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B898:
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[5].w[0] + 3176u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8B4u); set32(c.r[7], 0u + 1u);  if (depth < kMaxDepth) unit_0002(c, 410u, depth + 1u); else { c.pc = 0x0010B770u; return; } if (c.pc != 0x0010B8B4u) [[unlikely]] return; }
L_0010B8B4:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010B8C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B8E8u); st64((c.r[29].w[0] + 32u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B8E8u) [[unlikely]] return; }
L_0010B8E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;  if (t) { goto L_0010B8F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010B990; } }
L_0010B8F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010B97C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[17].w[0] + 16960u);
    st32((c.r[17].w[0] + 16960u), c.r[19].w[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 4u), c.r[16].w[0]);
    set32(c.r[4], c.r[4].w[0] + 17472u);
    set32(c.r[5], 0u + 3u);
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 32u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B938u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010B938u) [[unlikely]] return; }
L_0010B938:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0010B94C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010B990; } }
L_0010B94C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010B960; } }
    c.r[2].d[0] = ld8((c.r[17].w[0] + 16960u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[18].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010B98C; } }
L_0010B960:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0010B974; } }
    c.r[2].d[0] = ld16((c.r[17].w[0] + 16960u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0010B98C; } }
L_0010B974:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 16960u)));  goto L_0010B988; }
L_0010B97C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_0010B990; } }
L_0010B988:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_0010B98C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010B990:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0010B9B0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010B9D4u); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 356u, depth + 1u); else { c.pc = 0x0010AD30u; return; } if (c.pc != 0x0010B9D4u) [[unlikely]] return; }
L_0010B9D4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010B9E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);  if (t) { goto L_0010BA74; } }
L_0010B9E4:
    set32(c.r[3], c.r[7].w[0] + 16960u);
    st32((c.r[7].w[0] + 16960u), c.r[18].w[0]);
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != 0ull; st32((c.r[3].w[0] + 4u), c.r[16].w[0]);  if (t) { goto L_0010BA00; } }
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0010BA30; } }
L_0010BA00:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0010BA18; } }
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0010BA30; } }
L_0010BA18:
    c.budget -= 2;
    if (c.r[16].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0])));  goto L_0010BA2C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65534ull;  if (t) { goto L_0010BA74; } }
L_0010BA2C:
    st32((c.r[3].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 1;
L_0010BA30:
    set32(c.r[7], c.r[7].w[0] + 16960u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] + 17472u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 32u);
    c.r[9].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[10], 0u + 16u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BA5Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x0010BA5Cu) [[unlikely]] return; }
L_0010BA5C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    set32(c.r[3], 0u - 1u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 65535ull;
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    if (c.r[3].d[0] != 0) c.r[2].d[0] = 0ull;
    c.budget -= 6;
L_0010BA74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010BA90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BAACu); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 535u, depth + 1u); else { c.pc = 0x00103E70u; return; } if (c.pc != 0x0010BAACu) [[unlikely]] return; }
L_0010BAAC:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BAB8u);  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x0010BAB8u) [[unlikely]] return; }
L_0010BAB8:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[11].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[10].w[0] + 17536u);
    st32((c.r[3].w[0] + 20u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[9].d[0] = 0ull + 0ull;  if (t) { goto L_0010BB00; } }
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 3;
L_0010BAE0:
    set32(c.r[3], c.r[10].w[0] + 17536u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], c.r[17].w[0] + c.r[9].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    if (c.r[3].d[0] != 0ull) { c.r[4].d[0] = ld8((c.r[2].w[0]));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BAE0u | kUnwind; return; } goto L_0010BAE0; }
L_0010BB00:
    set32(c.r[6], c.r[10].w[0] + 17536u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[6].w[0] + 4u), 0u);
    set32(c.r[4], 0u - 1u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.r[4].d[0] = c.r[4].d[0] | 255ull;
    c.r[3].d[0] = c.r[3].d[0] | 3ull;
    set32(c.r[5], 0u + 104u);
    c.r[2].d[0] = ld64((c.r[10].w[0] + 17536u));
    set32(c.r[7], 0u + 104u);
    st32((c.r[6].w[0] + 16u), c.r[9].w[0]);
    set32(c.r[8], 0u + 68u);
    st32((c.r[6].w[0] + 8u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st64((c.r[10].w[0] + 17536u), c.r[2].d[0]);
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    st8((c.r[10].w[0] + 17536u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], 0u + 104u);
    st32((c.r[29].w[0] + 4u), c.r[11].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[7].w[0]);
    st32((c.r[29].w[0] + 12u), c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB5Cu); st32((c.r[29].w[0]), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x0010BB5Cu) [[unlikely]] return; }
L_0010BB5C:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB68u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00040000u);  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x0010BB68u) [[unlikely]] return; }
L_0010BB68:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB74u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 565u, depth + 1u); else { c.pc = 0x00103F60u; return; } if (c.pc != 0x0010BB74u) [[unlikely]] return; }
L_0010BB74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0010BBB4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB84u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x0010BB84u) [[unlikely]] return; }
L_0010BB84:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BB90u); c.r[5].sd[0] = static_cast<std::int32_t>(0x00020000u);  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x0010BB90u) [[unlikely]] return; }
L_0010BB90:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBA0u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x0010BBA0u) [[unlikely]] return; }
L_0010BBA0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBACu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x0010BBACu) [[unlikely]] return; }
L_0010BBAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0010BBB8; } }
L_0010BBB4:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010BBB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0010BBD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BBE0u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x0010BBE0u) [[unlikely]] return; }
L_0010BBE0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010BBF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC08u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x0010BC08u) [[unlikely]] return; }
L_0010BC08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00040000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010BC24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC20u);  if (depth < kMaxDepth) unit_0001(c, 3u, depth + 1u); else { c.pc = 0x00104010u; return; } if (c.pc != 0x0010BC20u) [[unlikely]] return; }
L_0010BC20:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0010BC24:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0010BC30:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[2].w[0] + 3184u);  if (t) { goto L_0010BC7C; } }
    set32(c.r[3], c.r[16].w[0] - 11u);
    c.budget -= 1;
L_0010BC58:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BC58u | kUnwind; return; } goto L_0010BC58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_0010BC84; } }
L_0010BC7C:
    set32(c.r[3], c.r[16].w[0] - 11u);
    set32(c.r[2], c.r[4].w[0] - c.r[3].w[0]);
    c.budget -= 2;
L_0010BC84:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(81ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010BCA4; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BC9Cu); set32(c.r[4], c.r[4].w[0] + 3200u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010BC9Cu) [[unlikely]] return; }
L_0010BC9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0010BD2C; } }
L_0010BCA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCACu); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x0010BCACu) [[unlikely]] return; }
L_0010BCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BCB4u);  if (depth < kMaxDepth) unit_0001(c, 296u, depth + 1u); else { c.pc = 0x001065E8u; return; } if (c.pc != 0x0010BCB4u) [[unlikely]] return; }
L_0010BCB4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[17].w[0]));  if (t) { goto L_0010BCEC; } }
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_0010BCC8:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[4].d[0] = ld8((c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BCC8u | kUnwind; return; } goto L_0010BCC8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_0010BCF4; } }
L_0010BCEC:
    c.r[5].d[0] = ld8((c.r[16].w[0]));
    c.r[4].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 2;
L_0010BCF4:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  goto L_0010BD20; }
    c.budget -= 1;
L_0010BD00:
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BD00u | kUnwind; return; } goto L_0010BD00; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0010BD20:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BD2Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0002(c, 426u, depth + 1u); else { c.pc = 0x0010BA90u; return; } if (c.pc != 0x0010BD2Cu) [[unlikely]] return; }
L_0010BD2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0010BD40:
    set32(c.r[3], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_0010BD7C; } }
    c.budget -= 1;
L_0010BD58:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BD58u | kUnwind; return; } goto L_0010BD58; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0010BD7C:
    c.r[4].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[4].d[0] + 0ull;  c.pc = t; return; }
L_0010BD88:
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    set_interrupts(c, true);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;  c.pc = t; return; }
L_0010BDA0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDC4u); st32((c.r[29].w[0] + 36u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010BDC4u) [[unlikely]] return; }
L_0010BDC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDD4u); st32((c.r[3].w[0] + 22184u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x0010BDD4u) [[unlikely]] return; }
L_0010BDD4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    st32((c.r[3].w[0] + 22188u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0010BDE8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BDF8u);  if (depth < kMaxDepth) unit_0002(c, 453u, depth + 1u); else { c.pc = 0x0010BDA0u; return; } if (c.pc != 0x0010BDF8u) [[unlikely]] return; }
L_0010BDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE00u);  if (depth < kMaxDepth) unit_0001(c, 77u, depth + 1u); else { c.pc = 0x00104850u; return; } if (c.pc != 0x0010BE00u) [[unlikely]] return; }
L_0010BE00:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104A00u | kUnwind; return; } [[clang::musttail]] return unit_0001(c, 94u, depth); }
L_0010BE10:
    set32(c.r[29], c.r[29].w[0] - 368u);
    set32(c.r[3], 0u + 28u);
    st64((c.r[29].w[0] + 320u), c.r[20].d[0]);
    set32(c.r[2], 0u + 112u);
    st64((c.r[29].w[0] + 304u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    mmi::mult(c, 1, c.r[20].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[1];
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st64((c.r[29].w[0] + 336u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[18].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 256u), c.r[16].d[0]);
    set32(c.r[18], c.r[21].w[0] + 17744u);
    st64((c.r[29].w[0] + 352u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 272u), c.r[17].d[0]);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[18].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE68u); set32(c.r[17], ld32((c.r[2].w[0] + 4u)));  if (depth < kMaxDepth) unit_0000(c, 561u, depth + 1u); else { c.pc = 0x00103F40u; return; } if (c.pc != 0x0010BE68u) [[unlikely]] return; }
L_0010BE68:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_0010BE8C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 22212u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010BF1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BE84u); set32(c.r[4], c.r[4].w[0] + 3232u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010BE84u) [[unlikely]] return; }
L_0010BE84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));  if (t) { goto L_0010BF20; } }
L_0010BE8C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    set32(c.r[2], c.r[18].w[0] + c.r[16].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.r[2].d[0] = c.r[3].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 5);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEB8u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 35u, depth + 1u); else { c.pc = 0x001043F0u; return; } if (c.pc != 0x0010BEB8u) [[unlikely]] return; }
L_0010BEB8:
    set32(c.r[2], 0u + 32u);
    st32((c.r[29].w[0] + 4u), c.r[16].w[0]);
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BED8u); st32((c.r[29].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0000(c, 565u, depth + 1u); else { c.pc = 0x00103F60u; return; } if (c.pc != 0x0010BED8u) [[unlikely]] return; }
L_0010BED8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[3], 0u + 28u);  if (t) { goto L_0010BF00; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22212u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010BEFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BEFCu); set32(c.r[4], c.r[4].w[0] + 3232u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0010BEFCu) [[unlikely]] return; }
L_0010BEFC:
    set32(c.r[3], 0u + 28u);
    c.budget -= 1;
L_0010BF00:
    set32(c.r[4], 0u + 112u);
    mmi::mult(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 1, c.r[20].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[1];
    set32(c.r[2], c.r[21].w[0] + 17744u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[16].w[0]);
    c.budget -= 7;
L_0010BF1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 352u));
    c.budget -= 1;
L_0010BF20:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 304u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 288u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 272u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 256u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 368u);  c.pc = t; return; }
L_0010BF40:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st32((c.r[3].w[0] + 22208u), c.r[2].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_0010BF94; } }
    c.budget -= 1;
L_0010BF70:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010BF78:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BF78u | kUnwind; return; } goto L_0010BF78; } }
L_0010BF94:
    set32(c.r[16], c.r[17].w[0] + 17664u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 256ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010BFACu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010BFACu) [[unlikely]] return; }
L_0010BFAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BF70u | kUnwind; return; } goto L_0010BF70; } }
    c.r[17].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 40u);  if (t) { goto L_0010BFEC; } }
    c.budget -= 1;
L_0010BFC8:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_0010BFD0:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010BFD0u | kUnwind; return; } goto L_0010BFD0; } }
L_0010BFEC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 257ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010C000u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x0010C000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0003(c, 1u, depth);
}

}
