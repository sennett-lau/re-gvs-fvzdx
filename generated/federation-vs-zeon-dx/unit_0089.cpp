#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0089[4096] = {
    1, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 9, 0, 0,
    10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0,
    0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0,
    82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0,
    0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0,
    127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0,
    0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149,
    0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169,
    0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198,
    0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0,
    0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0,
    0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0,
    0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 339,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0,
    358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 373, 0, 374, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0,
    0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0,
    398, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407,
    0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0,
    0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0,
    455, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0,
    462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477,
    0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0,
    495, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 500, 0,
    0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507,
    0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0,
    514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0,
    0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0,
    0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0,
    0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0,
    0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0,
    0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0,
    0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570,
};

void unit_0089(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00324000;
    case 2u: goto L_0032400C;
    case 3u: goto L_00324010;
    case 4u: goto L_00324034;
    case 5u: goto L_00324044;
    case 6u: goto L_00324058;
    case 7u: goto L_00324060;
    case 8u: goto L_0032406C;
    case 9u: goto L_00324074;
    case 10u: goto L_00324080;
    case 11u: goto L_00324088;
    case 12u: goto L_00324100;
    case 13u: goto L_00324118;
    case 14u: goto L_00324120;
    case 15u: goto L_00324134;
    case 16u: goto L_0032413C;
    case 17u: goto L_00324150;
    case 18u: goto L_00324180;
    case 19u: goto L_003241C8;
    case 20u: goto L_003241FC;
    case 21u: goto L_00324240;
    case 22u: goto L_00324270;
    case 23u: goto L_00324280;
    case 24u: goto L_0032429C;
    case 25u: goto L_003242A8;
    case 26u: goto L_003242B0;
    case 27u: goto L_003242C8;
    case 28u: goto L_003242D0;
    case 29u: goto L_003242E8;
    case 30u: goto L_00324328;
    case 31u: goto L_00324368;
    case 32u: goto L_00324380;
    case 33u: goto L_00324394;
    case 34u: goto L_003243B4;
    case 35u: goto L_003243E4;
    case 36u: goto L_00324418;
    case 37u: goto L_00324430;
    case 38u: goto L_0032445C;
    case 39u: goto L_00324480;
    case 40u: goto L_0032448C;
    case 41u: goto L_00324494;
    case 42u: goto L_003244A8;
    case 43u: goto L_003244B0;
    case 44u: goto L_003244C8;
    case 45u: goto L_00324510;
    case 46u: goto L_00324520;
    case 47u: goto L_0032453C;
    case 48u: goto L_00324548;
    case 49u: goto L_00324550;
    case 50u: goto L_00324564;
    case 51u: goto L_0032456C;
    case 52u: goto L_00324580;
    case 53u: goto L_003245B0;
    case 54u: goto L_003245F8;
    case 55u: goto L_0032462C;
    case 56u: goto L_00324660;
    case 57u: goto L_0032468C;
    case 58u: goto L_003246A4;
    case 59u: goto L_003246C0;
    case 60u: goto L_003246DC;
    case 61u: goto L_003246E8;
    case 62u: goto L_003246F0;
    case 63u: goto L_00324708;
    case 64u: goto L_00324710;
    case 65u: goto L_00324728;
    case 66u: goto L_00324768;
    case 67u: goto L_003247A8;
    case 68u: goto L_003247D4;
    case 69u: goto L_003247EC;
    case 70u: goto L_00324800;
    case 71u: goto L_00324818;
    case 72u: goto L_00324820;
    case 73u: goto L_00324840;
    case 74u: goto L_0032489C;
    case 75u: goto L_003248B0;
    case 76u: goto L_003248CC;
    case 77u: goto L_003248D8;
    case 78u: goto L_003248F8;
    case 79u: goto L_00324944;
    case 80u: goto L_00324960;
    case 81u: goto L_00324978;
    case 82u: goto L_00324980;
    case 83u: goto L_00324994;
    case 84u: goto L_0032499C;
    case 85u: goto L_003249B4;
    case 86u: goto L_003249F0;
    case 87u: goto L_00324A10;
    case 88u: goto L_00324A30;
    case 89u: goto L_00324A50;
    case 90u: goto L_00324A8C;
    case 91u: goto L_00324AB0;
    case 92u: goto L_00324AC0;
    case 93u: goto L_00324AD4;
    case 94u: goto L_00324AE8;
    case 95u: goto L_00324B00;
    case 96u: goto L_00324B38;
    case 97u: goto L_00324B60;
    case 98u: goto L_00324B7C;
    case 99u: goto L_00324B90;
    case 100u: goto L_00324BA4;
    case 101u: goto L_00324BC4;
    case 102u: goto L_00324BE0;
    case 103u: goto L_00324BF0;
    case 104u: goto L_00324C04;
    case 105u: goto L_00324C24;
    case 106u: goto L_00324C38;
    case 107u: goto L_00324C44;
    case 108u: goto L_00324C50;
    case 109u: goto L_00324C5C;
    case 110u: goto L_00324C68;
    case 111u: goto L_00324C84;
    case 112u: goto L_00324C90;
    case 113u: goto L_00324CA0;
    case 114u: goto L_00324CBC;
    case 115u: goto L_00324CC4;
    case 116u: goto L_00324CD8;
    case 117u: goto L_00324CE4;
    case 118u: goto L_00324CF4;
    case 119u: goto L_00324D10;
    case 120u: goto L_00324D24;
    case 121u: goto L_00324D40;
    case 122u: goto L_00324D58;
    case 123u: goto L_00324D70;
    case 124u: goto L_00324D90;
    case 125u: goto L_00324DCC;
    case 126u: goto L_00324DF0;
    case 127u: goto L_00324E00;
    case 128u: goto L_00324E14;
    case 129u: goto L_00324E28;
    case 130u: goto L_00324E40;
    case 131u: goto L_00324E78;
    case 132u: goto L_00324EA0;
    case 133u: goto L_00324EBC;
    case 134u: goto L_00324ED0;
    case 135u: goto L_00324EE4;
    case 136u: goto L_00324F04;
    case 137u: goto L_00324F20;
    case 138u: goto L_00324F30;
    case 139u: goto L_00324F44;
    case 140u: goto L_00324F64;
    case 141u: goto L_00324F78;
    case 142u: goto L_00324F84;
    case 143u: goto L_00324F90;
    case 144u: goto L_00324F9C;
    case 145u: goto L_00324FA8;
    case 146u: goto L_00324FC4;
    case 147u: goto L_00324FD0;
    case 148u: goto L_00324FE0;
    case 149u: goto L_00324FFC;
    case 150u: goto L_00325004;
    case 151u: goto L_00325018;
    case 152u: goto L_00325024;
    case 153u: goto L_00325034;
    case 154u: goto L_00325050;
    case 155u: goto L_00325064;
    case 156u: goto L_00325080;
    case 157u: goto L_00325098;
    case 158u: goto L_003250B0;
    case 159u: goto L_003250C8;
    case 160u: goto L_003250E8;
    case 161u: goto L_00325100;
    case 162u: goto L_0032511C;
    case 163u: goto L_00325170;
    case 164u: goto L_00325198;
    case 165u: goto L_003251B0;
    case 166u: goto L_003251C0;
    case 167u: goto L_003251DC;
    case 168u: goto L_003251E4;
    case 169u: goto L_003251FC;
    case 170u: goto L_00325204;
    case 171u: goto L_0032521C;
    case 172u: goto L_00325254;
    case 173u: goto L_0032527C;
    case 174u: goto L_00325298;
    case 175u: goto L_003252B0;
    case 176u: goto L_003252CC;
    case 177u: goto L_003252D4;
    case 178u: goto L_003252F8;
    case 179u: goto L_00325314;
    case 180u: goto L_00325330;
    case 181u: goto L_0032534C;
    case 182u: goto L_00325354;
    case 183u: goto L_00325378;
    case 184u: goto L_0032538C;
    case 185u: goto L_00325398;
    case 186u: goto L_003253A4;
    case 187u: goto L_003253B0;
    case 188u: goto L_003253BC;
    case 189u: goto L_003253D8;
    case 190u: goto L_003253F0;
    case 191u: goto L_00325400;
    case 192u: goto L_00325414;
    case 193u: goto L_0032541C;
    case 194u: goto L_00325430;
    case 195u: goto L_00325440;
    case 196u: goto L_00325450;
    case 197u: goto L_00325464;
    case 198u: goto L_0032547C;
    case 199u: goto L_00325484;
    case 200u: goto L_003254A0;
    case 201u: goto L_003254C0;
    case 202u: goto L_00325500;
    case 203u: goto L_0032551C;
    case 204u: goto L_00325560;
    case 205u: goto L_003255CC;
    case 206u: goto L_003255DC;
    case 207u: goto L_003255F4;
    case 208u: goto L_00325600;
    case 209u: goto L_0032560C;
    case 210u: goto L_00325618;
    case 211u: goto L_0032562C;
    case 212u: goto L_00325638;
    case 213u: goto L_00325644;
    case 214u: goto L_00325688;
    case 215u: goto L_0032569C;
    case 216u: goto L_003256A8;
    case 217u: goto L_003256C0;
    case 218u: goto L_003256E0;
    case 219u: goto L_00325710;
    case 220u: goto L_00325758;
    case 221u: goto L_00325794;
    case 222u: goto L_003257AC;
    case 223u: goto L_003257E8;
    case 224u: goto L_00325800;
    case 225u: goto L_0032582C;
    case 226u: goto L_00325840;
    case 227u: goto L_0032585C;
    case 228u: goto L_00325868;
    case 229u: goto L_00325870;
    case 230u: goto L_00325888;
    case 231u: goto L_003258BC;
    case 232u: goto L_003258C4;
    case 233u: goto L_003258FC;
    case 234u: goto L_00325918;
    case 235u: goto L_00325948;
    case 236u: goto L_00325960;
    case 237u: goto L_00325974;
    case 238u: goto L_00325994;
    case 239u: goto L_003259C4;
    case 240u: goto L_003259D4;
    case 241u: goto L_00325A1C;
    case 242u: goto L_00325A68;
    case 243u: goto L_00325A80;
    case 244u: goto L_00325A94;
    case 245u: goto L_00325AA4;
    case 246u: goto L_00325AB0;
    case 247u: goto L_00325AD0;
    case 248u: goto L_00325B48;
    case 249u: goto L_00325B60;
    case 250u: goto L_00325B88;
    case 251u: goto L_00325BAC;
    case 252u: goto L_00325BB8;
    case 253u: goto L_00325BC0;
    case 254u: goto L_00325BD4;
    case 255u: goto L_00325BDC;
    case 256u: goto L_00325BF4;
    case 257u: goto L_00325C1C;
    case 258u: goto L_00325C7C;
    case 259u: goto L_00325C90;
    case 260u: goto L_00325CAC;
    case 261u: goto L_00325CB8;
    case 262u: goto L_00325CC0;
    case 263u: goto L_00325CD4;
    case 264u: goto L_00325CDC;
    case 265u: goto L_00325CF4;
    case 266u: goto L_00325D20;
    case 267u: goto L_00325D50;
    case 268u: goto L_00325D98;
    case 269u: goto L_00325DD4;
    case 270u: goto L_00325DEC;
    case 271u: goto L_00325E24;
    case 272u: goto L_00325E3C;
    case 273u: goto L_00325E68;
    case 274u: goto L_00325E80;
    case 275u: goto L_00325E9C;
    case 276u: goto L_00325EA8;
    case 277u: goto L_00325EB0;
    case 278u: goto L_00325EC8;
    case 279u: goto L_00325EFC;
    case 280u: goto L_00325F04;
    case 281u: goto L_00325F38;
    case 282u: goto L_00325F50;
    case 283u: goto L_00325F80;
    case 284u: goto L_00325F90;
    case 285u: goto L_00325FA4;
    case 286u: goto L_00325FC4;
    case 287u: goto L_00325FF4;
    case 288u: goto L_00326004;
    case 289u: goto L_00326048;
    case 290u: goto L_00326094;
    case 291u: goto L_003260B0;
    case 292u: goto L_003260C4;
    case 293u: goto L_003260D4;
    case 294u: goto L_003260E0;
    case 295u: goto L_00326100;
    case 296u: goto L_00326174;
    case 297u: goto L_00326190;
    case 298u: goto L_003261AC;
    case 299u: goto L_003261B8;
    case 300u: goto L_003261C0;
    case 301u: goto L_003261D4;
    case 302u: goto L_003261DC;
    case 303u: goto L_003261F0;
    case 304u: goto L_00326220;
    case 305u: goto L_00326268;
    case 306u: goto L_003262A4;
    case 307u: goto L_003262BC;
    case 308u: goto L_003262EC;
    case 309u: goto L_00326304;
    case 310u: goto L_00326330;
    case 311u: goto L_00326340;
    case 312u: goto L_0032635C;
    case 313u: goto L_00326368;
    case 314u: goto L_00326370;
    case 315u: goto L_00326388;
    case 316u: goto L_003263BC;
    case 317u: goto L_003263C4;
    case 318u: goto L_003263F0;
    case 319u: goto L_00326408;
    case 320u: goto L_00326438;
    case 321u: goto L_00326450;
    case 322u: goto L_00326464;
    case 323u: goto L_00326484;
    case 324u: goto L_003264B4;
    case 325u: goto L_003264C4;
    case 326u: goto L_003264FC;
    case 327u: goto L_00326548;
    case 328u: goto L_00326560;
    case 329u: goto L_00326574;
    case 330u: goto L_00326584;
    case 331u: goto L_00326590;
    case 332u: goto L_003265B0;
    case 333u: goto L_0032661C;
    case 334u: goto L_00326630;
    case 335u: goto L_0032664C;
    case 336u: goto L_00326658;
    case 337u: goto L_00326660;
    case 338u: goto L_00326674;
    case 339u: goto L_0032667C;
    case 340u: goto L_00326690;
    case 341u: goto L_003266C0;
    case 342u: goto L_00326708;
    case 343u: goto L_00326744;
    case 344u: goto L_0032675C;
    case 345u: goto L_00326790;
    case 346u: goto L_003267A8;
    case 347u: goto L_003267D4;
    case 348u: goto L_003267F0;
    case 349u: goto L_0032680C;
    case 350u: goto L_00326818;
    case 351u: goto L_00326820;
    case 352u: goto L_00326838;
    case 353u: goto L_0032686C;
    case 354u: goto L_00326874;
    case 355u: goto L_003268A4;
    case 356u: goto L_003268BC;
    case 357u: goto L_003268EC;
    case 358u: goto L_00326900;
    case 359u: goto L_00326914;
    case 360u: goto L_00326934;
    case 361u: goto L_00326964;
    case 362u: goto L_00326974;
    case 363u: goto L_003269B4;
    case 364u: goto L_00326A00;
    case 365u: goto L_00326A10;
    case 366u: goto L_00326A24;
    case 367u: goto L_00326A34;
    case 368u: goto L_00326A40;
    case 369u: goto L_00326A60;
    case 370u: goto L_00326AD0;
    case 371u: goto L_00326AE0;
    case 372u: goto L_00326AFC;
    case 373u: goto L_00326B08;
    case 374u: goto L_00326B10;
    case 375u: goto L_00326B24;
    case 376u: goto L_00326B2C;
    case 377u: goto L_00326B40;
    case 378u: goto L_00326B70;
    case 379u: goto L_00326BB8;
    case 380u: goto L_00326BF4;
    case 381u: goto L_00326C34;
    case 382u: goto L_00326C64;
    case 383u: goto L_00326C80;
    case 384u: goto L_00326C9C;
    case 385u: goto L_00326CA8;
    case 386u: goto L_00326CB0;
    case 387u: goto L_00326CF0;
    case 388u: goto L_00326D04;
    case 389u: goto L_00326D0C;
    case 390u: goto L_00326D20;
    case 391u: goto L_00326D34;
    case 392u: goto L_00326D54;
    case 393u: goto L_00326D84;
    case 394u: goto L_00326DB4;
    case 395u: goto L_00326DD0;
    case 396u: goto L_00326DEC;
    case 397u: goto L_00326DF8;
    case 398u: goto L_00326E00;
    case 399u: goto L_00326E14;
    case 400u: goto L_00326E1C;
    case 401u: goto L_00326E30;
    case 402u: goto L_00326E60;
    case 403u: goto L_00326EA8;
    case 404u: goto L_00326EE4;
    case 405u: goto L_00326F18;
    case 406u: goto L_00326F64;
    case 407u: goto L_00326F7C;
    case 408u: goto L_00326F90;
    case 409u: goto L_00326FAC;
    case 410u: goto L_00326FB8;
    case 411u: goto L_00326FC0;
    case 412u: goto L_00327000;
    case 413u: goto L_0032704C;
    case 414u: goto L_00327064;
    case 415u: goto L_00327080;
    case 416u: goto L_00327098;
    case 417u: goto L_003270AC;
    case 418u: goto L_003270CC;
    case 419u: goto L_00327128;
    case 420u: goto L_00327140;
    case 421u: goto L_0032715C;
    case 422u: goto L_00327168;
    case 423u: goto L_00327188;
    case 424u: goto L_003271F0;
    case 425u: goto L_00327200;
    case 426u: goto L_0032721C;
    case 427u: goto L_00327228;
    case 428u: goto L_00327230;
    case 429u: goto L_00327244;
    case 430u: goto L_0032724C;
    case 431u: goto L_00327260;
    case 432u: goto L_00327280;
    case 433u: goto L_003272A0;
    case 434u: goto L_003272C0;
    case 435u: goto L_003272E0;
    case 436u: goto L_00327300;
    case 437u: goto L_0032733C;
    case 438u: goto L_0032735C;
    case 439u: goto L_00327370;
    case 440u: goto L_00327384;
    case 441u: goto L_00327394;
    case 442u: goto L_003273D0;
    case 443u: goto L_003273EC;
    case 444u: goto L_00327408;
    case 445u: goto L_00327420;
    case 446u: goto L_00327434;
    case 447u: goto L_00327454;
    case 448u: goto L_00327470;
    case 449u: goto L_00327480;
    case 450u: goto L_00327494;
    case 451u: goto L_003274A8;
    case 452u: goto L_003274DC;
    case 453u: goto L_003274E8;
    case 454u: goto L_003274F4;
    case 455u: goto L_00327500;
    case 456u: goto L_0032750C;
    case 457u: goto L_00327524;
    case 458u: goto L_00327530;
    case 459u: goto L_0032754C;
    case 460u: goto L_0032755C;
    case 461u: goto L_00327574;
    case 462u: goto L_00327580;
    case 463u: goto L_00327594;
    case 464u: goto L_003275A0;
    case 465u: goto L_003275B0;
    case 466u: goto L_003275C0;
    case 467u: goto L_003275E0;
    case 468u: goto L_003275F0;
    case 469u: goto L_00327600;
    case 470u: goto L_0032764C;
    case 471u: goto L_0032765C;
    case 472u: goto L_003276B0;
    case 473u: goto L_003276C4;
    case 474u: goto L_003276D8;
    case 475u: goto L_003276E4;
    case 476u: goto L_003276F0;
    case 477u: goto L_003276FC;
    case 478u: goto L_00327708;
    case 479u: goto L_00327718;
    case 480u: goto L_00327730;
    case 481u: goto L_0032773C;
    case 482u: goto L_00327770;
    case 483u: goto L_00327790;
    case 484u: goto L_003277CC;
    case 485u: goto L_003277F0;
    case 486u: goto L_00327800;
    case 487u: goto L_00327814;
    case 488u: goto L_00327838;
    case 489u: goto L_00327854;
    case 490u: goto L_00327870;
    case 491u: goto L_00327888;
    case 492u: goto L_003278B0;
    case 493u: goto L_003278C4;
    case 494u: goto L_003278E4;
    case 495u: goto L_00327900;
    case 496u: goto L_00327910;
    case 497u: goto L_00327924;
    case 498u: goto L_00327938;
    case 499u: goto L_0032796C;
    case 500u: goto L_00327978;
    case 501u: goto L_00327984;
    case 502u: goto L_00327990;
    case 503u: goto L_0032799C;
    case 504u: goto L_003279B4;
    case 505u: goto L_003279E0;
    case 506u: goto L_003279EC;
    case 507u: goto L_003279FC;
    case 508u: goto L_00327A14;
    case 509u: goto L_00327A20;
    case 510u: goto L_00327A34;
    case 511u: goto L_00327A40;
    case 512u: goto L_00327A50;
    case 513u: goto L_00327A60;
    case 514u: goto L_00327A80;
    case 515u: goto L_00327A90;
    case 516u: goto L_00327AA0;
    case 517u: goto L_00327AEC;
    case 518u: goto L_00327AFC;
    case 519u: goto L_00327B50;
    case 520u: goto L_00327B64;
    case 521u: goto L_00327B78;
    case 522u: goto L_00327B84;
    case 523u: goto L_00327B90;
    case 524u: goto L_00327B9C;
    case 525u: goto L_00327BA8;
    case 526u: goto L_00327BB8;
    case 527u: goto L_00327BD0;
    case 528u: goto L_00327BDC;
    case 529u: goto L_00327C10;
    case 530u: goto L_00327C28;
    case 531u: goto L_00327C48;
    case 532u: goto L_00327C60;
    case 533u: goto L_00327C98;
    case 534u: goto L_00327CC8;
    case 535u: goto L_00327CF0;
    case 536u: goto L_00327D08;
    case 537u: goto L_00327D20;
    case 538u: goto L_00327D3C;
    case 539u: goto L_00327D44;
    case 540u: goto L_00327D68;
    case 541u: goto L_00327D70;
    case 542u: goto L_00327D8C;
    case 543u: goto L_00327DA8;
    case 544u: goto L_00327DC0;
    case 545u: goto L_00327DF0;
    case 546u: goto L_00327E0C;
    case 547u: goto L_00327E14;
    case 548u: goto L_00327E38;
    case 549u: goto L_00327E54;
    case 550u: goto L_00327E70;
    case 551u: goto L_00327E8C;
    case 552u: goto L_00327E94;
    case 553u: goto L_00327EAC;
    case 554u: goto L_00327EE0;
    case 555u: goto L_00327EEC;
    case 556u: goto L_00327EF8;
    case 557u: goto L_00327F04;
    case 558u: goto L_00327F10;
    case 559u: goto L_00327F28;
    case 560u: goto L_00327F48;
    case 561u: goto L_00327F60;
    case 562u: goto L_00327F70;
    case 563u: goto L_00327F84;
    case 564u: goto L_00327F90;
    case 565u: goto L_00327F98;
    case 566u: goto L_00327FB0;
    case 567u: goto L_00327FC0;
    case 568u: goto L_00327FE0;
    case 569u: goto L_00327FE8;
    case 570u: goto L_00327FFC;
    default: bad_entry(c, 0x00324000u); return;
    }
