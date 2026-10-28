#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008C[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0,
    23, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29,
    30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0,
    0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 0,
    0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127,
    0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136,
    0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0,
    0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0,
    216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0,
    0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 247,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0,
    0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0,
    0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0,
    327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334,
    0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0,
    359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366,
    0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0,
    0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0,
    409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 447,
    0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 455,
    0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0,
    0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478,
    0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0,
    0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0,
    0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 502, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0,
    0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 0,
    0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0,
    0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_008C(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00330000;
    case 2u: goto L_00330004;
    case 3u: goto L_00330010;
    case 4u: goto L_00330024;
    case 5u: goto L_00330034;
    case 6u: goto L_00330044;
    case 7u: goto L_00330060;
    case 8u: goto L_00330070;
    case 9u: goto L_00330084;
    case 10u: goto L_00330098;
    case 11u: goto L_003300AC;
    case 12u: goto L_003300B8;
    case 13u: goto L_003300C4;
    case 14u: goto L_003300D0;
    case 15u: goto L_003300DC;
    case 16u: goto L_003300F4;
    case 17u: goto L_00330120;
    case 18u: goto L_0033012C;
    case 19u: goto L_0033013C;
    case 20u: goto L_00330154;
    case 21u: goto L_00330160;
    case 22u: goto L_00330174;
    case 23u: goto L_00330180;
    case 24u: goto L_00330190;
    case 25u: goto L_003301A0;
    case 26u: goto L_003301B4;
    case 27u: goto L_003301D0;
    case 28u: goto L_003301E8;
    case 29u: goto L_003301FC;
    case 30u: goto L_00330200;
    case 31u: goto L_00330218;
    case 32u: goto L_0033022C;
    case 33u: goto L_00330238;
    case 34u: goto L_00330250;
    case 35u: goto L_003302A8;
    case 36u: goto L_003302C8;
    case 37u: goto L_003302E0;
    case 38u: goto L_003302F0;
    case 39u: goto L_0033030C;
    case 40u: goto L_00330314;
    case 41u: goto L_00330324;
    case 42u: goto L_00330360;
    case 43u: goto L_00330368;
    case 44u: goto L_00330388;
    case 45u: goto L_003303A4;
    case 46u: goto L_003303C0;
    case 47u: goto L_003303DC;
    case 48u: goto L_003303E4;
    case 49u: goto L_00330408;
    case 50u: goto L_00330424;
    case 51u: goto L_00330440;
    case 52u: goto L_0033045C;
    case 53u: goto L_00330464;
    case 54u: goto L_0033047C;
    case 55u: goto L_00330490;
    case 56u: goto L_0033049C;
    case 57u: goto L_003304A8;
    case 58u: goto L_003304B4;
    case 59u: goto L_003304C0;
    case 60u: goto L_003304D8;
    case 61u: goto L_003304F4;
    case 62u: goto L_0033050C;
    case 63u: goto L_0033051C;
    case 64u: goto L_00330530;
    case 65u: goto L_0033053C;
    case 66u: goto L_00330544;
    case 67u: goto L_0033055C;
    case 68u: goto L_00330570;
    case 69u: goto L_00330584;
    case 70u: goto L_0033059C;
    case 71u: goto L_003305A4;
    case 72u: goto L_003305C0;
    case 73u: goto L_003305E0;
    case 74u: goto L_00330608;
    case 75u: goto L_00330610;
    case 76u: goto L_00330618;
    case 77u: goto L_0033062C;
    case 78u: goto L_00330638;
    case 79u: goto L_00330678;
    case 80u: goto L_00330680;
    case 81u: goto L_003306A0;
    case 82u: goto L_003306C4;
    case 83u: goto L_003306D0;
    case 84u: goto L_003306D8;
    case 85u: goto L_003306EC;
    case 86u: goto L_003306F4;
    case 87u: goto L_0033070C;
    case 88u: goto L_00330720;
    case 89u: goto L_0033072C;
    case 90u: goto L_00330750;
    case 91u: goto L_00330770;
    case 92u: goto L_003307A0;
    case 93u: goto L_003307E8;
    case 94u: goto L_00330818;
    case 95u: goto L_00330830;
    case 96u: goto L_00330864;
    case 97u: goto L_0033087C;
    case 98u: goto L_003308A8;
    case 99u: goto L_003308C0;
    case 100u: goto L_003308DC;
    case 101u: goto L_003308E8;
    case 102u: goto L_003308F0;
    case 103u: goto L_00330904;
    case 104u: goto L_0033090C;
    case 105u: goto L_00330924;
    case 106u: goto L_00330960;
    case 107u: goto L_00330978;
    case 108u: goto L_003309C0;
    case 109u: goto L_003309DC;
    case 110u: goto L_00330A0C;
    case 111u: goto L_00330A20;
    case 112u: goto L_00330A34;
    case 113u: goto L_00330A54;
    case 114u: goto L_00330A84;
    case 115u: goto L_00330A94;
    case 116u: goto L_00330AD8;
    case 117u: goto L_00330B24;
    case 118u: goto L_00330B40;
    case 119u: goto L_00330B54;
    case 120u: goto L_00330B64;
    case 121u: goto L_00330B70;
    case 122u: goto L_00330B90;
    case 123u: goto L_00330C04;
    case 124u: goto L_00330C20;
    case 125u: goto L_00330C4C;
    case 126u: goto L_00330C70;
    case 127u: goto L_00330C7C;
    case 128u: goto L_00330C84;
    case 129u: goto L_00330C98;
    case 130u: goto L_00330CA0;
    case 131u: goto L_00330CB8;
    case 132u: goto L_00330D04;
    case 133u: goto L_00330D20;
    case 134u: goto L_00330D4C;
    case 135u: goto L_00330D70;
    case 136u: goto L_00330D7C;
    case 137u: goto L_00330D84;
    case 138u: goto L_00330D98;
    case 139u: goto L_00330DA0;
    case 140u: goto L_00330DB8;
    case 141u: goto L_00330E00;
    case 142u: goto L_00330E10;
    case 143u: goto L_00330E2C;
    case 144u: goto L_00330E38;
    case 145u: goto L_00330E40;
    case 146u: goto L_00330E54;
    case 147u: goto L_00330E5C;
    case 148u: goto L_00330E70;
    case 149u: goto L_00330EA0;
    case 150u: goto L_00330EE8;
    case 151u: goto L_00330F18;
    case 152u: goto L_00330F30;
    case 153u: goto L_00330F64;
    case 154u: goto L_00330F7C;
    case 155u: goto L_00330FA8;
    case 156u: goto L_00330FC0;
    case 157u: goto L_00330FDC;
    case 158u: goto L_00330FE8;
    case 159u: goto L_00330FF0;
    case 160u: goto L_00331004;
    case 161u: goto L_0033100C;
    case 162u: goto L_00331024;
    case 163u: goto L_00331060;
    case 164u: goto L_00331078;
    case 165u: goto L_003310C0;
    case 166u: goto L_003310D8;
    case 167u: goto L_00331108;
    case 168u: goto L_00331120;
    case 169u: goto L_00331134;
    case 170u: goto L_00331154;
    case 171u: goto L_00331184;
    case 172u: goto L_00331194;
    case 173u: goto L_003311D8;
    case 174u: goto L_00331224;
    case 175u: goto L_00331240;
    case 176u: goto L_00331254;
    case 177u: goto L_00331264;
    case 178u: goto L_00331270;
    case 179u: goto L_00331290;
    case 180u: goto L_00331308;
    case 181u: goto L_00331320;
    case 182u: goto L_0033134C;
    case 183u: goto L_00331370;
    case 184u: goto L_0033137C;
    case 185u: goto L_003313E0;
    case 186u: goto L_003313F8;
    case 187u: goto L_00331400;
    case 188u: goto L_00331418;
    case 189u: goto L_00331460;
    case 190u: goto L_00331470;
    case 191u: goto L_0033148C;
    case 192u: goto L_00331498;
    case 193u: goto L_003314A0;
    case 194u: goto L_003314B4;
    case 195u: goto L_003314BC;
    case 196u: goto L_003314D0;
    case 197u: goto L_00331500;
    case 198u: goto L_00331548;
    case 199u: goto L_00331578;
    case 200u: goto L_00331590;
    case 201u: goto L_003315C0;
    case 202u: goto L_003315D8;
    case 203u: goto L_00331604;
    case 204u: goto L_00331620;
    case 205u: goto L_0033163C;
    case 206u: goto L_00331648;
    case 207u: goto L_00331650;
    case 208u: goto L_00331664;
    case 209u: goto L_0033166C;
    case 210u: goto L_00331684;
    case 211u: goto L_003316C0;
    case 212u: goto L_003316D8;
    case 213u: goto L_0033171C;
    case 214u: goto L_00331734;
    case 215u: goto L_00331764;
    case 216u: goto L_00331780;
    case 217u: goto L_00331794;
    case 218u: goto L_003317B4;
    case 219u: goto L_003317E4;
    case 220u: goto L_003317F4;
    case 221u: goto L_0033182C;
    case 222u: goto L_00331878;
    case 223u: goto L_00331890;
    case 224u: goto L_003318A4;
    case 225u: goto L_003318B4;
    case 226u: goto L_003318C0;
    case 227u: goto L_003318E0;
    case 228u: goto L_00331950;
    case 229u: goto L_00331960;
    case 230u: goto L_00331978;
    case 231u: goto L_00331980;
    case 232u: goto L_00331994;
    case 233u: goto L_0033199C;
    case 234u: goto L_003319B4;
    case 235u: goto L_003319F0;
    case 236u: goto L_00331A20;
    case 237u: goto L_00331A68;
    case 238u: goto L_00331A98;
    case 239u: goto L_00331AD8;
    case 240u: goto L_00331AF0;
    case 241u: goto L_00331B1C;
    case 242u: goto L_00331B30;
    case 243u: goto L_00331B4C;
    case 244u: goto L_00331B58;
    case 245u: goto L_00331B60;
    case 246u: goto L_00331B74;
    case 247u: goto L_00331B7C;
    case 248u: goto L_00331B94;
    case 249u: goto L_00331BD0;
    case 250u: goto L_00331BE8;
    case 251u: goto L_00331C34;
    case 252u: goto L_00331C50;
    case 253u: goto L_00331C80;
    case 254u: goto L_00331C90;
    case 255u: goto L_00331CA4;
    case 256u: goto L_00331CC4;
    case 257u: goto L_00331CF4;
    case 258u: goto L_00331D04;
    case 259u: goto L_00331D4C;
    case 260u: goto L_00331D98;
    case 261u: goto L_00331DB0;
    case 262u: goto L_00331DC4;
    case 263u: goto L_00331DD4;
    case 264u: goto L_00331DE0;
    case 265u: goto L_00331E00;
    case 266u: goto L_00331E74;
    case 267u: goto L_00331E90;
    case 268u: goto L_00331EAC;
    case 269u: goto L_00331EB8;
    case 270u: goto L_00331EC0;
    case 271u: goto L_00331ED4;
    case 272u: goto L_00331EDC;
    case 273u: goto L_00331F00;
    case 274u: goto L_00331F54;
    case 275u: goto L_00331F70;
    case 276u: goto L_00331FA8;
    case 277u: goto L_00331FB4;
    case 278u: goto L_00331FBC;
    case 279u: goto L_00331FD0;
    case 280u: goto L_00331FD8;
    case 281u: goto L_00331FF0;
    case 282u: goto L_00332050;
    case 283u: goto L_00332080;
    case 284u: goto L_003320C8;
    case 285u: goto L_003320F8;
    case 286u: goto L_00332124;
    case 287u: goto L_00332140;
    case 288u: goto L_0033215C;
    case 289u: goto L_00332168;
    case 290u: goto L_00332170;
    case 291u: goto L_00332184;
    case 292u: goto L_0033218C;
    case 293u: goto L_003321A4;
    case 294u: goto L_003321E0;
    case 295u: goto L_00332214;
    case 296u: goto L_00332230;
    case 297u: goto L_00332244;
    case 298u: goto L_00332264;
    case 299u: goto L_003322B0;
    case 300u: goto L_003322C8;
    case 301u: goto L_003322D4;
    case 302u: goto L_003322F0;
    case 303u: goto L_0033230C;
    case 304u: goto L_00332318;
    case 305u: goto L_00332320;
    case 306u: goto L_00332334;
    case 307u: goto L_0033233C;
    case 308u: goto L_00332350;
    case 309u: goto L_00332380;
    case 310u: goto L_003323B8;
    case 311u: goto L_003323E8;
    case 312u: goto L_00332424;
    case 313u: goto L_00332440;
    case 314u: goto L_0033245C;
    case 315u: goto L_00332468;
    case 316u: goto L_00332470;
    case 317u: goto L_00332484;
    case 318u: goto L_0033248C;
    case 319u: goto L_003324A4;
    case 320u: goto L_003324E0;
    case 321u: goto L_00332514;
    case 322u: goto L_00332530;
    case 323u: goto L_00332544;
    case 324u: goto L_00332564;
    case 325u: goto L_003325D0;
    case 326u: goto L_003325E8;
    case 327u: goto L_00332600;
    case 328u: goto L_00332614;
    case 329u: goto L_00332624;
    case 330u: goto L_00332630;
    case 331u: goto L_00332650;
    case 332u: goto L_003326D0;
    case 333u: goto L_003326E0;
    case 334u: goto L_003326FC;
    case 335u: goto L_00332708;
    case 336u: goto L_00332710;
    case 337u: goto L_00332720;
    case 338u: goto L_00332790;
    case 339u: goto L_003327AC;
    case 340u: goto L_003327B8;
    case 341u: goto L_003327C0;
    case 342u: goto L_003327D4;
    case 343u: goto L_003327DC;
    case 344u: goto L_00332820;
    case 345u: goto L_00332840;
    case 346u: goto L_00332860;
    case 347u: goto L_00332880;
    case 348u: goto L_003328BC;
    case 349u: goto L_003328DC;
    case 350u: goto L_003328F0;
    case 351u: goto L_00332904;
    case 352u: goto L_00332924;
    case 353u: goto L_00332944;
    case 354u: goto L_00332960;
    case 355u: goto L_00332978;
    case 356u: goto L_003329B0;
    case 357u: goto L_003329C4;
    case 358u: goto L_003329E4;
    case 359u: goto L_00332A00;
    case 360u: goto L_00332A10;
    case 361u: goto L_00332A24;
    case 362u: goto L_00332A44;
    case 363u: goto L_00332A58;
    case 364u: goto L_00332A64;
    case 365u: goto L_00332A70;
    case 366u: goto L_00332A7C;
    case 367u: goto L_00332A88;
    case 368u: goto L_00332A94;
    case 369u: goto L_00332AB0;
    case 370u: goto L_00332ABC;
    case 371u: goto L_00332ACC;
    case 372u: goto L_00332AE8;
    case 373u: goto L_00332AF0;
    case 374u: goto L_00332B04;
    case 375u: goto L_00332B10;
    case 376u: goto L_00332B20;
    case 377u: goto L_00332B30;
    case 378u: goto L_00332B44;
    case 379u: goto L_00332B60;
    case 380u: goto L_00332B78;
    case 381u: goto L_00332B90;
    case 382u: goto L_00332BB0;
    case 383u: goto L_00332BE4;
    case 384u: goto L_00332C08;
    case 385u: goto L_00332C20;
    case 386u: goto L_00332C34;
    case 387u: goto L_00332C54;
    case 388u: goto L_00332C74;
    case 389u: goto L_00332C90;
    case 390u: goto L_00332CA8;
    case 391u: goto L_00332CE0;
    case 392u: goto L_00332CF4;
    case 393u: goto L_00332D14;
    case 394u: goto L_00332D50;
    case 395u: goto L_00332D60;
    case 396u: goto L_00332D74;
    case 397u: goto L_00332D94;
    case 398u: goto L_00332DA8;
    case 399u: goto L_00332DB4;
    case 400u: goto L_00332DC0;
    case 401u: goto L_00332DCC;
    case 402u: goto L_00332DD8;
    case 403u: goto L_00332DE4;
    case 404u: goto L_00332E2C;
    case 405u: goto L_00332E38;
    case 406u: goto L_00332E48;
    case 407u: goto L_00332E64;
    case 408u: goto L_00332E6C;
    case 409u: goto L_00332E80;
    case 410u: goto L_00332E8C;
    case 411u: goto L_00332E9C;
    case 412u: goto L_00332EB0;
    case 413u: goto L_00332EC4;
    case 414u: goto L_00332EE0;
    case 415u: goto L_00332EF8;
    case 416u: goto L_00332F10;
    case 417u: goto L_00332F28;
    case 418u: goto L_00332F48;
    case 419u: goto L_00332F60;
    case 420u: goto L_00332F7C;
    case 421u: goto L_00332FD0;
    case 422u: goto L_00332FE8;
    case 423u: goto L_00333014;
    case 424u: goto L_0033302C;
    case 425u: goto L_00333040;
    case 426u: goto L_0033305C;
    case 427u: goto L_00333064;
    case 428u: goto L_00333088;
    case 429u: goto L_00333090;
    case 430u: goto L_003330B8;
    case 431u: goto L_003330D4;
    case 432u: goto L_003330EC;
    case 433u: goto L_00333104;
    case 434u: goto L_00333140;
    case 435u: goto L_00333154;
    case 436u: goto L_00333174;
    case 437u: goto L_003331BC;
    case 438u: goto L_003331D8;
    case 439u: goto L_003331F0;
    case 440u: goto L_00333200;
    case 441u: goto L_0033321C;
    case 442u: goto L_00333224;
    case 443u: goto L_00333244;
    case 444u: goto L_00333258;
    case 445u: goto L_00333264;
    case 446u: goto L_00333270;
    case 447u: goto L_0033327C;
    case 448u: goto L_00333288;
    case 449u: goto L_00333294;
    case 450u: goto L_003332B0;
    case 451u: goto L_003332C8;
    case 452u: goto L_003332D8;
    case 453u: goto L_003332EC;
    case 454u: goto L_003332F4;
    case 455u: goto L_003332FC;
    case 456u: goto L_00333310;
    case 457u: goto L_00333320;
    case 458u: goto L_00333330;
    case 459u: goto L_00333344;
    case 460u: goto L_00333358;
    case 461u: goto L_00333360;
    case 462u: goto L_00333370;
    case 463u: goto L_00333390;
    case 464u: goto L_003333B0;
    case 465u: goto L_003333C4;
    case 466u: goto L_003333CC;
    case 467u: goto L_00333410;
    case 468u: goto L_00333424;
    case 469u: goto L_00333430;
    case 470u: goto L_00333440;
    case 471u: goto L_0033344C;
    case 472u: goto L_00333460;
    case 473u: goto L_00333470;
    case 474u: goto L_00333484;
    case 475u: goto L_003334B4;
    case 476u: goto L_003334D0;
    case 477u: goto L_003334F4;
    case 478u: goto L_003334FC;
    case 479u: goto L_0033350C;
    case 480u: goto L_00333518;
    case 481u: goto L_0033354C;
    case 482u: goto L_003335C0;
    case 483u: goto L_003335E0;
    case 484u: goto L_00333610;
    case 485u: goto L_00333640;
    case 486u: goto L_00333690;
    case 487u: goto L_003336C4;
    case 488u: goto L_003336E4;
    case 489u: goto L_00333714;
    case 490u: goto L_00333744;
    case 491u: goto L_00333760;
    case 492u: goto L_00333784;
    case 493u: goto L_00333790;
    case 494u: goto L_00333798;
    case 495u: goto L_003337C8;
    case 496u: goto L_00333804;
    case 497u: goto L_0033380C;
    case 498u: goto L_00333838;
    case 499u: goto L_0033386C;
    case 500u: goto L_00333884;
    case 501u: goto L_003338D0;
    case 502u: goto L_00333904;
    case 503u: goto L_00333924;
    case 504u: goto L_00333954;
    case 505u: goto L_00333964;
    case 506u: goto L_003339D0;
    case 507u: goto L_003339E0;
    case 508u: goto L_00333A14;
    case 509u: goto L_00333A24;
    case 510u: goto L_00333A30;
    case 511u: goto L_00333A50;
    case 512u: goto L_00333AC0;
    case 513u: goto L_00333AF4;
    case 514u: goto L_00333B18;
    case 515u: goto L_00333B24;
    case 516u: goto L_00333B2C;
    case 517u: goto L_00333B48;
    case 518u: goto L_00333B50;
    case 519u: goto L_00333B68;
    case 520u: goto L_00333B8C;
    case 521u: goto L_00333BE0;
    case 522u: goto L_00333C00;
    case 523u: goto L_00333C34;
    case 524u: goto L_00333C58;
    case 525u: goto L_00333C64;
    case 526u: goto L_00333C6C;
    case 527u: goto L_00333C84;
    case 528u: goto L_00333C8C;
    case 529u: goto L_00333CA4;
    case 530u: goto L_00333CC4;
    case 531u: goto L_00333CE4;
    case 532u: goto L_00333D2C;
    case 533u: goto L_00333D40;
    case 534u: goto L_00333D64;
    case 535u: goto L_00333D70;
    case 536u: goto L_00333D78;
    case 537u: goto L_00333D94;
    case 538u: goto L_00333D9C;
    case 539u: goto L_00333DB4;
    case 540u: goto L_00333DE0;
    case 541u: goto L_00333E10;
    case 542u: goto L_00333E60;
    case 543u: goto L_00333E90;
    case 544u: goto L_00333EA8;
    case 545u: goto L_00333EE4;
    case 546u: goto L_00333EFC;
    case 547u: goto L_00333F38;
    case 548u: goto L_00333F50;
    case 549u: goto L_00333F74;
    case 550u: goto L_00333F80;
    case 551u: goto L_00333F88;
    case 552u: goto L_00333FC0;
    case 553u: goto L_00333FD0;
    default: bad_entry(c, 0x00330000u); return;
    }
