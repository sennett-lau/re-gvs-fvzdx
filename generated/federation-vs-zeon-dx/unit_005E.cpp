#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_005E[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0,
    21, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0,
    0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0,
    0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0,
    0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143,
    0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0,
    152, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0,
    0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 0, 198,
    0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0,
    0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0,
    239, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 249,
    0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0,
    274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0,
    304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0,
    0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0,
    0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0,
    326, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0,
    0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0,
    0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0,
    413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0,
    0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447,
    0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0,
    0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0,
    0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0,
    486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0,
    0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0,
    0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0,
    0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0,
    0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0,
    0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0,
    0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0,
    0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0,
    583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0,
};

void unit_005E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00278000;
    case 2u: goto L_00278010;
    case 3u: goto L_0027801C;
    case 4u: goto L_0027805C;
    case 5u: goto L_00278060;
    case 6u: goto L_00278070;
    case 7u: goto L_00278088;
    case 8u: goto L_00278090;
    case 9u: goto L_002780AC;
    case 10u: goto L_002780C8;
    case 11u: goto L_00278114;
    case 12u: goto L_00278130;
    case 13u: goto L_00278144;
    case 14u: goto L_00278150;
    case 15u: goto L_00278160;
    case 16u: goto L_00278168;
    case 17u: goto L_00278190;
    case 18u: goto L_00278198;
    case 19u: goto L_002781E0;
    case 20u: goto L_002781F4;
    case 21u: goto L_00278200;
    case 22u: goto L_0027820C;
    case 23u: goto L_00278214;
    case 24u: goto L_0027821C;
    case 25u: goto L_00278234;
    case 26u: goto L_00278274;
    case 27u: goto L_00278280;
    case 28u: goto L_00278298;
    case 29u: goto L_002782C0;
    case 30u: goto L_002782D4;
    case 31u: goto L_002782E8;
    case 32u: goto L_002782F0;
    case 33u: goto L_00278300;
    case 34u: goto L_00278320;
    case 35u: goto L_00278350;
    case 36u: goto L_00278394;
    case 37u: goto L_002783B8;
    case 38u: goto L_002783D0;
    case 39u: goto L_002783E4;
    case 40u: goto L_002783F0;
    case 41u: goto L_002783F8;
    case 42u: goto L_00278410;
    case 43u: goto L_00278418;
    case 44u: goto L_00278430;
    case 45u: goto L_00278470;
    case 46u: goto L_002784AC;
    case 47u: goto L_002784C0;
    case 48u: goto L_002784D8;
    case 49u: goto L_002784E4;
    case 50u: goto L_002784EC;
    case 51u: goto L_00278548;
    case 52u: goto L_0027855C;
    case 53u: goto L_00278568;
    case 54u: goto L_00278578;
    case 55u: goto L_00278598;
    case 56u: goto L_002785CC;
    case 57u: goto L_0027867C;
    case 58u: goto L_00278690;
    case 59u: goto L_002786B0;
    case 60u: goto L_002786BC;
    case 61u: goto L_002786D4;
    case 62u: goto L_002786F0;
    case 63u: goto L_00278708;
    case 64u: goto L_00278714;
    case 65u: goto L_0027871C;
    case 66u: goto L_00278768;
    case 67u: goto L_0027877C;
    case 68u: goto L_00278788;
    case 69u: goto L_00278798;
    case 70u: goto L_002787AC;
    case 71u: goto L_002787E4;
    case 72u: goto L_00278884;
    case 73u: goto L_00278898;
    case 74u: goto L_0027890C;
    case 75u: goto L_00278914;
    case 76u: goto L_00278940;
    case 77u: goto L_0027894C;
    case 78u: goto L_00278964;
    case 79u: goto L_00278980;
    case 80u: goto L_00278994;
    case 81u: goto L_002789A8;
    case 82u: goto L_002789B0;
    case 83u: goto L_002789C0;
    case 84u: goto L_002789E0;
    case 85u: goto L_00278A20;
    case 86u: goto L_00278A50;
    case 87u: goto L_00278A64;
    case 88u: goto L_00278A70;
    case 89u: goto L_00278A78;
    case 90u: goto L_00278A90;
    case 91u: goto L_00278A98;
    case 92u: goto L_00278AB0;
    case 93u: goto L_00278AF0;
    case 94u: goto L_00278B30;
    case 95u: goto L_00278B40;
    case 96u: goto L_00278B54;
    case 97u: goto L_00278B5C;
    case 98u: goto L_00278B78;
    case 99u: goto L_00278BC4;
    case 100u: goto L_00278BDC;
    case 101u: goto L_00278BF0;
    case 102u: goto L_00278C04;
    case 103u: goto L_00278C10;
    case 104u: goto L_00278C1C;
    case 105u: goto L_00278C24;
    case 106u: goto L_00278C5C;
    case 107u: goto L_00278C70;
    case 108u: goto L_00278C84;
    case 109u: goto L_00278C90;
    case 110u: goto L_00278C9C;
    case 111u: goto L_00278CA4;
    case 112u: goto L_00278CB8;
    case 113u: goto L_00278CC0;
    case 114u: goto L_00278CD8;
    case 115u: goto L_00278D00;
    case 116u: goto L_00278D20;
    case 117u: goto L_00278D68;
    case 118u: goto L_00278D80;
    case 119u: goto L_00278DB0;
    case 120u: goto L_00278DC8;
    case 121u: goto L_00278DF8;
    case 122u: goto L_00278E10;
    case 123u: goto L_00278E24;
    case 124u: goto L_00278E30;
    case 125u: goto L_00278E38;
    case 126u: goto L_00278E50;
    case 127u: goto L_00278E58;
    case 128u: goto L_00278E70;
    case 129u: goto L_00278EB0;
    case 130u: goto L_00278ED4;
    case 131u: goto L_00278F04;
    case 132u: goto L_00278F1C;
    case 133u: goto L_00278F54;
    case 134u: goto L_00278F70;
    case 135u: goto L_00278F84;
    case 136u: goto L_00278FA0;
    case 137u: goto L_00278FD4;
    case 138u: goto L_00279004;
    case 139u: goto L_0027901C;
    case 140u: goto L_00279050;
    case 141u: goto L_00279064;
    case 142u: goto L_00279070;
    case 143u: goto L_0027907C;
    case 144u: goto L_00279084;
    case 145u: goto L_002790A4;
    case 146u: goto L_002790F4;
    case 147u: goto L_0027910C;
    case 148u: goto L_00279120;
    case 149u: goto L_0027914C;
    case 150u: goto L_00279168;
    case 151u: goto L_00279174;
    case 152u: goto L_00279180;
    case 153u: goto L_00279188;
    case 154u: goto L_0027919C;
    case 155u: goto L_002791A4;
    case 156u: goto L_002791BC;
    case 157u: goto L_002791E0;
    case 158u: goto L_00279228;
    case 159u: goto L_00279250;
    case 160u: goto L_00279264;
    case 161u: goto L_00279270;
    case 162u: goto L_0027927C;
    case 163u: goto L_00279284;
    case 164u: goto L_00279298;
    case 165u: goto L_002792A0;
    case 166u: goto L_002792B8;
    case 167u: goto L_002792E0;
    case 168u: goto L_00279300;
    case 169u: goto L_00279344;
    case 170u: goto L_0027936C;
    case 171u: goto L_00279380;
    case 172u: goto L_00279394;
    case 173u: goto L_002793A0;
    case 174u: goto L_002793A8;
    case 175u: goto L_002793C0;
    case 176u: goto L_002793C8;
    case 177u: goto L_002793E0;
    case 178u: goto L_00279420;
    case 179u: goto L_00279460;
    case 180u: goto L_00279470;
    case 181u: goto L_00279484;
    case 182u: goto L_002794A0;
    case 183u: goto L_002794F0;
    case 184u: goto L_00279504;
    case 185u: goto L_00279510;
    case 186u: goto L_0027951C;
    case 187u: goto L_00279524;
    case 188u: goto L_00279560;
    case 189u: goto L_00279578;
    case 190u: goto L_00279598;
    case 191u: goto L_002795B4;
    case 192u: goto L_00279600;
    case 193u: goto L_0027962C;
    case 194u: goto L_00279648;
    case 195u: goto L_00279654;
    case 196u: goto L_00279660;
    case 197u: goto L_00279668;
    case 198u: goto L_0027967C;
    case 199u: goto L_00279684;
    case 200u: goto L_0027969C;
    case 201u: goto L_002796E8;
    case 202u: goto L_00279714;
    case 203u: goto L_00279750;
    case 204u: goto L_00279764;
    case 205u: goto L_00279770;
    case 206u: goto L_0027977C;
    case 207u: goto L_00279784;
    case 208u: goto L_002797C0;
    case 209u: goto L_002797D8;
    case 210u: goto L_00279800;
    case 211u: goto L_00279814;
    case 212u: goto L_00279820;
    case 213u: goto L_0027982C;
    case 214u: goto L_00279834;
    case 215u: goto L_00279848;
    case 216u: goto L_00279850;
    case 217u: goto L_00279868;
    case 218u: goto L_00279884;
    case 219u: goto L_002798AC;
    case 220u: goto L_002798E0;
    case 221u: goto L_00279900;
    case 222u: goto L_00279948;
    case 223u: goto L_0027996C;
    case 224u: goto L_00279984;
    case 225u: goto L_002799A0;
    case 226u: goto L_002799B4;
    case 227u: goto L_002799C0;
    case 228u: goto L_002799C8;
    case 229u: goto L_002799E0;
    case 230u: goto L_002799E8;
    case 231u: goto L_00279A00;
    case 232u: goto L_00279A40;
    case 233u: goto L_00279A6C;
    case 234u: goto L_00279A84;
    case 235u: goto L_00279AA0;
    case 236u: goto L_00279ACC;
    case 237u: goto L_00279AE8;
    case 238u: goto L_00279AF4;
    case 239u: goto L_00279B00;
    case 240u: goto L_00279B08;
    case 241u: goto L_00279B1C;
    case 242u: goto L_00279B24;
    case 243u: goto L_00279B3C;
    case 244u: goto L_00279B60;
    case 245u: goto L_00279BA8;
    case 246u: goto L_00279BD0;
    case 247u: goto L_00279BE4;
    case 248u: goto L_00279BF0;
    case 249u: goto L_00279BFC;
    case 250u: goto L_00279C04;
    case 251u: goto L_00279C18;
    case 252u: goto L_00279C20;
    case 253u: goto L_00279C38;
    case 254u: goto L_00279C60;
    case 255u: goto L_00279C80;
    case 256u: goto L_00279C9C;
    case 257u: goto L_00279CA4;
    case 258u: goto L_00279CE8;
    case 259u: goto L_00279D00;
    case 260u: goto L_00279D2C;
    case 261u: goto L_00279D40;
    case 262u: goto L_00279D54;
    case 263u: goto L_00279D60;
    case 264u: goto L_00279D6C;
    case 265u: goto L_00279D74;
    case 266u: goto L_00279D90;
    case 267u: goto L_00279DA4;
    case 268u: goto L_00279DAC;
    case 269u: goto L_00279DC4;
    case 270u: goto L_00279E04;
    case 271u: goto L_00279E44;
    case 272u: goto L_00279E60;
    case 273u: goto L_00279E78;
    case 274u: goto L_00279E80;
    case 275u: goto L_00279EB8;
    case 276u: goto L_00279ED4;
    case 277u: goto L_00279F24;
    case 278u: goto L_00279F40;
    case 279u: goto L_00279F54;
    case 280u: goto L_00279F60;
    case 281u: goto L_00279F7C;
    case 282u: goto L_00279FA4;
    case 283u: goto L_00279FB4;
    case 284u: goto L_00279FBC;
    case 285u: goto L_0027A000;
    case 286u: goto L_0027A090;
    case 287u: goto L_0027A0A0;
    case 288u: goto L_0027A0E0;
    case 289u: goto L_0027A0EC;
    case 290u: goto L_0027A134;
    case 291u: goto L_0027A164;
    case 292u: goto L_0027A1CC;
    case 293u: goto L_0027A1E0;
    case 294u: goto L_0027A1EC;
    case 295u: goto L_0027A248;
    case 296u: goto L_0027A254;
    case 297u: goto L_0027A26C;
    case 298u: goto L_0027A280;
    case 299u: goto L_0027A294;
    case 300u: goto L_0027A2A8;
    case 301u: goto L_0027A2B0;
    case 302u: goto L_0027A2C0;
    case 303u: goto L_0027A2E0;
    case 304u: goto L_0027A300;
    case 305u: goto L_0027A320;
    case 306u: goto L_0027A340;
    case 307u: goto L_0027A360;
    case 308u: goto L_0027A398;
    case 309u: goto L_0027A3C0;
    case 310u: goto L_0027A3D0;
    case 311u: goto L_0027A3E4;
    case 312u: goto L_0027A404;
    case 313u: goto L_0027A41C;
    case 314u: goto L_0027A430;
    case 315u: goto L_0027A444;
    case 316u: goto L_0027A464;
    case 317u: goto L_0027A478;
    case 318u: goto L_0027A484;
    case 319u: goto L_0027A490;
    case 320u: goto L_0027A49C;
    case 321u: goto L_0027A4A8;
    case 322u: goto L_0027A4C0;
    case 323u: goto L_0027A4CC;
    case 324u: goto L_0027A4DC;
    case 325u: goto L_0027A4F4;
    case 326u: goto L_0027A500;
    case 327u: goto L_0027A514;
    case 328u: goto L_0027A524;
    case 329u: goto L_0027A540;
    case 330u: goto L_0027A554;
    case 331u: goto L_0027A570;
    case 332u: goto L_0027A588;
    case 333u: goto L_0027A5A0;
    case 334u: goto L_0027A5B4;
    case 335u: goto L_0027A5C8;
    case 336u: goto L_0027A5E0;
    case 337u: goto L_0027A618;
    case 338u: goto L_0027A640;
    case 339u: goto L_0027A658;
    case 340u: goto L_0027A670;
    case 341u: goto L_0027A690;
    case 342u: goto L_0027A6CC;
    case 343u: goto L_0027A6E4;
    case 344u: goto L_0027A6F4;
    case 345u: goto L_0027A730;
    case 346u: goto L_0027A740;
    case 347u: goto L_0027A754;
    case 348u: goto L_0027A768;
    case 349u: goto L_0027A790;
    case 350u: goto L_0027A79C;
    case 351u: goto L_0027A7A8;
    case 352u: goto L_0027A7B4;
    case 353u: goto L_0027A7C4;
    case 354u: goto L_0027A7E0;
    case 355u: goto L_0027A7F8;
    case 356u: goto L_0027A814;
    case 357u: goto L_0027A82C;
    case 358u: goto L_0027A840;
    case 359u: goto L_0027A854;
    case 360u: goto L_0027A8BC;
    case 361u: goto L_0027A8D0;
    case 362u: goto L_0027A8E4;
    case 363u: goto L_0027A8F8;
    case 364u: goto L_0027A904;
    case 365u: goto L_0027A920;
    case 366u: goto L_0027A934;
    case 367u: goto L_0027A944;
    case 368u: goto L_0027A97C;
    case 369u: goto L_0027A99C;
    case 370u: goto L_0027A9D8;
    case 371u: goto L_0027A9F8;
    case 372u: goto L_0027AA00;
    case 373u: goto L_0027AA10;
    case 374u: goto L_0027AA30;
    case 375u: goto L_0027AA3C;
    case 376u: goto L_0027AA74;
    case 377u: goto L_0027AA90;
    case 378u: goto L_0027AACC;
    case 379u: goto L_0027AAF4;
    case 380u: goto L_0027AB18;
    case 381u: goto L_0027AB30;
    case 382u: goto L_0027AB44;
    case 383u: goto L_0027AB50;
    case 384u: goto L_0027AB58;
    case 385u: goto L_0027AB7C;
    case 386u: goto L_0027AB94;
    case 387u: goto L_0027ABB0;
    case 388u: goto L_0027ABC4;
    case 389u: goto L_0027ABD0;
    case 390u: goto L_0027ABD8;
    case 391u: goto L_0027ABF0;
    case 392u: goto L_0027AC04;
    case 393u: goto L_0027AC10;
    case 394u: goto L_0027AC1C;
    case 395u: goto L_0027AC28;
    case 396u: goto L_0027AC40;
    case 397u: goto L_0027AC58;
    case 398u: goto L_0027AC68;
    case 399u: goto L_0027AC7C;
    case 400u: goto L_0027AC94;
    case 401u: goto L_0027ACA0;
    case 402u: goto L_0027ACB4;
    case 403u: goto L_0027ACBC;
    case 404u: goto L_0027ACD4;
    case 405u: goto L_0027ACF0;
    case 406u: goto L_0027AD04;
    case 407u: goto L_0027AD28;
    case 408u: goto L_0027AD34;
    case 409u: goto L_0027AD48;
    case 410u: goto L_0027AD50;
    case 411u: goto L_0027AD60;
    case 412u: goto L_0027AD74;
    case 413u: goto L_0027AD80;
    case 414u: goto L_0027AD88;
    case 415u: goto L_0027AD98;
    case 416u: goto L_0027ADD0;
    case 417u: goto L_0027ADF8;
    case 418u: goto L_0027AE10;
    case 419u: goto L_0027AE3C;
    case 420u: goto L_0027AE48;
    case 421u: goto L_0027AE5C;
    case 422u: goto L_0027AE64;
    case 423u: goto L_0027AE80;
    case 424u: goto L_0027AEA0;
    case 425u: goto L_0027AEC0;
    case 426u: goto L_0027AEE0;
    case 427u: goto L_0027AF1C;
    case 428u: goto L_0027AF40;
    case 429u: goto L_0027AF50;
    case 430u: goto L_0027AF64;
    case 431u: goto L_0027AF9C;
    case 432u: goto L_0027AFB0;
    case 433u: goto L_0027AFC8;
    case 434u: goto L_0027B000;
    case 435u: goto L_0027B014;
    case 436u: goto L_0027B034;
    case 437u: goto L_0027B04C;
    case 438u: goto L_0027B060;
    case 439u: goto L_0027B074;
    case 440u: goto L_0027B094;
    case 441u: goto L_0027B0A8;
    case 442u: goto L_0027B0B4;
    case 443u: goto L_0027B0C0;
    case 444u: goto L_0027B0CC;
    case 445u: goto L_0027B0D8;
    case 446u: goto L_0027B0E4;
    case 447u: goto L_0027B0FC;
    case 448u: goto L_0027B108;
    case 449u: goto L_0027B118;
    case 450u: goto L_0027B130;
    case 451u: goto L_0027B13C;
    case 452u: goto L_0027B150;
    case 453u: goto L_0027B160;
    case 454u: goto L_0027B170;
    case 455u: goto L_0027B184;
    case 456u: goto L_0027B1A0;
    case 457u: goto L_0027B1B8;
    case 458u: goto L_0027B1D0;
    case 459u: goto L_0027B1F0;
    case 460u: goto L_0027B230;
    case 461u: goto L_0027B248;
    case 462u: goto L_0027B26C;
    case 463u: goto L_0027B284;
    case 464u: goto L_0027B2A0;
    case 465u: goto L_0027B2B4;
    case 466u: goto L_0027B2C0;
    case 467u: goto L_0027B2C8;
    case 468u: goto L_0027B300;
    case 469u: goto L_0027B318;
    case 470u: goto L_0027B32C;
    case 471u: goto L_0027B334;
    case 472u: goto L_0027B34C;
    case 473u: goto L_0027B390;
    case 474u: goto L_0027B3A4;
    case 475u: goto L_0027B3AC;
    case 476u: goto L_0027B3B8;
    case 477u: goto L_0027B3DC;
    case 478u: goto L_0027B3F4;
    case 479u: goto L_0027B40C;
    case 480u: goto L_0027B420;
    case 481u: goto L_0027B434;
    case 482u: goto L_0027B440;
    case 483u: goto L_0027B448;
    case 484u: goto L_0027B460;
    case 485u: goto L_0027B474;
    case 486u: goto L_0027B480;
    case 487u: goto L_0027B48C;
    case 488u: goto L_0027B498;
    case 489u: goto L_0027B4A4;
    case 490u: goto L_0027B4BC;
    case 491u: goto L_0027B4D4;
    case 492u: goto L_0027B4E4;
    case 493u: goto L_0027B4F8;
    case 494u: goto L_0027B504;
    case 495u: goto L_0027B50C;
    case 496u: goto L_0027B524;
    case 497u: goto L_0027B540;
    case 498u: goto L_0027B554;
    case 499u: goto L_0027B56C;
    case 500u: goto L_0027B574;
    case 501u: goto L_0027B590;
    case 502u: goto L_0027B5B0;
    case 503u: goto L_0027B5BC;
    case 504u: goto L_0027B5F4;
    case 505u: goto L_0027B610;
    case 506u: goto L_0027B650;
    case 507u: goto L_0027B674;
    case 508u: goto L_0027B698;
    case 509u: goto L_0027B6B0;
    case 510u: goto L_0027B6C4;
    case 511u: goto L_0027B6D0;
    case 512u: goto L_0027B6D8;
    case 513u: goto L_0027B710;
    case 514u: goto L_0027B730;
    case 515u: goto L_0027B73C;
    case 516u: goto L_0027B750;
    case 517u: goto L_0027B758;
    case 518u: goto L_0027B770;
    case 519u: goto L_0027B7B0;
    case 520u: goto L_0027B7C4;
    case 521u: goto L_0027B7D0;
    case 522u: goto L_0027B7D8;
    case 523u: goto L_0027B7FC;
    case 524u: goto L_0027B814;
    case 525u: goto L_0027B830;
    case 526u: goto L_0027B844;
    case 527u: goto L_0027B850;
    case 528u: goto L_0027B858;
    case 529u: goto L_0027B870;
    case 530u: goto L_0027B884;
    case 531u: goto L_0027B890;
    case 532u: goto L_0027B89C;
    case 533u: goto L_0027B8A8;
    case 534u: goto L_0027B8B4;
    case 535u: goto L_0027B8CC;
    case 536u: goto L_0027B8E4;
    case 537u: goto L_0027B8F4;
    case 538u: goto L_0027B908;
    case 539u: goto L_0027B920;
    case 540u: goto L_0027B92C;
    case 541u: goto L_0027B940;
    case 542u: goto L_0027B948;
    case 543u: goto L_0027B960;
    case 544u: goto L_0027B970;
    case 545u: goto L_0027B984;
    case 546u: goto L_0027B9A8;
    case 547u: goto L_0027B9B4;
    case 548u: goto L_0027B9C8;
    case 549u: goto L_0027B9D0;
    case 550u: goto L_0027B9E0;
    case 551u: goto L_0027BA00;
    case 552u: goto L_0027BA20;
    case 553u: goto L_0027BA40;
    case 554u: goto L_0027BA90;
    case 555u: goto L_0027BAA8;
    case 556u: goto L_0027BAD4;
    case 557u: goto L_0027BAEC;
    case 558u: goto L_0027BB3C;
    case 559u: goto L_0027BB50;
    case 560u: goto L_0027BB8C;
    case 561u: goto L_0027BB98;
    case 562u: goto L_0027BBE0;
    case 563u: goto L_0027BC10;
    case 564u: goto L_0027BC80;
    case 565u: goto L_0027BD14;
    case 566u: goto L_0027BD68;
    case 567u: goto L_0027BD88;
    case 568u: goto L_0027BD90;
    case 569u: goto L_0027BDB0;
    case 570u: goto L_0027BDEC;
    case 571u: goto L_0027BDF8;
    case 572u: goto L_0027BE40;
    case 573u: goto L_0027BE70;
    case 574u: goto L_0027BEA0;
    case 575u: goto L_0027BEB8;
    case 576u: goto L_0027BED0;
    case 577u: goto L_0027BEEC;
    case 578u: goto L_0027BEF8;
    case 579u: goto L_0027BF04;
    case 580u: goto L_0027BF0C;
    case 581u: goto L_0027BF4C;
    case 582u: goto L_0027BF64;
    case 583u: goto L_0027BF80;
    case 584u: goto L_0027BFA0;
    case 585u: goto L_0027BFA8;
    case 586u: goto L_0027BFD4;
    case 587u: goto L_0027BFF4;
    default: bad_entry(c, 0x00278000u); return;
    }