L_00324000:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032400Cu); set32(c.r[6], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 26u, depth + 1u); else { c.pc = 0x0013CB30u; return; } if (c.pc != 0x0032400Cu) [[unlikely]] return; }
L_0032400C:
    c.f[0] = ld32((c.r[16].w[0] + 8336u));
    c.budget -= 1;
L_00324010:
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    set32(c.r[6], c.r[29].w[0] + 48u);
    st32((c.r[29].w[0] + 64u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8340u));
    st32((c.r[29].w[0] + 68u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 8344u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324034u); st32((c.r[29].w[0] + 72u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00324034u) [[unlikely]] return; }
L_00324034:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324044u); set32(c.r[6], c.r[29].w[0] + 96u);  if (depth < kMaxDepth) unit_005B(c, 291u, depth + 1u); else { c.pc = 0x0026F830u; return; } if (c.pc != 0x00324044u) [[unlikely]] return; }
L_00324044:
    set32(c.r[5], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[16].w[0] + 8320u);
    mmi::paddub(c.r[17], c.r[2], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324058u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 147u, depth + 1u); else { c.pc = 0x0026E4D0u; return; } if (c.pc != 0x00324058u) [[unlikely]] return; }
L_00324058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324060u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00324060u) [[unlikely]] return; }
L_00324060:
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032406Cu); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 1u, depth + 1u); else { c.pc = 0x0013C000u; return; } if (c.pc != 0x0032406Cu) [[unlikely]] return; }
L_0032406C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324074u); set32(c.r[4], c.r[16].w[0] + 8320u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00324074u) [[unlikely]] return; }
L_00324074:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324080u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00324080u) [[unlikely]] return; }
L_00324080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324088u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324088u) [[unlikely]] return; }
L_00324088:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003240C0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003240E4; } }
L_003240C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_003240E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00324100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324118u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00324118u) [[unlikely]] return; }
L_00324118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324120u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324120u) [[unlikely]] return; }
L_00324120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032413C; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00324134u) [[unlikely]] return; }
L_00324134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032413Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0032413Cu) [[unlikely]] return; }
L_0032413C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324150:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2544u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324180:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241C8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003241C8u) [[unlikely]] return; }
L_003241C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00324204; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003241FCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003241FCu) [[unlikely]] return; }
L_003241FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00324274; } }
L_00324204:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0032424C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324240u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00324240u) [[unlikely]] return; }
L_00324240:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324258; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0032424C:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
L_00324258:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324270u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00324270u) [[unlikely]] return; }
L_00324270:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324274:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032429Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032429Cu) [[unlikely]] return; }
L_0032429C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003242A8u) [[unlikely]] return; }
L_003242A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003242B0u) [[unlikely]] return; }
L_003242B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_003242DC; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003242C8u) [[unlikely]] return; }
L_003242C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003242D0u) [[unlikely]] return; }
L_003242D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0032436C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_003242DC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003242E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003242E8u) [[unlikely]] return; }
L_003242E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0032431C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_0032431C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324328u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324328u) [[unlikely]] return; }
L_00324328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324368; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324368; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324368u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00324368u) [[unlikely]] return; }
L_00324368:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0032436C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324394u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324394u) [[unlikely]] return; }
L_00324394:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243B4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003243B4u) [[unlikely]] return; }
L_003243B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003243DC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00324410; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003243DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003243E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003243E4u) [[unlikely]] return; }
L_003243E4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 11;
L_00324410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324418u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00324418u) [[unlikely]] return; }
L_00324418:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032445Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0032445Cu) [[unlikely]] return; }
L_0032445C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324480u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00324480u) [[unlikely]] return; }
L_00324480:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032448Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0032448Cu) [[unlikely]] return; }
L_0032448C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324494u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324494u) [[unlikely]] return; }
L_00324494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_003244BC; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003244A8u) [[unlikely]] return; }
L_003244A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003244B0u) [[unlikely]] return; }
L_003244B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00324514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 1;
L_003244BC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003244C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x003244C8u) [[unlikely]] return; }
L_003244C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324510; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F8C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD0C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = 0u;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324510u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00324510u) [[unlikely]] return; }
L_00324510:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324514:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032453Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032453Cu) [[unlikely]] return; }
L_0032453C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324548u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00324548u) [[unlikely]] return; }
L_00324548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324550u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324550u) [[unlikely]] return; }
L_00324550:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032456C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324564u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00324564u) [[unlikely]] return; }
L_00324564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032456Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0032456Cu) [[unlikely]] return; }
L_0032456C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324580:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003245B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003245F8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003245F8u) [[unlikely]] return; }
L_003245F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00324634; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032462Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0032462Cu) [[unlikely]] return; }
L_0032462C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003246A8; } }
L_00324634:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0032466C; } }
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324660u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00324660u) [[unlikely]] return; }
L_00324660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003246A4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0032466C:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032468Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0032468Cu) [[unlikely]] return; }
L_0032468C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003246A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003246A4u) [[unlikely]] return; }
L_003246A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003246A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003246C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003246DCu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003246DCu) [[unlikely]] return; }
L_003246DC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003246E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003246E8u) [[unlikely]] return; }
L_003246E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003246F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003246F0u) [[unlikely]] return; }
L_003246F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0032471C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324708u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00324708u) [[unlikely]] return; }
L_00324708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324710u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00324710u) [[unlikely]] return; }
L_00324710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003247F0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0032471C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324728u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324728u) [[unlikely]] return; }
L_00324728:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0032475C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_0032475C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324768u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324768u) [[unlikely]] return; }
L_00324768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003247EC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_003247B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247A8u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003247A8u) [[unlikely]] return; }
L_003247A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003247EC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003247B4:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247D4u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003247D4u) [[unlikely]] return; }
L_003247D4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003247ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003247ECu) [[unlikely]] return; }
L_003247EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003247F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324818u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00324818u) [[unlikely]] return; }
L_00324818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324820u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324820u) [[unlikely]] return; }
L_00324820:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324840u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00324840u) [[unlikely]] return; }
L_00324840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00324864; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032489C; } }
L_00324864:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF30000u);
    c.r[3].d[0] = c.r[2].d[0] | 13107ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032489Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0032489Cu) [[unlikely]] return; }