L_00330000:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330004:
    set32(c.r[29], c.r[29].w[0] + 32u);
    c.budget -= 1;
    c.pc = 0x00330008u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_00330010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330024u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00330024u) [[unlikely]] return; }
L_00330024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330060; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    c.budget -= 2;
L_00330034:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330044u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00330044u) [[unlikely]] return; }
L_00330044:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330060u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00330060u) [[unlikely]] return; }
L_00330060:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330084u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00330084u) [[unlikely]] return; }
L_00330084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_0033016C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330098u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00330098u) [[unlikely]] return; }
L_00330098:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330144; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x003300ACu) [[unlikely]] return; }
L_003300AC:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x003300B8u) [[unlikely]] return; }
L_003300B8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x003300C4u) [[unlikely]] return; }
L_003300C4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300D0u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x003300D0u) [[unlikely]] return; }
L_003300D0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x003300DCu) [[unlikely]] return; }
L_003300DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003300F4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003300F4u) [[unlikely]] return; }
L_003300F4:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330120u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00330120u) [[unlikely]] return; }
L_00330120:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033012Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033012Cu) [[unlikely]] return; }
L_0033012C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033013Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033013Cu) [[unlikely]] return; }
L_0033013C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00330194; } }
L_00330144:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330154u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00330154u) [[unlikely]] return; }
L_00330154:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330160u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00330160u) [[unlikely]] return; }
L_00330160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330190; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_0033016C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00330174u) [[unlikely]] return; }
L_00330174:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330180u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00330180u) [[unlikely]] return; }
L_00330180:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330190u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00330190u) [[unlikely]] return; }
L_00330190:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330194:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003301A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003301B4u) [[unlikely]] return; }
L_003301B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_003301DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301D0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003301D0u) [[unlikely]] return; }
L_003301D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003301EC; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_003301DC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003301E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x003301E8u) [[unlikely]] return; }
L_003301E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003301EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003301FC:
    c.budget -= 1;