L_00278000:
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 4;
L_00278010:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027801Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027801Cu) [[unlikely]] return; }
L_0027801C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027805C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027805C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027805Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027805Cu) [[unlikely]] return; }
L_0027805C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00278060:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278088u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00278088u) [[unlikely]] return; }
L_00278088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278090u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00278090u) [[unlikely]] return; }
L_00278090:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002780A4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002780A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780ACu);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002780ACu) [[unlikely]] return; }
L_002780AC:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002780C8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002780C8u) [[unlikely]] return; }
L_002780C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002780EC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00278114; } }
L_002780EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278114u); st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00278114u) [[unlikely]] return; }
L_00278114:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278144u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278144u) [[unlikely]] return; }
L_00278144:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278150u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278150u) [[unlikely]] return; }
L_00278150:
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278160u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x00278160u) [[unlikely]] return; }
L_00278160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278168u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278168u) [[unlikely]] return; }
L_00278168:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278190u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x00278190u) [[unlikely]] return; }
L_00278190:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278198u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00278198u) [[unlikely]] return; }
L_00278198:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002781C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002781C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002781E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002781F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002781F4u) [[unlikely]] return; }
L_002781F4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278200u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278200u) [[unlikely]] return; }
L_00278200:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027820Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0027820Cu) [[unlikely]] return; }
L_0027820C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278214u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278214u) [[unlikely]] return; }
L_00278214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027821Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x0027821Cu) [[unlikely]] return; }
L_0027821C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002782A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278234u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00278234u) [[unlikely]] return; }
L_00278234:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0027824C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002782A4; } }
L_0027824C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 48u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278274u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x00278274u) [[unlikely]] return; }
L_00278274:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278280u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x00278280u) [[unlikely]] return; }
L_00278280:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278298u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278298u) [[unlikely]] return; }
L_00278298:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002782AC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_002782A4:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002782A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002782AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002782C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002782D4u) [[unlikely]] return; }
L_002782D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002782F0; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002782E8u) [[unlikely]] return; }
L_002782E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002782F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002782F0u) [[unlikely]] return; }
L_002782F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278300:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00278320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 343u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278358; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 746u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00278358; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278350u); st8((c.r[4].w[0] + 732u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_005E(c, 167u, depth + 1u); else { c.pc = 0x002792E0u; return; } if (c.pc != 0x00278350u) [[unlikely]] return; }
L_00278350:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002783BC; } }
L_00278358:
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[6], 0u + 2u);  if (t) { goto L_002783A0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278394u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278394u) [[unlikely]] return; }
L_00278394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002783B8; } }
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_002783A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783B8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002783B8u) [[unlikely]] return; }
L_002783B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002783BC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002783D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002783E4u) [[unlikely]] return; }
L_002783E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002783F0u) [[unlikely]] return; }
L_002783F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002783F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002783F8u) [[unlikely]] return; }
L_002783F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00278424; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278410u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00278410u) [[unlikely]] return; }
L_00278410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278418u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00278418u) [[unlikely]] return; }
L_00278418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002784B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00278424:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278430u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00278430u) [[unlikely]] return; }
L_00278430:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00278464; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00278464:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278470u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00278470u) [[unlikely]] return; }
L_00278470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002784AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002784AC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784ACu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002784ACu) [[unlikely]] return; }
L_002784AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002784B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002784C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784D8u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002784D8u) [[unlikely]] return; }
L_002784D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002784E4u) [[unlikely]] return; }
L_002784E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002784ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002784ECu) [[unlikely]] return; }
L_002784EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002786D4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278570; } }
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278548u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00278548u) [[unlikely]] return; }
L_00278548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027855Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0027855Cu) [[unlikely]] return; }
L_0027855C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278568u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00278568u) [[unlikely]] return; }
L_00278568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[29].w[0] + 52u);  if (t) { goto L_002785BC; } }
L_00278570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278578u); set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00278578u) [[unlikely]] return; }
L_00278578:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278598u); set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00278598u) [[unlikely]] return; }
L_00278598:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    st32((c.r[29].w[0] + 52u), c.f[0]);
    set32(c.r[17], c.r[29].w[0] + 52u);
    c.budget -= 9;