L_0032489C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003248B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248CCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003248CCu) [[unlikely]] return; }
L_003248CC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003248D8u) [[unlikely]] return; }
L_003248D8:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003248F8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003248F8u) [[unlikely]] return; }
L_003248F8:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00324920; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00324944; } }
L_00324920:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324944u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00324944u) [[unlikely]] return; }
L_00324944:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324978u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00324978u) [[unlikely]] return; }
L_00324978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324980u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00324980u) [[unlikely]] return; }
L_00324980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_003249A8; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324994u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00324994u) [[unlikely]] return; }
L_00324994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032499Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0032499Cu) [[unlikely]] return; }
L_0032499C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003249DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 1;
L_003249A8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003249B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x003249B4u) [[unlikely]] return; }
L_003249B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003249D8; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_003249D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003249DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003249F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2608u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324A10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324A30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2640u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324A50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00324A98; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324A8Cu); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324A8Cu) [[unlikely]] return; }
L_00324A8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00324AB4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00324A98:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AB0u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324AB0u) [[unlikely]] return; }
L_00324AB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324AB4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00324AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324AD4u) [[unlikely]] return; }
L_00324AD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00324AF4; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324AE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00324AE8u) [[unlikely]] return; }
L_00324AE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00324B80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00324AF4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324B00u) [[unlikely]] return; }
L_00324B00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00324B2C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 9;
L_00324B2C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324B38u) [[unlikely]] return; }
L_00324B38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324B7C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324B7C; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u - 4u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324B60u) [[unlikely]] return; }
L_00324B60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324B7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324B7Cu) [[unlikely]] return; }
L_00324B7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324B80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324BA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324BA4u) [[unlikely]] return; }
L_00324BA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324BE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324BC4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324BC4u) [[unlikely]] return; }
L_00324BC4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324BE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324BE0u) [[unlikely]] return; }
L_00324BE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C04u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324C04u) [[unlikely]] return; }
L_00324C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00324CD0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C24u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00324C24u) [[unlikely]] return; }
L_00324C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324CA8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00324C38u) [[unlikely]] return; }
L_00324C38:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00324C44u) [[unlikely]] return; }
L_00324C44:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C50u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00324C50u) [[unlikely]] return; }
L_00324C50:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00324C5Cu) [[unlikely]] return; }
L_00324C5C:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324C68u) [[unlikely]] return; }
L_00324C68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C84u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324C84u) [[unlikely]] return; }
L_00324C84:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324C90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00324C90u) [[unlikely]] return; }
L_00324C90:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CA0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00324CA0u) [[unlikely]] return; }
L_00324CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00324CF8; } }
L_00324CA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CBCu); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00324CBCu) [[unlikely]] return; }
L_00324CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00324CC4u) [[unlikely]] return; }
L_00324CC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00324CF4; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00324CD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324CD8u) [[unlikely]] return; }
L_00324CD8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00324CE4u) [[unlikely]] return; }
L_00324CE4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324CF4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00324CF4u) [[unlikely]] return; }
L_00324CF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324CF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D24u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324D24u) [[unlikely]] return; }
L_00324D24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00324D4C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D40u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00324D40u) [[unlikely]] return; }
L_00324D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00324D5C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_00324D4C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324D58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x00324D58u) [[unlikely]] return; }
L_00324D58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324D5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324D70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00324D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00324DD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[6], 0u + 8u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[7], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DCCu); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324DCCu) [[unlikely]] return; }
L_00324DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00324DF4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00324DD8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324DF0u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324DF0u) [[unlikely]] return; }
L_00324DF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324DF4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00324E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E14u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324E14u) [[unlikely]] return; }
L_00324E14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00324E34; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00324E28u) [[unlikely]] return; }
L_00324E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00324EC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00324E34:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324E40u) [[unlikely]] return; }
L_00324E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00324E6C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 9;
L_00324E6C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324E78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00324E78u) [[unlikely]] return; }
L_00324E78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324EBC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00324EBC; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u - 4u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324EA0u) [[unlikely]] return; }
L_00324EA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324EBCu) [[unlikely]] return; }
L_00324EBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00324EC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324EE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324EE4u) [[unlikely]] return; }
L_00324EE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324F20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F04u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324F04u) [[unlikely]] return; }
L_00324F04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324F20u) [[unlikely]] return; }
L_00324F20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00324F30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00324F44u) [[unlikely]] return; }
L_00324F44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00325010; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F64u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00324F64u) [[unlikely]] return; }
L_00324F64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00324FE8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F78u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00324F78u) [[unlikely]] return; }
L_00324F78:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00324F84u) [[unlikely]] return; }
L_00324F84:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00324F90u) [[unlikely]] return; }
L_00324F90:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324F9Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00324F9Cu) [[unlikely]] return; }
L_00324F9C:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00324FA8u) [[unlikely]] return; }
L_00324FA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FC4u); set32(c.r[6], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00324FC4u) [[unlikely]] return; }
L_00324FC4:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00324FD0u) [[unlikely]] return; }
L_00324FD0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FE0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00324FE0u) [[unlikely]] return; }
L_00324FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325038; } }
L_00324FE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00324FFCu); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00324FFCu) [[unlikely]] return; }
L_00324FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325004u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00325004u) [[unlikely]] return; }
L_00325004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325034; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00325010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325018u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00325018u) [[unlikely]] return; }
L_00325018:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325024u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00325024u) [[unlikely]] return; }
L_00325024:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325034u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00325034u) [[unlikely]] return; }
L_00325034:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325038:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325064u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00325064u) [[unlikely]] return; }
L_00325064:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0032508C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325080u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00325080u) [[unlikely]] return; }
L_00325080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0032509C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0032508C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325098u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x00325098u) [[unlikely]] return; }
L_00325098:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0032509C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003250B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003250C8u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003250C8u) [[unlikely]] return; }
L_003250C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003250E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003250E8u) [[unlikely]] return; }
L_003250E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032511Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032511Cu) [[unlikely]] return; }
L_0032511C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0032517C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325170u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00325170u) [[unlikely]] return; }
L_00325170:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325198; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0032517C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325198u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00325198u) [[unlikely]] return; }
L_00325198:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251B0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003251B0u) [[unlikely]] return; }
L_003251B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003251C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251DCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003251DCu) [[unlikely]] return; }
L_003251DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003251E4u) [[unlikely]] return; }
L_003251E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00325210; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003251FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x003251FCu) [[unlikely]] return; }
L_003251FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325204u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00325204u) [[unlikely]] return; }
L_00325204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0032529C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00325210:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032521Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0032521Cu) [[unlikely]] return; }
L_0032521C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00325248; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 9;
L_00325248:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325254u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00325254u) [[unlikely]] return; }
L_00325254:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325298; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325298; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u - 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032527Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0032527Cu) [[unlikely]] return; }
L_0032527C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325298u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00325298u) [[unlikely]] return; }
L_00325298:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0032529C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003252B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252CCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003252CCu) [[unlikely]] return; }
L_003252CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003252D4u) [[unlikely]] return; }
L_003252D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325314; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003252F8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003252F8u) [[unlikely]] return; }
L_003252F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325314u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00325314u) [[unlikely]] return; }
L_00325314:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032534Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032534Cu) [[unlikely]] return; }
L_0032534C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325354u) [[unlikely]] return; }
L_00325354:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00325428; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325378u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00325378u) [[unlikely]] return; }
L_00325378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_0032540C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032538Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0032538Cu) [[unlikely]] return; }
L_0032538C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325398u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00325398u) [[unlikely]] return; }
L_00325398:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253A4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x003253A4u) [[unlikely]] return; }
L_003253A4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253B0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x003253B0u) [[unlikely]] return; }
L_003253B0:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003253BCu) [[unlikely]] return; }
L_003253BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253D8u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003253D8u) [[unlikely]] return; }
L_003253D8:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003253F0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003253F0u) [[unlikely]] return; }
L_003253F0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325400u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00325400u) [[unlikely]] return; }
L_00325400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325444; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_0032540C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00325414u) [[unlikely]] return; }
L_00325414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032541Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0032541Cu) [[unlikely]] return; }
L_0032541C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325440; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00325428:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325430u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00325430u) [[unlikely]] return; }
L_00325430:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325440u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00325440u) [[unlikely]] return; }
L_00325440:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325444:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325464u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325464u) [[unlikely]] return; }
L_00325464:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325484; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032547Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0032547Cu) [[unlikely]] return; }
L_0032547C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00325484u) [[unlikely]] return; }
L_00325484:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003254A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[2], c.r[28].w[0] - 27536u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003254C0:
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[7].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[8].w[0]));
    st32((c.r[4].w[0] + 1200u), c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7784u)));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7786u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00325500:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032551Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0032551Cu) [[unlikely]] return; }