L_00330200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330218u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330218u) [[unlikely]] return; }
L_00330218:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4576u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 5;
L_0033022C:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00330238u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00330238u) [[unlikely]] return; }
L_00330238:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003302B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302A8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003302A8u) [[unlikely]] return; }
L_003302A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003302C8; } }
L_003302B0:
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302C8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003302C8u) [[unlikely]] return; }
L_003302C8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003302E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003302E0u) [[unlikely]] return; }
L_003302E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003302F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033030Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033030Cu) [[unlikely]] return; }
L_0033030C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330314u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330314u) [[unlikely]] return; }
L_00330314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330324u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00330324u) [[unlikely]] return; }
L_00330324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033033C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0033033C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003303A4; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00330370; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330360u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00330360u) [[unlikely]] return; }
L_00330360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330368u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00330368u) [[unlikely]] return; }
L_00330368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003303A8; } }
L_00330370:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330388u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00330388u) [[unlikely]] return; }
L_00330388:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003303A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003303A4u) [[unlikely]] return; }
L_003303A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003303A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003303C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003303DCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003303DCu) [[unlikely]] return; }
L_003303DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003303E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003303E4u) [[unlikely]] return; }
L_003303E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00330424; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330408u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00330408u) [[unlikely]] return; }
L_00330408:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[6], c.r[2].w[0] + 4u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330424u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00330424u) [[unlikely]] return; }
L_00330424:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033045Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033045Cu) [[unlikely]] return; }
L_0033045C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330464u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330464u) [[unlikely]] return; }
L_00330464:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00330550; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033047Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x0033047Cu) [[unlikely]] return; }
L_0033047C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00330528; } }
    set32(c.r[5], 0u + 13u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330490u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00330490u) [[unlikely]] return; }
