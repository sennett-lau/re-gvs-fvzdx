#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0098[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8,
    0, 9, 0, 10, 11, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0,
    0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0,
    71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96,
    0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0,
    146, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0,
    151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0,
    0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0,
    0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0,
    0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0,
    0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0,
    0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217,
    0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0,
    239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0,
    395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0,
    406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414,
    0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0,
    421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0,
    0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456,
    0, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0,
    473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498,
    0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0,
    0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0,
    0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0,
};

void unit_0098(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00360000;
    case 2u: goto L_0036001C;
    case 3u: goto L_00360024;
    case 4u: goto L_0036002C;
    case 5u: goto L_00360034;
    case 6u: goto L_0036003C;
    case 7u: goto L_00360048;
    case 8u: goto L_0036007C;
    case 9u: goto L_00360084;
    case 10u: goto L_0036008C;
    case 11u: goto L_00360090;
    case 12u: goto L_00360094;
    case 13u: goto L_003600A8;
    case 14u: goto L_003600B0;
    case 15u: goto L_003600C0;
    case 16u: goto L_003600D0;
    case 17u: goto L_003600E0;
    case 18u: goto L_00360118;
    case 19u: goto L_0036013C;
    case 20u: goto L_00360140;
    case 21u: goto L_00360164;
    case 22u: goto L_00360188;
    case 23u: goto L_003601AC;
    case 24u: goto L_003601C0;
    case 25u: goto L_00360218;
    case 26u: goto L_0036022C;
    case 27u: goto L_00360260;
    case 28u: goto L_00360270;
    case 29u: goto L_003602B0;
    case 30u: goto L_003602C4;
    case 31u: goto L_003602EC;
    case 32u: goto L_00360300;
    case 33u: goto L_00360320;
    case 34u: goto L_00360334;
    case 35u: goto L_00360368;
    case 36u: goto L_00360378;
    case 37u: goto L_00360388;
    case 38u: goto L_0036039C;
    case 39u: goto L_003603B0;
    case 40u: goto L_003603C0;
    case 41u: goto L_003603D0;
    case 42u: goto L_003603D8;
    case 43u: goto L_003603E0;
    case 44u: goto L_003603E8;
    case 45u: goto L_0036043C;
    case 46u: goto L_00360450;
    case 47u: goto L_003604A8;
    case 48u: goto L_003604DC;
    case 49u: goto L_003604E4;
    case 50u: goto L_00360508;
    case 51u: goto L_00360548;
    case 52u: goto L_00360558;
    case 53u: goto L_00360560;
    case 54u: goto L_00360570;
    case 55u: goto L_00360598;
    case 56u: goto L_003605AC;
    case 57u: goto L_003605C0;
    case 58u: goto L_00360600;
    case 59u: goto L_00360610;
    case 60u: goto L_00360618;
    case 61u: goto L_00360628;
    case 62u: goto L_00360630;
    case 63u: goto L_00360644;
    case 64u: goto L_00360684;
    case 65u: goto L_00360690;
    case 66u: goto L_003606A4;
    case 67u: goto L_003606AC;
    case 68u: goto L_003606B4;
    case 69u: goto L_003606BC;
    case 70u: goto L_0036076C;
    case 71u: goto L_00360780;
    case 72u: goto L_003607F0;
    case 73u: goto L_003607FC;
    case 74u: goto L_00360824;
    case 75u: goto L_00360838;
    case 76u: goto L_00360880;
    case 77u: goto L_00360894;
    case 78u: goto L_003608C8;
    case 79u: goto L_003608D8;
    case 80u: goto L_003608E8;
    case 81u: goto L_00360910;
    case 82u: goto L_00360924;
    case 83u: goto L_00360930;
    case 84u: goto L_00360940;
    case 85u: goto L_00360948;
    case 86u: goto L_00360950;
    case 87u: goto L_00360958;
    case 88u: goto L_003609CC;
    case 89u: goto L_003609E0;
    case 90u: goto L_003609F0;
    case 91u: goto L_00360A3C;
    case 92u: goto L_00360A4C;
    case 93u: goto L_00360A54;
    case 94u: goto L_00360A64;
    case 95u: goto L_00360A6C;
    case 96u: goto L_00360A7C;
    case 97u: goto L_00360A90;
    case 98u: goto L_00360AA0;
    case 99u: goto L_00360AD8;
    case 100u: goto L_00360AE0;
    case 101u: goto L_00360B04;
    case 102u: goto L_00360B18;
    case 103u: goto L_00360B20;
    case 104u: goto L_00360B28;
    case 105u: goto L_00360B78;
    case 106u: goto L_00360B80;
    case 107u: goto L_00360B88;
    case 108u: goto L_00360BE8;
    case 109u: goto L_00360BF0;
    case 110u: goto L_00360BF8;
    case 111u: goto L_00360C38;
    case 112u: goto L_00360C40;
    case 113u: goto L_00360C5C;
    case 114u: goto L_00360C64;
    case 115u: goto L_00360C78;
    case 116u: goto L_00360CB0;
    case 117u: goto L_00360CD4;
    case 118u: goto L_00360CE4;
    case 119u: goto L_00360CEC;
    case 120u: goto L_00360D3C;
    case 121u: goto L_00360D44;
    case 122u: goto L_00360D4C;
    case 123u: goto L_00360D94;
    case 124u: goto L_00360DB8;
    case 125u: goto L_00360DC0;
    case 126u: goto L_00360DC8;
    case 127u: goto L_00360E14;
    case 128u: goto L_00360E24;
    case 129u: goto L_00360E2C;
    case 130u: goto L_00360E3C;
    case 131u: goto L_00360E44;
    case 132u: goto L_00360E54;
    case 133u: goto L_00360E70;
    case 134u: goto L_00360E84;
    case 135u: goto L_00360E98;
    case 136u: goto L_00360EA0;
    case 137u: goto L_00360EA8;
    case 138u: goto L_00360EF4;
    case 139u: goto L_00360F04;
    case 140u: goto L_00360F0C;
    case 141u: goto L_00360F1C;
    case 142u: goto L_00360F24;
    case 143u: goto L_00360F34;
    case 144u: goto L_00360F50;
    case 145u: goto L_00360F78;
    case 146u: goto L_00360F80;
    case 147u: goto L_00360F88;
    case 148u: goto L_00360FD0;
    case 149u: goto L_00360FDC;
    case 150u: goto L_00360FF0;
    case 151u: goto L_00361000;
    case 152u: goto L_00361008;
    case 153u: goto L_00361010;
    case 154u: goto L_00361018;
    case 155u: goto L_0036106C;
    case 156u: goto L_00361080;
    case 157u: goto L_00361090;
    case 158u: goto L_003610A0;
    case 159u: goto L_003610E0;
    case 160u: goto L_003610F0;
    case 161u: goto L_003610F8;
    case 162u: goto L_00361108;
    case 163u: goto L_00361110;
    case 164u: goto L_00361124;
    case 165u: goto L_00361174;
    case 166u: goto L_003611BC;
    case 167u: goto L_00361210;
    case 168u: goto L_00361220;
    case 169u: goto L_00361230;
    case 170u: goto L_0036127C;
    case 171u: goto L_0036128C;
    case 172u: goto L_00361294;
    case 173u: goto L_003612A8;
    case 174u: goto L_003612DC;
    case 175u: goto L_003612EC;
    case 176u: goto L_003612F4;
    case 177u: goto L_00361308;
    case 178u: goto L_00361310;
    case 179u: goto L_00361320;
    case 180u: goto L_00361330;
    case 181u: goto L_00361368;
    case 182u: goto L_0036138C;
    case 183u: goto L_003613B4;
    case 184u: goto L_003613D8;
    case 185u: goto L_003613FC;
    case 186u: goto L_00361410;
    case 187u: goto L_00361464;
    case 188u: goto L_0036146C;
    case 189u: goto L_00361484;
    case 190u: goto L_003614C0;
    case 191u: goto L_003614D0;
    case 192u: goto L_003614F0;
    case 193u: goto L_003614F8;
    case 194u: goto L_00361500;
    case 195u: goto L_00361510;
    case 196u: goto L_00361528;
    case 197u: goto L_00361540;
    case 198u: goto L_00361554;
    case 199u: goto L_003615C4;
    case 200u: goto L_003615CC;
    case 201u: goto L_003615DC;
    case 202u: goto L_003615EC;
    case 203u: goto L_003615F4;
    case 204u: goto L_00361604;
    case 205u: goto L_00361614;
    case 206u: goto L_00361628;
    case 207u: goto L_00361630;
    case 208u: goto L_0036165C;
    case 209u: goto L_0036166C;
    case 210u: goto L_0036169C;
    case 211u: goto L_003616AC;
    case 212u: goto L_003616BC;
    case 213u: goto L_003616C4;
    case 214u: goto L_003616D4;
    case 215u: goto L_003616E4;
    case 216u: goto L_003616EC;
    case 217u: goto L_003616FC;
    case 218u: goto L_0036170C;
    case 219u: goto L_00361730;
    case 220u: goto L_00361744;
    case 221u: goto L_0036175C;
    case 222u: goto L_00361770;
    case 223u: goto L_003617B0;
    case 224u: goto L_003617C4;
    case 225u: goto L_003617D4;
    case 226u: goto L_003617EC;
    case 227u: goto L_00361800;
    case 228u: goto L_00361820;
    case 229u: goto L_0036182C;
    case 230u: goto L_00361844;
    case 231u: goto L_0036184C;
    case 232u: goto L_0036185C;
    case 233u: goto L_00361874;
    case 234u: goto L_00361880;
    case 235u: goto L_003618C0;
    case 236u: goto L_003618CC;
    case 237u: goto L_003618DC;
    case 238u: goto L_003618F4;
    case 239u: goto L_00361900;
    case 240u: goto L_00361910;
    case 241u: goto L_00361944;
    case 242u: goto L_0036194C;
    case 243u: goto L_0036195C;
    case 244u: goto L_0036196C;
    case 245u: goto L_00361974;
    case 246u: goto L_00361988;
    case 247u: goto L_003619A0;
    case 248u: goto L_003619B0;
    case 249u: goto L_00361A00;
    case 250u: goto L_00361A10;
    case 251u: goto L_00361A58;
    case 252u: goto L_00361A70;
    case 253u: goto L_00361AAC;
    case 254u: goto L_00361AE0;
    case 255u: goto L_00361B24;
    case 256u: goto L_00361B38;
    case 257u: goto L_00361B54;
    case 258u: goto L_00361B64;
    case 259u: goto L_00361B74;
    case 260u: goto L_00361B84;
    case 261u: goto L_00361B94;
    case 262u: goto L_00361BE4;
    case 263u: goto L_00361BEC;
    case 264u: goto L_00361C20;
    case 265u: goto L_00361CA0;
    case 266u: goto L_00361CC0;
    case 267u: goto L_00361CD0;
    case 268u: goto L_00361CE0;
    case 269u: goto L_00361D00;
    case 270u: goto L_00361D08;
    case 271u: goto L_00361D20;
    case 272u: goto L_00361D38;
    case 273u: goto L_00361D4C;
    case 274u: goto L_00361D60;
    case 275u: goto L_00361D94;
    case 276u: goto L_00361DC0;
    case 277u: goto L_00361DD0;
    case 278u: goto L_00361E10;
    case 279u: goto L_00361E20;
    case 280u: goto L_00361E3C;
    case 281u: goto L_00361E44;
    case 282u: goto L_00361E4C;
    case 283u: goto L_00361E60;
    case 284u: goto L_00361E70;
    case 285u: goto L_00361E84;
    case 286u: goto L_00361EBC;
    case 287u: goto L_00361ECC;
    case 288u: goto L_00361EE4;
    case 289u: goto L_00361EF8;
    case 290u: goto L_00361F14;
    case 291u: goto L_00361F18;
    case 292u: goto L_00361F50;
    case 293u: goto L_00361F58;
    case 294u: goto L_00361F60;
    case 295u: goto L_00361F90;
    case 296u: goto L_00361F98;
    case 297u: goto L_00361FA0;
    case 298u: goto L_00361FA8;
    case 299u: goto L_00361FC4;
    case 300u: goto L_00362000;
    case 301u: goto L_0036202C;
    case 302u: goto L_00362034;
    case 303u: goto L_00362090;
    case 304u: goto L_003620A0;
    case 305u: goto L_003620F0;
    case 306u: goto L_00362144;
    case 307u: goto L_00362158;
    case 308u: goto L_00362180;
    case 309u: goto L_003621BC;
    case 310u: goto L_003621D0;
    case 311u: goto L_0036221C;
    case 312u: goto L_00362290;
    case 313u: goto L_003622B0;
    case 314u: goto L_003622C0;
    case 315u: goto L_003622D0;
    case 316u: goto L_003622FC;
    case 317u: goto L_00362328;
    case 318u: goto L_00362354;
    case 319u: goto L_00362380;
    case 320u: goto L_003623D8;
    case 321u: goto L_003623EC;
    case 322u: goto L_00362400;
    case 323u: goto L_00362420;
    case 324u: goto L_0036249C;
    case 325u: goto L_003624BC;
    case 326u: goto L_003624D0;
    case 327u: goto L_003624F8;
    case 328u: goto L_0036253C;
    case 329u: goto L_0036257C;
    case 330u: goto L_00362598;
    case 331u: goto L_003625AC;
    case 332u: goto L_003625CC;
    case 333u: goto L_003625E0;
    case 334u: goto L_00362600;
    case 335u: goto L_00362614;
    case 336u: goto L_00362640;
    case 337u: goto L_00362650;
    case 338u: goto L_00362680;
    case 339u: goto L_00362690;
    case 340u: goto L_003626C0;
    case 341u: goto L_003626D4;
    case 342u: goto L_00362700;
    case 343u: goto L_00362734;
    case 344u: goto L_0036274C;
    case 345u: goto L_00362760;
    case 346u: goto L_00362780;
    case 347u: goto L_00362788;
    case 348u: goto L_003627A0;
    case 349u: goto L_003627C0;
    case 350u: goto L_003627D0;
    case 351u: goto L_003627E0;
    case 352u: goto L_003627F0;
    case 353u: goto L_00362800;
    case 354u: goto L_00362810;
    case 355u: goto L_00362818;
    case 356u: goto L_00362830;
    case 357u: goto L_00362840;
    case 358u: goto L_00362878;
    case 359u: goto L_00362888;
    case 360u: goto L_003628C8;
    case 361u: goto L_003628D8;
    case 362u: goto L_00362908;
    case 363u: goto L_00362934;
    case 364u: goto L_00362968;
    case 365u: goto L_00362994;
    case 366u: goto L_003629F4;
    case 367u: goto L_00362A08;
    case 368u: goto L_00362A18;
    case 369u: goto L_00362A28;
    case 370u: goto L_00362A30;
    case 371u: goto L_00362A40;
    case 372u: goto L_00362A6C;
    case 373u: goto L_00362A74;
    case 374u: goto L_00362A80;
    case 375u: goto L_00362A90;
    case 376u: goto L_00362AA0;
    case 377u: goto L_00362AB0;
    case 378u: goto L_00362AC0;
    case 379u: goto L_00362AD0;
    case 380u: goto L_00362ADC;
    case 381u: goto L_00362B18;
    case 382u: goto L_00362B2C;
    case 383u: goto L_00362B5C;
    case 384u: goto L_00362B70;
    case 385u: goto L_00362B80;
    case 386u: goto L_00362BD0;
    case 387u: goto L_00362BF8;
    case 388u: goto L_00362C0C;
    case 389u: goto L_00362C18;
    case 390u: goto L_00362C30;
    case 391u: goto L_00362C40;
    case 392u: goto L_00362C50;
    case 393u: goto L_00362C60;
    case 394u: goto L_00362C70;
    case 395u: goto L_00362C80;
    case 396u: goto L_00362C8C;
    case 397u: goto L_00362CD0;
    case 398u: goto L_00362CF8;
    case 399u: goto L_00362D0C;
    case 400u: goto L_00362D18;
    case 401u: goto L_00362D30;
    case 402u: goto L_00362D40;
    case 403u: goto L_00362D50;
    case 404u: goto L_00362D60;
    case 405u: goto L_00362D70;
    case 406u: goto L_00362D80;
    case 407u: goto L_00362D8C;
    case 408u: goto L_00362DB8;
    case 409u: goto L_00362DD0;
    case 410u: goto L_00362DE0;
    case 411u: goto L_00362E0C;
    case 412u: goto L_00362E1C;
    case 413u: goto L_00362E4C;
    case 414u: goto L_00362E7C;
    case 415u: goto L_00362E90;
    case 416u: goto L_00362EB4;
    case 417u: goto L_00362EC8;
    case 418u: goto L_00362ED4;
    case 419u: goto L_00362EE0;
    case 420u: goto L_00362EF0;
    case 421u: goto L_00362F00;
    case 422u: goto L_00362F0C;
    case 423u: goto L_00362F60;
    case 424u: goto L_00362F94;
    case 425u: goto L_00362FA0;
    case 426u: goto L_00362FB0;
    case 427u: goto L_00362FC0;
    case 428u: goto L_00362FCC;
    case 429u: goto L_00363014;
    case 430u: goto L_00363020;
    case 431u: goto L_00363060;
    case 432u: goto L_00363070;
    case 433u: goto L_00363080;
    case 434u: goto L_003630B0;
    case 435u: goto L_003630C0;
    case 436u: goto L_003630E4;
    case 437u: goto L_003630F8;
    case 438u: goto L_00363104;
    case 439u: goto L_00363110;
    case 440u: goto L_00363120;
    case 441u: goto L_00363130;
    case 442u: goto L_0036313C;
    case 443u: goto L_00363190;
    case 444u: goto L_003631DC;
    case 445u: goto L_003631F0;
    case 446u: goto L_00363218;
    case 447u: goto L_00363244;
    case 448u: goto L_00363258;
    case 449u: goto L_00363270;
    case 450u: goto L_00363290;
    case 451u: goto L_003632D4;
    case 452u: goto L_003632E4;
    case 453u: goto L_003632F0;
    case 454u: goto L_00363328;
    case 455u: goto L_00363374;
    case 456u: goto L_0036337C;
    case 457u: goto L_0036338C;
    case 458u: goto L_00363394;
    case 459u: goto L_003633A4;
    case 460u: goto L_003633C4;
    case 461u: goto L_003633D4;
    case 462u: goto L_00363418;
    case 463u: goto L_00363444;
    case 464u: goto L_00363450;
    case 465u: goto L_00363470;
    case 466u: goto L_00363484;
    case 467u: goto L_00363498;
    case 468u: goto L_003634A8;
    case 469u: goto L_003634BC;
    case 470u: goto L_003634D0;
    case 471u: goto L_003634E0;
    case 472u: goto L_003634F0;
    case 473u: goto L_00363500;
    case 474u: goto L_0036350C;
    case 475u: goto L_00363560;
    case 476u: goto L_0036359C;
    case 477u: goto L_003635AC;
    case 478u: goto L_003635C0;
    case 479u: goto L_003635CC;
    case 480u: goto L_003635E0;
    case 481u: goto L_00363630;
    case 482u: goto L_00363644;
    case 483u: goto L_0036366C;
    case 484u: goto L_00363698;
    case 485u: goto L_003636C4;
    case 486u: goto L_003636D8;
    case 487u: goto L_00363700;
    case 488u: goto L_00363730;
    case 489u: goto L_0036375C;
    case 490u: goto L_00363770;
    case 491u: goto L_00363790;
    case 492u: goto L_003637C8;
    case 493u: goto L_003637F0;
    case 494u: goto L_00363814;
    case 495u: goto L_00363820;
    case 496u: goto L_00363858;
    case 497u: goto L_0036386C;
    case 498u: goto L_0036387C;
    case 499u: goto L_00363890;
    case 500u: goto L_003638A0;
    case 501u: goto L_003638C8;
    case 502u: goto L_003638E0;
    case 503u: goto L_00363914;
    case 504u: goto L_00363920;
    case 505u: goto L_0036394C;
    case 506u: goto L_00363970;
    case 507u: goto L_003639C4;
    case 508u: goto L_003639CC;
    case 509u: goto L_00363AB8;
    case 510u: goto L_00363AD0;
    case 511u: goto L_00363B18;
    case 512u: goto L_00363B20;
    case 513u: goto L_00363B34;
    case 514u: goto L_00363BA8;
    case 515u: goto L_00363BB8;
    case 516u: goto L_00363BF8;
    case 517u: goto L_00363C18;
    case 518u: goto L_00363C28;
    case 519u: goto L_00363C40;
    case 520u: goto L_00363C7C;
    case 521u: goto L_00363CE4;
    case 522u: goto L_00363D04;
    case 523u: goto L_00363D3C;
    case 524u: goto L_00363D7C;
    case 525u: goto L_00363D98;
    case 526u: goto L_00363DAC;
    case 527u: goto L_00363DC0;
    case 528u: goto L_00363DD4;
    case 529u: goto L_00363E04;
    case 530u: goto L_00363E10;
    case 531u: goto L_00363E58;
    case 532u: goto L_00363E84;
    case 533u: goto L_00363E90;
    case 534u: goto L_00363EA0;
    case 535u: goto L_00363EC0;
    case 536u: goto L_00363EF0;
    case 537u: goto L_00363F20;
    case 538u: goto L_00363F40;
    case 539u: goto L_00363F60;
    case 540u: goto L_00363F90;
    case 541u: goto L_00363FC0;
    case 542u: goto L_00363FF0;
    default: bad_entry(c, 0x00360000u); return;
    }