L_0032551C:
    c.r[3].d[0] = ld8((c.r[17].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7784u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0032553C; } }
    c.r[4].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00325560; } }
L_0032553C:
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7786u)));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0]));
    c.r[6].d[0] = ld8((c.r[17].w[0] + 1u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.f[12] = ld32((c.r[16].w[0] + 7796u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325560u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00325560u) [[unlikely]] return; }
L_00325560:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0032557C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0032557C:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_003256A8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003255C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_003255C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255CCu); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x003255CCu) [[unlikely]] return; }
L_003255CC:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x003255DCu) [[unlikely]] return; }
L_003255DC:
    set32(c.r[17], c.r[17].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[5].d[0];  if (t) { goto L_00325618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003255F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x003255F4u) [[unlikely]] return; }
L_003255F4:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325600u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00325600u) [[unlikely]] return; }
L_00325600:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032560Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 268u, depth + 1u); else { c.pc = 0x002E70C0u; return; } if (c.pc != 0x0032560Cu) [[unlikely]] return; }
L_0032560C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325618u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00325618u) [[unlikely]] return; }
L_00325618:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00325694; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032562Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0032562Cu) [[unlikely]] return; }
L_0032562C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325638u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00325638u) [[unlikely]] return; }
L_00325638:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325644u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x00325644u) [[unlikely]] return; }
L_00325644:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_00325680; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_0032567C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (t) { goto L_003256A8; } }
L_0032567C:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_00325680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325688u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00325688u) [[unlikely]] return; }
L_00325688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_003256AC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00325694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032569Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0032569Cu) [[unlikely]] return; }
L_0032569C:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003256A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003256A8u) [[unlikely]] return; }
L_003256A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003256AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003256C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003256E0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00325710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325758u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325758u) [[unlikely]] return; }
L_00325758:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_003257A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325794u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325794u) [[unlikely]] return; }
L_00325794:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325830; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_003257A0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003257ACu) [[unlikely]] return; }
L_003257AC:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0032580C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003257E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003257E8u) [[unlikely]] return; }
L_003257E8:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325800u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325800u) [[unlikely]] return; }
L_00325800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032582C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0032580C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032582Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0032582Cu) [[unlikely]] return; }
L_0032582C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325830:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032585Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032585Cu) [[unlikely]] return; }
L_0032585C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325868u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325868u) [[unlikely]] return; }
L_00325868:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325870u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325870u) [[unlikely]] return; }
L_00325870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325948; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325888u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00325888u) [[unlikely]] return; }
L_00325888:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00325920; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003258D0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_003258B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0032594C; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_003258B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003258BCu) [[unlikely]] return; }
L_003258BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003258C4u) [[unlikely]] return; }
L_003258C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325948; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003258D0:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003258FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003258FCu) [[unlikely]] return; }
L_003258FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[5], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325918u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325918u) [[unlikely]] return; }
L_00325918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325948; } }
L_00325920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325948u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325948u) [[unlikely]] return; }
L_00325948:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0032594C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325974u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325974u) [[unlikely]] return; }
L_00325974:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325994u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00325994u) [[unlikely]] return; }
L_00325994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003259BC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00325A60; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003259BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003259C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003259C4u) [[unlikely]] return; }
L_003259C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003259D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003259D4u) [[unlikely]] return; }
L_003259D4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00325A24; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCE60000u);
    set32(c.r[5], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[7], 0u + 3u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A1Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325A1Cu) [[unlikely]] return; }