L_00330490:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033049Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x0033049Cu) [[unlikely]] return; }
L_0033049C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x003304A8u) [[unlikely]] return; }
L_003304A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304B4u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x003304B4u) [[unlikely]] return; }
L_003304B4:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x003304C0u) [[unlikely]] return; }
L_003304C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304D8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003304D8u) [[unlikely]] return; }
L_003304D8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003304F4u); set32(c.r[6], c.r[2].w[0] + 7u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003304F4u) [[unlikely]] return; }
L_003304F4:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033050Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0033050Cu) [[unlikely]] return; }
L_0033050C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033051Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033051Cu) [[unlikely]] return; }
L_0033051C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00330560; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00330528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330530u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00330530u) [[unlikely]] return; }
L_00330530:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033053Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033053Cu) [[unlikely]] return; }
L_0033053C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330544u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00330544u) [[unlikely]] return; }
L_00330544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033055C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00330550:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033055Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033055Cu) [[unlikely]] return; }
L_0033055C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330560:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330584u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330584u) [[unlikely]] return; }
L_00330584:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003305A4; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033059Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033059Cu) [[unlikely]] return; }
L_0033059C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003305A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003305A4u) [[unlikely]] return; }
L_003305A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003305C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 27472u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003305E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1592u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00330620; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330608u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00330608u) [[unlikely]] return; }
L_00330608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330610u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00330610u) [[unlikely]] return; }
L_00330610:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330618u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00330618u) [[unlikely]] return; }
L_00330618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00330684; } }
L_00330620:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033062Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033062Cu) [[unlikely]] return; }
L_0033062C:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330638u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330638u) [[unlikely]] return; }
L_00330638:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330678u); st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330678u) [[unlikely]] return; }
L_00330678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330680u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 266u, depth + 1u); else { c.pc = 0x002EA960u; return; } if (c.pc != 0x00330680u) [[unlikely]] return; }
L_00330680:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330684:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003306A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306C4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003306C4u) [[unlikely]] return; }
L_003306C4:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003306D0u) [[unlikely]] return; }
L_003306D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003306D8u) [[unlikely]] return; }
L_003306D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_00330700; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003306ECu) [[unlikely]] return; }
L_003306EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003306F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003306F4u) [[unlikely]] return; }
L_003306F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00330738; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 1;
L_00330700:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033070Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x0033070Cu) [[unlikely]] return; }
L_0033070C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330734; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330720u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00330720u) [[unlikely]] return; }
L_00330720:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033072Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0033072Cu) [[unlikely]] return; }
L_0033072C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00330734:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330738:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00330750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4736u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00330770:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003307A0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003307E8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003307E8u) [[unlikely]] return; }
L_003307E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00330824; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330818u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330818u) [[unlikely]] return; }
L_00330818:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003308AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00330824:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330830u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00330830u) [[unlikely]] return; }
L_00330830:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00330888; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330864u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00330864u) [[unlikely]] return; }
L_00330864:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033087Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033087Cu) [[unlikely]] return; }
L_0033087C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003308A8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00330888:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003308A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003308A8u) [[unlikely]] return; }
L_003308A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003308AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003308C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003308DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003308DCu) [[unlikely]] return; }
L_003308DC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003308E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003308E8u) [[unlikely]] return; }
L_003308E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003308F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003308F0u) [[unlikely]] return; }
L_003308F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00330918; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330904u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00330904u) [[unlikely]] return; }
L_00330904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033090Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033090Cu) [[unlikely]] return; }
L_0033090C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00330A10; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00330918:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330924u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00330924u) [[unlikely]] return; }
L_00330924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00330954; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 10;
L_00330954:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330960u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00330960u) [[unlikely]] return; }
L_00330960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330A0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330978u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00330978u) [[unlikely]] return; }
L_00330978:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003309E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0033099C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330A0C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0033099C:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003309C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003309C0u) [[unlikely]] return; }
L_003309C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[5], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003309DCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003309DCu) [[unlikely]] return; }
L_003309DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330A0C; } }
L_003309E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A0Cu); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330A0Cu) [[unlikely]] return; }
L_00330A0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330A10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330A34u) [[unlikely]] return; }
L_00330A34:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A54u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00330A54u) [[unlikely]] return; }
L_00330A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00330A7C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00330B1C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00330A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00330A84u) [[unlikely]] return; }
L_00330A84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330A94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00330A94u) [[unlikely]] return; }
L_00330A94:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00330AE0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[5], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330AD8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330AD8u) [[unlikely]] return; }
L_00330AD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330B18; } }
L_00330AE0:
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
L_00330B18:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00330B1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330B24u) [[unlikely]] return; }
L_00330B24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330B40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330B54u) [[unlikely]] return; }
L_00330B54:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B64u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00330B64u) [[unlikely]] return; }
L_00330B64:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330B70u) [[unlikely]] return; }
L_00330B70:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330B90u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00330B90u) [[unlikely]] return; }
L_00330B90:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00330BB8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00330C04; } }
L_00330BB8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[3], 0u + 7u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C04u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330C04u) [[unlikely]] return; }
L_00330C04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330C20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C4Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00330C4Cu) [[unlikely]] return; }
L_00330C4C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C70u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00330C70u) [[unlikely]] return; }
L_00330C70:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330C7Cu) [[unlikely]] return; }
L_00330C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330C84u) [[unlikely]] return; }
L_00330C84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_00330CAC; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330C98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00330C98u) [[unlikely]] return; }
L_00330C98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330CA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00330CA0u) [[unlikely]] return; }
L_00330CA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00330D08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_00330CAC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330CB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00330CB8u) [[unlikely]] return; }
L_00330CB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330D04; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00330D04; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D04u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330D04u) [[unlikely]] return; }
L_00330D04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330D08:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330D20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D4Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00330D4Cu) [[unlikely]] return; }
L_00330D4C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D70u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00330D70u) [[unlikely]] return; }
L_00330D70:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330D7Cu) [[unlikely]] return; }
L_00330D7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330D84u) [[unlikely]] return; }
L_00330D84:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_00330DAC; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330D98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00330D98u) [[unlikely]] return; }
L_00330D98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330DA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00330DA0u) [[unlikely]] return; }
L_00330DA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00330E04; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 1;
L_00330DAC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330DB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00330DB8u) [[unlikely]] return; }
L_00330DB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330E00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00330E00; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E00u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330E00u) [[unlikely]] return; }
L_00330E00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330E04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E2Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00330E2Cu) [[unlikely]] return; }
L_00330E2C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330E38u) [[unlikely]] return; }
L_00330E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330E40u) [[unlikely]] return; }
L_00330E40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00330E5C; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00330E54u) [[unlikely]] return; }
L_00330E54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330E5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00330E5Cu) [[unlikely]] return; }
L_00330E5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330E70:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4800u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00330EA0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330EE8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330EE8u) [[unlikely]] return; }
L_00330EE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00330F24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F18u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330F18u) [[unlikely]] return; }
L_00330F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00330FAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00330F24:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00330F30u) [[unlikely]] return; }
L_00330F30:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00330F88; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00330F64u) [[unlikely]] return; }
L_00330F64:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330F7Cu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330F7Cu) [[unlikely]] return; }
L_00330F7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00330FA8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00330F88:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00330FA8u) [[unlikely]] return; }
L_00330FA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00330FAC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00330FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FDCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00330FDCu) [[unlikely]] return; }
L_00330FDC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00330FE8u) [[unlikely]] return; }
L_00330FE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00330FF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00330FF0u) [[unlikely]] return; }
L_00330FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00331018; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331004u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00331004u) [[unlikely]] return; }
L_00331004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033100Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033100Cu) [[unlikely]] return; }
L_0033100C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033110C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00331018:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331024u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00331024u) [[unlikely]] return; }
L_00331024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00331054; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 10;
L_00331054:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331060u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00331060u) [[unlikely]] return; }
L_00331060:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331108; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331078u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331078u) [[unlikely]] return; }
L_00331078:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_003310E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0033109C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331108; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0033109C:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003310C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003310C0u) [[unlikely]] return; }
L_003310C0:
    set32(c.r[6], 0u + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003310D8u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003310D8u) [[unlikely]] return; }