L_00360000:
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360014; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_003600A0; } }
L_00360014:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036001Cu);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x0036001Cu) [[unlikely]] return; }
L_0036001C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003601B0; } }
L_00360024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036002Cu);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x0036002Cu) [[unlikely]] return; }
L_0036002C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360034u);  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x00360034u) [[unlikely]] return; }
L_00360034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003601AC; } }
L_0036003C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360048u); c.r[16].d[0] = ld16((c.r[2].w[0] + 8152u));  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x00360048u) [[unlikely]] return; }
L_00360048:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003600A8; } }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_003600A8; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_003600A8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036007Cu);  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x0036007Cu) [[unlikely]] return; }
L_0036007C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003601AC; } }
L_00360084:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036008Cu);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x0036008Cu) [[unlikely]] return; }
L_0036008C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360094u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00360094u) [[unlikely]] return; }
    goto L_00360094;
L_00360090:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00360094:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003601AC; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_003600A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600A8u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003600A8u) [[unlikely]] return; }
L_003600A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600B0u);  if (depth < kMaxDepth) unit_0099(c, 53u, depth + 1u); else { c.pc = 0x003648C0u; return; } if (c.pc != 0x003600B0u) [[unlikely]] return; }
L_003600B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003601AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600C0u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x003600C0u) [[unlikely]] return; }
L_003600C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003601AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600D0u);  if (depth < kMaxDepth) unit_0099(c, 51u, depth + 1u); else { c.pc = 0x00364870u; return; } if (c.pc != 0x003600D0u) [[unlikely]] return; }
L_003600D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003601AC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003600E0u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003600E0u) [[unlikely]] return; }
L_003600E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0036015C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5240u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00360110; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003601AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003601AC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00360110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360118u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00360118u) [[unlikely]] return; }
L_00360118:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5243u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00360148; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036013Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x0036013Cu) [[unlikely]] return; }
L_0036013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003601AC; } }
    goto L_00360144;