L_00325A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325A5C; } }
L_00325A24:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00325A5C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00325A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325A68u) [[unlikely]] return; }
L_00325A68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325A94u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325A94u) [[unlikely]] return; }
L_00325A94:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AA4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00325AA4u) [[unlikely]] return; }
L_00325AA4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325AB0u) [[unlikely]] return; }
L_00325AB0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325AD0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00325AD0u) [[unlikely]] return; }
L_00325AD0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00325AF8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00325B48; } }
L_00325AF8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[4].d[0] = c.r[2].d[0] | 26214ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCE60000u);
    c.r[3].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B48u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325B48u) [[unlikely]] return; }
L_00325B48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325B60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325B88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00325B88u) [[unlikely]] return; }
L_00325B88:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BACu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00325BACu) [[unlikely]] return; }
L_00325BAC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325BB8u) [[unlikely]] return; }
L_00325BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325BC0u) [[unlikely]] return; }
L_00325BC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00325BE8; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00325BD4u) [[unlikely]] return; }
L_00325BD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00325BDCu) [[unlikely]] return; }
L_00325BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00325BE8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325BF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00325BF4u) [[unlikely]] return; }
L_00325BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_00325C10; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 5;
L_00325C10:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00325C1Cu) [[unlikely]] return; }
L_00325C1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325C7C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00325C7C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FF10000u);
    c.r[4].d[0] = c.r[2].d[0] | 60293ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD710000u);
    c.r[3].d[0] = c.r[2].d[0] | 60293ull;
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325C7Cu); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325C7Cu) [[unlikely]] return; }
L_00325C7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325C80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00325CACu) [[unlikely]] return; }
L_00325CAC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325CB8u) [[unlikely]] return; }
L_00325CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325CC0u) [[unlikely]] return; }
L_00325CC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);  if (t) { goto L_00325CE8; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00325CD4u) [[unlikely]] return; }
L_00325CD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00325CDCu) [[unlikely]] return; }
L_00325CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325D10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.budget -= 1;
L_00325CE8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325CF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00325CF4u) [[unlikely]] return; }
L_00325CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325D0C; } }
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00325D0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325D10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325D20:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00325D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325D98u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325D98u) [[unlikely]] return; }
L_00325D98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00325DE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325DD4u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325DD4u) [[unlikely]] return; }
L_00325DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325E6C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00325DE0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325DECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00325DECu) [[unlikely]] return; }
L_00325DEC:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00325E48; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00325E24u) [[unlikely]] return; }
L_00325E24:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E3Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325E3Cu) [[unlikely]] return; }
L_00325E3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325E68; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00325E48:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325E68u) [[unlikely]] return; }
L_00325E68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325E6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325E80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325E9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00325E9Cu) [[unlikely]] return; }
L_00325E9C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00325EA8u) [[unlikely]] return; }
L_00325EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325EB0u) [[unlikely]] return; }
L_00325EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00325F80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00325EC8u) [[unlikely]] return; }
L_00325EC8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00325F58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00325F10; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00325EF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00325F84; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00325EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325EFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00325EFCu) [[unlikely]] return; }
L_00325EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00325F04u) [[unlikely]] return; }
L_00325F04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325F80; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00325F10:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00325F38u) [[unlikely]] return; }
L_00325F38:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F50u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325F50u) [[unlikely]] return; }
L_00325F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00325F80; } }
L_00325F58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325F80u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00325F80u) [[unlikely]] return; }
L_00325F80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00325F84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00325F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00325FA4u) [[unlikely]] return; }
L_00325FA4:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FC4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00325FC4u) [[unlikely]] return; }
L_00325FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00325FEC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0032608C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00325FEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00325FF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00325FF4u) [[unlikely]] return; }
L_00325FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326004u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00326004u) [[unlikely]] return; }
L_00326004:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00326050; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326048u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326048u) [[unlikely]] return; }
L_00326048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326088; } }
L_00326050:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_00326088:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0032608C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326094u) [[unlikely]] return; }
L_00326094:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003260B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003260C4u) [[unlikely]] return; }
L_003260C4:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003260D4u) [[unlikely]] return; }
L_003260D4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003260E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003260E0u) [[unlikely]] return; }
L_003260E0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326100u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00326100u) [[unlikely]] return; }
L_00326100:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00326128; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00326174; } }
L_00326128:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[4].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326174u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326174u) [[unlikely]] return; }
L_00326174:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003261ACu) [[unlikely]] return; }
L_003261AC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003261B8u) [[unlikely]] return; }
L_003261B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003261C0u) [[unlikely]] return; }
L_003261C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003261DC; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003261D4u) [[unlikely]] return; }
L_003261D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003261DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003261DCu) [[unlikely]] return; }
L_003261DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003261F0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00326220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326268u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326268u) [[unlikely]] return; }
L_00326268:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_003262B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262A4u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003262A4u) [[unlikely]] return; }
L_003262A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00326334; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_003262B0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003262BCu) [[unlikely]] return; }
L_003262BC:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00326310; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003262ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003262ECu) [[unlikely]] return; }
L_003262EC:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326304u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326304u) [[unlikely]] return; }
L_00326304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326330; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00326310:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326330u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326330u) [[unlikely]] return; }
L_00326330:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00326334:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326340:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032635Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032635Cu) [[unlikely]] return; }
L_0032635C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326368u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00326368u) [[unlikely]] return; }
L_00326368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326370u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326370u) [[unlikely]] return; }
L_00326370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326438; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326388u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00326388u) [[unlikely]] return; }
L_00326388:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00326410; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003263D0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_003263B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0032643C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_003263B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003263BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003263BCu) [[unlikely]] return; }
L_003263BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003263C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003263C4u) [[unlikely]] return; }
L_003263C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326438; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003263D0:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003263F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003263F0u) [[unlikely]] return; }
L_003263F0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326408u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326408u) [[unlikely]] return; }
L_00326408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326438; } }
L_00326410:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326438u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326438u) [[unlikely]] return; }
L_00326438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0032643C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326464u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326464u) [[unlikely]] return; }
L_00326464:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326484u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326484u) [[unlikely]] return; }
L_00326484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003264AC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00326540; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003264AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003264B4u) [[unlikely]] return; }
L_003264B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003264C4u) [[unlikely]] return; }
L_003264C4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00326504; } }
    set32(c.r[6], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003264FCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003264FCu) [[unlikely]] return; }