L_003310D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331108; } }
L_003310E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331108u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331108u) [[unlikely]] return; }
L_00331108:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033110C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331134u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331134u) [[unlikely]] return; }
L_00331134:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331154u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331154u) [[unlikely]] return; }
L_00331154:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033117C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033121C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033117C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331184u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00331184u) [[unlikely]] return; }
L_00331184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331194u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331194u) [[unlikely]] return; }
L_00331194:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_003311E0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003311D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003311D8u) [[unlikely]] return; }
L_003311D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331218; } }
L_003311E0:
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
L_00331218:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033121C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331224u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331224u) [[unlikely]] return; }
L_00331224:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331254u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331254u) [[unlikely]] return; }
L_00331254:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331264u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331264u) [[unlikely]] return; }
L_00331264:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331270u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331270u) [[unlikely]] return; }
L_00331270:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331290u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331290u) [[unlikely]] return; }
L_00331290:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003312B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00331308; } }
L_003312B8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = c.r[5].w[0];
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331308u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331308u) [[unlikely]] return; }
L_00331308:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331320:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033134Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0033134Cu) [[unlikely]] return; }
L_0033134C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331370u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331370u) [[unlikely]] return; }
L_00331370:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033137Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033137Cu) [[unlikely]] return; }
L_0033137C:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41500000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003313D8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_003313D4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003313D4; } }
    c.f[0] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_003313E0; } }
L_003313D4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003313D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003313E0u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003313E0u) [[unlikely]] return; }
L_003313E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_0033140C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003313F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003313F8u) [[unlikely]] return; }
L_003313F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331400u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00331400u) [[unlikely]] return; }
L_00331400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00331464; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 1;
L_0033140C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331418u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00331418u) [[unlikely]] return; }
L_00331418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331460; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331460; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331460u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331460u) [[unlikely]] return; }
L_00331460:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00331464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033148Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033148Cu) [[unlikely]] return; }
L_0033148C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331498u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331498u) [[unlikely]] return; }
L_00331498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003314A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003314A0u) [[unlikely]] return; }
L_003314A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003314BC; } }
    set32(c.r[5], 0u + 18u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003314B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003314B4u) [[unlikely]] return; }
L_003314B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003314BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003314BCu) [[unlikely]] return; }
L_003314BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003314D0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00331500:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331548u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331548u) [[unlikely]] return; }
L_00331548:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_00331584; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331578u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331578u) [[unlikely]] return; }
L_00331578:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00331608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 1;
L_00331584:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331590u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331590u) [[unlikely]] return; }
L_00331590:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_003315E4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003315C0u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003315C0u) [[unlikely]] return; }
L_003315C0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003315D8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003315D8u) [[unlikely]] return; }
L_003315D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331604; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_003315E4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331604u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331604u) [[unlikely]] return; }
L_00331604:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00331608:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331620:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033163Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033163Cu) [[unlikely]] return; }
L_0033163C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331648u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331648u) [[unlikely]] return; }
L_00331648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331650u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331650u) [[unlikely]] return; }
L_00331650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00331678; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331664u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00331664u) [[unlikely]] return; }
L_00331664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033166Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033166Cu) [[unlikely]] return; }
L_0033166C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00331768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00331678:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331684u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00331684u) [[unlikely]] return; }
L_00331684:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_003316B4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 10;
L_003316B4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003316C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003316C0u) [[unlikely]] return; }
L_003316C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331764; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003316D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003316D8u) [[unlikely]] return; }
L_003316D8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0033173C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_003316FC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331764; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_003316FC:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033171Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033171Cu) [[unlikely]] return; }
L_0033171C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331734u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331734u) [[unlikely]] return; }
L_00331734:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331764; } }
L_0033173C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331764u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331764u) [[unlikely]] return; }
L_00331764:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00331768:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331794u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331794u) [[unlikely]] return; }
L_00331794:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317B4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003317B4u) [[unlikely]] return; }
L_003317B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003317DC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00331870; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003317DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003317E4u) [[unlikely]] return; }
L_003317E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003317F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003317F4u) [[unlikely]] return; }
L_003317F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331834; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033182Cu); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033182Cu) [[unlikely]] return; }
L_0033182C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033186C; } }
L_00331834:
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
L_0033186C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00331870:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331878u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331878u) [[unlikely]] return; }
L_00331878:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331890:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003318A4u) [[unlikely]] return; }
L_003318A4:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003318B4u) [[unlikely]] return; }
L_003318B4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003318C0u) [[unlikely]] return; }
L_003318C0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003318E0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003318E0u) [[unlikely]] return; }
L_003318E0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00331908; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00331950; } }
L_00331908:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[4].d[0] = c.r[2].d[0] | 26214ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[3], 0u + 7u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331950u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331950u) [[unlikely]] return; }
L_00331950:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331960:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331978u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331978u) [[unlikely]] return; }
L_00331978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331980u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331980u) [[unlikely]] return; }
L_00331980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_003319A8; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331994u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00331994u) [[unlikely]] return; }
L_00331994:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033199Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033199Cu) [[unlikely]] return; }
L_0033199C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003319DC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 1;
L_003319A8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003319B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x003319B4u) [[unlikely]] return; }
L_003319B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003319D8; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_003319D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003319DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003319F0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00331A20:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A68u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331A68u) [[unlikely]] return; }
L_00331A68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0];  if (t) { goto L_00331AA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331A98u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331A98u) [[unlikely]] return; }
L_00331A98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00331B20; } }
L_00331AA0:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00331AFC; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD120000u);
    c.r[2].d[0] = c.r[2].d[0] | 18725ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331AD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00331AD8u) [[unlikely]] return; }
L_00331AD8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331AF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331AF0u) [[unlikely]] return; }
L_00331AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331B1C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00331AFC:
    c.f[12] = 0u;
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331B1Cu) [[unlikely]] return; }
L_00331B1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00331B20:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B4Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331B4Cu) [[unlikely]] return; }
L_00331B4C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331B58u) [[unlikely]] return; }
L_00331B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331B60u) [[unlikely]] return; }
L_00331B60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00331B88; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00331B74u) [[unlikely]] return; }
L_00331B74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00331B7Cu) [[unlikely]] return; }
L_00331B7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00331C84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00331B88:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331B94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00331B94u) [[unlikely]] return; }
L_00331B94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_00331BC4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 10;
L_00331BC4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331BD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00331BD0u) [[unlikely]] return; }
L_00331BD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331C80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331BE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331BE8u) [[unlikely]] return; }
L_00331BE8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00331C58; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00331C0C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331C80; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00331C0C:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD120000u);
    c.r[2].d[0] = c.r[2].d[0] | 18725ull;
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00331C34u) [[unlikely]] return; }
L_00331C34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331C50u) [[unlikely]] return; }
L_00331C50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331C80; } }
L_00331C58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331C80u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331C80u) [[unlikely]] return; }
L_00331C80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00331C84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331CA4u) [[unlikely]] return; }
L_00331CA4:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CC4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331CC4u) [[unlikely]] return; }
L_00331CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00331CEC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00331D90; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00331CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331CF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00331CF4u) [[unlikely]] return; }
L_00331CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331D04u) [[unlikely]] return; }
L_00331D04:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00331D54; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD120000u);
    c.r[2].d[0] = c.r[2].d[0] | 18725ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331D4Cu) [[unlikely]] return; }