L_00360140:
    c.budget -= 1;
L_00360144:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00360148:
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003601AC; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0036015C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360164u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00360164u) [[unlikely]] return; }
L_00360164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360198; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5240u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003601AC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360188u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00360188u) [[unlikely]] return; }
L_00360188:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5240u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003601AC; } }
L_00360198:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003601ACu); set32(c.r[4], c.r[2].w[0] + 5240u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003601ACu) [[unlikely]] return; }
L_003601AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003601B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003601C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0036032C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_003602BC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_00360224; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00360208; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003603B4; } }
L_00360208:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360218u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 34u, depth + 1u); else { c.pc = 0x00368260u; return; } if (c.pc != 0x00360218u) [[unlikely]] return; }
L_00360218:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00360224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036022Cu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0036022Cu) [[unlikely]] return; }
L_0036022C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003603B0; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25860u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360268; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360258; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003602A8; } }
L_00360258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360260u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360260u) [[unlikely]] return; }
L_00360260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
L_00360268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360270u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00360270u) [[unlikely]] return; }
L_00360270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036028C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003603B0; } }
L_0036028C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 9u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003603B0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003602A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602B0u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003602B0u) [[unlikely]] return; }
L_003602B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003602BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602C4u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003602C4u) [[unlikely]] return; }
L_003602C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360300; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26896u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003602E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003602F8; } }
L_003602E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003602ECu);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x003602ECu) [[unlikely]] return; }
L_003602EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003602F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360300u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360300u) [[unlikely]] return; }
L_00360300:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 8152u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003603B0; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360320u); st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 23u, depth + 1u); else { c.pc = 0x003681B0u; return; } if (c.pc != 0x00360320u) [[unlikely]] return; }
L_00360320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036032C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360334u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00360334u) [[unlikely]] return; }
L_00360334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003603B0; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25857u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360370; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360360; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003603A8; } }
L_00360360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360368u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360368u) [[unlikely]] return; }
L_00360368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
L_00360370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360378u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00360378u) [[unlikely]] return; }
L_00360378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00360394; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360388u);  if (depth < kMaxDepth) unit_0097(c, 307u, depth + 1u); else { c.pc = 0x0035E750u; return; } if (c.pc != 0x00360388u) [[unlikely]] return; }
L_00360388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00360394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036039Cu);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x0036039Cu) [[unlikely]] return; }
L_0036039C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003603B0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003603A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603B0u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003603B0u) [[unlikely]] return; }
L_003603B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003603B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003603C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603D0u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003603D0u) [[unlikely]] return; }
L_003603D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603D8u);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CAE0u; return; } if (c.pc != 0x003603D8u) [[unlikely]] return; }
L_003603D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603E0u);  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x003603E0u) [[unlikely]] return; }
L_003603E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003603E8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x003603E8u) [[unlikely]] return; }
L_003603E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036043Cu); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x0036043Cu) [[unlikely]] return; }
L_0036043C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00360450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_003605B8; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003604EC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036048C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00360688; } }
L_0036048C:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[4], 0u + 88u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], c.r[2].w[0] + 3520u);
    set32(c.r[5], c.r[2].w[0] + 4224u);
    c.budget -= 7;
L_003604A8:
    set32(c.r[3], ld32((c.r[6].w[0])));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    st32((c.r[5].w[0]), c.r[3].w[0]);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[6], c.r[6].w[0] + 8u);
    c.budget -= 8;
    { const bool t = c.r[4].sd[0] > 0; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003604A8u | kUnwind; return; } goto L_003604A8; } }
    set32(c.r[2], 0u + 92u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 137u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003604DCu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x003604DCu) [[unlikely]] return; }
L_003604DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003604E4u);  if (depth < kMaxDepth) unit_009A(c, 34u, depth + 1u); else { c.pc = 0x00368260u; return; } if (c.pc != 0x003604E4u) [[unlikely]] return; }
L_003604E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
L_003604EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[29].w[0] + 30u);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360508u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00360508u) [[unlikely]] return; }
L_00360508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360684; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25860u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360568; } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360550; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360540; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003605A4; } }
L_00360540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360548u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360548u) [[unlikely]] return; }
L_00360548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
L_00360550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360558u);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x00360558u) [[unlikely]] return; }
L_00360558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360560u);  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x00360560u) [[unlikely]] return; }
L_00360560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
L_00360568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360570u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00360570u) [[unlikely]] return; }
L_00360570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00360590; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00360684; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00360590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360598u);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00360598u) [[unlikely]] return; }
L_00360598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003605A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605ACu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003605ACu) [[unlikely]] return; }
L_003605AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003605B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003605C0u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003605C0u) [[unlikely]] return; }
L_003605C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360644; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25861u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360620; } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360608; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003605F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0036063C; } }
L_003605F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360600u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360600u) [[unlikely]] return; }
L_00360600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
L_00360608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360610u);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x00360610u) [[unlikely]] return; }
L_00360610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360618u);  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x00360618u) [[unlikely]] return; }
L_00360618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
L_00360620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360628u);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00360628u) [[unlikely]] return; }
L_00360628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360630u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00360630u) [[unlikely]] return; }
L_00360630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360684; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036063C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360644u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360644u) [[unlikely]] return; }
L_00360644:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360684; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360684u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00360684u) [[unlikely]] return; }
L_00360684:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00360688:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003606A4u) [[unlikely]] return; }
L_003606A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606ACu);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CAE0u; return; } if (c.pc != 0x003606ACu) [[unlikely]] return; }
L_003606AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606B4u);  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x003606B4u) [[unlikely]] return; }
L_003606B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003606BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x003606BCu) [[unlikely]] return; }
L_003606BC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_003606F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], 0u + 6u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036071C; } }
L_003606F4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 5u);
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0036071C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036076Cu); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x0036076Cu) [[unlikely]] return; }
L_0036076C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0036088C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00360870; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_003607F4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003607C8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00360928; } }
L_003607C8:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 92u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 28384u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607F0u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x003607F0u) [[unlikely]] return; }
L_003607F0:
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003607F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003607FCu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003607FCu) [[unlikely]] return; }
L_003607FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360838; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26896u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036081C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00360830; } }
L_0036081C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360824u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360824u) [[unlikely]] return; }
L_00360824:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360924; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00360830:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360838u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360838u) [[unlikely]] return; }
L_00360838:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360924; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00360924; } }
L_00360870:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360880u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 23u, depth + 1u); else { c.pc = 0x003681B0u; return; } if (c.pc != 0x00360880u) [[unlikely]] return; }
L_00360880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360924; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036088C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360894u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00360894u) [[unlikely]] return; }
L_00360894:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360924; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25857u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003608D0; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003608C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0036091C; } }
L_003608C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608C8u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x003608C8u) [[unlikely]] return; }
L_003608C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360924; } }
L_003608D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608D8u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003608D8u) [[unlikely]] return; }
L_003608D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003608F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003608E8u);  if (depth < kMaxDepth) unit_0097(c, 307u, depth + 1u); else { c.pc = 0x0035E750u; return; } if (c.pc != 0x003608E8u) [[unlikely]] return; }
L_003608E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360924; } }
L_003608F0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 20u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360910u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00360910u) [[unlikely]] return; }
L_00360910:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360924; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036091C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360924u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360924u) [[unlikely]] return; }
L_00360924:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00360928:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360930:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360940u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00360940u) [[unlikely]] return; }
L_00360940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360948u);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CAE0u; return; } if (c.pc != 0x00360948u) [[unlikely]] return; }
L_00360948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360950u);  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x00360950u) [[unlikely]] return; }
L_00360950:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360958u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x00360958u) [[unlikely]] return; }
L_00360958:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 7u);
    set32(c.r[3], 0u + 255u);
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609CCu); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x003609CCu) [[unlikely]] return; }
L_003609CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003609E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003609F0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003609F0u) [[unlikely]] return; }
L_003609F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00360A94; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25862u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360A74; } }
    set32(c.r[2], 0u + 25861u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360A5C; } }
    set32(c.r[2], 0u + 25858u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360A44; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360A34; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00360A88; } }
L_00360A34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A3Cu);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360A3Cu) [[unlikely]] return; }
L_00360A3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00360A94; } }
L_00360A44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A4Cu);  if (depth < kMaxDepth) unit_009A(c, 13u, depth + 1u); else { c.pc = 0x003680D0u; return; } if (c.pc != 0x00360A4Cu) [[unlikely]] return; }
L_00360A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A54u);  if (depth < kMaxDepth) unit_0098(c, 150u, depth + 1u); else { c.pc = 0x00360FF0u; return; } if (c.pc != 0x00360A54u) [[unlikely]] return; }
L_00360A54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00360A94; } }
L_00360A5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A64u);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00360A64u) [[unlikely]] return; }
L_00360A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A6Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00360A6Cu) [[unlikely]] return; }
L_00360A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00360A94; } }
L_00360A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A7Cu);  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x00360A7Cu) [[unlikely]] return; }
L_00360A7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360A90; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00360A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360A90u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360A90u) [[unlikely]] return; }
L_00360A90:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00360A94:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5235u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00360FDC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 24144u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00360AD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360AE0u);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360AE0u) [[unlikely]] return; }
L_00360AE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 7u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B04u); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00360B04u) [[unlikely]] return; }
L_00360B04:
    set32(c.r[2], 0u + 152u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 133u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B18u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00360B18u) [[unlikely]] return; }
L_00360B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00360FE0; } }
L_00360B20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B28u);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360B28u) [[unlikely]] return; }
L_00360B28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360FDC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 133u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B78u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00360B78u) [[unlikely]] return; }
L_00360B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360B80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360B88u);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360B88u) [[unlikely]] return; }
L_00360B88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360FDC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 134u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BE8u); set32(c.r[5], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x00360BE8u) [[unlikely]] return; }
L_00360BE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360BF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360BF8u);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360BF8u) [[unlikely]] return; }
L_00360BF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360FDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00360FDC; } }
L_00360C38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C40u);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360C40u) [[unlikely]] return; }
L_00360C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C5Cu); set32(c.r[4], c.r[2].w[0] + 5510u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x00360C5Cu) [[unlikely]] return; }
L_00360C5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C64u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00360C64u) [[unlikely]] return; }
L_00360C64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00360CA8; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360C78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00360C78u) [[unlikely]] return; }
L_00360C78:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[4].w[0] + 5511u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5235u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00360FDC; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00360CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CB0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00360CB0u) [[unlikely]] return; }
L_00360CB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5510u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CD4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00360CD4u) [[unlikely]] return; }
L_00360CD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5510u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00360FDC; } }
L_00360CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360CECu);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360CECu) [[unlikely]] return; }
L_00360CEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360FDC; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 134u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D3Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00360D3Cu) [[unlikely]] return; }
L_00360D3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360D44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D4Cu);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360D4Cu) [[unlikely]] return; }
L_00360D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360FDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5510u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 9u);  if (t) { goto L_00360DA0; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360D94u); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 28u, depth + 1u); else { c.pc = 0x00368200u; return; } if (c.pc != 0x00360D94u) [[unlikely]] return; }
L_00360D94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[2], 0u + 9u);
    c.budget -= 1;
L_00360DA0:
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 92u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 135u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360DB8u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00360DB8u) [[unlikely]] return; }
L_00360DB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360DC8u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00360DC8u) [[unlikely]] return; }
L_00360DC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360FDC; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25860u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360E4C; } }
    set32(c.r[2], 0u + 25861u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360E34; } }
    set32(c.r[2], 0u + 25858u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360E1C; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360E0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00360E90; } }