L_002785BC:
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002785CCu); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002785CCu) [[unlikely]] return; }
L_002785CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00278634; } }
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00278608; } }
    c.f[0] = fp::add(c.f[2], c.f[1]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 2;
L_00278608:
    c.f[1] = ld32((c.r[16].w[0] + 36u));
    c.f[0] = ld32((c.r[17].w[0]));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00278634; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[17].w[0]), c.f[0]);
    c.budget -= 5;
L_00278634:
    c.f[1] = ld32((c.r[16].w[0] + 68u));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[4] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[1] = fp::mul(c.f[4], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.f[2] = fp::sub(c.f[3], c.f[2]);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 2u, c.f[2], c.f[4]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027867Cu); st32((c.r[16].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x0027867Cu) [[unlikely]] return; }
L_0027867C:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278690u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00278690u) [[unlikely]] return; }
L_00278690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786B0u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 73u, depth + 1u); else { c.pc = 0x002DCA20u; return; } if (c.pc != 0x002786B0u) [[unlikely]] return; }
L_002786B0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002786BCu) [[unlikely]] return; }
L_002786BC:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002786D4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002786D4u) [[unlikely]] return; }
L_002786D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_002786F0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278708u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278708u) [[unlikely]] return; }
L_00278708:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278714u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278714u) [[unlikely]] return; }
L_00278714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027871Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027871Cu) [[unlikely]] return; }
L_0027871C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027887C; } }
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    set32(c.r[6], c.r[29].w[0] + 48u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    st32((c.r[6].w[0]), c.f[3]);
    st32((c.r[6].w[0] + 4u), c.f[2]);
    st32((c.r[6].w[0] + 8u), c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278768u); st32((c.r[6].w[0] + 12u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00278768u) [[unlikely]] return; }
L_00278768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027877Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 30u, depth + 1u); else { c.pc = 0x0013CBE0u; return; } if (c.pc != 0x0027877Cu) [[unlikely]] return; }
L_0027877C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278788u); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00278788u) [[unlikely]] return; }
L_00278788:
    set32(c.r[4], c.r[29].w[0] + 64u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278798u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00278798u) [[unlikely]] return; }