L_00331D4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00331D8C; } }
L_00331D54:
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
L_00331D8C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00331D90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331D98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331D98u) [[unlikely]] return; }
L_00331D98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331DB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331DC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331DC4u) [[unlikely]] return; }
L_00331DC4:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331DD4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331DD4u) [[unlikely]] return; }
L_00331DD4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331DE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331DE0u) [[unlikely]] return; }
L_00331DE0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E00u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00331E00u) [[unlikely]] return; }
L_00331E00:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00331E28; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00331E74; } }
L_00331E28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD120000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].d[0] = c.r[2].d[0] | 18725ull;
    set32(c.r[6], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331E74u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331E74u) [[unlikely]] return; }
L_00331E74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331EACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331EACu) [[unlikely]] return; }
L_00331EAC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331EB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331EB8u) [[unlikely]] return; }
L_00331EB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331EC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331EC0u) [[unlikely]] return; }
L_00331EC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331EE4; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331ED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00331ED4u) [[unlikely]] return; }
L_00331ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331EDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00331EDCu) [[unlikely]] return; }
L_00331EDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00331F58; } }
L_00331EE4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00331F54; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00331F00u) [[unlikely]] return; }
L_00331F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00331F54; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[4].d[0] = c.r[2].d[0] | 26214ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD830000u);
    c.r[3].d[0] = c.r[2].d[0] | 43066ull;
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], 0u + 6u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331F54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00331F54u) [[unlikely]] return; }
L_00331F54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00331F58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00331F70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[0] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00331FA8; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FA8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00331FA8u) [[unlikely]] return; }
L_00331FA8:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00331FB4u) [[unlikely]] return; }
L_00331FB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00331FBCu) [[unlikely]] return; }
L_00331FBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);  if (t) { goto L_00331FE4; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00331FD0u) [[unlikely]] return; }
L_00331FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00331FD8u) [[unlikely]] return; }
L_00331FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033203C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.budget -= 1;
L_00331FE4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00331FF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00331FF0u) [[unlikely]] return; }
L_00331FF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332038; } }
    c.f[0] = ld32((c.r[16].w[0] + 2128u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FE60000u);
    c.r[5].d[0] = c.r[3].d[0] | 26214ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBDCC0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52428ull;
    set32(c.r[3], 0u + 7u);
    st32((c.r[16].w[0] + 1424u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2132u));
    st32((c.r[16].w[0] + 1428u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2136u));
    st32((c.r[16].w[0] + 1432u), c.f[0]);
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
L_00332038:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033203C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332050:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4896u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00332080:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003320C8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003320C8u) [[unlikely]] return; }
L_003320C8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[5], 0u + 2u);  if (t) { goto L_00332104; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003320F8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003320F8u) [[unlikely]] return; }
L_003320F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332128; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00332104:
    c.f[12] = 0u;
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332124u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00332124u) [[unlikely]] return; }
L_00332124:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332128:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033215Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033215Cu) [[unlikely]] return; }
L_0033215C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332168u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00332168u) [[unlikely]] return; }
L_00332168:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332170u) [[unlikely]] return; }
L_00332170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00332198; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332184u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00332184u) [[unlikely]] return; }
L_00332184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033218Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033218Cu) [[unlikely]] return; }
L_0033218C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332218; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00332198:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003321A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003321A4u) [[unlikely]] return; }
L_003321A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_003321D4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 10;
L_003321D4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003321E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003321E0u) [[unlikely]] return; }
L_003321E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332214; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332214u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00332214u) [[unlikely]] return; }
L_00332214:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332218:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332244u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332244u) [[unlikely]] return; }
L_00332244:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332264u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00332264u) [[unlikely]] return; }
L_00332264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332288; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003322CC; } }
L_00332288:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322B0u); st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003322B0u) [[unlikely]] return; }
L_003322B0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003322C8u) [[unlikely]] return; }
L_003322C8:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003322CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003322D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003322D4u) [[unlikely]] return; }
L_003322D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003322F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033230Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033230Cu) [[unlikely]] return; }
L_0033230C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00332318u) [[unlikely]] return; }
L_00332318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332320u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332320u) [[unlikely]] return; }
L_00332320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033233C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332334u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00332334u) [[unlikely]] return; }
L_00332334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033233Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033233Cu) [[unlikely]] return; }
L_0033233C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332350:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00332380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003323B8u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003323B8u) [[unlikely]] return; }
L_003323B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[7], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_003323F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003323E8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003323E8u) [[unlikely]] return; }
L_003323E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332428; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_003323F4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[6], c.r[7], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332424u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00332424u) [[unlikely]] return; }
L_00332424:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332428:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033245Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033245Cu) [[unlikely]] return; }
L_0033245C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332468u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00332468u) [[unlikely]] return; }
L_00332468:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332470u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332470u) [[unlikely]] return; }
L_00332470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_00332498; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00332484u) [[unlikely]] return; }
L_00332484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033248Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033248Cu) [[unlikely]] return; }
L_0033248C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332518; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_00332498:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003324A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003324A4u) [[unlikely]] return; }
L_003324A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_003324D4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFDF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 10;
L_003324D4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003324E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003324E0u) [[unlikely]] return; }
L_003324E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332514; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332514u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00332514u) [[unlikely]] return; }
L_00332514:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332518:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332544u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332544u) [[unlikely]] return; }
L_00332544:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332564u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00332564u) [[unlikely]] return; }
L_00332564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332588; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003325E8; } }
L_00332588:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    c.r[3].d[0] = c.r[2].d[0] | 52429ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003325D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003325D0u) [[unlikely]] return; }
L_003325D0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 12u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003325E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003325E8u) [[unlikely]] return; }
L_003325E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332614u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332614u) [[unlikely]] return; }
L_00332614:
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332624u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00332624u) [[unlikely]] return; }
L_00332624:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332630u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00332630u) [[unlikely]] return; }
L_00332630:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332650u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00332650u) [[unlikely]] return; }
L_00332650:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00332678; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003326D0; } }
L_00332678:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[3].w[0];
    set32(c.r[3], 0u + 7u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003326D0; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003326D0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003326D0u) [[unlikely]] return; }
L_003326D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003326E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003326FCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003326FCu) [[unlikely]] return; }
L_003326FC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332708u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00332708u) [[unlikely]] return; }
L_00332708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332710u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00332710u) [[unlikely]] return; }
L_00332710:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332720u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00332720u) [[unlikely]] return; }
L_00332720:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033274C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x400C0000u);
    c.r[4].d[0] = c.r[3].d[0] | 52429ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD0C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 9;