L_00360E0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E14u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360E14u) [[unlikely]] return; }
L_00360E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E24u);  if (depth < kMaxDepth) unit_009A(c, 13u, depth + 1u); else { c.pc = 0x003680D0u; return; } if (c.pc != 0x00360E24u) [[unlikely]] return; }
L_00360E24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E2Cu);  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x00360E2Cu) [[unlikely]] return; }
L_00360E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360E34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E3Cu);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00360E3Cu) [[unlikely]] return; }
L_00360E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E44u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00360E44u) [[unlikely]] return; }
L_00360E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360E4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E54u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00360E54u) [[unlikely]] return; }
L_00360E54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_00360E7C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E70u); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 40u, depth + 1u); else { c.pc = 0x003682C0u; return; } if (c.pc != 0x00360E70u) [[unlikely]] return; }
L_00360E70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00360E7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E84u);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00360E84u) [[unlikely]] return; }
L_00360E84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00360E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360E98u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360E98u) [[unlikely]] return; }
L_00360E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360EA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360EA8u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00360EA8u) [[unlikely]] return; }
L_00360EA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00360FDC; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25862u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360F2C; } }
    set32(c.r[2], 0u + 25861u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360F14; } }
    set32(c.r[2], 0u + 25858u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360EFC; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00360EEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00360F70; } }
L_00360EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360EF4u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x00360EF4u) [[unlikely]] return; }
L_00360EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360EFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F04u);  if (depth < kMaxDepth) unit_009A(c, 13u, depth + 1u); else { c.pc = 0x003680D0u; return; } if (c.pc != 0x00360F04u) [[unlikely]] return; }
L_00360F04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F0Cu);  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x00360F0Cu) [[unlikely]] return; }
L_00360F0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360F14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F1Cu);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00360F1Cu) [[unlikely]] return; }
L_00360F1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F24u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00360F24u) [[unlikely]] return; }
L_00360F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360F2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F34u);  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x00360F34u) [[unlikely]] return; }
L_00360F34:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld16((c.r[5].w[0] + 8152u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_00360F5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F50u);  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x00360F50u) [[unlikely]] return; }
L_00360F50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
    set32(c.r[3], 0u + 9u);
    c.budget -= 1;
L_00360F5C:
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00360FDC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00360F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F78u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00360F78u) [[unlikely]] return; }
L_00360F78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00360FDC; } }
L_00360F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360F88u);  if (depth < kMaxDepth) unit_0098(c, 89u, depth + 1u); else { c.pc = 0x003609E0u; return; } if (c.pc != 0x00360F88u) [[unlikely]] return; }
L_00360F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00360FDC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00360FDC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[4], 0u + 135u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FD0u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00360FD0u) [[unlikely]] return; }
L_00360FD0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00360FDCu); set32(c.r[4], c.r[2].w[0] + 4160u);  if (depth < kMaxDepth) unit_009A(c, 45u, depth + 1u); else { c.pc = 0x00368310u; return; } if (c.pc != 0x00360FDCu) [[unlikely]] return; }
L_00360FDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00360FE0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00360FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361000u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00361000u) [[unlikely]] return; }
L_00361000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361008u);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CAE0u; return; } if (c.pc != 0x00361008u) [[unlikely]] return; }
L_00361008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361010u);  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x00361010u) [[unlikely]] return; }
L_00361010:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361018u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x00361018u) [[unlikely]] return; }
L_00361018:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036106Cu); st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036106Cu) [[unlikely]] return; }
L_0036106C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361080u); st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x00361080u) [[unlikely]] return; }
L_00361080:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610A0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003610A0u) [[unlikely]] return; }
L_003610A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361124; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25861u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361100; } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003610E8; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003610D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0036111C; } }
L_003610D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610E0u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x003610E0u) [[unlikely]] return; }
L_003610E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003611FC; } }
L_003610E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610F0u);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x003610F0u) [[unlikely]] return; }
L_003610F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003610F8u);  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x003610F8u) [[unlikely]] return; }
L_003610F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003611F8; } }
L_00361100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361108u);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00361108u) [[unlikely]] return; }
L_00361108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361110u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00361110u) [[unlikely]] return; }
L_00361110:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003611F8; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036111C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361124u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00361124u) [[unlikely]] return; }
L_00361124:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 5235u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 5235u);  if (t) { goto L_003611C4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00361174; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00361154; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003611F8; } }
L_00361154:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], 0u + 152u);
    set32(c.r[4], 0u + 137u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361174u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00361174u) [[unlikely]] return; }
L_00361174:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003611F8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 137u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003611BCu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x003611BCu) [[unlikely]] return; }
L_003611BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003611F8; } }
L_003611C4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_003611F8; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[6].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_003611F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003611FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361210:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361220u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x00361220u) [[unlikely]] return; }
L_00361220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003613FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361230u); set32(c.r[4], c.r[29].w[0] + 46u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00361230u) [[unlikely]] return; }
L_00361230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361308; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 25861u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003612E4; } }
    set32(c.r[2], 0u + 25862u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036129C; } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361284; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_00361300; } }
L_00361274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036127Cu);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x0036127Cu) [[unlikely]] return; }
L_0036127C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00361400; } }
L_00361284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036128Cu);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x0036128Cu) [[unlikely]] return; }
L_0036128C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361294u);  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x00361294u) [[unlikely]] return; }
L_00361294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003613FC; } }
L_0036129C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612A8u); c.r[16].d[0] = ld16((c.r[2].w[0] + 8152u));  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x003612A8u) [[unlikely]] return; }
L_003612A8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361308; } }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00361308; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00361308; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612DCu);  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x003612DCu) [[unlikely]] return; }
L_003612DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003613FC; } }
L_003612E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612ECu);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x003612ECu) [[unlikely]] return; }
L_003612EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003612F4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x003612F4u) [[unlikely]] return; }
L_003612F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003613FC; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_00361300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361308u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00361308u) [[unlikely]] return; }
L_00361308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361310u);  if (depth < kMaxDepth) unit_0099(c, 53u, depth + 1u); else { c.pc = 0x003648C0u; return; } if (c.pc != 0x00361310u) [[unlikely]] return; }
L_00361310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003613FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361320u);  if (depth < kMaxDepth) unit_0099(c, 51u, depth + 1u); else { c.pc = 0x00364870u; return; } if (c.pc != 0x00361320u) [[unlikely]] return; }
L_00361320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003613FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361330u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00361330u) [[unlikely]] return; }
L_00361330:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_003613AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5240u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_00361360; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003613FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003613FC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_00361360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361368u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00361368u) [[unlikely]] return; }
L_00361368:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5243u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00361398; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036138Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x0036138Cu) [[unlikely]] return; }
L_0036138C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003613FC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_00361398:
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003613FC; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_003613AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613B4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003613B4u) [[unlikely]] return; }
L_003613B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003613E8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5240u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003613FC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003613D8u) [[unlikely]] return; }
L_003613D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5240u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003613FC; } }
L_003613E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003613FCu); set32(c.r[4], c.r[2].w[0] + 5240u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x003613FCu) [[unlikely]] return; }
L_003613FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00361400:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00361410:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 6u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5192u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361464u); st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x00361464u) [[unlikely]] return; }
L_00361464:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036146Cu);  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x0036146Cu) [[unlikely]] return; }
L_0036146C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 2816u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[28].w[0] - 25888u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361484u); set32(c.r[4], c.r[2].w[0] + 704u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00361484u) [[unlikely]] return; }
L_00361484:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st16((c.r[2].w[0] + 694u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 692u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 690u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 688u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[2].w[0] + 5288u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614C0u); set32(c.r[4], c.r[2].w[0] + 5292u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003614C0u) [[unlikely]] return; }
L_003614C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003614D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 101u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614F0u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x003614F0u) [[unlikely]] return; }
L_003614F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003614F8u);  if (depth < kMaxDepth) unit_009A(c, 155u, depth + 1u); else { c.pc = 0x00368CD0u; return; } if (c.pc != 0x003614F8u) [[unlikely]] return; }
L_003614F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361500u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00361500u) [[unlikely]] return; }
L_00361500:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361510; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361510u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00361510u) [[unlikely]] return; }
L_00361510:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5192u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00361528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361528u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x00361528u) [[unlikely]] return; }
L_00361528:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361540:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[29].w[0] + 46u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361554u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00361554u) [[unlikely]] return; }
L_00361554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361744; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 26903u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003616F4; } }
    set32(c.r[2], 0u + 26901u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003616CC; } }
    set32(c.r[2], 0u + 26900u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003616A4; } }
    set32(c.r[2], 0u + 26899u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361654; } }
    set32(c.r[2], 0u + 26898u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003615FC; } }
    set32(c.r[2], 0u + 26897u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003615D4; } }
    set32(c.r[2], 0u + 24581u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003615BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_0036173C; } }
L_003615BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615C4u);  if (depth < kMaxDepth) unit_0099(c, 212u, depth + 1u); else { c.pc = 0x003661D0u; return; } if (c.pc != 0x003615C4u) [[unlikely]] return; }
L_003615C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x003615CCu) [[unlikely]] return; }
L_003615CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00361760; } }
L_003615D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615DCu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003615DCu) [[unlikely]] return; }
L_003615DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615ECu);  if (depth < kMaxDepth) unit_009A(c, 134u, depth + 1u); else { c.pc = 0x003689C0u; return; } if (c.pc != 0x003615ECu) [[unlikely]] return; }
L_003615EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003615F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 160u, depth + 1u); else { c.pc = 0x00368D20u; return; } if (c.pc != 0x003615F4u) [[unlikely]] return; }
L_003615F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_00361748; } }
L_003615FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361604u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00361604u) [[unlikely]] return; }
L_00361604:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361614u);  if (depth < kMaxDepth) unit_009A(c, 135u, depth + 1u); else { c.pc = 0x003689E0u; return; } if (c.pc != 0x00361614u) [[unlikely]] return; }
L_00361614:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4933u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361638; } }
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00361628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361630u); c.r[4].d[0] = c.r[2].d[0] & 255ull;  if (depth < kMaxDepth) unit_009A(c, 166u, depth + 1u); else { c.pc = 0x00368D90u; return; } if (c.pc != 0x00361630u) [[unlikely]] return; }
L_00361630:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00361638:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5321u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00361628u | kUnwind; return; } goto L_00361628; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361744; } }
L_00361654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036165Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0036165Cu) [[unlikely]] return; }
L_0036165C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036166Cu);  if (depth < kMaxDepth) unit_009A(c, 136u, depth + 1u); else { c.pc = 0x003689F0u; return; } if (c.pc != 0x0036166Cu) [[unlikely]] return; }
L_0036166C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4933u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4933u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].d[0] = ld8((c.r[3].w[0] + 4933u));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5321u));
    c.r[3].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036169Cu);  if (depth < kMaxDepth) unit_009A(c, 172u, depth + 1u); else { c.pc = 0x00368E00u; return; } if (c.pc != 0x0036169Cu) [[unlikely]] return; }