L_00278798:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002787ACu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002787ACu) [[unlikely]] return; }
L_002787AC:
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[20] = c.f[0];
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002787D8; } }
    fpu_div(c, 20u, c.f[20], c.f[1]);
    c.budget -= 3;
L_002787D8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002787E4u); c.f[12] = fp::sub(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002787E4u) [[unlikely]] return; }
L_002787E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA50000u);
    c.r[2].d[0] = c.r[2].d[0] | 1153ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00278850; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00278820; } }
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 2;
L_00278820:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[20]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00278854; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA50000u);
    c.r[2].d[0] = c.r[2].d[0] | 1153ull;
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), c.f[0]);  if (t) { goto L_00278854; } }
L_00278850:
    st32((c.r[16].w[0] + 104u), c.f[20]);
    c.budget -= 1;
L_00278854:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40020000u);
    c.r[2].d[0] = c.r[2].d[0] | 12793ull;
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027887C; } }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 1;
L_0027887C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278884u); set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00278884u) [[unlikely]] return; }
L_00278884:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 48u), c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278898u); set32(c.r[4], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00278898u) [[unlikely]] return; }
L_00278898:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 56u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 68u));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 48u));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 32u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 52u));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 36u), c.f[0]);
    c.f[2] = ld32((c.r[16].w[0] + 56u));
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 40u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027890Cu); st32((c.r[16].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 272u, depth + 1u); else { c.pc = 0x002D7D20u; return; } if (c.pc != 0x0027890Cu) [[unlikely]] return; }
L_0027890C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278914u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00278914u) [[unlikely]] return; }
L_00278914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278964; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 56u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278940u); st32((c.r[16].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x00278940u) [[unlikely]] return; }
L_00278940:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027894Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x0027894Cu) [[unlikely]] return; }
L_0027894C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278964u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278964u) [[unlikely]] return; }
L_00278964:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00278980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278994u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278994u) [[unlikely]] return; }
L_00278994:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002789B0; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002789A8u) [[unlikely]] return; }
L_002789A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002789B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002789B0u) [[unlikely]] return; }
L_002789B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002789C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002789E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_00278A2C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A20u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278A20u) [[unlikely]] return; }
L_00278A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00278A3C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00278A2C:
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 1216u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
L_00278A3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00278A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278A64u) [[unlikely]] return; }
L_00278A64:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A70u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278A70u) [[unlikely]] return; }
L_00278A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278A78u) [[unlikely]] return; }
L_00278A78:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00278AA4; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00278A90u) [[unlikely]] return; }
L_00278A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278A98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00278A98u) [[unlikely]] return; }
L_00278A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00278B34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00278AA4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00278AB0u) [[unlikely]] return; }
L_00278AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00278AE4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00278AE4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278AF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00278AF0u) [[unlikely]] return; }
L_00278AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278B30; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00278B30; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B30u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278B30u) [[unlikely]] return; }
L_00278B30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00278B34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278B54u) [[unlikely]] return; }
L_00278B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278B5Cu) [[unlikely]] return; }
L_00278B5C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278B78u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278B78u) [[unlikely]] return; }
L_00278B78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00278B9C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00278BDC; } }
L_00278B9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F380000u);
    c.r[2].d[0] = c.r[2].d[0] | 57881ull;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BC4u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00278BC4u) [[unlikely]] return; }
L_00278BC4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278BDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278BDCu) [[unlikely]] return; }
L_00278BDC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C04u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278C04u) [[unlikely]] return; }
L_00278C04:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278C10u) [[unlikely]] return; }
L_00278C10:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00278C1Cu) [[unlikely]] return; }
L_00278C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278C24u) [[unlikely]] return; }
L_00278C24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278C5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F170000u);
    c.r[2].d[0] = c.r[2].d[0] | 46242ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C5Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278C5Cu) [[unlikely]] return; }
L_00278C5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C84u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278C84u) [[unlikely]] return; }
L_00278C84:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278C90u) [[unlikely]] return; }
L_00278C90:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278C9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00278C9Cu) [[unlikely]] return; }
L_00278C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278CA4u) [[unlikely]] return; }
L_00278CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_00278CCC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00278CB8u) [[unlikely]] return; }
L_00278CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00278CC0u) [[unlikely]] return; }
L_00278CC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00278CE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 1;
L_00278CCC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278CD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00278CD8u) [[unlikely]] return; }
L_00278CD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278CE4; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00278CE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00278CE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00278D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00278D70; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D68u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278D68u) [[unlikely]] return; }
L_00278D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00278DFC; } }
L_00278D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278D80u);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00278D80u) [[unlikely]] return; }
L_00278D80:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00278DD4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00278DB0u) [[unlikely]] return; }
L_00278DB0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278DC8u) [[unlikely]] return; }
L_00278DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278DF8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00278DD4:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278DF8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278DF8u) [[unlikely]] return; }
L_00278DF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00278DFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E24u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278E24u) [[unlikely]] return; }
L_00278E24:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278E30u) [[unlikely]] return; }
L_00278E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00278E38u) [[unlikely]] return; }
L_00278E38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00278E64; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00278E50u) [[unlikely]] return; }
L_00278E50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00278E58u) [[unlikely]] return; }
L_00278E58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00278F58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00278E64:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278E70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00278E70u) [[unlikely]] return; }
L_00278E70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00278EA4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00278EA4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278EB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00278EB0u) [[unlikely]] return; }
L_00278EB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00278F54; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00278F54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278ED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00278ED4u) [[unlikely]] return; }
L_00278ED4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00278F24; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00278F04u) [[unlikely]] return; }
L_00278F04:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278F1Cu) [[unlikely]] return; }
L_00278F1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00278F54; } }
L_00278F24:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F54u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00278F54u) [[unlikely]] return; }
L_00278F54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00278F58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00278F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278F84u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00278F84u) [[unlikely]] return; }
L_00278F84:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FA0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00278FA0u) [[unlikely]] return; }
L_00278FA0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  goto L_00278FC8; }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00279040; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 1;
L_00278FC8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00278FD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x00278FD4u) [[unlikely]] return; }
L_00278FD4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00279024; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279004u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00279004u) [[unlikely]] return; }
L_00279004:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027901Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027901Cu) [[unlikely]] return; }
L_0027901C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279044; } }
L_00279024:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 7;
L_00279040:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279044:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279050:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279064u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279064u) [[unlikely]] return; }
L_00279064:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279070u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279070u) [[unlikely]] return; }
L_00279070:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027907Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027907Cu) [[unlikely]] return; }
L_0027907C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279084u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279084u) [[unlikely]] return; }
L_00279084:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790A4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002790A4u) [[unlikely]] return; }
L_002790A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002790CC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027910C; } }
L_002790CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F930000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002790F4u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002790F4u) [[unlikely]] return; }
L_002790F4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 14u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027910Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027910Cu) [[unlikely]] return; }
L_0027910C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027914Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0027914Cu) [[unlikely]] return; }
L_0027914C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279168u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279168u) [[unlikely]] return; }
L_00279168:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279174u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279174u) [[unlikely]] return; }
L_00279174:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279180u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00279180u) [[unlikely]] return; }
L_00279180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279188u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279188u) [[unlikely]] return; }
L_00279188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_002791B0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027919Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027919Cu) [[unlikely]] return; }
L_0027919C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002791A4u) [[unlikely]] return; }
L_002791A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279238; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 1;
L_002791B0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002791BCu) [[unlikely]] return; }
L_002791BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_002791D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 4;
L_002791D4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002791E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002791E0u) [[unlikely]] return; }
L_002791E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279234; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279230; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F270000u);
    c.r[2].d[0] = c.r[2].d[0] | 61342ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 15u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279228u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279228u) [[unlikely]] return; }