L_0033274C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00332778; } }
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_00332778:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003327ACu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003327ACu) [[unlikely]] return; }
L_003327AC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003327B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003327B8u) [[unlikely]] return; }
L_003327B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003327C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003327C0u) [[unlikely]] return; }
L_003327C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003327E4; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003327D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003327D4u) [[unlikely]] return; }
L_003327D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003327DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003327DCu) [[unlikely]] return; }
L_003327DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332814; } }
L_003327E4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00332810; } }
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 8;
L_00332810:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332814:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332820:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00332840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4960u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00332860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 4976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00332880:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_003328C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328BCu); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003328BCu) [[unlikely]] return; }
L_003328BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003328E0; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_003328C8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003328DCu); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003328DCu) [[unlikely]] return; }
L_003328DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003328E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003328F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332904u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332904u) [[unlikely]] return; }
L_00332904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0033296C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033292C; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332924u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00332924u) [[unlikely]] return; }
L_00332924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003329A4; } }
L_0033292C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332944u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332944u) [[unlikely]] return; }
L_00332944:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332960u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332960u) [[unlikely]] return; }
L_00332960:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003329A0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0033296C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332978u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00332978u) [[unlikely]] return; }
L_00332978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003329A0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003329A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003329A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003329B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003329C4u) [[unlikely]] return; }
L_003329C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332A00; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003329E4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003329E4u) [[unlikely]] return; }
L_003329E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332A00u) [[unlikely]] return; }
L_00332A00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A24u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332A24u) [[unlikely]] return; }
L_00332A24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00332AFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A44u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00332A44u) [[unlikely]] return; }
L_00332A44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332AD4; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00332A58u) [[unlikely]] return; }
L_00332A58:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x00332A64u) [[unlikely]] return; }
L_00332A64:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A70u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00332A70u) [[unlikely]] return; }
L_00332A70:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A7Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00332A7Cu) [[unlikely]] return; }
L_00332A7C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A88u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00332A88u) [[unlikely]] return; }
L_00332A88:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332A94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332A94u) [[unlikely]] return; }
L_00332A94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AB0u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332AB0u) [[unlikely]] return; }
L_00332AB0:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332ABCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00332ABCu) [[unlikely]] return; }
L_00332ABC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332ACCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00332ACCu) [[unlikely]] return; }
L_00332ACC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332B24; } }
L_00332AD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AE8u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00332AE8u) [[unlikely]] return; }
L_00332AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332AF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00332AF0u) [[unlikely]] return; }
L_00332AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00332B20; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00332AFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332B04u) [[unlikely]] return; }
L_00332B04:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00332B10u) [[unlikely]] return; }
L_00332B10:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B20u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00332B20u) [[unlikely]] return; }
L_00332B20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332B24:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332B44u) [[unlikely]] return; }
L_00332B44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00332B6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B60u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00332B60u) [[unlikely]] return; }
L_00332B60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332B7C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_00332B6C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332B78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x00332B78u) [[unlikely]] return; }
L_00332B78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332B7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332B90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00332BB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00332BF0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332BE4u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332BE4u) [[unlikely]] return; }
L_00332BE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00332C0C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00332BF0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C08u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332C08u) [[unlikely]] return; }
L_00332C08:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332C0C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00332C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332C34u) [[unlikely]] return; }
L_00332C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00332C9C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00332C5C; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00332C54u) [[unlikely]] return; }
L_00332C54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332CD4; } }
L_00332C5C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C74u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332C74u) [[unlikely]] return; }
L_00332C74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332C90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332C90u) [[unlikely]] return; }
L_00332C90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00332CD0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00332C9C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332CA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00332CA8u) [[unlikely]] return; }
L_00332CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332CD0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00332CD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332CD4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332CF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332CF4u) [[unlikely]] return; }
L_00332CF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332D50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D14u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332D14u) [[unlikely]] return; }
L_00332D14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00332D30; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00332D34; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00332D30:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00332D34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332D50u) [[unlikely]] return; }
L_00332D50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332D74u) [[unlikely]] return; }
L_00332D74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00332E78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332D94u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00332D94u) [[unlikely]] return; }
L_00332D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00332E50; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00332DA8u) [[unlikely]] return; }
L_00332DA8:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x00332DB4u) [[unlikely]] return; }
L_00332DB4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00332DC0u) [[unlikely]] return; }
L_00332DC0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DCCu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00332DCCu) [[unlikely]] return; }
L_00332DCC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DD8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00332DD8u) [[unlikely]] return; }
L_00332DD8:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332DE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332DE4u) [[unlikely]] return; }
L_00332DE4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[6], 0u + 5u);
    set32(c.r[4], 0u + 13u);
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; if (c.r[5].d[0] == 0) c.r[6].d[0] = c.r[4].d[0];  if (t) { goto L_00332E08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00332E10; } }
L_00332E08:
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00332E10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E2Cu); set32(c.r[6], c.r[6].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332E2Cu) [[unlikely]] return; }
L_00332E2C:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00332E38u) [[unlikely]] return; }
L_00332E38:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E48u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00332E48u) [[unlikely]] return; }
L_00332E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332EA0; } }
L_00332E50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E64u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00332E64u) [[unlikely]] return; }
L_00332E64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00332E6Cu) [[unlikely]] return; }
L_00332E6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00332E9C; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00332E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00332E80u) [[unlikely]] return; }
L_00332E80:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00332E8Cu) [[unlikely]] return; }
L_00332E8C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332E9Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00332E9Cu) [[unlikely]] return; }
L_00332E9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332EA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332EC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00332EC4u) [[unlikely]] return; }
L_00332EC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00332EEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332EE0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00332EE0u) [[unlikely]] return; }
L_00332EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00332EFC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_00332EEC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332EF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x00332EF8u) [[unlikely]] return; }
L_00332EF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00332EFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332F10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F28u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00332F28u) [[unlikely]] return; }
L_00332F28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00332F48u) [[unlikely]] return; }
L_00332F48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00332F60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332F7Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00332F7Cu) [[unlikely]] return; }
L_00332F7C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00332FF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332FD0u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00332FD0u) [[unlikely]] return; }
L_00332FD0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00332FE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x00332FE8u) [[unlikely]] return; }
L_00332FE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00333030; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00332FF4:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333014u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00333014u) [[unlikely]] return; }
L_00333014:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033302Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0033302Cu) [[unlikely]] return; }
L_0033302C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333030:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033305Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033305Cu) [[unlikely]] return; }
L_0033305C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333064u) [[unlikely]] return; }
L_00333064:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_003330F8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00333098; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333088u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00333088u) [[unlikely]] return; }
L_00333088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333090u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00333090u) [[unlikely]] return; }
L_00333090:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033312C; } }
L_00333098:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330B8u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003330B8u) [[unlikely]] return; }
L_003330B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003330D4u) [[unlikely]] return; }
L_003330D4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003330ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003330ECu) [[unlikely]] return; }
L_003330EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_003330F8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333104u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00333104u) [[unlikely]] return; }
L_00333104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333128; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 7;
L_00333128:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033312C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333154u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333154u) [[unlikely]] return; }
L_00333154:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333174u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333174u) [[unlikely]] return; }
L_00333174:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00333198; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003331F0; } }
L_00333198:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003331F0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331BCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003331BCu) [[unlikely]] return; }
L_003331BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003331D8u) [[unlikely]] return; }
L_003331D8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003331F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003331F0u) [[unlikely]] return; }
L_003331F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033321Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033321Cu) [[unlikely]] return; }
L_0033321C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333224u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333224u) [[unlikely]] return; }
L_00333224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00333308; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333244u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00333244u) [[unlikely]] return; }
L_00333244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_003332E4; } }
    set32(c.r[5], 0u + 27u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333258u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00333258u) [[unlikely]] return; }
L_00333258:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333264u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x00333264u) [[unlikely]] return; }
L_00333264:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333270u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00333270u) [[unlikely]] return; }
L_00333270:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033327Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x0033327Cu) [[unlikely]] return; }
L_0033327C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333288u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00333288u) [[unlikely]] return; }
L_00333288:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333294u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00333294u) [[unlikely]] return; }
L_00333294:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332B0u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003332B0u) [[unlikely]] return; }
L_003332B0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 17u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332C8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x003332C8u) [[unlikely]] return; }
L_003332C8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332D8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x003332D8u) [[unlikely]] return; }
L_003332D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00333324; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_003332E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003332ECu) [[unlikely]] return; }
L_003332EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003332F4u) [[unlikely]] return; }
L_003332F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003332FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x003332FCu) [[unlikely]] return; }
L_003332FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333320; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00333308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333310u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00333310u) [[unlikely]] return; }
L_00333310:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333320u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00333320u) [[unlikely]] return; }
L_00333320:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333324:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333344u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333344u) [[unlikely]] return; }
L_00333344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333360; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333358u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00333358u) [[unlikely]] return; }
L_00333358:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333360u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00333360u) [[unlikely]] return; }
L_00333360:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333370:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5064u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00333390:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1200u), c.r[2].w[0]);
    c.budget -= 7;
    { st32((c.r[4].w[0] + 7912u), 0u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CDCF0u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 71u, depth); }
L_003333B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003333C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003333C4u) [[unlikely]] return; }
L_003333C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003333CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_008C(c, 476u, depth + 1u); else { c.pc = 0x003334D0u; return; } if (c.pc != 0x003333CCu) [[unlikely]] return; }
L_003333CC:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00333460; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333410u); st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00333410u) [[unlikely]] return; }
L_00333410:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00333458; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333424u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x00333424u) [[unlikely]] return; }
L_00333424:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333430u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00333430u) [[unlikely]] return; }
L_00333430:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333440u); set32(c.r[5], c.r[2].w[0] - 7u);  if (depth < kMaxDepth) unit_007A(c, 103u, depth + 1u); else { c.pc = 0x002E8E90u; return; } if (c.pc != 0x00333440u) [[unlikely]] return; }
L_00333440:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033344Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0033344Cu) [[unlikely]] return; }
L_0033344C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00333464; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00333458:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333460u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00333460u) [[unlikely]] return; }
L_00333460:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333464:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333484u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333484u) [[unlikely]] return; }
L_00333484:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_003334B4; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003334B4u) [[unlikely]] return; }
L_003334B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003334D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_003335C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334F4u);  if (depth < kMaxDepth) unit_0074(c, 66u, depth + 1u); else { c.pc = 0x002D0680u; return; } if (c.pc != 0x003334F4u) [[unlikely]] return; }
L_003334F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003334FCu); set32(c.r[4], c.r[16].w[0] + 2048u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x003334FCu) [[unlikely]] return; }
L_003334FC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033350Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x0033350Cu) [[unlikely]] return; }
L_0033350C:
    set32(c.r[4], c.r[16].w[0] + 1328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333518u); set32(c.r[5], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00333518u) [[unlikely]] return; }