L_0036169C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361744; } }
L_003616A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616ACu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003616ACu) [[unlikely]] return; }
L_003616AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616BCu);  if (depth < kMaxDepth) unit_009A(c, 149u, depth + 1u); else { c.pc = 0x00368C30u; return; } if (c.pc != 0x003616BCu) [[unlikely]] return; }
L_003616BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616C4u);  if (depth < kMaxDepth) unit_009A(c, 177u, depth + 1u); else { c.pc = 0x00368E50u; return; } if (c.pc != 0x003616C4u) [[unlikely]] return; }
L_003616C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361744; } }
L_003616CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616D4u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003616D4u) [[unlikely]] return; }
L_003616D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616E4u);  if (depth < kMaxDepth) unit_009A(c, 150u, depth + 1u); else { c.pc = 0x00368C50u; return; } if (c.pc != 0x003616E4u) [[unlikely]] return; }
L_003616E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616ECu);  if (depth < kMaxDepth) unit_009A(c, 187u, depth + 1u); else { c.pc = 0x00368EF0u; return; } if (c.pc != 0x003616ECu) [[unlikely]] return; }
L_003616EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361744; } }
L_003616F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003616FCu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003616FCu) [[unlikely]] return; }
L_003616FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361744; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036170Cu);  if (depth < kMaxDepth) unit_009A(c, 154u, depth + 1u); else { c.pc = 0x00368CB0u; return; } if (c.pc != 0x0036170Cu) [[unlikely]] return; }
L_0036170C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361730u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00361730u) [[unlikely]] return; }
L_00361730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361744; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_0036173C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361744u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00361744u) [[unlikely]] return; }
L_00361744:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_00361748:
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5192u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036175C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036175Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x0036175Cu) [[unlikely]] return; }
L_0036175C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00361760:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00361770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003617BC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617B0u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003617B0u) [[unlikely]] return; }
L_003617B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003617F0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003617BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617C4u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003617C4u) [[unlikely]] return; }
L_003617C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003617D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617D4u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003617D4u) [[unlikely]] return; }
L_003617D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5192u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003617EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003617ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x003617ECu) [[unlikely]] return; }
L_003617EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003617F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361820u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x00361820u) [[unlikely]] return; }
L_00361820:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036182Cu); st8((c.r[28].w[0] - 26156u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009B(c, 365u, depth + 1u); else { c.pc = 0x0036F3A0u; return; } if (c.pc != 0x0036182Cu) [[unlikely]] return; }
L_0036182C:
    set32(c.r[2], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], 0u + 20u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361844u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00361844u) [[unlikely]] return; }
L_00361844:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036184Cu); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0036184Cu) [[unlikely]] return; }
L_0036184C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036185C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036185Cu); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0036185Cu) [[unlikely]] return; }
L_0036185C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5192u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00361874; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361874u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x00361874u) [[unlikely]] return; }
L_00361874:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 11;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003618C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618C0u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 182u, depth + 1u); else { c.pc = 0x00368EA0u; return; } if (c.pc != 0x003618C0u) [[unlikely]] return; }
L_003618C0:
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003618C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618CCu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003618CCu) [[unlikely]] return; }
L_003618CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003618DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618DCu); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003618DCu) [[unlikely]] return; }
L_003618DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5192u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003618F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003618F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x003618F4u) [[unlikely]] return; }
L_003618F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00361900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361910u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00361910u) [[unlikely]] return; }
L_00361910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361988; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26902u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00361954; } }
    set32(c.r[2], 0u + 24581u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036193C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00361980; } }
L_0036193C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361944u);  if (depth < kMaxDepth) unit_0099(c, 212u, depth + 1u); else { c.pc = 0x003661D0u; return; } if (c.pc != 0x00361944u) [[unlikely]] return; }
L_00361944:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036194Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x0036194Cu) [[unlikely]] return; }
L_0036194C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003619A4; } }
L_00361954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036195Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0036195Cu) [[unlikely]] return; }
L_0036195C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361988; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036196Cu);  if (depth < kMaxDepth) unit_009A(c, 151u, depth + 1u); else { c.pc = 0x00368C70u; return; } if (c.pc != 0x0036196Cu) [[unlikely]] return; }
L_0036196C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361974u);  if (depth < kMaxDepth) unit_0098(c, 248u, depth + 1u); else { c.pc = 0x003619B0u; return; } if (c.pc != 0x00361974u) [[unlikely]] return; }
L_00361974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003619A0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00361980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361988u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00361988u) [[unlikely]] return; }
L_00361988:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5192u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003619A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003619A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0098(c, 264u, depth + 1u); else { c.pc = 0x00361C20u; return; } if (c.pc != 0x003619A0u) [[unlikely]] return; }
L_003619A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003619A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003619B0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 7u);
    set32(c.r[3], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[4].w[0] + 5232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5237u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5238u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00361A00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A10u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00361A10u) [[unlikely]] return; }
L_00361A10:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5235u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 5235u);  if (t) { goto L_00361AB4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00361A78; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00361A40; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00361C10; } }
L_00361A40:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[4], 0u + 15u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A58u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 25u, depth + 1u); else { c.pc = 0x003783C0u; return; } if (c.pc != 0x00361A58u) [[unlikely]] return; }
L_00361A58:
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361A70u); st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00361A70u) [[unlikely]] return; }
L_00361A70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C0C; } }
L_00361A78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00361C0C; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AACu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00361AACu) [[unlikely]] return; }
L_00361AAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00361C0C; } }
L_00361AB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00361C0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361AE0u); st8((c.r[5].w[0] + 5494u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 200u, depth + 1u); else { c.pc = 0x00366100u; return; } if (c.pc != 0x00361AE0u) [[unlikely]] return; }
L_00361AE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 16u);
    st16((c.r[2].w[0] + 694u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st16((c.r[2].w[0] + 692u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 690u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 688u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[2].w[0] + 5288u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B24u); set32(c.r[4], c.r[2].w[0] + 5292u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00361B24u) [[unlikely]] return; }
L_00361B24:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 8156u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 8154u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B38u); set32(c.r[4], ld32((c.r[2].w[0] + 5252u)));  if (depth < kMaxDepth) unit_009A(c, 560u, depth + 1u); else { c.pc = 0x0036BC00u; return; } if (c.pc != 0x00361B38u) [[unlikely]] return; }
L_00361B38:
    set32(c.r[4], ld32((c.r[28].w[0] - 25876u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[3].w[0] + 704u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B54u); st32((c.r[28].w[0] - 25876u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0038(c, 220u, depth + 1u); else { c.pc = 0x001E27A0u; return; } if (c.pc != 0x00361B54u) [[unlikely]] return; }
L_00361B54:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B64u); set32(c.r[4], c.r[2].w[0] + 1408u);  if (depth < kMaxDepth) unit_0038(c, 220u, depth + 1u); else { c.pc = 0x001E27A0u; return; } if (c.pc != 0x00361B64u) [[unlikely]] return; }
L_00361B64:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B74u); set32(c.r[4], c.r[2].w[0] + 2112u);  if (depth < kMaxDepth) unit_0038(c, 220u, depth + 1u); else { c.pc = 0x001E27A0u; return; } if (c.pc != 0x00361B74u) [[unlikely]] return; }
L_00361B74:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361B84u); set32(c.r[4], c.r[2].w[0] + 2816u);  if (depth < kMaxDepth) unit_0038(c, 220u, depth + 1u); else { c.pc = 0x001E27A0u; return; } if (c.pc != 0x00361B84u) [[unlikely]] return; }
L_00361B84:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], c.r[2].w[0] + 4966u);
    c.budget -= 4;
L_00361B94:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1402u)));
    set32(c.r[6], c.r[6].w[0] + 704u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00361B94u | kUnwind; return; } goto L_00361B94; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18799u);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 1400u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BE4u); set32(c.r[4], c.r[2].w[0] + 4934u);  if (depth < kMaxDepth) unit_0038(c, 223u, depth + 1u); else { c.pc = 0x001E2830u; return; } if (c.pc != 0x00361BE4u) [[unlikely]] return; }
L_00361BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361BECu);  if (depth < kMaxDepth) unit_0096(c, 214u, depth + 1u); else { c.pc = 0x0035AA10u; return; } if (c.pc != 0x00361BECu) [[unlikely]] return; }
L_00361BEC:
    set32(c.r[3], 0u + 4u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25756u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25760u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_00361C0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00361C10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361C20:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 8u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5494u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5192u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5506u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5507u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 5504u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5499u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5500u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5495u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5496u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5497u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5498u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00361CA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CC0u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 23u, depth + 1u); else { c.pc = 0x003783A0u; return; } if (c.pc != 0x00361CC0u) [[unlikely]] return; }
L_00361CC0:
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361CD0u); st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00361CD0u) [[unlikely]] return; }
L_00361CD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361CE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D00u); st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00361D00u) [[unlikely]] return; }
L_00361D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D08u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00361D08u) [[unlikely]] return; }
L_00361D08:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5233u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00361D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D20u); set32(c.r[4], 0u + 74u);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00361D20u) [[unlikely]] return; }
L_00361D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 20u);  if (t) { goto L_00361D3C; } }
L_00361D28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D38u); set32(c.r[5], c.r[2].w[0] - 6512u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x00361D38u) [[unlikely]] return; }
L_00361D38:
    set32(c.r[5], 0u + 20u);
    c.budget -= 1;
L_00361D3C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D4Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x00361D4Cu) [[unlikely]] return; }
L_00361D4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00361D9C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    c.r[3].d[0] = c.r[3].sd[0] < 152ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361DC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361D94u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00361D94u) [[unlikely]] return; }
L_00361D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361DC0; } }
L_00361D9C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361DC0u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00361DC0u) [[unlikely]] return; }
L_00361DC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361DD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00361E10; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E10u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00361E10u) [[unlikely]] return; }
L_00361E10:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26156u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00361E3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E3Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 129u, depth + 1u); else { c.pc = 0x003657B0u; return; } if (c.pc != 0x00361E3Cu) [[unlikely]] return; }
L_00361E3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E44u);  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x00361E44u) [[unlikely]] return; }
L_00361E44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E4Cu);  if (depth < kMaxDepth) unit_0098(c, 303u, depth + 1u); else { c.pc = 0x00362090u; return; } if (c.pc != 0x00361E4Cu) [[unlikely]] return; }
L_00361E4C:
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], 0u + 16u);
    st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E60u); st8((c.r[28].w[0] - 24964u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 27u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x00361E60u) [[unlikely]] return; }
L_00361E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00361E70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361E84u); st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00361E84u) [[unlikely]] return; }
L_00361E84:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], c.r[3].w[0] + 5236u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5236u));
    set32(c.r[3], c.r[3].w[0] - 3u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036207C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 24096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00361EBC:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361ECCu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x00361ECCu) [[unlikely]] return; }
L_00361ECC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00361F04; } }
    set32(c.r[4], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EE4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 24u, depth + 1u); else { c.pc = 0x003783B0u; return; } if (c.pc != 0x00361EE4u) [[unlikely]] return; }
L_00361EE4:
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361EF8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00361EF8u) [[unlikely]] return; }
L_00361EF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00361F18; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00361F04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F14u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 23u, depth + 1u); else { c.pc = 0x003783A0u; return; } if (c.pc != 0x00361F14u) [[unlikely]] return; }
L_00361F14:
    st8((c.r[28].w[0] - 25328u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00361F18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036207C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5236u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F50u); st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00361F50u) [[unlikely]] return; }
L_00361F50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F58u);  if (depth < kMaxDepth) unit_0099(c, 44u, depth + 1u); else { c.pc = 0x00364730u; return; } if (c.pc != 0x00361F58u) [[unlikely]] return; }
L_00361F58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362080; } }
L_00361F60:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24968u)));
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 600u);  goto L_00361F88; }
    set32(c.r[3], 0u + 10u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 25792u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0036207C; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_00361F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F90u); st16((c.r[28].w[0] - 25792u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00361F90u) [[unlikely]] return; }