L_00279228:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279234; } }
L_00279230:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00279234:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279238:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279264u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279264u) [[unlikely]] return; }
L_00279264:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279270u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279270u) [[unlikely]] return; }
L_00279270:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027927Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027927Cu) [[unlikely]] return; }
L_0027927C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279284u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279284u) [[unlikely]] return; }
L_00279284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_002792AC; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279298u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00279298u) [[unlikely]] return; }
L_00279298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002792A0u) [[unlikely]] return; }
L_002792A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002792C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 1;
L_002792AC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002792B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002792B8u) [[unlikely]] return; }
L_002792B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002792C4; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002792C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002792C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002792E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14880u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00279300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00279350; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279344u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279344u) [[unlikely]] return; }
L_00279344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00279370; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00279350:
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 17u);
    st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027936Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027936Cu) [[unlikely]] return; }
L_0027936C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279370:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00279380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279394u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279394u) [[unlikely]] return; }
L_00279394:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793A0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002793A0u) [[unlikely]] return; }
L_002793A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002793A8u) [[unlikely]] return; }
L_002793A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_002793D4; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002793C0u) [[unlikely]] return; }
L_002793C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002793C8u) [[unlikely]] return; }
L_002793C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_002793D4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002793E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002793E0u) [[unlikely]] return; }
L_002793E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00279414; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00279414:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279420u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279420u) [[unlikely]] return; }
L_00279420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279460; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279460; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279460u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279460u) [[unlikely]] return; }
L_00279460:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279484u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279484u) [[unlikely]] return; }
L_00279484:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002794A0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002794A0u) [[unlikely]] return; }
L_002794A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002794C4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002794D8; } }
L_002794C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 5;
L_002794D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002794F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279504u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279504u) [[unlikely]] return; }
L_00279504:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279510u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279510u) [[unlikely]] return; }
L_00279510:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027951Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027951Cu) [[unlikely]] return; }
L_0027951C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279524u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279524u) [[unlikely]] return; }
L_00279524:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0027956C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F500000u);
    c.r[2].d[0] = c.r[2].d[0] | 13422ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279560u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279560u) [[unlikely]] return; }
L_00279560:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002795E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0027956C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279578u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00279578u) [[unlikely]] return; }
L_00279578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);  if (t) { goto L_0027958C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FB00000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.budget -= 3;
L_0027958C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279598u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279598u) [[unlikely]] return; }
L_00279598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);  if (t) { goto L_002795A8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.budget -= 2;
L_002795A8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002795B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002795B4u) [[unlikely]] return; }
L_002795B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002795E4; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 803u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    set32(c.r[4], 0u + 6u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[5].d[0] = c.r[5].d[0] | 16ull;
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 8052u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 10;
L_002795E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002795E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279600:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027962Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0027962Cu) [[unlikely]] return; }
L_0027962C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279648u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279648u) [[unlikely]] return; }
L_00279648:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279654u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279654u) [[unlikely]] return; }
L_00279654:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279660u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00279660u) [[unlikely]] return; }
L_00279660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279668u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279668u) [[unlikely]] return; }
L_00279668:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_00279690; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027967Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027967Cu) [[unlikely]] return; }
L_0027967C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279684u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00279684u) [[unlikely]] return; }
L_00279684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 1;
L_00279690:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027969Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027969Cu) [[unlikely]] return; }
L_0027969C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);  if (t) { goto L_00279708; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002796F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB30000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 19u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002796E8u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002796E8u) [[unlikely]] return; }
L_002796E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279704; } }
L_002796F0:
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 803u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00279704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.budget -= 1;
L_00279708:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279714u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00279714u) [[unlikely]] return; }
L_00279714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279734; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 6;
L_00279734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279738:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279764u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279764u) [[unlikely]] return; }
L_00279764:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279770u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279770u) [[unlikely]] return; }
L_00279770:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027977Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027977Cu) [[unlikely]] return; }
L_0027977C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279784u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279784u) [[unlikely]] return; }
L_00279784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002797CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ED00000u);
    c.r[2].d[0] = c.r[2].d[0] | 35232ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 20u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797C0u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002797C0u) [[unlikely]] return; }
L_002797C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002797E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_002797CC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002797D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002797D8u) [[unlikely]] return; }
L_002797D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002797E4; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002797E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002797E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279814u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279814u) [[unlikely]] return; }
L_00279814:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279820u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279820u) [[unlikely]] return; }
L_00279820:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027982Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027982Cu) [[unlikely]] return; }
L_0027982C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279834u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279834u) [[unlikely]] return; }
L_00279834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_0027985C; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279848u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00279848u) [[unlikely]] return; }
L_00279848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279850u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00279850u) [[unlikely]] return; }
L_00279850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002798D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 1;
L_0027985C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279868u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00279868u) [[unlikely]] return; }
L_00279868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_00279878; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 2;
L_00279878:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279884u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279884u) [[unlikely]] return; }
L_00279884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);  if (t) { goto L_002798A0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 803u)));
    set32(c.r[2], 0u - 17u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.budget -= 5;
L_002798A0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002798ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002798ACu) [[unlikely]] return; }
L_002798AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002798CC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 6;
L_002798CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002798D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002798E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00279900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00279950; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279948u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279948u) [[unlikely]] return; }
L_00279948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279988; } }
L_00279950:
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA90000u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 51066ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027996Cu); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027996Cu) [[unlikely]] return; }
L_0027996C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279984u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279984u) [[unlikely]] return; }
L_00279984:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279988:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002799A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002799B4u) [[unlikely]] return; }
L_002799B4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002799C0u) [[unlikely]] return; }
L_002799C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002799C8u) [[unlikely]] return; }
L_002799C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_002799F4; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002799E0u) [[unlikely]] return; }
L_002799E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002799E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002799E8u) [[unlikely]] return; }
L_002799E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_002799F4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279A00u) [[unlikely]] return; }
L_00279A00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00279A34; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00279A34:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279A40u) [[unlikely]] return; }
L_00279A40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279A84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FA90000u);
    c.r[2].d[0] = c.r[2].d[0] | 51066ull;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A6Cu); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00279A6Cu) [[unlikely]] return; }
L_00279A6C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279A84u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279A84u) [[unlikely]] return; }
L_00279A84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279A88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279ACCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00279ACCu) [[unlikely]] return; }
L_00279ACC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AE8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279AE8u) [[unlikely]] return; }
L_00279AE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279AF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279AF4u) [[unlikely]] return; }
L_00279AF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00279B00u) [[unlikely]] return; }
L_00279B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279B08u) [[unlikely]] return; }
L_00279B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_00279B30; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00279B1Cu) [[unlikely]] return; }
L_00279B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00279B24u) [[unlikely]] return; }
L_00279B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279BB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 1;
L_00279B30:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279B3Cu) [[unlikely]] return; }
L_00279B3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_00279B54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 4;
L_00279B54:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279B60u) [[unlikely]] return; }
L_00279B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279BB4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_00279BB0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E890000u);
    c.r[2].d[0] = c.r[2].d[0] | 54421ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 9u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BA8u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279BA8u) [[unlikely]] return; }