L_003264FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032653C; } }
L_00326504:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0032653C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00326540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326548u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326548u) [[unlikely]] return; }
L_00326548:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326574u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326574u) [[unlikely]] return; }
L_00326574:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326584u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326584u) [[unlikely]] return; }
L_00326584:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326590u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326590u) [[unlikely]] return; }
L_00326590:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003265B0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003265B0u) [[unlikely]] return; }
L_003265B0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003265D8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0032661C; } }
L_003265D8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032661Cu); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0032661Cu) [[unlikely]] return; }
L_0032661C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032664Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032664Cu) [[unlikely]] return; }
L_0032664C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326658u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326658u) [[unlikely]] return; }
L_00326658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326660u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326660u) [[unlikely]] return; }
L_00326660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032667C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326674u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00326674u) [[unlikely]] return; }
L_00326674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032667Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0032667Cu) [[unlikely]] return; }
L_0032667C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326690:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 2992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003266C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326708u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326708u) [[unlikely]] return; }
L_00326708:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00326750; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326744u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326744u) [[unlikely]] return; }
L_00326744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003267D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00326750:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032675Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0032675Cu) [[unlikely]] return; }
L_0032675C:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003267B4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326790u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00326790u) [[unlikely]] return; }
L_00326790:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267A8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003267A8u) [[unlikely]] return; }
L_003267A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003267D4; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_003267B4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003267D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003267D4u) [[unlikely]] return; }
L_003267D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003267D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003267F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032680Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032680Cu) [[unlikely]] return; }
L_0032680C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326818u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00326818u) [[unlikely]] return; }
L_00326818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326820u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326820u) [[unlikely]] return; }
L_00326820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003268EC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326838u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00326838u) [[unlikely]] return; }
L_00326838:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003268C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00326880; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00326864; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003268F0; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00326864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032686Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0032686Cu) [[unlikely]] return; }
L_0032686C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326874u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00326874u) [[unlikely]] return; }
L_00326874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003268EC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00326880:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003268A4u) [[unlikely]] return; }
L_003268A4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268BCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003268BCu) [[unlikely]] return; }
L_003268BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003268EC; } }
L_003268C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003268ECu); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003268ECu) [[unlikely]] return; }
L_003268EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003268F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326914u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326914u) [[unlikely]] return; }
L_00326914:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326934u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326934u) [[unlikely]] return; }
L_00326934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0032695C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003269F8; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0032695C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326964u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00326964u) [[unlikely]] return; }
L_00326964:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326974u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00326974u) [[unlikely]] return; }
L_00326974:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003269BC; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003269B4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003269B4u) [[unlikely]] return; }
L_003269B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003269F4; } }
L_003269BC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_003269F4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003269F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326A00u) [[unlikely]] return; }
L_00326A00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A24u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326A24u) [[unlikely]] return; }
L_00326A24:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A34u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326A34u) [[unlikely]] return; }
L_00326A34:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326A40u) [[unlikely]] return; }
L_00326A40:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326A60u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00326A60u) [[unlikely]] return; }
L_00326A60:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00326A88; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00326AD0; } }
L_00326A88:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AD0u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326AD0u) [[unlikely]] return; }
L_00326AD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326AE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326AFCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326AFCu) [[unlikely]] return; }
L_00326AFC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326B08u) [[unlikely]] return; }
L_00326B08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326B10u) [[unlikely]] return; }
L_00326B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326B2C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00326B24u) [[unlikely]] return; }
L_00326B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326B2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00326B2Cu) [[unlikely]] return; }
L_00326B2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326B40:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3024u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00326B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BB8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326BB8u) [[unlikely]] return; }
L_00326BB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00326BFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326BF4u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326BF4u) [[unlikely]] return; }
L_00326BF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00326C68; } }
L_00326BFC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00326C40; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00326C34u) [[unlikely]] return; }
L_00326C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326C4C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00326C40:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
L_00326C4C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326C64u) [[unlikely]] return; }
L_00326C64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00326C68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326C9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326C9Cu) [[unlikely]] return; }
L_00326C9C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326CA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326CA8u) [[unlikely]] return; }
L_00326CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326CB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326CB0u) [[unlikely]] return; }
L_00326CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326D0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_00326CFC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326CF0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326CF0u) [[unlikely]] return; }
L_00326CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00326D10; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_00326CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00326D04u) [[unlikely]] return; }
L_00326D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00326D0Cu) [[unlikely]] return; }
L_00326D0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00326D10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326D34u) [[unlikely]] return; }
L_00326D34:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D54u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326D54u) [[unlikely]] return; }
L_00326D54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00326D7C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00326DAC; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00326D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326D84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00326D84u) [[unlikely]] return; }
L_00326D84:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 10;
L_00326DAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326DB4u) [[unlikely]] return; }
L_00326DB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326DECu) [[unlikely]] return; }
L_00326DEC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326DF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326DF8u) [[unlikely]] return; }
L_00326DF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326E00u) [[unlikely]] return; }
L_00326E00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00326E1C; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00326E14u) [[unlikely]] return; }
L_00326E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326E1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00326E1Cu) [[unlikely]] return; }
L_00326E1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326E30:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00326E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EA8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326EA8u) [[unlikely]] return; }
L_00326EA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00326EEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326EE4u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326EE4u) [[unlikely]] return; }
L_00326EE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00326F80; } }
L_00326EEC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00326F24; } }
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326F18u) [[unlikely]] return; }
L_00326F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00326F7C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00326F24:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F64u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00326F64u) [[unlikely]] return; }
L_00326F64:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326F7Cu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00326F7Cu) [[unlikely]] return; }
L_00326F7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00326F80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00326F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FACu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00326FACu) [[unlikely]] return; }
L_00326FAC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00326FB8u) [[unlikely]] return; }
L_00326FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00326FC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00326FC0u) [[unlikely]] return; }
L_00326FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327064; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_0032700C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327000u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00327000u) [[unlikely]] return; }
L_00327000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00327068; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0032700C:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032704Cu); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0032704Cu) [[unlikely]] return; }
L_0032704C:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327064u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00327064u) [[unlikely]] return; }
L_00327064:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327068:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327098u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00327098u) [[unlikely]] return; }
L_00327098:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003270AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003270ACu) [[unlikely]] return; }
L_003270AC:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003270CCu); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003270CCu) [[unlikely]] return; }
L_003270CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003270F0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00327128; } }
L_003270F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[3].d[0] = c.r[2].d[0] | 26214ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327128u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00327128u) [[unlikely]] return; }
L_00327128:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032715Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032715Cu) [[unlikely]] return; }
L_0032715C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327168u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00327168u) [[unlikely]] return; }
L_00327168:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327188u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00327188u) [[unlikely]] return; }
L_00327188:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003271B0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003271F0; } }
L_003271B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42600000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003271F0u); st32((c.r[16].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003271F0u) [[unlikely]] return; }
L_003271F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032721Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0032721Cu) [[unlikely]] return; }
L_0032721C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327228u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00327228u) [[unlikely]] return; }
L_00327228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327230u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00327230u) [[unlikely]] return; }
L_00327230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032724C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327244u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00327244u) [[unlikely]] return; }
L_00327244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032724Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0032724Cu) [[unlikely]] return; }
L_0032724C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 27528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00327280:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 27520u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003272A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003272C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3080u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003272E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00327300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00327348; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032733Cu); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0032733Cu) [[unlikely]] return; }
L_0032733C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00327360; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00327348:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032735Cu); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0032735Cu) [[unlikely]] return; }
L_0032735C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327360:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00327370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327384u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00327384u) [[unlikely]] return; }
L_00327384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327394u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00327394u) [[unlikely]] return; }
L_00327394:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003273AC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003273AC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00327408; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_003273DC; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003273D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003273D0u) [[unlikely]] return; }
L_003273D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0032740C; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_003273DC:
    set32(c.r[5], 0u - 4u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003273ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003273ECu) [[unlikely]] return; }