L_00361F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361F98u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24968u)));  if (depth < kMaxDepth) unit_0099(c, 26u, depth + 1u); else { c.pc = 0x003644B0u; return; } if (c.pc != 0x00361F98u) [[unlikely]] return; }
L_00361F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036207C; } }
L_00361FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00361FA8u);  if (depth < kMaxDepth) unit_0099(c, 45u, depth + 1u); else { c.pc = 0x00364740u; return; } if (c.pc != 0x00361FA8u) [[unlikely]] return; }
L_00361FA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036207C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5236u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5236u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036207C; } }
L_00361FC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24968u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00361FF8; } }
    set32(c.r[3], 0u + 16u);
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 11u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036207C; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00361FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362000u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00362000u) [[unlikely]] return; }
L_00362000:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036207C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5236u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036202Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0036202Cu) [[unlikely]] return; }
L_0036202C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036207C; } }
L_00362034:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0036207C; } }
    set32(c.r[3], 0u + 16u);
    st8((c.r[28].w[0] - 25736u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 9u);
    st8((c.r[28].w[0] - 25740u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25744u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25748u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25752u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 24968u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25776u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0036207C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362080:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362090:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003620A0u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003620A0u) [[unlikely]] return; }
L_003620A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 9u);
    st8((c.r[28].w[0] - 25320u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5237u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 18;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003620F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 5235u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 5235u);  if (t) { goto L_00362224; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003621D8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_00362150; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362134; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362288; } }
L_00362134:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362144u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 503u, depth + 1u); else { c.pc = 0x003678A0u; return; } if (c.pc != 0x00362144u) [[unlikely]] return; }
L_00362144:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362284; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00362150:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362158u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362158u) [[unlikely]] return; }
L_00362158:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362284; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25096u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362178; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003621C8; } }
L_00362178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362180u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00362180u) [[unlikely]] return; }
L_00362180:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 2u);  if (t) { goto L_003621B4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00362284; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_003621B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621BCu);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x003621BCu) [[unlikely]] return; }
L_003621BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362284; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003621C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003621D0u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003621D0u) [[unlikely]] return; }
L_003621D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362284; } }
L_003621D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00362284; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036221Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036221Cu) [[unlikely]] return; }
L_0036221C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362284; } }
L_00362224:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00362284; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24948u)));
    st8((c.r[6].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24952u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24956u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24960u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5237u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_00362284:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362288:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5234u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003622B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622B0u);  if (depth < kMaxDepth) unit_0098(c, 284u, depth + 1u); else { c.pc = 0x00361E70u; return; } if (c.pc != 0x003622B0u) [[unlikely]] return; }
L_003622B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003622C4; } }
L_003622B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622C0u);  if (depth < kMaxDepth) unit_0098(c, 305u, depth + 1u); else { c.pc = 0x003620F0u; return; } if (c.pc != 0x003622C0u) [[unlikely]] return; }
L_003622C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003622C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003622D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00362410; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4931u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 4931u);  if (t) { goto L_00362304; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003622FCu); st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x003622FCu) [[unlikely]] return; }
L_003622FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362410; } }
L_00362304:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4928u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 4928u);  if (t) { goto L_00362330; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5232u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036240C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362328u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x00362328u) [[unlikely]] return; }
L_00362328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362410; } }
L_00362330:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4932u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 4932u);  if (t) { goto L_0036235C; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5232u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036240C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362354u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x00362354u) [[unlikely]] return; }
L_00362354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362410; } }
L_0036235C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4929u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 4929u);  if (t) { goto L_00362388; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5232u));
    set32(c.r[2], 0u + 5u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036240C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362380u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 150u, depth + 1u); else { c.pc = 0x00360FF0u; return; } if (c.pc != 0x00362380u) [[unlikely]] return; }
L_00362380:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362410; } }
L_00362388:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 4930u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 4930u);  if (t) { goto L_0036240C; } }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 5u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5232u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003623F8; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003623E4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_003623D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362404; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003623D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623D8u);  if (depth < kMaxDepth) unit_0097(c, 293u, depth + 1u); else { c.pc = 0x0035E530u; return; } if (c.pc != 0x003623D8u) [[unlikely]] return; }
L_003623D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362400; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003623E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003623ECu);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x003623ECu) [[unlikely]] return; }
L_003623EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362400; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_003623F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362400u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00362400u) [[unlikely]] return; }
L_00362400:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00362404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362414; } }
L_0036240C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00362410:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362414:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 25861u);
    c.r[3].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (t) { goto L_003625F8; } }
    set32(c.r[2], 0u + 25612u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003625C4; } }
    set32(c.r[2], 0u + 25351u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362590; } }
    set32(c.r[2], 0u + 25862u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362530; } }
    set32(c.r[2], 0u + 25858u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003624F0; } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003624B4; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362488; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0036262C; } }
L_00362488:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003624A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036249Cu);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x0036249Cu) [[unlikely]] return; }
L_0036249C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036262C; } }
L_003624A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00362628; } }
L_003624B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624BCu);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x003624BCu) [[unlikely]] return; }
L_003624BC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003624D8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624D0u);  if (depth < kMaxDepth) unit_0098(c, 83u, depth + 1u); else { c.pc = 0x00360930u; return; } if (c.pc != 0x003624D0u) [[unlikely]] return; }
L_003624D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036262C; } }
L_003624D8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00362628; } }
L_003624F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003624F8u);  if (depth < kMaxDepth) unit_009A(c, 13u, depth + 1u); else { c.pc = 0x003680D0u; return; } if (c.pc != 0x003624F8u) [[unlikely]] return; }
L_003624F8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362628; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4928u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00362524; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00362520:
    st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00362524:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00362628; } }
L_00362530:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036253Cu); c.r[16].d[0] = ld16((c.r[2].w[0] + 8152u));  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x0036253Cu) [[unlikely]] return; }
L_0036253C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362628; } }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00362628; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00362628; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00362588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036257Cu);  if (depth < kMaxDepth) unit_0098(c, 40u, depth + 1u); else { c.pc = 0x003603C0u; return; } if (c.pc != 0x0036257Cu) [[unlikely]] return; }
L_0036257C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036262C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00362588:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4932u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00362628; } }
L_00362590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362598u);  if (depth < kMaxDepth) unit_0099(c, 474u, depth + 1u); else { c.pc = 0x00367620u; return; } if (c.pc != 0x00362598u) [[unlikely]] return; }
L_00362598:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003625B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 293u, depth + 1u); else { c.pc = 0x0035E530u; return; } if (c.pc != 0x003625ACu) [[unlikely]] return; }
L_003625AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036262C; } }
L_003625B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00362628; } }
L_003625C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625CCu);  if (depth < kMaxDepth) unit_0099(c, 551u, depth + 1u); else { c.pc = 0x00367CC0u; return; } if (c.pc != 0x003625CCu) [[unlikely]] return; }
L_003625CC:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003625E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003625E0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x003625E0u) [[unlikely]] return; }
L_003625E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036262C; } }
L_003625E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00362628; } }
L_003625F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362600u);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00362600u) [[unlikely]] return; }
L_00362600:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036261C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362614u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0098(c, 65u, depth + 1u); else { c.pc = 0x00360690u; return; } if (c.pc != 0x00362614u) [[unlikely]] return; }
L_00362614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036262C; } }
L_0036261C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00362628:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036262C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362650u);  if (depth < kMaxDepth) unit_009A(c, 108u, depth + 1u); else { c.pc = 0x00368800u; return; } if (c.pc != 0x00362650u) [[unlikely]] return; }
L_00362650:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362680:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362690u);  if (depth < kMaxDepth) unit_009A(c, 101u, depth + 1u); else { c.pc = 0x00368790u; return; } if (c.pc != 0x00362690u) [[unlikely]] return; }
L_00362690:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003626C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003626D4u); st16((c.r[1].w[0] - 5676u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 508u, depth + 1u); else { c.pc = 0x003678F0u; return; } if (c.pc != 0x003626D4u) [[unlikely]] return; }
L_003626D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[4].d[0] = ld16((c.r[1].w[0] - 5680u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].d[0] = ld8((c.r[1].w[0] - 5678u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24880u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24884u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362734u); st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009C(c, 415u, depth + 1u); else { c.pc = 0x00373BC0u; return; } if (c.pc != 0x00362734u) [[unlikely]] return; }
L_00362734:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 5678u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036274Cu); st8((c.r[2].w[0] + 5248u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0097(c, 307u, depth + 1u); else { c.pc = 0x0035E750u; return; } if (c.pc != 0x0036274Cu) [[unlikely]] return; }
L_0036274C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362780u); st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 92u, depth + 1u); else { c.pc = 0x0036CF20u; return; } if (c.pc != 0x00362780u) [[unlikely]] return; }
L_00362780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362788u);  if (depth < kMaxDepth) unit_009B(c, 340u, depth + 1u); else { c.pc = 0x0036F070u; return; } if (c.pc != 0x00362788u) [[unlikely]] return; }
L_00362788:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003627A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003627C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627D0u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x003627D0u) [[unlikely]] return; }
L_003627D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627E0u);  if (depth < kMaxDepth) unit_0098(c, 315u, depth + 1u); else { c.pc = 0x003622D0u; return; } if (c.pc != 0x003627E0u) [[unlikely]] return; }
L_003627E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003627F0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003627F0u) [[unlikely]] return; }
L_003627F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362810; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362800u); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362800u) [[unlikely]] return; }
L_00362800:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362818; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362810u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00362810u) [[unlikely]] return; }
L_00362810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362818u);  if (depth < kMaxDepth) unit_009B(c, 340u, depth + 1u); else { c.pc = 0x0036F070u; return; } if (c.pc != 0x00362818u) [[unlikely]] return; }
L_00362818:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362840u);  if (depth < kMaxDepth) unit_0098(c, 315u, depth + 1u); else { c.pc = 0x003622D0u; return; } if (c.pc != 0x00362840u) [[unlikely]] return; }
L_00362840:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362A30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5235u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00362A00; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00362870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362A28; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00362870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362878u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362878u) [[unlikely]] return; }
L_00362878:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362888u); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362888u) [[unlikely]] return; }
L_00362888:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362A30; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25097u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036298C; } }
    set32(c.r[2], 0u + 26372u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036292C; } }
    set32(c.r[2], 0u + 26371u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003628C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003629EC; } }