L_00279BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00279BB4; } }
L_00279BB0:
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00279BB4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279BB8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279BE4u) [[unlikely]] return; }
L_00279BE4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279BF0u) [[unlikely]] return; }
L_00279BF0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279BFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x00279BFCu) [[unlikely]] return; }
L_00279BFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279C04u) [[unlikely]] return; }
L_00279C04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_00279C2C; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x00279C18u) [[unlikely]] return; }
L_00279C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x00279C20u) [[unlikely]] return; }
L_00279C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279C48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.budget -= 1;
L_00279C2C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279C38u) [[unlikely]] return; }
L_00279C38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279C44; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_00279C44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279C48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00279C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279C9Cu); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00279C9Cu) [[unlikely]] return; }
L_00279C9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00279CA4u) [[unlikely]] return; }
L_00279CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279CB4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00279CB4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00279D0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279CE8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00279CE8u) [[unlikely]] return; }
L_00279CE8:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00279D00u) [[unlikely]] return; }
L_00279D00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279D30; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00279D0C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 4u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279D2Cu) [[unlikely]] return; }
L_00279D2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279D30:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279D54u) [[unlikely]] return; }
L_00279D54:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x00279D60u) [[unlikely]] return; }
L_00279D60:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00279D6Cu) [[unlikely]] return; }
L_00279D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00279D74u) [[unlikely]] return; }
L_00279D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00279D88; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_00279D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279D90u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279D90u) [[unlikely]] return; }
L_00279D90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00279DB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x00279DA4u) [[unlikely]] return; }
L_00279DA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x00279DACu) [[unlikely]] return; }
L_00279DAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00279E48; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_00279DB8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279DC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279DC4u) [[unlikely]] return; }
L_00279DC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_00279DF8; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFBF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 11;
L_00279DF8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00279E04u) [[unlikely]] return; }
L_00279E04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279E44; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00279E44; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E44u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00279E44u) [[unlikely]] return; }
L_00279E44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00279E48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E78u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x00279E78u) [[unlikely]] return; }
L_00279E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279E80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00279E80u) [[unlikely]] return; }
L_00279E80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279E90; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00279E90:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00279EB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279EB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279EB8u) [[unlikely]] return; }
L_00279EB8:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279ED4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x00279ED4u) [[unlikely]] return; }
L_00279ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00279EF8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00279F24; } }
L_00279EF8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40260000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.f[13] = c.f[12];
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F24u); st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x00279F24u) [[unlikely]] return; }
L_00279F24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00279F40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x00279F54u) [[unlikely]] return; }
L_00279F54:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x00279F60u) [[unlikely]] return; }
L_00279F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40260000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12288u);
    c.f[13] = c.f[12];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279F7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 113u, depth + 1u); else { c.pc = 0x002DD400u; return; } if (c.pc != 0x00279F7Cu) [[unlikely]] return; }
L_00279F7C:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00279FA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279FA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00279FA4u) [[unlikely]] return; }
L_00279FA4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279FB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x00279FB4u) [[unlikely]] return; }
L_00279FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00279FBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00279FBCu) [[unlikely]] return; }
L_00279FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00279FCC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00279FCC:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);  if (t) { goto L_0027A004; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A000u); set32(c.r[5], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x0027A000u) [[unlikely]] return; }
L_0027A000:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.budget -= 1;
L_0027A004:
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 6;
    if ((c.fcr31 & kFpuCondition) != 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);  goto L_0027A03C; }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027A090; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.budget -= 1;
L_0027A03C:
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A090u); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027A090u) [[unlikely]] return; }
L_0027A090:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 575u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027A0D8; } }
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027A0EC; } }
L_0027A0D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x0027A0E0u) [[unlikely]] return; }
L_0027A0E0:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A0ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0027A0ECu) [[unlikely]] return; }
L_0027A0EC:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A128; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A128; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 9;
L_0027A128:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0027A134u) [[unlikely]] return; }
L_0027A134:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0027A15C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_0027A15C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A164u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x0027A164u) [[unlikely]] return; }
L_0027A164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A174; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0027A174:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0027A1C4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027A1C0; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0027A26C; } }
L_0027A1C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0027A1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1CCu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027A1CCu) [[unlikely]] return; }
L_0027A1CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A1F4; } }
    set32(c.r[5], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027A1E0u) [[unlikely]] return; }
L_0027A1E0:
    set32(c.r[5], 0u + 25u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A1ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027A1ECu) [[unlikely]] return; }
L_0027A1EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027A270; } }
L_0027A1F4:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0027A26C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 274u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A26C; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A248u); st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x0027A248u) [[unlikely]] return; }
L_0027A248:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A254u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x0027A254u) [[unlikely]] return; }
L_0027A254:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A26Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027A26Cu) [[unlikely]] return; }
L_0027A26C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A270:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A294u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027A294u) [[unlikely]] return; }
L_0027A294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A2B0; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027A2A8u) [[unlikely]] return; }
L_0027A2A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A2B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027A2B0u) [[unlikely]] return; }
L_0027A2B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A2C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027A2E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027A300:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 14992u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027A320:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027A340:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15024u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027A360:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027A3A0; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A398u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027A398u) [[unlikely]] return; }
L_0027A398:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0027A3C4; } }
L_0027A3A0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3C0u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027A3C0u) [[unlikely]] return; }
L_0027A3C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A3C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027A3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A3E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027A3E4u) [[unlikely]] return; }
L_0027A3E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A41C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A404u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027A404u) [[unlikely]] return; }
L_0027A404:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 2u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A41Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027A41Cu) [[unlikely]] return; }
L_0027A41C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A444u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027A444u) [[unlikely]] return; }
L_0027A444:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0027A50C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A464u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0027A464u) [[unlikely]] return; }
L_0027A464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A4E4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A478u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0027A478u) [[unlikely]] return; }
L_0027A478:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A484u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0027A484u) [[unlikely]] return; }
L_0027A484:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A490u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027A490u) [[unlikely]] return; }
L_0027A490:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A49Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0027A49Cu) [[unlikely]] return; }
L_0027A49C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027A4A8u) [[unlikely]] return; }
L_0027A4A8:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4C0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027A4C0u) [[unlikely]] return; }
L_0027A4C0:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x0027A4CCu) [[unlikely]] return; }
L_0027A4CC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4DCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027A4DCu) [[unlikely]] return; }
L_0027A4DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027A528; } }
L_0027A4E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A4F4u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0027A4F4u) [[unlikely]] return; }
L_0027A4F4:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A500u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027A500u) [[unlikely]] return; }
L_0027A500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027A524; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0027A50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A514u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x0027A514u) [[unlikely]] return; }
L_0027A514:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A524u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027A524u) [[unlikely]] return; }
L_0027A524:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A528:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A554u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027A554u) [[unlikely]] return; }
L_0027A554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0027A57C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A570u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027A570u) [[unlikely]] return; }
L_0027A570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027A58C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0027A57C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A588u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x0027A588u) [[unlikely]] return; }
L_0027A588:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A58C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A5A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027A5B4u) [[unlikely]] return; }
L_0027A5B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_0027A5D4; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027A5C8u) [[unlikely]] return; }
L_0027A5C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027A65C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_0027A5D4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A5E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027A5E0u) [[unlikely]] return; }
L_0027A5E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0027A60C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 9;
L_0027A60C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A618u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027A618u) [[unlikely]] return; }
L_0027A618:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A658; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A658; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A640u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027A640u) [[unlikely]] return; }
L_0027A640:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A658u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027A658u) [[unlikely]] return; }
L_0027A658:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A65C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A670:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15056u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027A690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027A6EC; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6CCu); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027A6CCu) [[unlikely]] return; }
L_0027A6CC:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6E4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027A6E4u) [[unlikely]] return; }
L_0027A6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027A734; } }
L_0027A6EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A6F4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027A6F4u) [[unlikely]] return; }
L_0027A6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_0027A704; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 2;
L_0027A704:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[12] = 0u;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A730u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027A730u) [[unlikely]] return; }
L_0027A730:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A734:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A754u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027A754u) [[unlikely]] return; }
L_0027A754:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0027A820; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A768u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0027A768u) [[unlikely]] return; }
L_0027A768:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0027A7EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A790u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0027A790u) [[unlikely]] return; }
L_0027A790:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A79Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0027A79Cu) [[unlikely]] return; }
L_0027A79C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027A7A8u) [[unlikely]] return; }
L_0027A7A8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0027A7B4u) [[unlikely]] return; }
L_0027A7B4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7C4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027A7C4u) [[unlikely]] return; }
L_0027A7C4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7E0u); set32(c.r[6], c.r[2].w[0] + 9u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027A7E0u) [[unlikely]] return; }
L_0027A7E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027A814; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0027A7EC:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A7F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0027A7F8u) [[unlikely]] return; }
L_0027A7F8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A814u); set32(c.r[6], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027A814u) [[unlikely]] return; }
L_0027A814:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027A830; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0027A820:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A82Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027A82Cu) [[unlikely]] return; }
L_0027A82C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027A830:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A854u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027A854u) [[unlikely]] return; }
L_0027A854:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A870; } }
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 4;
L_0027A870:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A8BC; } }
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[12] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[12]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027A8BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8BCu); set32(c.r[6], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027A8BCu) [[unlikely]] return; }
L_0027A8BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A8D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027A8E4u) [[unlikely]] return; }
L_0027A8E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A904; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A8F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027A8F8u) [[unlikely]] return; }
L_0027A8F8:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A904u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027A904u) [[unlikely]] return; }
L_0027A904:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027A920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A934u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027A934u) [[unlikely]] return; }
L_0027A934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A944u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027A944u) [[unlikely]] return; }
L_0027A944:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0027A970; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 9;
L_0027A970:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A97Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027A97Cu) [[unlikely]] return; }
L_0027A97C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027A9E0; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027A9E0; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A99Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027A99Cu) [[unlikely]] return; }
L_0027A99C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[2].w[0] << 1);  if (t) { goto L_0027A9AC; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 1);
    c.budget -= 2;