L_00333518:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00540000u);
    set32(c.r[3], c.r[2].w[0] + 3072u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[17], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033354Cu); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x0033354Cu) [[unlikely]] return; }
L_0033354C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00333570; } }
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);  if (t) { goto L_00333588; } }
L_00333570:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00333588; } }
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 2;
L_00333588:
    c.f[0] = ld32((c.r[16].w[0] + 1200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].d[0] = c.r[3].d[0] << 48;
    set32(c.r[2], ld32((c.r[16].w[0] + 7916u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    fpu_div(c, 1u, c.f[0], c.f[1]);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003335C0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x003335C0u) [[unlikely]] return; }
L_003335C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 7916u), c.r[2].w[0]);  if (t) { goto L_003335CC; } }
L_003335C8:
    st32((c.r[16].w[0] + 7916u), 0u);
    c.budget -= 1;
L_003335CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003335E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5216u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00333610:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00333640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
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
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333690u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333690u) [[unlikely]] return; }
L_00333690:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_003336D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336C4u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003336C4u) [[unlikely]] return; }
L_003336C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00333748; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003336D0:
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003336E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003336E4u) [[unlikely]] return; }
L_003336E4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00333720; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333714u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00333714u) [[unlikely]] return; }
L_00333714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033372C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00333720:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
L_0033372C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333744u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00333744u) [[unlikely]] return; }
L_00333744:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333748:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333760:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333784u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333784u) [[unlikely]] return; }
L_00333784:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333790u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333790u) [[unlikely]] return; }
L_00333790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333798u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00333798u) [[unlikely]] return; }
L_00333798:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00333878; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 5u);
    st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003337C8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003337C8u) [[unlikely]] return; }
L_003337C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00333840; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00333818; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 5u);  if (t) { goto L_003337F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333854; } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_003337F4:
    set32(c.r[5], 0u + 9u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333804u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00333804u) [[unlikely]] return; }
L_00333804:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033380Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033380Cu) [[unlikely]] return; }
L_0033380C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_003338BC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00333818:
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333838u); st32((c.r[17].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00333838u) [[unlikely]] return; }
L_00333838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333854; } }
L_00333840:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 5;
L_00333854:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033386Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033386Cu) [[unlikely]] return; }
L_0033386C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003338B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00333878:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333884u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00333884u) [[unlikely]] return; }
L_00333884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003338B8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], 0u + 5u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 1260u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003338B8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003338BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003338D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00333904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333904u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333904u) [[unlikely]] return; }
L_00333904:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333924u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333924u) [[unlikely]] return; }
L_00333924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033394C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003339C8; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033394C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333954u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00333954u) [[unlikely]] return; }
L_00333954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333964u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00333964u) [[unlikely]] return; }
L_00333964:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033398C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), 0u);  if (t) { goto L_003339C4; } }
L_0033398C:
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
L_003339C4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003339C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003339D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003339D0u) [[unlikely]] return; }
L_003339D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003339E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00333A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A14u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333A14u) [[unlikely]] return; }
L_00333A14:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A24u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333A24u) [[unlikely]] return; }
L_00333A24:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333A30u) [[unlikely]] return; }
L_00333A30:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333A50u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00333A50u) [[unlikely]] return; }
L_00333A50:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00333A78; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00333AA4; } }
L_00333A78:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 11;
L_00333AA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00333AC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[13] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333AF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00333AF4u) [[unlikely]] return; }
L_00333AF4:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B18u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333B18u) [[unlikely]] return; }
L_00333B18:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333B24u) [[unlikely]] return; }
L_00333B24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B2Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333B2Cu) [[unlikely]] return; }
L_00333B2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_00333B5C; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00333B48u) [[unlikely]] return; }
L_00333B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B50u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00333B50u) [[unlikely]] return; }
L_00333B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00333BE4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 1;
L_00333B5C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B68u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00333B68u) [[unlikely]] return; }
L_00333B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_00333B80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD320000u);
    c.r[2].d[0] = c.r[2].d[0] | 5699ull;
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 4;
L_00333B80:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333B8Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00333B8Cu) [[unlikely]] return; }
L_00333B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333BE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00333BE0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 5u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333BE0u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00333BE0u) [[unlikely]] return; }
L_00333BE0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333BE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333C00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.f[13] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C34u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00333C34u) [[unlikely]] return; }
L_00333C34:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C58u); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333C58u) [[unlikely]] return; }
L_00333C58:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C64u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333C64u) [[unlikely]] return; }
L_00333C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C6Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333C6Cu) [[unlikely]] return; }
L_00333C6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);  if (t) { goto L_00333C98; } }
    set32(c.r[5], 0u + 5u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C84u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00333C84u) [[unlikely]] return; }
L_00333C84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333C8Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00333C8Cu) [[unlikely]] return; }
L_00333C8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00333D30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.budget -= 1;
L_00333C98:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CA4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00333CA4u) [[unlikely]] return; }
L_00333CA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);  if (t) { goto L_00333CB8; } }
    set32(c.r[2], 0u + 18u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.budget -= 3;
L_00333CB8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CC4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00333CC4u) [[unlikely]] return; }
L_00333CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_00333CD8; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 3;
L_00333CD8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333CE4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00333CE4u) [[unlikely]] return; }
L_00333CE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333D2C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00333D2C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D2Cu); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00333D2Cu) [[unlikely]] return; }
L_00333D2C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333D30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333D40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D64u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333D64u) [[unlikely]] return; }
L_00333D64:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D70u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333D70u) [[unlikely]] return; }
L_00333D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D78u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00333D78u) [[unlikely]] return; }
L_00333D78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);  if (t) { goto L_00333DA8; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 9u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D94u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00333D94u) [[unlikely]] return; }
L_00333D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333D9Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00333D9Cu) [[unlikely]] return; }
L_00333D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00333DC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42340000u);
    c.budget -= 1;
L_00333DA8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333DB4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00333DB4u) [[unlikely]] return; }
L_00333DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00333DC4; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00333DC4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333DC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333DE0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5280u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00330000u < 16384u) { entry = entries_008C[(t - 0x00330000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00333E10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E60u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333E60u) [[unlikely]] return; }
L_00333E60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00333E9C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333E90u); st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00333E90u) [[unlikely]] return; }
L_00333E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00333F3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00333E9C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333EA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00333EA8u) [[unlikely]] return; }
L_00333EA8:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00333F08; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    st32((c.r[17].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 18u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333EE4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00333EE4u) [[unlikely]] return; }
L_00333EE4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333EFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00333EFCu) [[unlikely]] return; }
L_00333EFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00333F38; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00333F08:
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[17].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x426C0000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00333F38u) [[unlikely]] return; }
L_00333F38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00333F3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00333F50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F74u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00333F74u) [[unlikely]] return; }
L_00333F74:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F80u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00333F80u) [[unlikely]] return; }
L_00333F80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333F88u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00333F88u) [[unlikely]] return; }
L_00333F88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_008D(c, 8u, depth); } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[17].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333FC0u); st32((c.r[17].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x00333FC0u) [[unlikely]] return; }
L_00333FC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00333FD0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00333FD0u) [[unlikely]] return; }
L_00333FD0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_008D(c, 7u, depth); } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  [[clang::musttail]] return unit_008D(c, 4u, depth); }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], 0u + 5u);  goto L_00333FFC; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_008D(c, 9u, depth); } }
    set32(c.r[2], 0u + 5u);
    c.budget -= 1;
L_00333FFC:
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
    [[clang::musttail]] return unit_008D(c, 1u, depth);
}

}