L_003273EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327408u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327408u) [[unlikely]] return; }
L_00327408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0032740C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327434u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00327434u) [[unlikely]] return; }
L_00327434:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327470; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327454u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327454u) [[unlikely]] return; }
L_00327454:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327470u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327470u) [[unlikely]] return; }
L_00327470:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327494u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00327494u) [[unlikely]] return; }
L_00327494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_0032758C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x003274A8u) [[unlikely]] return; }
L_003274A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327564; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274DCu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x003274DCu) [[unlikely]] return; }
L_003274DC:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x003274E8u) [[unlikely]] return; }
L_003274E8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003274F4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x003274F4u) [[unlikely]] return; }
L_003274F4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327500u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00327500u) [[unlikely]] return; }
L_00327500:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032750Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0032750Cu) [[unlikely]] return; }
L_0032750C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327524u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327524u) [[unlikely]] return; }
L_00327524:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327530u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00327530u) [[unlikely]] return; }
L_00327530:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032754Cu); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0032754Cu) [[unlikely]] return; }
L_0032754C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032755Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0032755Cu) [[unlikely]] return; }
L_0032755C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003275B4; } }
L_00327564:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327574u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00327574u) [[unlikely]] return; }
L_00327574:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327580u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00327580u) [[unlikely]] return; }
L_00327580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003275B0; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_0032758C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327594u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327594u) [[unlikely]] return; }
L_00327594:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x003275A0u) [[unlikely]] return; }
L_003275A0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275B0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x003275B0u) [[unlikely]] return; }
L_003275B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003275B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003275C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003275E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275E0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003275E0u) [[unlikely]] return; }
L_003275E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00327760; } }
L_003275E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003275F0u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003275F0u) [[unlikely]] return; }
L_003275F0:
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327600u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x00327600u) [[unlikely]] return; }
L_00327600:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0032761C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0032761C:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00327664; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032764Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0032764Cu) [[unlikely]] return; }
L_0032764C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032765Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0032765Cu) [[unlikely]] return; }
L_0032765C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032775C; } }
L_00327664:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327680; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00327680:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003276BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003276B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276B0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003276B0u) [[unlikely]] return; }
L_003276B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032775C; } }
L_003276B8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003276BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x003276C4u) [[unlikely]] return; }
L_003276C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327720; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x003276D8u) [[unlikely]] return; }
L_003276D8:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x003276E4u) [[unlikely]] return; }
L_003276E4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276F0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x003276F0u) [[unlikely]] return; }
L_003276F0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003276FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x003276FCu) [[unlikely]] return; }
L_003276FC:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327708u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00327708u) [[unlikely]] return; }
L_00327708:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327718u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00327718u) [[unlikely]] return; }
L_00327718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_00327748; } }
L_00327720:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327730u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00327730u) [[unlikely]] return; }
L_00327730:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032773Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0032773Cu) [[unlikely]] return; }
L_0032773C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0032775C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_00327748:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    c.budget -= 5;
L_0032775C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327760:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00324000u < 16384u) { entry = entries_0089[(t - 0x00324000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00327790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003277D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003277CCu); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003277CCu) [[unlikely]] return; }
L_003277CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003277F4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003277D8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003277F0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003277F0u) [[unlikely]] return; }
L_003277F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003277F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00327800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327814u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00327814u) [[unlikely]] return; }
L_00327814:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0032787C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00327844; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327838u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00327838u) [[unlikely]] return; }
L_00327838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003278A4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00327844:
    set32(c.r[5], 0u - 4u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327854u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327854u) [[unlikely]] return; }