L_003628C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628C8u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003628C8u) [[unlikely]] return; }
L_003628C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003628D8u);  if (depth < kMaxDepth) unit_009A(c, 76u, depth + 1u); else { c.pc = 0x00368540u; return; } if (c.pc != 0x003628D8u) [[unlikely]] return; }
L_003628D8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00362924; } }
L_00362900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362908u);  if (depth < kMaxDepth) unit_0099(c, 143u, depth + 1u); else { c.pc = 0x003659F0u; return; } if (c.pc != 0x00362908u) [[unlikely]] return; }
L_00362908:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_00362924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362A34; } }
L_0036292C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362934u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x00362934u) [[unlikely]] return; }
L_00362934:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362960; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00362984; } }
L_00362960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362968u);  if (depth < kMaxDepth) unit_0099(c, 143u, depth + 1u); else { c.pc = 0x003659F0u; return; } if (c.pc != 0x00362968u) [[unlikely]] return; }
L_00362968:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
L_00362984:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362A30; } }
L_0036298C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362994u);  if (depth < kMaxDepth) unit_0099(c, 475u, depth + 1u); else { c.pc = 0x00367640u; return; } if (c.pc != 0x00362994u) [[unlikely]] return; }
L_00362994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003629BC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_003629E0; } }
L_003629BC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 600u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_003629E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362A30; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003629EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003629F4u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003629F4u) [[unlikely]] return; }
L_003629F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362A28; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00362A00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A08u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362A08u) [[unlikely]] return; }
L_00362A08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A18u); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362A18u) [[unlikely]] return; }
L_00362A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A28u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00362A28u) [[unlikely]] return; }
L_00362A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A30u);  if (depth < kMaxDepth) unit_009B(c, 340u, depth + 1u); else { c.pc = 0x0036F070u; return; } if (c.pc != 0x00362A30u) [[unlikely]] return; }
L_00362A30:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362A34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5240u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A6Cu); st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00362A6Cu) [[unlikely]] return; }
L_00362A6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A74u);  if (depth < kMaxDepth) unit_009C(c, 101u, depth + 1u); else { c.pc = 0x00370E70u; return; } if (c.pc != 0x00362A74u) [[unlikely]] return; }
L_00362A74:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362A80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362A90u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x00362A90u) [[unlikely]] return; }
L_00362A90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AA0u);  if (depth < kMaxDepth) unit_0098(c, 315u, depth + 1u); else { c.pc = 0x003622D0u; return; } if (c.pc != 0x00362AA0u) [[unlikely]] return; }
L_00362AA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AB0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362AB0u) [[unlikely]] return; }
L_00362AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00362AD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AC0u); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362AC0u) [[unlikely]] return; }
L_00362AC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362B5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362AD0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00362AD0u) [[unlikely]] return; }
L_00362AD0:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00362AD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362ADCu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00362ADCu) [[unlikely]] return; }
L_00362ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00362B24; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 5234u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5243u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B18u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00362B18u) [[unlikely]] return; }
L_00362B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362B60; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00362B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B2Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00362B2Cu) [[unlikely]] return; }
L_00362B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362B5C; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], 0u + 54u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5234u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B5Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00362B5Cu) [[unlikely]] return; }
L_00362B5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362B80u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00362B80u) [[unlikely]] return; }
L_00362B80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00362BBC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00362BBC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362BD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362BF8u); st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00362BF8u) [[unlikely]] return; }
L_00362BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C0Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00362C0Cu) [[unlikely]] return; }
L_00362C0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C18u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_00A5(c, 260u, depth + 1u); else { c.pc = 0x003970B0u; return; } if (c.pc != 0x00362C18u) [[unlikely]] return; }
L_00362C18:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C40u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x00362C40u) [[unlikely]] return; }
L_00362C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C50u);  if (depth < kMaxDepth) unit_0098(c, 315u, depth + 1u); else { c.pc = 0x003622D0u; return; } if (c.pc != 0x00362C50u) [[unlikely]] return; }
L_00362C50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C60u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362C60u) [[unlikely]] return; }
L_00362C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362C80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C70u); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362C70u) [[unlikely]] return; }
L_00362C70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362CC0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C80u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00362C80u) [[unlikely]] return; }
L_00362C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362C8Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_00A5(c, 260u, depth + 1u); else { c.pc = 0x003970B0u; return; } if (c.pc != 0x00362C8Cu) [[unlikely]] return; }
L_00362C8C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00362CC0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362CA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362CC4; } }
L_00362CA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00362CC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362CC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362CF8u); st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00362CF8u) [[unlikely]] return; }
L_00362CF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D0Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00362D0Cu) [[unlikely]] return; }
L_00362D0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D18u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_00A0(c, 332u, depth + 1u); else { c.pc = 0x00383110u; return; } if (c.pc != 0x00362D18u) [[unlikely]] return; }
L_00362D18:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D40u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x00362D40u) [[unlikely]] return; }
L_00362D40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D50u);  if (depth < kMaxDepth) unit_0098(c, 315u, depth + 1u); else { c.pc = 0x003622D0u; return; } if (c.pc != 0x00362D50u) [[unlikely]] return; }
L_00362D50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D60u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362D60u) [[unlikely]] return; }
L_00362D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362D80; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D70u); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362D70u) [[unlikely]] return; }
L_00362D70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362DD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D80u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00362D80u) [[unlikely]] return; }
L_00362D80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362D8Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_00A0(c, 332u, depth + 1u); else { c.pc = 0x00383110u; return; } if (c.pc != 0x00362D8Cu) [[unlikely]] return; }
L_00362D8C:
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00362DD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 24064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00362DB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00362DD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5235u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00362E04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362E80; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00362E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E0Cu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00362E0Cu) [[unlikely]] return; }
L_00362E0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362E7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E1Cu); c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));  if (depth < kMaxDepth) unit_0098(c, 323u, depth + 1u); else { c.pc = 0x00362420u; return; } if (c.pc != 0x00362E1Cu) [[unlikely]] return; }
L_00362E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362E7C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26372u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00362E3C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00362E74; } }
L_00362E3C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E4Cu); st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009A(c, 92u, depth + 1u); else { c.pc = 0x003686F0u; return; } if (c.pc != 0x00362E4Cu) [[unlikely]] return; }
L_00362E4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00362E64; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00362E68; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00362E64:
    st8((c.r[28].w[0] - 25912u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00362E68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00362E7C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00362E74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362E7Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00362E7Cu) [[unlikely]] return; }
L_00362E7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362E80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00362E90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EB4u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00362EB4u) [[unlikely]] return; }
L_00362EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EC8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00362EC8u) [[unlikely]] return; }
L_00362EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362ED4u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 171u, depth + 1u); else { c.pc = 0x00371550u; return; } if (c.pc != 0x00362ED4u) [[unlikely]] return; }
L_00362ED4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362EF0u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x00362EF0u) [[unlikely]] return; }
L_00362EF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00362F4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F00u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00362F00u) [[unlikely]] return; }
L_00362F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F0Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 171u, depth + 1u); else { c.pc = 0x00371550u; return; } if (c.pc != 0x00362F0Cu) [[unlikely]] return; }
L_00362F0C:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00362F4C; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00362F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00362F50; } }
L_00362F28:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00362F4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00362F50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362F60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362F94u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00362F94u) [[unlikely]] return; }
L_00362F94:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FA0u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_0095(c, 366u, depth + 1u); else { c.pc = 0x003574A0u; return; } if (c.pc != 0x00362FA0u) [[unlikely]] return; }
L_00362FA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00362FB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FC0u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00362FC0u) [[unlikely]] return; }
L_00362FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00362FCCu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_0095(c, 366u, depth + 1u); else { c.pc = 0x003574A0u; return; } if (c.pc != 0x00362FCCu) [[unlikely]] return; }
L_00362FCC:
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], 0u - 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363014; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00362FF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363018; } }
L_00362FF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363014u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x00363014u) [[unlikely]] return; }
L_00363014:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363018:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363020:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 11;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00363060; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363060u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00363060u) [[unlikely]] return; }
L_00363060:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363080u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 129u, depth + 1u); else { c.pc = 0x003657B0u; return; } if (c.pc != 0x00363080u) [[unlikely]] return; }
L_00363080:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], 0u + 20u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630B0u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x003630B0u) [[unlikely]] return; }
L_003630B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003630C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630E4u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003630E4u) [[unlikely]] return; }
L_003630E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003630F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003630F8u) [[unlikely]] return; }
L_003630F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363104u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 315u, depth + 1u); else { c.pc = 0x00372C70u; return; } if (c.pc != 0x00363104u) [[unlikely]] return; }
L_00363104:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363120u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x00363120u) [[unlikely]] return; }
L_00363120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363180; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363130u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00363130u) [[unlikely]] return; }
L_00363130:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036313Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 315u, depth + 1u); else { c.pc = 0x00372C70u; return; } if (c.pc != 0x0036313Cu) [[unlikely]] return; }
L_0036313C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036315C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00363180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363184; } }
L_0036315C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00363180:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363184:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363190:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363258; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_003631E8; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_003631CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036325C; } }
L_003631CC:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631DCu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 246u, depth + 1u); else { c.pc = 0x003693A0u; return; } if (c.pc != 0x003631DCu) [[unlikely]] return; }
L_003631DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363258; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003631E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003631F0u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003631F0u) [[unlikely]] return; }
L_003631F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363258; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26705u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363210; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00363250; } }
L_00363210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363218u);  if (depth < kMaxDepth) unit_009A(c, 237u, depth + 1u); else { c.pc = 0x003692C0u; return; } if (c.pc != 0x00363218u) [[unlikely]] return; }
L_00363218:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 26048u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363244u); st16((c.r[28].w[0] - 26044u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009A(c, 257u, depth + 1u); else { c.pc = 0x00369460u; return; } if (c.pc != 0x00363244u) [[unlikely]] return; }
L_00363244:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363258; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00363250:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363258u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00363258u) [[unlikely]] return; }
L_00363258:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036325C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363270:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { st8((c.r[28].w[0] - 26036u), static_cast<std::uint8_t>(c.r[4].w[0]));  [[clang::musttail]] return unit_009A(c, 251u, depth); }
L_00363290:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[7], 0u + 3u);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] + 4u);
    st8((c.r[6].w[0] + 5234u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[6], 0u + 3840u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[7].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    st16((c.r[28].w[0] - 26044u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[2].w[0] - 14512u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632D4u); st16((c.r[28].w[0] - 26048u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003632D4u) [[unlikely]] return; }
L_003632D4:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26036u));
    c.r[5].d[0] = ld16((c.r[28].w[0] - 26044u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003632E4u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009A(c, 257u, depth + 1u); else { c.pc = 0x00369460u; return; } if (c.pc != 0x003632E4u) [[unlikely]] return; }
L_003632E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003632F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363444; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00363320; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363448; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00363320:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363328u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00363328u) [[unlikely]] return; }
L_00363328:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363444; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26707u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003633BC; } }
    set32(c.r[2], 0u + 24901u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036339C; } }
    set32(c.r[2], 0u + 24900u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363384; } }
    set32(c.r[2], 0u + 26706u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036336C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0036343C; } }
L_0036336C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363374u);  if (depth < kMaxDepth) unit_009A(c, 241u, depth + 1u); else { c.pc = 0x00369330u; return; } if (c.pc != 0x00363374u) [[unlikely]] return; }
L_00363374:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036337Cu); c.r[4].d[0] = ld8((c.r[28].w[0] - 26036u));  if (depth < kMaxDepth) unit_0099(c, 437u, depth + 1u); else { c.pc = 0x00367230u; return; } if (c.pc != 0x0036337Cu) [[unlikely]] return; }
L_0036337C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363444; } }
L_00363384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036338Cu);  if (depth < kMaxDepth) unit_0099(c, 409u, depth + 1u); else { c.pc = 0x00366FF0u; return; } if (c.pc != 0x0036338Cu) [[unlikely]] return; }
L_0036338C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363394u); c.r[4].d[0] = ld8((c.r[28].w[0] - 26036u));  if (depth < kMaxDepth) unit_0099(c, 443u, depth + 1u); else { c.pc = 0x003672A0u; return; } if (c.pc != 0x00363394u) [[unlikely]] return; }
L_00363394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363444; } }
L_0036339C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633A4u);  if (depth < kMaxDepth) unit_0099(c, 413u, depth + 1u); else { c.pc = 0x00367060u; return; } if (c.pc != 0x003633A4u) [[unlikely]] return; }
L_003633A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363444; } }
L_003633BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633C4u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003633C4u) [[unlikely]] return; }
L_003633C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003633D4u);  if (depth < kMaxDepth) unit_009A(c, 242u, depth + 1u); else { c.pc = 0x00369340u; return; } if (c.pc != 0x003633D4u) [[unlikely]] return; }
L_003633D4:
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26044u));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 26048u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[28].w[0] - 26044u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[5].d[0] = ld16((c.r[28].w[0] - 26044u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036340C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363444; } }
L_0036340C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26036u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363418u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_009A(c, 257u, depth + 1u); else { c.pc = 0x00369460u; return; } if (c.pc != 0x00363418u) [[unlikely]] return; }
L_00363418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363444; } }
L_00363420:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363444; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036343C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363444u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00363444u) [[unlikely]] return; }
L_00363444:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363448:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363470u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x00363470u) [[unlikely]] return; }
L_00363470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363484u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00363484u) [[unlikely]] return; }
L_00363484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 15408u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363498u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00363498u) [[unlikely]] return; }
L_00363498:
    set32(c.r[4], c.r[28].w[0] - 26104u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003634A8u) [[unlikely]] return; }