L_0027A9AC:
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.f[12] = 0u;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9D8u); set32(c.r[6], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027A9D8u) [[unlikely]] return; }
L_0027A9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027AA04; } }
L_0027A9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AA00; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027A9F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027A9F8u) [[unlikely]] return; }
L_0027A9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027AA00u) [[unlikely]] return; }
L_0027AA00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027AA04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AA10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027AA54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA30u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0027AA30u) [[unlikely]] return; }
L_0027AA30:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x0027AA3Cu) [[unlikely]] return; }
L_0027AA3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AA54; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_0027AA54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15088u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AA74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027AA74u) [[unlikely]] return; }
L_0027AA74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027AAD4; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AACCu); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AACCu) [[unlikely]] return; }
L_0027AACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_0027AAF8; } }
L_0027AAD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AAF4u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AAF4u) [[unlikely]] return; }
L_0027AAF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_0027AAF8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AB18; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB18u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027AB18u) [[unlikely]] return; }
L_0027AB18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AB30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027AB44u) [[unlikely]] return; }
L_0027AB44:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027AB50u) [[unlikely]] return; }
L_0027AB50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027AB58u) [[unlikely]] return; }
L_0027AB58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AB94; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB7Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027AB7Cu) [[unlikely]] return; }
L_0027AB7C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AB94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AB94u) [[unlikely]] return; }
L_0027AB94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027ABB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027ABC4u) [[unlikely]] return; }
L_0027ABC4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027ABD0u) [[unlikely]] return; }
L_0027ABD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027ABD8u) [[unlikely]] return; }
L_0027ABD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0027ACC8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ABF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0027ABF0u) [[unlikely]] return; }
L_0027ABF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0027AC74; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0027AC04u) [[unlikely]] return; }
L_0027AC04:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0027AC10u) [[unlikely]] return; }
L_0027AC10:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC1Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027AC1Cu) [[unlikely]] return; }
L_0027AC1C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC28u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0027AC28u) [[unlikely]] return; }
L_0027AC28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC40u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027AC40u) [[unlikely]] return; }
L_0027AC40:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC58u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AC58u) [[unlikely]] return; }
L_0027AC58:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC68u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027AC68u) [[unlikely]] return; }
L_0027AC68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027ACBC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0027AC74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC7Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0027AC7Cu) [[unlikely]] return; }
L_0027AC7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_0027ACAC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AC94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027AC94u) [[unlikely]] return; }
L_0027AC94:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027ACA0u) [[unlikely]] return; }
L_0027ACA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027ACBC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_0027ACAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027ACB4u) [[unlikely]] return; }
L_0027ACB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027ACBCu) [[unlikely]] return; }
L_0027ACBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027ACD8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0027ACC8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ACD4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027ACD4u) [[unlikely]] return; }
L_0027ACD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027ACD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027ACF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD04u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027AD04u) [[unlikely]] return; }
L_0027AD04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AD50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0027AD40; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027AD28u) [[unlikely]] return; }
L_0027AD28:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027AD34u) [[unlikely]] return; }
L_0027AD34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027AD54; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 1;
L_0027AD40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027AD48u) [[unlikely]] return; }
L_0027AD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027AD50u) [[unlikely]] return; }
L_0027AD50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027AD54:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027AD74u) [[unlikely]] return; }
L_0027AD74:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027AD80u) [[unlikely]] return; }
L_0027AD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027AD88u) [[unlikely]] return; }
L_0027AD88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AD98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027AD98u) [[unlikely]] return; }
L_0027AD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);  if (t) { goto L_0027ADC4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.budget -= 9;
L_0027ADC4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027ADD0u) [[unlikely]] return; }
L_0027ADD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AE18; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AE18; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027ADF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027ADF8u) [[unlikely]] return; }
L_0027ADF8:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 2u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AE10u) [[unlikely]] return; }
L_0027AE10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027AE68; } }
L_0027AE18:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027AE64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0027AE54; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027AE3Cu) [[unlikely]] return; }
L_0027AE3C:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027AE48u) [[unlikely]] return; }
L_0027AE48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027AE64; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_0027AE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027AE5Cu) [[unlikely]] return; }
L_0027AE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AE64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027AE64u) [[unlikely]] return; }
L_0027AE64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027AE68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027AE80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027AEA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027AEC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15152u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027AEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0027AF28; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF1Cu); st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AF1Cu) [[unlikely]] return; }
L_0027AF1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0027AF44; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0027AF28:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF40u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AF40u) [[unlikely]] return; }
L_0027AF40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027AF44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0027AF50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027AF64u) [[unlikely]] return; }
L_0027AF64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0027AFBC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0027AFA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AF9Cu); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027AF9Cu) [[unlikely]] return; }
L_0027AF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027AFF4; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_0027AFA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027AFB0u) [[unlikely]] return; }
L_0027AFB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027AFF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0027AFBC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027AFC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027AFC8u) [[unlikely]] return; }
L_0027AFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027AFF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 8;
L_0027AFF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027AFF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B014u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027B014u) [[unlikely]] return; }
L_0027B014:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B04C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B034u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027B034u) [[unlikely]] return; }
L_0027B034:
    set32(c.r[6], c.r[2].w[0] + 17u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B04Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B04Cu) [[unlikely]] return; }
L_0027B04C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B074u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027B074u) [[unlikely]] return; }
L_0027B074:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 17u);  if (t) { goto L_0027B148; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B094u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0027B094u) [[unlikely]] return; }
L_0027B094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B120; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0027B0A8u) [[unlikely]] return; }
L_0027B0A8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x0027B0B4u) [[unlikely]] return; }
L_0027B0B4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027B0C0u) [[unlikely]] return; }
L_0027B0C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0CCu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0027B0CCu) [[unlikely]] return; }
L_0027B0CC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0027B0D8u) [[unlikely]] return; }
L_0027B0D8:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027B0E4u) [[unlikely]] return; }
L_0027B0E4:
    set32(c.r[6], c.r[2].w[0] + 20u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B0FCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B0FCu) [[unlikely]] return; }
L_0027B0FC:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B108u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x0027B108u) [[unlikely]] return; }
L_0027B108:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B118u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027B118u) [[unlikely]] return; }
L_0027B118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B164; } }
L_0027B120:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B130u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0027B130u) [[unlikely]] return; }
L_0027B130:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B13Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027B13Cu) [[unlikely]] return; }
L_0027B13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B160; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 1;
L_0027B148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B150u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x0027B150u) [[unlikely]] return; }
L_0027B150:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B160u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027B160u) [[unlikely]] return; }
L_0027B160:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B164:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B184u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0027B184u) [[unlikely]] return; }
L_0027B184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 20u);  if (t) { goto L_0027B1AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1A0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0027B1A0u) [[unlikely]] return; }
L_0027B1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B1BC; } }
    set32(c.r[5], 0u + 20u);
    c.budget -= 1;
L_0027B1AC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B1B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x0027B1B8u) [[unlikely]] return; }
L_0027B1B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B1BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B1D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15184u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027B1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027B250; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B230u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B230u) [[unlikely]] return; }
L_0027B230:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B248u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027B248u) [[unlikely]] return; }
L_0027B248:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B288; } }
L_0027B250:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B26Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B26Cu) [[unlikely]] return; }
L_0027B26C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B284u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027B284u) [[unlikely]] return; }
L_0027B284:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B288:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B2A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027B2B4u) [[unlikely]] return; }
L_0027B2B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027B2C0u) [[unlikely]] return; }
L_0027B2C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B2C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B2C8u) [[unlikely]] return; }
L_0027B2C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0027B340; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0027B324; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B300u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B300u) [[unlikely]] return; }
L_0027B300:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B318u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027B318u) [[unlikely]] return; }
L_0027B318:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B378; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_0027B324:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B32Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027B32Cu) [[unlikely]] return; }
L_0027B32C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B334u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027B334u) [[unlikely]] return; }
L_0027B334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0027B340:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B34Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027B34Cu) [[unlikely]] return; }
L_0027B34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B374; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 8;
L_0027B374:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B378:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027B3A4u) [[unlikely]] return; }
L_0027B3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B3ACu) [[unlikely]] return; }
L_0027B3AC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0027B3B8u) [[unlikely]] return; }
L_0027B3B8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027B40C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3DCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027B3DCu) [[unlikely]] return; }
L_0027B3DC:
    set32(c.r[6], c.r[2].w[0] + 17u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B3F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B3F4u) [[unlikely]] return; }
L_0027B3F4:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B40Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027B40Cu) [[unlikely]] return; }
L_0027B40C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B434u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027B434u) [[unlikely]] return; }
L_0027B434:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B440u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0027B440u) [[unlikely]] return; }
L_0027B440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B448u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B448u) [[unlikely]] return; }
L_0027B448:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0027B518; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B460u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0027B460u) [[unlikely]] return; }
L_0027B460:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0027B4F0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B474u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0027B474u) [[unlikely]] return; }
L_0027B474:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B480u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x0027B480u) [[unlikely]] return; }
L_0027B480:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B48Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027B48Cu) [[unlikely]] return; }
L_0027B48C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B498u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0027B498u) [[unlikely]] return; }
L_0027B498:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4A4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0027B4A4u) [[unlikely]] return; }
L_0027B4A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4BCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027B4BCu) [[unlikely]] return; }
L_0027B4BC:
    set32(c.r[6], c.r[2].w[0] + 20u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4D4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B4D4u) [[unlikely]] return; }