L_00327854:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327870u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327870u) [[unlikely]] return; }
L_00327870:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003278A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0032787C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327888u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00327888u) [[unlikely]] return; }
L_00327888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003278A0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003278A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003278A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003278B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003278C4u) [[unlikely]] return; }
L_003278C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327900; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003278E4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003278E4u) [[unlikely]] return; }
L_003278E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327900u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327900u) [[unlikely]] return; }
L_00327900:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327924u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00327924u) [[unlikely]] return; }
L_00327924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00327A2C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327938u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00327938u) [[unlikely]] return; }
L_00327938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327A04; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032796Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0032796Cu) [[unlikely]] return; }
L_0032796C:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327978u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00327978u) [[unlikely]] return; }
L_00327978:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327984u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00327984u) [[unlikely]] return; }
L_00327984:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327990u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00327990u) [[unlikely]] return; }
L_00327990:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0032799Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0032799Cu) [[unlikely]] return; }
L_0032799C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279B4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003279B4u) [[unlikely]] return; }
L_003279B4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[6], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[3], 0u + 13u);
    if (c.r[5].d[0] == 0) c.r[6].d[0] = c.r[3].d[0];
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279E0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003279E0u) [[unlikely]] return; }
L_003279E0:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x003279ECu) [[unlikely]] return; }
L_003279EC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003279FCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x003279FCu) [[unlikely]] return; }
L_003279FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00327A54; } }
L_00327A04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A14u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00327A14u) [[unlikely]] return; }
L_00327A14:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00327A20u) [[unlikely]] return; }
L_00327A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327A50; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00327A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327A34u) [[unlikely]] return; }
L_00327A34:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00327A40u) [[unlikely]] return; }
L_00327A40:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A50u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00327A50u) [[unlikely]] return; }
L_00327A50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327A54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00327A88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A80u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00327A80u) [[unlikely]] return; }
L_00327A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00327C00; } }
L_00327A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327A90u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00327A90u) [[unlikely]] return; }
L_00327A90:
    set32(c.r[5], 0u + 7u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x00327AA0u) [[unlikely]] return; }
L_00327AA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327ABC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00327ABC:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00327B04; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00327AECu) [[unlikely]] return; }
L_00327AEC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327AFCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00327AFCu) [[unlikely]] return; }
L_00327AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327BFC; } }
L_00327B04:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327B20; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00327B20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00327B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00327B58; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B50u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00327B50u) [[unlikely]] return; }
L_00327B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327BFC; } }
L_00327B58:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00327B5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B64u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00327B64u) [[unlikely]] return; }
L_00327B64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327BC0; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00327B78u) [[unlikely]] return; }
L_00327B78:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00327B84u) [[unlikely]] return; }
L_00327B84:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B90u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00327B90u) [[unlikely]] return; }
L_00327B90:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327B9Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00327B9Cu) [[unlikely]] return; }
L_00327B9C:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00327BA8u) [[unlikely]] return; }
L_00327BA8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BB8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00327BB8u) [[unlikely]] return; }
L_00327BB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_00327BE8; } }
L_00327BC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BD0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00327BD0u) [[unlikely]] return; }
L_00327BD0:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327BDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00327BDCu) [[unlikely]] return; }
L_00327BDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327BFC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_00327BE8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    c.budget -= 5;
L_00327BFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327C00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C28u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00327C28u) [[unlikely]] return; }
L_00327C28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 3168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00327C48u) [[unlikely]] return; }
L_00327C48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327C98u); st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00327C98u) [[unlikely]] return; }
L_00327C98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00327CD4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CC8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327CC8u) [[unlikely]] return; }
L_00327CC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327CF0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00327CD4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327CF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327CF0u) [[unlikely]] return; }
L_00327CF0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D08u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00327D08u) [[unlikely]] return; }
L_00327D08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D3Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00327D3Cu) [[unlikely]] return; }
L_00327D3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00327D44u) [[unlikely]] return; }
L_00327D44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00327DB4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00327D7C; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00327D68u) [[unlikely]] return; }
L_00327D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00327D70u) [[unlikely]] return; }
L_00327D70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00327DDC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00327D7C:
    set32(c.r[5], 0u - 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327D8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327D8Cu) [[unlikely]] return; }
L_00327D8C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327DA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327DA8u) [[unlikely]] return; }
L_00327DA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327DD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00327DB4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327DC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00327DC0u) [[unlikely]] return; }
L_00327DC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00327DD8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_00327DD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327DDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E0Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00327E0Cu) [[unlikely]] return; }
L_00327E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00327E14u) [[unlikely]] return; }
L_00327E14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00327E54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E38u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327E38u) [[unlikely]] return; }
L_00327E38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327E54u) [[unlikely]] return; }
L_00327E54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E8Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00327E8Cu) [[unlikely]] return; }
L_00327E8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327E94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00327E94u) [[unlikely]] return; }
L_00327E94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00327FA4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00327EACu) [[unlikely]] return; }
L_00327EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00327F7C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 12u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EE0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00327EE0u) [[unlikely]] return; }
L_00327EE0:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x00327EECu) [[unlikely]] return; }
L_00327EEC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327EF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00327EF8u) [[unlikely]] return; }
L_00327EF8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F04u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00327F04u) [[unlikely]] return; }
L_00327F04:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F10u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00327F10u) [[unlikely]] return; }
L_00327F10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F28u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00327F28u) [[unlikely]] return; }
L_00327F28:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F48u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00327F48u) [[unlikely]] return; }
L_00327F48:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F60u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00327F60u) [[unlikely]] return; }
L_00327F60:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F70u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00327F70u) [[unlikely]] return; }
L_00327F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00327FB4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00327F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F84u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00327F84u) [[unlikely]] return; }
L_00327F84:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00327F90u) [[unlikely]] return; }
L_00327F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327F98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00327F98u) [[unlikely]] return; }
L_00327F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00327FB0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00327FA4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FB0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00327FB0u) [[unlikely]] return; }
L_00327FB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00327FB4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00327FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00327FF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FE0u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00327FE0u) [[unlikely]] return; }
L_00327FE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00327FE8u) [[unlikely]] return; }
L_00327FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_008A(c, 17u, depth); } }
L_00327FF0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00327FFCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00327FFCu) [[unlikely]] return; }
L_00327FFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00328004u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00328004u) [[unlikely]] return; }
    [[clang::musttail]] return unit_008A(c, 2u, depth);
}

}