L_003634A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 16048u);
    set32(c.r[6], 0u + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003634BCu) [[unlikely]] return; }
L_003634BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    st8((c.r[28].w[0] - 26096u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634D0u); st8((c.r[28].w[0] - 26112u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009C(c, 226u, depth + 1u); else { c.pc = 0x00371DE0u; return; } if (c.pc != 0x003634D0u) [[unlikely]] return; }
L_003634D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003634E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003634F0u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x003634F0u) [[unlikely]] return; }
L_003634F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363550; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363500u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00363500u) [[unlikely]] return; }
L_00363500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036350Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 226u, depth + 1u); else { c.pc = 0x00371DE0u; return; } if (c.pc != 0x0036350Cu) [[unlikely]] return; }
L_0036350C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036352C; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00363550; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363554; } }
L_0036352C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_00363550:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363554:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 15408u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[6], 0u + 768u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036359Cu); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036359Cu) [[unlikely]] return; }
L_0036359C:
    set32(c.r[4], c.r[28].w[0] - 26104u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003635ACu) [[unlikely]] return; }
L_003635AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 16048u);
    set32(c.r[6], 0u + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003635C0u) [[unlikely]] return; }
L_003635C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003635CCu); st8((c.r[28].w[0] - 26096u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 294u, depth + 1u); else { c.pc = 0x00369790u; return; } if (c.pc != 0x003635CCu) [[unlikely]] return; }
L_003635CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003635E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_003636D0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0036363C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0036361C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363760; } }
L_0036361C:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363630u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 294u, depth + 1u); else { c.pc = 0x00369790u; return; } if (c.pc != 0x00363630u) [[unlikely]] return; }
L_00363630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036375C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036363C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363644u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00363644u) [[unlikely]] return; }
L_00363644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036375C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26641u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363664; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003636BC; } }
L_00363664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036366Cu);  if (depth < kMaxDepth) unit_009A(c, 269u, depth + 1u); else { c.pc = 0x00369550u; return; } if (c.pc != 0x0036366Cu) [[unlikely]] return; }
L_0036366C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003636A0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26104u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363698u); st8((c.r[28].w[0] - 26028u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 310u, depth + 1u); else { c.pc = 0x003698D0u; return; } if (c.pc != 0x00363698u) [[unlikely]] return; }
L_00363698:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036375C; } }
L_003636A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036375C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003636BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636C4u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x003636C4u) [[unlikely]] return; }
L_003636C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036375C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003636D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003636D8u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003636D8u) [[unlikely]] return; }
L_003636D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036375C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26643u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003636F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_00363754; } }
L_003636F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363700u);  if (depth < kMaxDepth) unit_009A(c, 275u, depth + 1u); else { c.pc = 0x00369610u; return; } if (c.pc != 0x00363700u) [[unlikely]] return; }
L_00363700:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26028u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26096u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[28].w[0] - 26028u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26028u));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00363738; } }
    set32(c.r[2], c.r[28].w[0] - 26105u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363730u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 310u, depth + 1u); else { c.pc = 0x003698D0u; return; } if (c.pc != 0x00363730u) [[unlikely]] return; }
L_00363730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036375C; } }
L_00363738:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036375C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_00363754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036375Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0036375Cu) [[unlikely]] return; }
L_0036375C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363770:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_009A(c, 300u, depth); }
L_00363790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363814; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_003637C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363818; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_003637C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637C8u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003637C8u) [[unlikely]] return; }
L_003637C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363814; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26642u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003637E8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0036380C; } }
L_003637E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003637F0u);  if (depth < kMaxDepth) unit_009A(c, 274u, depth + 1u); else { c.pc = 0x003695F0u; return; } if (c.pc != 0x003637F0u) [[unlikely]] return; }
L_003637F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363814; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036380C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363814u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00363814u) [[unlikely]] return; }
L_00363814:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363818:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 20656u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 768u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363858u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00363858u) [[unlikely]] return; }
L_00363858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 27424u);
    set32(c.r[6], 0u + 6760u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036386Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036386Cu) [[unlikely]] return; }
L_0036386C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[28].w[0] - 26116u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036387Cu); st8((c.r[28].w[0] - 26112u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_009A(c, 316u, depth + 1u); else { c.pc = 0x00369940u; return; } if (c.pc != 0x0036387Cu) [[unlikely]] return; }
L_0036387C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638A0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x003638A0u) [[unlikely]] return; }
L_003638A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363914; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26644u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003638C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0036390C; } }
L_003638C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638C8u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x003638C8u) [[unlikely]] return; }
L_003638C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003638E8; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003638E0u); st8((c.r[1].w[0] - 6560u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 278u, depth + 1u); else { c.pc = 0x00369670u; return; } if (c.pc != 0x003638E0u) [[unlikely]] return; }
L_003638E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_003638F4; } }
L_003638E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] - 6560u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
L_003638F4:
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363914; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0036390C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363914u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00363914u) [[unlikely]] return; }
L_00363914:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00363920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5347u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00363958; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363954; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036394Cu);  if (depth < kMaxDepth) unit_0099(c, 16u, depth + 1u); else { c.pc = 0x00364270u; return; } if (c.pc != 0x0036394Cu) [[unlikely]] return; }
L_0036394C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00363958; } }
L_00363954:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00363958:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5506u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5507u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5504u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5499u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5500u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5495u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5496u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5497u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639C4u); st8((c.r[2].w[0] + 5498u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003639C4u) [[unlikely]] return; }
L_003639C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003639CCu);  if (depth < kMaxDepth) unit_009E(c, 31u, depth + 1u); else { c.pc = 0x00378420u; return; } if (c.pc != 0x003639CCu) [[unlikely]] return; }
L_003639CC:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5232u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363A98; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363A78; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363A58; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363A38; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00363A18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363ABC; } }
L_00363A18:
    st8((c.r[5].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363AB8; } }
L_00363A38:
    st8((c.r[5].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363AB8; } }
L_00363A58:
    st8((c.r[5].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363AB8; } }
L_00363A78:
    st8((c.r[5].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363AB8; } }
L_00363A98:
    st8((c.r[5].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363AB8u); st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 315u, depth + 1u); else { c.pc = 0x003622D0u; return; } if (c.pc != 0x00363AB8u) [[unlikely]] return; }
L_00363AB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363ABC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00363AD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 5496u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 5496u);  if (t) { goto L_00363B5C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00363B2C; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00363B08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00363C2C; } }
L_00363B08:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B18u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 155u, depth + 1u); else { c.pc = 0x00351DA0u; return; } if (c.pc != 0x00363B18u) [[unlikely]] return; }
L_00363B18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B20u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 118u, depth + 1u); else { c.pc = 0x003688A0u; return; } if (c.pc != 0x00363B20u) [[unlikely]] return; }
L_00363B20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363C28; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00363B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363B34u);  if (depth < kMaxDepth) unit_0094(c, 165u, depth + 1u); else { c.pc = 0x00351E80u; return; } if (c.pc != 0x00363B34u) [[unlikely]] return; }
L_00363B34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363C28; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 600u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5496u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5496u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 5502u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00363C28; } }
L_00363B5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 5502u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[6].w[0] + 5502u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 5502u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00363BA0; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5495u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5495u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5496u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5502u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5499u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
L_00363BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BA8u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00363BA8u) [[unlikely]] return; }
L_00363BA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BB8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00363BB8u) [[unlikely]] return; }
L_00363BB8:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 24040u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 5502u)));
    set32(c.r[4], c.r[29].w[0] + 16u);
    mmi::mult(c, 0, c.r[3].w[0], c.r[6].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[6].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363BF8u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00363BF8u) [[unlikely]] return; }
L_00363BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F90000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C18u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00363C18u) [[unlikely]] return; }
L_00363C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C28u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00363C28u) [[unlikely]] return; }
L_00363C28:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363C2C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5496u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00363E60; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_00363C74; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00363E94; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_00363C74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363C7Cu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00363C7Cu) [[unlikely]] return; }
L_00363C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363D98; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 25861u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363D74; } }
    set32(c.r[2], 0u + 25862u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363D30; } }
    set32(c.r[2], 0u + 25858u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363CFC; } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363CDC; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00363CCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_00363D90; } }
L_00363CCC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00363D98; } }
L_00363CDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363CE4u);  if (depth < kMaxDepth) unit_009A(c, 17u, depth + 1u); else { c.pc = 0x00368120u; return; } if (c.pc != 0x00363CE4u) [[unlikely]] return; }
L_00363CE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363D98; } }
L_00363CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D04u);  if (depth < kMaxDepth) unit_009A(c, 13u, depth + 1u); else { c.pc = 0x003680D0u; return; } if (c.pc != 0x00363D04u) [[unlikely]] return; }
L_00363D04:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 4928u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00363D20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363D24; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00363D20:
    st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00363D24:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00363D98; } }
L_00363D30:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D3Cu); c.r[16].d[0] = ld16((c.r[2].w[0] + 8152u));  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x00363D3Cu) [[unlikely]] return; }
L_00363D3C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363D98; } }
    set32(c.r[3], 0u + 2u);
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00363D98; } }
    c.r[2].d[0] = ld16((c.r[4].w[0] + 8152u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00363D98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4932u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00363D98; } }
L_00363D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D7Cu);  if (depth < kMaxDepth) unit_009A(c, 21u, depth + 1u); else { c.pc = 0x00368170u; return; } if (c.pc != 0x00363D7Cu) [[unlikely]] return; }
L_00363D7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00363D98; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_00363D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363D98u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00363D98u) [[unlikely]] return; }
L_00363D98:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DACu); set32(c.r[4], c.r[2].w[0] + 5499u);  if (depth < kMaxDepth) unit_009D(c, 314u, depth + 1u); else { c.pc = 0x00377460u; return; } if (c.pc != 0x00363DACu) [[unlikely]] return; }
L_00363DAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_00363DCC; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DC0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00363DC0u) [[unlikely]] return; }
L_00363DC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_00363E08; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_00363DCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363DD4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00363DD4u) [[unlikely]] return; }
L_00363DD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363E04; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[2].w[0] + 5499u);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5499u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00363E04; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E04u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00363E04u) [[unlikely]] return; }
L_00363E04:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_00363E08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E10u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00363E10u) [[unlikely]] return; }
L_00363E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00363E90; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[7].w[0] + 5499u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_00363E90; } }
    c.r[2].d[0] = ld8((c.r[7].w[0] + 5496u));
    set32(c.r[3], 0u + 16u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 5496u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5507u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E58u); st16((c.r[2].w[0] + 5502u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00363E58u) [[unlikely]] return; }
L_00363E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00363E90; } }
L_00363E60:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 5502u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 5502u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 5502u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00363E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E84u); st8((c.r[5].w[0] + 5507u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 118u, depth + 1u); else { c.pc = 0x003688A0u; return; } if (c.pc != 0x00363E84u) [[unlikely]] return; }
L_00363E84:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00363E90u); st8((c.r[2].w[0] + 5347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0098(c, 506u, depth + 1u); else { c.pc = 0x00363970u; return; } if (c.pc != 0x00363E90u) [[unlikely]] return; }
L_00363E90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00363E94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00363EA0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], c.r[28].w[0] - 27296u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363EC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18824u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363EF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18840u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363F20:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], c.r[28].w[0] - 27288u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363F40:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], c.r[28].w[0] - 27280u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363F60:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18864u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363F90:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18880u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363FC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18896u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00360000u < 16384u) { entry = entries_0098[(t - 0x00360000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00363FF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18928u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    c.budget -= 4;
    [[clang::musttail]] return unit_0099(c, 1u, depth);
}

}