L_0027B4D4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4E4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027B4E4u) [[unlikely]] return; }
L_0027B4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B50C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0027B4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B4F8u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0027B4F8u) [[unlikely]] return; }
L_0027B4F8:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B504u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027B504u) [[unlikely]] return; }
L_0027B504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B50Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027B50Cu) [[unlikely]] return; }
L_0027B50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B528; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0027B518:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B524u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027B524u) [[unlikely]] return; }
L_0027B524:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B528:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B554u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B554u) [[unlikely]] return; }
L_0027B554:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027B574; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B56Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027B56Cu) [[unlikely]] return; }
L_0027B56C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B574u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027B574u) [[unlikely]] return; }
L_0027B574:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027B5D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5B0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x0027B5B0u) [[unlikely]] return; }
L_0027B5B0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x0027B5BCu) [[unlikely]] return; }
L_0027B5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B5D4; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_0027B5D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15216u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B5F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0027B5F4u) [[unlikely]] return; }
L_0027B5F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0027B658; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B650u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B650u) [[unlikely]] return; }
L_0027B650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_0027B678; } }
L_0027B658:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B674u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B674u) [[unlikely]] return; }
L_0027B674:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_0027B678:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027B698; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B698u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027B698u) [[unlikely]] return; }
L_0027B698:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B6B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027B6C4u) [[unlikely]] return; }
L_0027B6C4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027B6D0u) [[unlikely]] return; }
L_0027B6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B6D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B6D8u) [[unlikely]] return; }
L_0027B6D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0027B764; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B718; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B710u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B710u) [[unlikely]] return; }
L_0027B710:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B79C; } }
L_0027B718:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_0027B748; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B730u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027B730u) [[unlikely]] return; }
L_0027B730:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B73Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027B73Cu) [[unlikely]] return; }
L_0027B73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B798; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_0027B748:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B750u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027B750u) [[unlikely]] return; }
L_0027B750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027B758u) [[unlikely]] return; }
L_0027B758:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B798; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0027B764:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B770u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0027B770u) [[unlikely]] return; }
L_0027B770:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027B798; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 8;
L_0027B798:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B79C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B7B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027B7C4u) [[unlikely]] return; }
L_0027B7C4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027B7D0u) [[unlikely]] return; }
L_0027B7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B7D8u) [[unlikely]] return; }
L_0027B7D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027B814; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B7FCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027B7FCu) [[unlikely]] return; }
L_0027B7FC:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 17u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B814u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B814u) [[unlikely]] return; }
L_0027B814:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B844u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027B844u) [[unlikely]] return; }
L_0027B844:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B850u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x0027B850u) [[unlikely]] return; }
L_0027B850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B858u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B858u) [[unlikely]] return; }
L_0027B858:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_0027B954; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B870u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0027B870u) [[unlikely]] return; }
L_0027B870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0027B900; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B884u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x0027B884u) [[unlikely]] return; }
L_0027B884:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B890u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x0027B890u) [[unlikely]] return; }
L_0027B890:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B89Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027B89Cu) [[unlikely]] return; }
L_0027B89C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8A8u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0027B8A8u) [[unlikely]] return; }
L_0027B8A8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8B4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0027B8B4u) [[unlikely]] return; }
L_0027B8B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8CCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x0027B8CCu) [[unlikely]] return; }
L_0027B8CC:
    set32(c.r[6], c.r[2].w[0] + 20u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8E4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027B8E4u) [[unlikely]] return; }
L_0027B8E4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B8F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027B8F4u) [[unlikely]] return; }
L_0027B8F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B948; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0027B900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B908u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0027B908u) [[unlikely]] return; }
L_0027B908:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_0027B938; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B920u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027B920u) [[unlikely]] return; }
L_0027B920:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B92Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027B92Cu) [[unlikely]] return; }
L_0027B92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027B948; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_0027B938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B940u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027B940u) [[unlikely]] return; }
L_0027B940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B948u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027B948u) [[unlikely]] return; }
L_0027B948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B964; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_0027B954:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B960u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x0027B960u) [[unlikely]] return; }
L_0027B960:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B964:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B984u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027B984u) [[unlikely]] return; }
L_0027B984:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027B9D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_0027B9C0; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x0027B9A8u) [[unlikely]] return; }
L_0027B9A8:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x0027B9B4u) [[unlikely]] return; }
L_0027B9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027B9D4; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 1;
L_0027B9C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027B9C8u) [[unlikely]] return; }
L_0027B9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027B9D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027B9D0u) [[unlikely]] return; }
L_0027B9D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027B9D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027B9E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027BA00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027BA20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 15312u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00278000u < 16384u) { entry = entries_005E[(t - 0x00278000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0027BA40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 68u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[16].w[0] + 320u);  if (t) { goto L_0027BAB0; } }
    set32(c.r[2], 0u + 5u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BA90u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0027BA90u) [[unlikely]] return; }
L_0027BA90:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAA8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0027BAA8u) [[unlikely]] return; }
L_0027BAA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0027BB40; } }
L_0027BAB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0027BAF4; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAD4u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027BAD4u) [[unlikely]] return; }
L_0027BAD4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BAECu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BAECu) [[unlikely]] return; }
L_0027BAEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BB3C; } }
L_0027BAF4:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x43700000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[2], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 1220u), c.r[3].w[0]);
    st8((c.r[8].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 769u)));
    set32(c.r[6], 0u + 29u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 2ull;
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB3Cu); st8((c.r[16].w[0] + 769u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BB3Cu) [[unlikely]] return; }
L_0027BB3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027BB40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0027BB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 1220u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0027BB98; } }
    c.f[0] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB8Cu); st32((c.r[17].w[0] + 1220u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027BB8Cu) [[unlikely]] return; }
L_0027BB8C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BB98u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0027BB98u) [[unlikely]] return; }
L_0027BB98:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BBCC; } }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BBCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
L_0027BBCC:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BBE0u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027BBE0u) [[unlikely]] return; }
L_0027BBE0:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0027BC08; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_0027BC08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC10u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027BC10u) [[unlikely]] return; }
L_0027BC10:
    c.f[1] = ld32((c.r[17].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 1216u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 734u)));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0027BCD0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0027BC88; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0027BC4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));  if (t) { goto L_0027BD74; } }
L_0027BC4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027BD90; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.f[12] = 0u;
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    set32(c.r[6], 0u + 30u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BC80u); st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BC80u) [[unlikely]] return; }
L_0027BC80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0027BD94; } }
L_0027BC88:
    set32(c.r[4], ld32((c.r[17].w[0] + 724u)));
    set32(c.r[3], 0u + 8704u);
    c.r[4].d[0] = c.r[4].d[0] & 8704ull;
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027BCB8; } }
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027BD90; } }
L_0027BCB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 734u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1216u), c.r[3].w[0]);  if (t) { goto L_0027BD90; } }
L_0027BCD0:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027BD1C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[6], 0u + 31u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] & 251ull;
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 7756u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD14u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BD14u) [[unlikely]] return; }
L_0027BD14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BD90; } }
L_0027BD1C:
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0027BD90; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 579u));
    set32(c.r[2], 0u + 6u);
    set32(c.r[6], 0u + 31u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & 251ull;
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[17].w[0] + 7756u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD68u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BD68u) [[unlikely]] return; }
L_0027BD68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0027BD90; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    c.budget -= 1;
L_0027BD74:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0027BD90; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD88u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027BD88u) [[unlikely]] return; }
L_0027BD88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BD90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027BD90u) [[unlikely]] return; }
L_0027BD90:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0027BD94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BDB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 1220u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_0027BDF8; } }
    c.f[0] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDECu); st32((c.r[17].w[0] + 1220u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027BDECu) [[unlikely]] return; }
L_0027BDEC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BDF8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0027BDF8u) [[unlikely]] return; }
L_0027BDF8:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[2].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BE2C; } }
    c.r[2].d[0] = c.r[3].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BE2C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FD90000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 6;
L_0027BE2C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 32767u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE40u); set32(c.r[5], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027BE40u) [[unlikely]] return; }
L_0027BE40:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0027BE68; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_0027BE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BE70u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027BE70u) [[unlikely]] return; }
L_0027BE70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 20u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0027BEB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEA0u); st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027BEA0u) [[unlikely]] return; }
L_0027BEA0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 24u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEB8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BEB8u) [[unlikely]] return; }
L_0027BEB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BED0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEECu); set32(c.r[16], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x0027BEECu) [[unlikely]] return; }
L_0027BEEC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BEF8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x0027BEF8u) [[unlikely]] return; }
L_0027BEF8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF04u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027BF04u) [[unlikely]] return; }
L_0027BF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF0Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027BF0Cu) [[unlikely]] return; }
L_0027BF0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0027BF64; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(0u));
    st32((c.r[17].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 769u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[17].w[0] + 769u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF4Cu); st8((c.r[16].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0027BF4Cu) [[unlikely]] return; }
L_0027BF4C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 25u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BF64u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0027BF64u) [[unlikely]] return; }
L_0027BF64:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0027BF80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFA0u); set32(c.r[17], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x0027BFA0u) [[unlikely]] return; }
L_0027BFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0027BFA8u) [[unlikely]] return; }
L_0027BFA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { [[clang::musttail]] return unit_005F(c, 2u, depth); } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[5], 0u + 15u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFD4u); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x0027BFD4u) [[unlikely]] return; }
L_0027BFD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 4u);  if (t) { [[clang::musttail]] return unit_005F(c, 1u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0027BFFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0027BFF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x0027BFF4u) [[unlikely]] return; }
L_0027BFF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_005F(c, 5u, depth); } }
L_0027BFFC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
    [[clang::musttail]] return unit_005F(c, 1u, depth);
}

}
