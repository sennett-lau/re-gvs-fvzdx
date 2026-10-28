#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0069[4096] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 8,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 14, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 59, 0,
    0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0,
    0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0,
    86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95,
    0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0,
    121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0,
    129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0,
    157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0,
    0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0,
    0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0,
    212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0,
    275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0,
    317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 334,
    0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0,
    0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0,
    0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439,
    0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0,
    0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0,
    0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0,
    473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0,
    0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0,
    0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    507, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0,
    0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0,
};

void unit_0069(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A4000;
    case 2u: goto L_002A4008;
    case 3u: goto L_002A4018;
    case 4u: goto L_002A4034;
    case 5u: goto L_002A403C;
    case 6u: goto L_002A405C;
    case 7u: goto L_002A4070;
    case 8u: goto L_002A407C;
    case 9u: goto L_002A40A4;
    case 10u: goto L_002A40B0;
    case 11u: goto L_002A40BC;
    case 12u: goto L_002A40D0;
    case 13u: goto L_002A40F0;
    case 14u: goto L_002A4104;
    case 15u: goto L_002A4118;
    case 16u: goto L_002A4124;
    case 17u: goto L_002A4140;
    case 18u: goto L_002A4160;
    case 19u: goto L_002A4180;
    case 20u: goto L_002A41A0;
    case 21u: goto L_002A41B0;
    case 22u: goto L_002A41D8;
    case 23u: goto L_002A4220;
    case 24u: goto L_002A4234;
    case 25u: goto L_002A4240;
    case 26u: goto L_002A4270;
    case 27u: goto L_002A4280;
    case 28u: goto L_002A4298;
    case 29u: goto L_002A42A8;
    case 30u: goto L_002A42CC;
    case 31u: goto L_002A42D4;
    case 32u: goto L_002A42F4;
    case 33u: goto L_002A4308;
    case 34u: goto L_002A4314;
    case 35u: goto L_002A433C;
    case 36u: goto L_002A4348;
    case 37u: goto L_002A4354;
    case 38u: goto L_002A4368;
    case 39u: goto L_002A4374;
    case 40u: goto L_002A4390;
    case 41u: goto L_002A43A4;
    case 42u: goto L_002A43BC;
    case 43u: goto L_002A43C8;
    case 44u: goto L_002A43E0;
    case 45u: goto L_002A4400;
    case 46u: goto L_002A440C;
    case 47u: goto L_002A442C;
    case 48u: goto L_002A4440;
    case 49u: goto L_002A447C;
    case 50u: goto L_002A4490;
    case 51u: goto L_002A44A4;
    case 52u: goto L_002A44AC;
    case 53u: goto L_002A44C8;
    case 54u: goto L_002A451C;
    case 55u: goto L_002A453C;
    case 56u: goto L_002A4550;
    case 57u: goto L_002A4564;
    case 58u: goto L_002A4570;
    case 59u: goto L_002A4578;
    case 60u: goto L_002A4584;
    case 61u: goto L_002A45C0;
    case 62u: goto L_002A45E0;
    case 63u: goto L_002A45F0;
    case 64u: goto L_002A460C;
    case 65u: goto L_002A461C;
    case 66u: goto L_002A4644;
    case 67u: goto L_002A464C;
    case 68u: goto L_002A466C;
    case 69u: goto L_002A4680;
    case 70u: goto L_002A468C;
    case 71u: goto L_002A46B4;
    case 72u: goto L_002A46C0;
    case 73u: goto L_002A46CC;
    case 74u: goto L_002A46E0;
    case 75u: goto L_002A46EC;
    case 76u: goto L_002A4710;
    case 77u: goto L_002A4724;
    case 78u: goto L_002A4754;
    case 79u: goto L_002A4770;
    case 80u: goto L_002A4784;
    case 81u: goto L_002A4798;
    case 82u: goto L_002A47A0;
    case 83u: goto L_002A47B0;
    case 84u: goto L_002A47D8;
    case 85u: goto L_002A47E0;
    case 86u: goto L_002A4800;
    case 87u: goto L_002A4810;
    case 88u: goto L_002A4840;
    case 89u: goto L_002A4854;
    case 90u: goto L_002A4888;
    case 91u: goto L_002A48A0;
    case 92u: goto L_002A48B4;
    case 93u: goto L_002A48C0;
    case 94u: goto L_002A48F0;
    case 95u: goto L_002A48FC;
    case 96u: goto L_002A4910;
    case 97u: goto L_002A4928;
    case 98u: goto L_002A4938;
    case 99u: goto L_002A4954;
    case 100u: goto L_002A495C;
    case 101u: goto L_002A497C;
    case 102u: goto L_002A4990;
    case 103u: goto L_002A499C;
    case 104u: goto L_002A49C4;
    case 105u: goto L_002A49D0;
    case 106u: goto L_002A49DC;
    case 107u: goto L_002A49F0;
    case 108u: goto L_002A49FC;
    case 109u: goto L_002A4A10;
    case 110u: goto L_002A4A2C;
    case 111u: goto L_002A4A34;
    case 112u: goto L_002A4A40;
    case 113u: goto L_002A4A54;
    case 114u: goto L_002A4A88;
    case 115u: goto L_002A4A90;
    case 116u: goto L_002A4AA8;
    case 117u: goto L_002A4ABC;
    case 118u: goto L_002A4AD0;
    case 119u: goto L_002A4AE4;
    case 120u: goto L_002A4AF8;
    case 121u: goto L_002A4B00;
    case 122u: goto L_002A4B10;
    case 123u: goto L_002A4B20;
    case 124u: goto L_002A4B30;
    case 125u: goto L_002A4B40;
    case 126u: goto L_002A4B50;
    case 127u: goto L_002A4B60;
    case 128u: goto L_002A4B70;
    case 129u: goto L_002A4B80;
    case 130u: goto L_002A4B90;
    case 131u: goto L_002A4BA0;
    case 132u: goto L_002A4BC0;
    case 133u: goto L_002A4BCC;
    case 134u: goto L_002A4C00;
    case 135u: goto L_002A4C10;
    case 136u: goto L_002A4C30;
    case 137u: goto L_002A4C60;
    case 138u: goto L_002A4CA0;
    case 139u: goto L_002A4CB8;
    case 140u: goto L_002A4CC0;
    case 141u: goto L_002A4CCC;
    case 142u: goto L_002A4D04;
    case 143u: goto L_002A4D10;
    case 144u: goto L_002A4D20;
    case 145u: goto L_002A4D3C;
    case 146u: goto L_002A4D48;
    case 147u: goto L_002A4D58;
    case 148u: goto L_002A4DD0;
    case 149u: goto L_002A4DE0;
    case 150u: goto L_002A4DF0;
    case 151u: goto L_002A4E10;
    case 152u: goto L_002A4E34;
    case 153u: goto L_002A4E40;
    case 154u: goto L_002A4E48;
    case 155u: goto L_002A4E5C;
    case 156u: goto L_002A4E68;
    case 157u: goto L_002A4E80;
    case 158u: goto L_002A4EB0;
    case 159u: goto L_002A4EF0;
    case 160u: goto L_002A4F08;
    case 161u: goto L_002A4F10;
    case 162u: goto L_002A4F1C;
    case 163u: goto L_002A4F54;
    case 164u: goto L_002A4F60;
    case 165u: goto L_002A4F70;
    case 166u: goto L_002A4F94;
    case 167u: goto L_002A4FA0;
    case 168u: goto L_002A4FA8;
    case 169u: goto L_002A4FB4;
    case 170u: goto L_002A4FC4;
    case 171u: goto L_002A501C;
    case 172u: goto L_002A5024;
    case 173u: goto L_002A5034;
    case 174u: goto L_002A5078;
    case 175u: goto L_002A5090;
    case 176u: goto L_002A50B8;
    case 177u: goto L_002A50C0;
    case 178u: goto L_002A5120;
    case 179u: goto L_002A515C;
    case 180u: goto L_002A516C;
    case 181u: goto L_002A518C;
    case 182u: goto L_002A51B0;
    case 183u: goto L_002A51BC;
    case 184u: goto L_002A51D0;
    case 185u: goto L_002A51E4;
    case 186u: goto L_002A51F8;
    case 187u: goto L_002A5204;
    case 188u: goto L_002A5220;
    case 189u: goto L_002A5240;
    case 190u: goto L_002A5258;
    case 191u: goto L_002A5264;
    case 192u: goto L_002A52B8;
    case 193u: goto L_002A52C4;
    case 194u: goto L_002A52FC;
    case 195u: goto L_002A5310;
    case 196u: goto L_002A5328;
    case 197u: goto L_002A5334;
    case 198u: goto L_002A5364;
    case 199u: goto L_002A536C;
    case 200u: goto L_002A5388;
    case 201u: goto L_002A53DC;
    case 202u: goto L_002A5404;
    case 203u: goto L_002A5410;
    case 204u: goto L_002A5420;
    case 205u: goto L_002A5434;
    case 206u: goto L_002A5440;
    case 207u: goto L_002A5450;
    case 208u: goto L_002A5458;
    case 209u: goto L_002A5478;
    case 210u: goto L_002A54E4;
    case 211u: goto L_002A54F0;
    case 212u: goto L_002A5500;
    case 213u: goto L_002A550C;
    case 214u: goto L_002A5540;
    case 215u: goto L_002A5558;
    case 216u: goto L_002A5560;
    case 217u: goto L_002A559C;
    case 218u: goto L_002A55B0;
    case 219u: goto L_002A55BC;
    case 220u: goto L_002A55D0;
    case 221u: goto L_002A55E4;
    case 222u: goto L_002A55F8;
    case 223u: goto L_002A5600;
    case 224u: goto L_002A5610;
    case 225u: goto L_002A5640;
    case 226u: goto L_002A565C;
    case 227u: goto L_002A569C;
    case 228u: goto L_002A56B0;
    case 229u: goto L_002A56C4;
    case 230u: goto L_002A56E0;
    case 231u: goto L_002A56EC;
    case 232u: goto L_002A5740;
    case 233u: goto L_002A5758;
    case 234u: goto L_002A5770;
    case 235u: goto L_002A5788;
    case 236u: goto L_002A5794;
    case 237u: goto L_002A57AC;
    case 238u: goto L_002A57BC;
    case 239u: goto L_002A57C4;
    case 240u: goto L_002A57E4;
    case 241u: goto L_002A57F8;
    case 242u: goto L_002A5870;
    case 243u: goto L_002A5890;
    case 244u: goto L_002A58F0;
    case 245u: goto L_002A592C;
    case 246u: goto L_002A593C;
    case 247u: goto L_002A5948;
    case 248u: goto L_002A5954;
    case 249u: goto L_002A595C;
    case 250u: goto L_002A59A8;
    case 251u: goto L_002A59E0;
    case 252u: goto L_002A59E8;
    case 253u: goto L_002A5A10;
    case 254u: goto L_002A5A1C;
    case 255u: goto L_002A5A30;
    case 256u: goto L_002A5A90;
    case 257u: goto L_002A5ACC;
    case 258u: goto L_002A5AE0;
    case 259u: goto L_002A5AE8;
    case 260u: goto L_002A5AF0;
    case 261u: goto L_002A5B28;
    case 262u: goto L_002A5B30;
    case 263u: goto L_002A5B70;
    case 264u: goto L_002A5B90;
    case 265u: goto L_002A5BA8;
    case 266u: goto L_002A5BB0;
    case 267u: goto L_002A5BBC;
    case 268u: goto L_002A5BCC;
    case 269u: goto L_002A5BD4;
    case 270u: goto L_002A5C10;
    case 271u: goto L_002A5C2C;
    case 272u: goto L_002A5C40;
    case 273u: goto L_002A5C48;
    case 274u: goto L_002A5C60;
    case 275u: goto L_002A5C80;
    case 276u: goto L_002A5CCC;
    case 277u: goto L_002A5CD8;
    case 278u: goto L_002A5D08;
    case 279u: goto L_002A5D10;
    case 280u: goto L_002A5D20;
    case 281u: goto L_002A5D34;
    case 282u: goto L_002A5D60;
    case 283u: goto L_002A5DB0;
    case 284u: goto L_002A5DD0;
    case 285u: goto L_002A5DDC;
    case 286u: goto L_002A5E10;
    case 287u: goto L_002A5E24;
    case 288u: goto L_002A5E30;
    case 289u: goto L_002A5E38;
    case 290u: goto L_002A5E64;
    case 291u: goto L_002A5E8C;
    case 292u: goto L_002A5EF4;
    case 293u: goto L_002A5F14;
    case 294u: goto L_002A5F20;
    case 295u: goto L_002A5F30;
    case 296u: goto L_002A5F60;
    case 297u: goto L_002A5F90;
    case 298u: goto L_002A5FAC;
    case 299u: goto L_002A5FB8;
    case 300u: goto L_002A5FC0;
    case 301u: goto L_002A5FD8;
    case 302u: goto L_002A5FE0;
    case 303u: goto L_002A5FF4;
    case 304u: goto L_002A6004;
    case 305u: goto L_002A6028;
    case 306u: goto L_002A609C;
    case 307u: goto L_002A60D8;
    case 308u: goto L_002A613C;
    case 309u: goto L_002A6178;
    case 310u: goto L_002A6188;
    case 311u: goto L_002A61E0;
    case 312u: goto L_002A6200;
    case 313u: goto L_002A6220;
    case 314u: goto L_002A6250;
    case 315u: goto L_002A626C;
    case 316u: goto L_002A6278;
    case 317u: goto L_002A6280;
    case 318u: goto L_002A6294;
    case 319u: goto L_002A629C;
    case 320u: goto L_002A62A8;
    case 321u: goto L_002A62B8;
    case 322u: goto L_002A632C;
    case 323u: goto L_002A6368;
    case 324u: goto L_002A63CC;
    case 325u: goto L_002A6408;
    case 326u: goto L_002A6418;
    case 327u: goto L_002A6470;
    case 328u: goto L_002A6490;
    case 329u: goto L_002A64B0;
    case 330u: goto L_002A64CC;
    case 331u: goto L_002A64D8;
    case 332u: goto L_002A64E0;
    case 333u: goto L_002A64F4;
    case 334u: goto L_002A64FC;
    case 335u: goto L_002A6508;
    case 336u: goto L_002A6518;
    case 337u: goto L_002A6534;
    case 338u: goto L_002A6544;
    case 339u: goto L_002A6554;
    case 340u: goto L_002A656C;
    case 341u: goto L_002A65C8;
    case 342u: goto L_002A6608;
    case 343u: goto L_002A6620;
    case 344u: goto L_002A6650;
    case 345u: goto L_002A6690;
    case 346u: goto L_002A66A8;
    case 347u: goto L_002A66B0;
    case 348u: goto L_002A66BC;
    case 349u: goto L_002A66F4;
    case 350u: goto L_002A6700;
    case 351u: goto L_002A6710;
    case 352u: goto L_002A672C;
    case 353u: goto L_002A6740;
    case 354u: goto L_002A674C;
    case 355u: goto L_002A6760;
    case 356u: goto L_002A676C;
    case 357u: goto L_002A6778;
    case 358u: goto L_002A6788;
    case 359u: goto L_002A67A4;
    case 360u: goto L_002A67B4;
    case 361u: goto L_002A681C;
    case 362u: goto L_002A6858;
    case 363u: goto L_002A6868;
    case 364u: goto L_002A68D0;
    case 365u: goto L_002A690C;
    case 366u: goto L_002A6950;
    case 367u: goto L_002A6980;
    case 368u: goto L_002A69C0;
    case 369u: goto L_002A69D8;
    case 370u: goto L_002A69E0;
    case 371u: goto L_002A69EC;
    case 372u: goto L_002A6A38;
    case 373u: goto L_002A6A5C;
    case 374u: goto L_002A6A68;
    case 375u: goto L_002A6A80;
    case 376u: goto L_002A6A9C;
    case 377u: goto L_002A6AA8;
    case 378u: goto L_002A6AB0;
    case 379u: goto L_002A6AC4;
    case 380u: goto L_002A6ACC;
    case 381u: goto L_002A6AD8;
    case 382u: goto L_002A6AE8;
    case 383u: goto L_002A6B04;
    case 384u: goto L_002A6B14;
    case 385u: goto L_002A6B24;
    case 386u: goto L_002A6B3C;
    case 387u: goto L_002A6B98;
    case 388u: goto L_002A6BD8;
    case 389u: goto L_002A6BF0;
    case 390u: goto L_002A6C10;
    case 391u: goto L_002A6C40;
    case 392u: goto L_002A6CB0;
    case 393u: goto L_002A6CE4;
    case 394u: goto L_002A6CF0;
    case 395u: goto L_002A6D0C;
    case 396u: goto L_002A6D20;
    case 397u: goto L_002A6D3C;
    case 398u: goto L_002A6D5C;
    case 399u: goto L_002A6D7C;
    case 400u: goto L_002A6DC8;
    case 401u: goto L_002A6DE8;
    case 402u: goto L_002A6E28;
    case 403u: goto L_002A6E48;
    case 404u: goto L_002A6EB4;
    case 405u: goto L_002A6ED4;
    case 406u: goto L_002A6F00;
    case 407u: goto L_002A6F50;
    case 408u: goto L_002A6F68;
    case 409u: goto L_002A6F88;
    case 410u: goto L_002A6FB0;
    case 411u: goto L_002A6FD4;
    case 412u: goto L_002A7020;
    case 413u: goto L_002A7050;
    case 414u: goto L_002A705C;
    case 415u: goto L_002A70AC;
    case 416u: goto L_002A70D8;
    case 417u: goto L_002A7100;
    case 418u: goto L_002A7114;
    case 419u: goto L_002A7128;
    case 420u: goto L_002A7134;
    case 421u: goto L_002A7150;
    case 422u: goto L_002A7170;
    case 423u: goto L_002A718C;
    case 424u: goto L_002A71A8;
    case 425u: goto L_002A71B4;
    case 426u: goto L_002A71C0;
    case 427u: goto L_002A71CC;
    case 428u: goto L_002A71E0;
    case 429u: goto L_002A7230;
    case 430u: goto L_002A7250;
    case 431u: goto L_002A7290;
    case 432u: goto L_002A729C;
    case 433u: goto L_002A72B0;
    case 434u: goto L_002A72CC;
    case 435u: goto L_002A7304;
    case 436u: goto L_002A7324;
    case 437u: goto L_002A7340;
    case 438u: goto L_002A7360;
    case 439u: goto L_002A737C;
    case 440u: goto L_002A7398;
    case 441u: goto L_002A73A4;
    case 442u: goto L_002A73B0;
    case 443u: goto L_002A73BC;
    case 444u: goto L_002A73D0;
    case 445u: goto L_002A7420;
    case 446u: goto L_002A7440;
    case 447u: goto L_002A7470;
    case 448u: goto L_002A74B8;
    case 449u: goto L_002A74C4;
    case 450u: goto L_002A74DC;
    case 451u: goto L_002A74F0;
    case 452u: goto L_002A750C;
    case 453u: goto L_002A7514;
    case 454u: goto L_002A7520;
    case 455u: goto L_002A7560;
    case 456u: goto L_002A758C;
    case 457u: goto L_002A759C;
    case 458u: goto L_002A75AC;
    case 459u: goto L_002A75CC;
    case 460u: goto L_002A75E8;
    case 461u: goto L_002A75F8;
    case 462u: goto L_002A7610;
    case 463u: goto L_002A7624;
    case 464u: goto L_002A7644;
    case 465u: goto L_002A7660;
    case 466u: goto L_002A7674;
    case 467u: goto L_002A7688;
    case 468u: goto L_002A7694;
    case 469u: goto L_002A76B0;
    case 470u: goto L_002A76D4;
    case 471u: goto L_002A76E8;
    case 472u: goto L_002A76F4;
    case 473u: goto L_002A7700;
    case 474u: goto L_002A770C;
    case 475u: goto L_002A7718;
    case 476u: goto L_002A7724;
    case 477u: goto L_002A7738;
    case 478u: goto L_002A7750;
    case 479u: goto L_002A7778;
    case 480u: goto L_002A7784;
    case 481u: goto L_002A77C0;
    case 482u: goto L_002A77E0;
    case 483u: goto L_002A7814;
    case 484u: goto L_002A7820;
    case 485u: goto L_002A7844;
    case 486u: goto L_002A7864;
    case 487u: goto L_002A7880;
    case 488u: goto L_002A789C;
    case 489u: goto L_002A78A4;
    case 490u: goto L_002A78BC;
    case 491u: goto L_002A78EC;
    case 492u: goto L_002A7914;
    case 493u: goto L_002A7924;
    case 494u: goto L_002A7950;
    case 495u: goto L_002A7970;
    case 496u: goto L_002A7990;
    case 497u: goto L_002A79A4;
    case 498u: goto L_002A79B4;
    case 499u: goto L_002A79C4;
    case 500u: goto L_002A79E8;
    case 501u: goto L_002A7A08;
    case 502u: goto L_002A7A30;
    case 503u: goto L_002A7A44;
    case 504u: goto L_002A7A50;
    case 505u: goto L_002A7A58;
    case 506u: goto L_002A7A78;
    case 507u: goto L_002A7A80;
    case 508u: goto L_002A7A94;
    case 509u: goto L_002A7AA0;
    case 510u: goto L_002A7AB0;
    case 511u: goto L_002A7AE0;
    case 512u: goto L_002A7AF0;
    case 513u: goto L_002A7AF8;
    case 514u: goto L_002A7B10;
    case 515u: goto L_002A7B48;
    case 516u: goto L_002A7B54;
    case 517u: goto L_002A7B6C;
    case 518u: goto L_002A7B80;
    case 519u: goto L_002A7B9C;
    case 520u: goto L_002A7BA4;
    case 521u: goto L_002A7BBC;
    case 522u: goto L_002A7BF4;
    case 523u: goto L_002A7C10;
    case 524u: goto L_002A7C20;
    case 525u: goto L_002A7C38;
    case 526u: goto L_002A7C58;
    case 527u: goto L_002A7C70;
    case 528u: goto L_002A7CBC;
    case 529u: goto L_002A7CC8;
    case 530u: goto L_002A7CD0;
    case 531u: goto L_002A7CE0;
    case 532u: goto L_002A7CF0;
    case 533u: goto L_002A7CF8;
    case 534u: goto L_002A7D0C;
    case 535u: goto L_002A7D20;
    case 536u: goto L_002A7D30;
    case 537u: goto L_002A7D90;
    case 538u: goto L_002A7DA0;
    case 539u: goto L_002A7E70;
    case 540u: goto L_002A7F00;
    case 541u: goto L_002A7F1C;
    case 542u: goto L_002A7F28;
    case 543u: goto L_002A7F50;
    case 544u: goto L_002A7F60;
    case 545u: goto L_002A7F90;
    case 546u: goto L_002A7FB0;
    case 547u: goto L_002A7FF0;
    default: bad_entry(c, 0x002A4000u); return;
    }
L_002A4000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4008u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4008u) [[unlikely]] return; }
L_002A4008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4018u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A4018u) [[unlikely]] return; }
L_002A4018:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A40D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_002A4034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A403Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A403Cu) [[unlikely]] return; }
L_002A403C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4090; } }
    set32(c.r[2], 0u + 20u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A405Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 140u, depth + 1u); else { c.pc = 0x002F92E0u; return; } if (c.pc != 0x002A405Cu) [[unlikely]] return; }
L_002A405C:
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4070u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A4070u) [[unlikely]] return; }
L_002A4070:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A407Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A407Cu) [[unlikely]] return; }
L_002A407C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4034u | kUnwind; return; } goto L_002A4034; } }
    c.budget -= 1;
L_002A4090:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A40C8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A40A4u) [[unlikely]] return; }
L_002A40A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A40B0u) [[unlikely]] return; }
L_002A40B0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A40BCu) [[unlikely]] return; }
L_002A40BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A40D4; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A40C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A40D0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A40D0u) [[unlikely]] return; }
L_002A40D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A40D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A40F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4104u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4104u) [[unlikely]] return; }
L_002A4104:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4124; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4118u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A4118u) [[unlikely]] return; }
L_002A4118:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4124u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A4124u) [[unlikely]] return; }
L_002A4124:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4140:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22560u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A4160:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4180u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A4180u) [[unlikely]] return; }
L_002A4180:
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[7], 0u + 2u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41A0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A41A0u) [[unlikely]] return; }
L_002A41A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A41B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7780u));
    c.f[0] = ld32((c.r[4].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A41D8u); st32((c.r[4].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A41D8u) [[unlikely]] return; }
L_002A41D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A41FC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A4208; } }
L_002A41FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A4208:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4220:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4234u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4234u) [[unlikely]] return; }
L_002A4234:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4240u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A4240u) [[unlikely]] return; }
L_002A4240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4270; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4270u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A4270u) [[unlikely]] return; }
L_002A4270:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4298u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4298u) [[unlikely]] return; }
L_002A4298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A42A8u) [[unlikely]] return; }
L_002A42A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A436C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 20u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 7;
L_002A42CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A42D4u) [[unlikely]] return; }
L_002A42D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4328; } }
    set32(c.r[2], 0u + 20u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A42F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 140u, depth + 1u); else { c.pc = 0x002F92E0u; return; } if (c.pc != 0x002A42F4u) [[unlikely]] return; }
L_002A42F4:
    set32(c.r[2], c.r[17].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4308u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A4308u) [[unlikely]] return; }
L_002A4308:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4314u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A4314u) [[unlikely]] return; }
L_002A4314:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A42CCu | kUnwind; return; } goto L_002A42CC; } }
    c.budget -= 1;
L_002A4328:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A4360; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A433Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A433Cu) [[unlikely]] return; }
L_002A433C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4348u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A4348u) [[unlikely]] return; }
L_002A4348:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4354u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A4354u) [[unlikely]] return; }
L_002A4354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A4368; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A4360:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4368u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A4368u) [[unlikely]] return; }
L_002A4368:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A436C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4374u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A4374u) [[unlikely]] return; }
L_002A4374:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4390:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A43A4u) [[unlikely]] return; }
L_002A43A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A43C8; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A43BCu) [[unlikely]] return; }
L_002A43BC:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A43C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A43C8u) [[unlikely]] return; }
L_002A43C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A43E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A440C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4400u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A4400u) [[unlikely]] return; }
L_002A4400:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A440Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A440Cu) [[unlikely]] return; }
L_002A440C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22592u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A442Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A442Cu) [[unlikely]] return; }
L_002A442C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4440:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 1216u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A447C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A447Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A447Cu) [[unlikely]] return; }
L_002A447C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002A4490:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A44A4u) [[unlikely]] return; }
L_002A44A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A44ACu) [[unlikely]] return; }
L_002A44AC:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A44C8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A44C8u) [[unlikely]] return; }
L_002A44C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A44EC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A453C; } }
L_002A44EC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002A4528; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A451Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A451Cu) [[unlikely]] return; }
L_002A451C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A4540; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002A4528:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A453Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A453Cu) [[unlikely]] return; }
L_002A453C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A4540:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4564u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A4564u) [[unlikely]] return; }
L_002A4564:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4570u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A4570u) [[unlikely]] return; }
L_002A4570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4578u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4578u) [[unlikely]] return; }
L_002A4578:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4584u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A4584u) [[unlikely]] return; }
L_002A4584:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A45E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A45C8; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45C0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A45C0u) [[unlikely]] return; }
L_002A45C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A45E4; } }
L_002A45C8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A45E0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A45E0u) [[unlikely]] return; }
L_002A45E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A45E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A45F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A460Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A460Cu) [[unlikely]] return; }
L_002A460C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A461Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A461Cu) [[unlikely]] return; }
L_002A461C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002A46E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 733u)));
    set32(c.r[17], 0u + 1u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[18].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 736u)));
    if (c.r[2].d[0] == 0) c.r[17].d[0] = 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 8;
L_002A4644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A464Cu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A464Cu) [[unlikely]] return; }
L_002A464C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A46A0; } }
    set32(c.r[2], 0u + 20u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A466Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 140u, depth + 1u); else { c.pc = 0x002F92E0u; return; } if (c.pc != 0x002A466Cu) [[unlikely]] return; }
L_002A466C:
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4680u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A4680u) [[unlikely]] return; }
L_002A4680:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A468Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A468Cu) [[unlikely]] return; }
L_002A468C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4644u | kUnwind; return; } goto L_002A4644; } }
    c.budget -= 1;
L_002A46A0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (t) { goto L_002A46D8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46B4u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A46B4u) [[unlikely]] return; }
L_002A46B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46C0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A46C0u) [[unlikely]] return; }
L_002A46C0:
    c.r[5].d[0] = ld8((c.r[18].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A46CCu) [[unlikely]] return; }
L_002A46CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A46E0; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002A46D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46E0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A46E0u) [[unlikely]] return; }
L_002A46E0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 1;
L_002A46E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A46ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A46ECu) [[unlikely]] return; }
L_002A46EC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002A4710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4724u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4724u) [[unlikely]] return; }
L_002A4724:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A4754; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4754u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A4754u) [[unlikely]] return; }
L_002A4754:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4770:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4784u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4784u) [[unlikely]] return; }
L_002A4784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A47A0; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4798u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A4798u) [[unlikely]] return; }
L_002A4798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A47A0u) [[unlikely]] return; }
L_002A47A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A47B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A47E0; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47D8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A47D8u) [[unlikely]] return; }
L_002A47D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A47E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A47E0u) [[unlikely]] return; }
L_002A47E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22624u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4800u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A4800u) [[unlikely]] return; }
L_002A4800:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4810:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[7], 0u + 22u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { st32((c.r[4].w[0] + 52u), 0u);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A4840:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4854u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4854u) [[unlikely]] return; }
L_002A4854:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4888; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4888u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A4888u) [[unlikely]] return; }
L_002A4888:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A48A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A48B4u) [[unlikely]] return; }
L_002A48B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A48C0u) [[unlikely]] return; }
L_002A48C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A48FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48F0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A48F0u) [[unlikely]] return; }
L_002A48F0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A48FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A48FCu) [[unlikely]] return; }
L_002A48FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4928u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4928u) [[unlikely]] return; }
L_002A4928:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4938u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A4938u) [[unlikely]] return; }
L_002A4938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A49F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_002A4954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A495Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A495Cu) [[unlikely]] return; }
L_002A495C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A49B0; } }
    set32(c.r[2], 0u + 20u);
    set32(c.r[6], 0u + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A497Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 140u, depth + 1u); else { c.pc = 0x002F92E0u; return; } if (c.pc != 0x002A497Cu) [[unlikely]] return; }
L_002A497C:
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4990u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A4990u) [[unlikely]] return; }
L_002A4990:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A499Cu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A499Cu) [[unlikely]] return; }
L_002A499C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4954u | kUnwind; return; } goto L_002A4954; } }
    c.budget -= 1;
L_002A49B0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A49E8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A49C4u) [[unlikely]] return; }
L_002A49C4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A49D0u) [[unlikely]] return; }
L_002A49D0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49DCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A49DCu) [[unlikely]] return; }
L_002A49DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A49F0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A49E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49F0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A49F0u) [[unlikely]] return; }
L_002A49F0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A49F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A49FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A49FCu) [[unlikely]] return; }
L_002A49FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4A10:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A2Cu); set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A4A2Cu) [[unlikely]] return; }
L_002A4A2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A34u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A4A34u) [[unlikely]] return; }
L_002A4A34:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A40u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4A40u) [[unlikely]] return; }
L_002A4A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A4ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A54u); c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x002D52A0u; return; } if (c.pc != 0x002A4A54u) [[unlikely]] return; }
L_002A4A54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A4AB4; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A4ABC; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A88u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A4A88u) [[unlikely]] return; }
L_002A4A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4A90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A4A90u) [[unlikely]] return; }
L_002A4A90:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AA8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A4AA8u) [[unlikely]] return; }
L_002A4AA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A4AC0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A4AB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4ABCu);  if (depth < kMaxDepth) unit_0076(c, 83u, depth + 1u); else { c.pc = 0x002D92F0u; return; } if (c.pc != 0x002A4ABCu) [[unlikely]] return; }
L_002A4ABC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A4AC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4AE4u) [[unlikely]] return; }
L_002A4AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4B00; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4AF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A4AF8u) [[unlikely]] return; }
L_002A4AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A4B00u) [[unlikely]] return; }
L_002A4B00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4B10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B30:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B50:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B60:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4B90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4BA0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 46u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002A4BD8; } }
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_002A4BC0:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4BCCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x002A4BCCu) [[unlikely]] return; }
L_002A4BCC:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_002A4BD8:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 52ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A4BC0u | kUnwind; return; } goto L_002A4BC0; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4C00:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A4C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A4C30:
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22816u);
    st32((c.r[4].w[0] + 7924u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    st32((c.r[4].w[0] + 7920u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A4C60:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 9u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 324u), 0u);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 15;
    { st32((c.r[4].w[0] + 328u), 0u);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A4CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CB8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A4CB8u) [[unlikely]] return; }
L_002A4CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4CC0u) [[unlikely]] return; }
L_002A4CC0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4CCCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A4CCCu) [[unlikely]] return; }
L_002A4CCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4D10; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F2C0000u);
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 6795ull;
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D04u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A4D04u) [[unlikely]] return; }
L_002A4D04:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A4D10u) [[unlikely]] return; }
L_002A4D10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D3Cu); set32(c.r[17], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4D3Cu) [[unlikely]] return; }
L_002A4D3C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A4D48u) [[unlikely]] return; }
L_002A4D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4D58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A4D58u) [[unlikely]] return; }
L_002A4D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4D64; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A4D64:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A4D90; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002A4D90:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_002A4DD4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A4DD0u) [[unlikely]] return; }
L_002A4DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_002A4DD4:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A4DE0u) [[unlikely]] return; }
L_002A4DE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4DF0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4DF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002A4DF0u) [[unlikely]] return; }
L_002A4DF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A4E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    set32(c.r[5], c.r[16].w[0] + 320u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E34u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A4E34u) [[unlikely]] return; }
L_002A4E34:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A4E40u) [[unlikely]] return; }
L_002A4E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4E48u) [[unlikely]] return; }
L_002A4E48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4E68; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E5Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A4E5Cu) [[unlikely]] return; }
L_002A4E5C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4E68u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A4E68u) [[unlikely]] return; }
L_002A4E68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4E80:
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22832u);
    st32((c.r[4].w[0] + 7924u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A4EB0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 9u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 14;
    { st32((c.r[4].w[0] + 324u), 0u);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A4EF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F08u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A4F08u) [[unlikely]] return; }
L_002A4F08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4F10u) [[unlikely]] return; }
L_002A4F10:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F1Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A4F1Cu) [[unlikely]] return; }
L_002A4F1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4F60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F54u); st32((c.r[16].w[0] + 108u), 0u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A4F54u) [[unlikely]] return; }
L_002A4F54:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A4F60u) [[unlikely]] return; }
L_002A4F60:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A4F70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4F94u); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A4F94u) [[unlikely]] return; }
L_002A4F94:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FA0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A4FA0u) [[unlikely]] return; }
L_002A4FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A4FA8u) [[unlikely]] return; }
L_002A4FA8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FB4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A4FB4u) [[unlikely]] return; }
L_002A4FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A4FC4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A4FC4u) [[unlikely]] return; }
L_002A4FC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A4FDC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F380000u);
    c.r[3].d[0] = c.r[3].d[0] | 14764ull;
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 4;
L_002A4FDC:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5034; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F870000u);
    c.r[2].d[0] = c.r[2].d[0] | 25271ull;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A501Cu); st32((c.r[17].w[0] + 52u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 73u, depth + 1u); else { c.pc = 0x002DCA20u; return; } if (c.pc != 0x002A501Cu) [[unlikely]] return; }
L_002A501C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5024u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002A5024u) [[unlikely]] return; }
L_002A5024:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5034u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002A5034u) [[unlikely]] return; }
L_002A5034:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5078; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5078u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A5078u) [[unlikely]] return; }
L_002A5078:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5090:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50B8u); set32(c.r[17], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A50B8u) [[unlikely]] return; }
L_002A50B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A50C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A50C0u) [[unlikely]] return; }
L_002A50C0:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);  if (t) { goto L_002A512C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5120u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A5120u) [[unlikely]] return; }
L_002A5120:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A5160; } }
L_002A5128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.budget -= 1;
L_002A512C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A515C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A515Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A515Cu) [[unlikely]] return; }
L_002A515C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A5160:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A516Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A516Cu) [[unlikely]] return; }
L_002A516C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A51BC; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A518Cu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A518Cu) [[unlikely]] return; }
L_002A518C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51B0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A51B0u) [[unlikely]] return; }
L_002A51B0:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A51BCu) [[unlikely]] return; }
L_002A51BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A51D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A51E4u) [[unlikely]] return; }
L_002A51E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5204; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A51F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A51F8u) [[unlikely]] return; }
L_002A51F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5204u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A5204u) [[unlikely]] return; }
L_002A5204:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5258u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A5258u) [[unlikely]] return; }
L_002A5258:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5264u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A5264u) [[unlikely]] return; }
L_002A5264:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5288; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_002A52FC; } }
L_002A5288:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A52CC; } }
    set32(c.r[2], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A52B8u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A52B8u) [[unlikely]] return; }
L_002A52B8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A52C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A52C4u) [[unlikely]] return; }
L_002A52C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A5300; } }
L_002A52CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A52FCu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A52FCu) [[unlikely]] return; }
L_002A52FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5300:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5328u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A5328u) [[unlikely]] return; }
L_002A5328:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5334u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A5334u) [[unlikely]] return; }
L_002A5334:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A535C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 104u), 0u);  if (t) { goto L_002A5410; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A535C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5364u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5364u) [[unlikely]] return; }
L_002A5364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A536Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A536Cu) [[unlikely]] return; }
L_002A536C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5388u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A5388u) [[unlikely]] return; }
L_002A5388:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A53AC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5410; } }
L_002A53AC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A53E8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A53DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A53DCu) [[unlikely]] return; }
L_002A53DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A5414; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A53E8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5404u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5404u) [[unlikely]] return; }
L_002A5404:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5410u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A5410u) [[unlikely]] return; }
L_002A5410:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5414:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5434u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A5434u) [[unlikely]] return; }
L_002A5434:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5440u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A5440u) [[unlikely]] return; }
L_002A5440:
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5450u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A5450u) [[unlikely]] return; }
L_002A5450:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5458u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5458u) [[unlikely]] return; }
L_002A5458:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5478u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A5478u) [[unlikely]] return; }
L_002A5478:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A54A0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A54F0; } }
L_002A54A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40360000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54E4u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A54E4u) [[unlikely]] return; }
L_002A54E4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A54F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A54F0u) [[unlikely]] return; }
L_002A54F0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5500u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A5500u) [[unlikely]] return; }
L_002A5500:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A550Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A550Cu) [[unlikely]] return; }
L_002A550C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A552C; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 6;
L_002A552C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5558u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A5558u) [[unlikely]] return; }
L_002A5558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5560u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A5560u) [[unlikely]] return; }
L_002A5560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A5594; } }
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5590; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A5590:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A5594:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A559Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A559Cu) [[unlikely]] return; }
L_002A559C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A55BC; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A55B0u) [[unlikely]] return; }
L_002A55B0:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A55BCu) [[unlikely]] return; }
L_002A55BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A55D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A55E4u) [[unlikely]] return; }
L_002A55E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5600; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A55F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A55F8u) [[unlikely]] return; }
L_002A55F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5600u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A5600u) [[unlikely]] return; }
L_002A5600:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5610:
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22896u);
    st32((c.r[4].w[0] + 7924u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    st32((c.r[4].w[0] + 7920u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 324u), 0u);
    st32((c.r[4].w[0] + 328u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A565Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A565Cu) [[unlikely]] return; }
L_002A565C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A566C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A566C:
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A569Cu); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A569Cu) [[unlikely]] return; }
L_002A569C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A56B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A56C4u) [[unlikely]] return; }
L_002A56C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A56D8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A56D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56E0u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A56E0u) [[unlikely]] return; }
L_002A56E0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A56ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A56ECu) [[unlikely]] return; }
L_002A56EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5718; } }
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A5758; } }
L_002A5718:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[12] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[13] = c.f[12];
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5740u); st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A5740u) [[unlikely]] return; }
L_002A5740:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5758u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5758u) [[unlikely]] return; }
L_002A5758:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5770:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5788u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A5788u) [[unlikely]] return; }
L_002A5788:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5794u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A5794u) [[unlikely]] return; }
L_002A5794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 12288u);
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 113u, depth + 1u); else { c.pc = 0x002DD400u; return; } if (c.pc != 0x002A57ACu) [[unlikely]] return; }
L_002A57AC:
    set32(c.r[5], ld32((c.r[16].w[0] + 84u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A57BCu) [[unlikely]] return; }
L_002A57BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A57C4u) [[unlikely]] return; }
L_002A57C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);  if (t) { goto L_002A57D8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.budget -= 3;
L_002A57D8:
    c.f[20] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A57E4u) [[unlikely]] return; }
L_002A57E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);  if (t) { goto L_002A5800; } }
    set32(c.r[4], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A57F8u); set32(c.r[5], c.r[16].w[0] + 1328u);  if (depth < kMaxDepth) unit_000F(c, 28u, depth + 1u); else { c.pc = 0x0013CB70u; return; } if (c.pc != 0x002A57F8u) [[unlikely]] return; }
L_002A57F8:
    c.f[20] = c.f[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.budget -= 2;
L_002A5800:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[20]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A583C; } }
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A5870; } }
L_002A583C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5870u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A5870u) [[unlikely]] return; }
L_002A5870:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[13]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002A58F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_002A58FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A58F0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A58F0u) [[unlikely]] return; }
L_002A58F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A5930; } }
L_002A58F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 1;
L_002A58FC:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A592C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A592Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A592Cu) [[unlikely]] return; }
L_002A592C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A5930:
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A593Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A593Cu) [[unlikely]] return; }
L_002A593C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5948u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A5948u) [[unlikely]] return; }
L_002A5948:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5954u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A5954u) [[unlikely]] return; }
L_002A5954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A595Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A595Cu) [[unlikely]] return; }
L_002A595C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A59A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DB30000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_002A5A1C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A59A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59A8u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A59A8u) [[unlikely]] return; }
L_002A59A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A59F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5A1C; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59E0u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A59E0u) [[unlikely]] return; }
L_002A59E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A59E8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A59E8u) [[unlikely]] return; }
L_002A59E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A5A20; } }
L_002A59F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5A1C; } }
    set32(c.r[5], 0u + 6u);
    st32((c.r[16].w[0] + 4u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A10u); st32((c.r[16].w[0] + 8u), 0u);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A5A10u) [[unlikely]] return; }
L_002A5A10:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A5A1Cu) [[unlikely]] return; }
L_002A5A1C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5A20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5A30:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[13]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002A5A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);  if (t) { goto L_002A5A9C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5A90u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A5A90u) [[unlikely]] return; }
L_002A5A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A5AD0; } }
L_002A5A98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 1;
L_002A5A9C:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5ACCu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A5ACCu) [[unlikely]] return; }
L_002A5ACC:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A5AD0:
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A5AE0u) [[unlikely]] return; }
L_002A5AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AE8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5AE8u) [[unlikely]] return; }
L_002A5AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5AF0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A5AF0u) [[unlikely]] return; }
L_002A5AF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5B38; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5B70; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B28u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A5B28u) [[unlikely]] return; }
L_002A5B28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A5B30u) [[unlikely]] return; }
L_002A5B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A5B74; } }
L_002A5B38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5B70; } }
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[6], 0u + 6u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[6], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5B70u); st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5B70u) [[unlikely]] return; }
L_002A5B70:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5B74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A5B90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BA8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A5BA8u) [[unlikely]] return; }
L_002A5BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5BB0u) [[unlikely]] return; }
L_002A5BB0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A5BBCu) [[unlikely]] return; }
L_002A5BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002A5BCCu) [[unlikely]] return; }
L_002A5BCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5BD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x002A5BD4u) [[unlikely]] return; }
L_002A5BD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A5C04; } }
L_002A5BDC:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A5C00; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 735u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002A5C00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5C04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5C10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 324u), 0u);
    st32((c.r[4].w[0] + 328u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C2Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5C2Cu) [[unlikely]] return; }
L_002A5C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5C48; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A5C40u) [[unlikely]] return; }
L_002A5C40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5C48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A5C48u) [[unlikely]] return; }
L_002A5C48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5C60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22928u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5C80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 324u), 0u);
    st32((c.r[4].w[0] + 328u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A5CE0; } }
    set32(c.r[2], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CCCu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5CCCu) [[unlikely]] return; }
L_002A5CCC:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5CD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A5CD8u) [[unlikely]] return; }
L_002A5CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A5D14; } }
L_002A5CE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D08u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5D08u) [[unlikely]] return; }
L_002A5D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002A5D10u) [[unlikely]] return; }
L_002A5D10:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5D14:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5D34u) [[unlikely]] return; }
L_002A5D34:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5D68; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5D60u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A5D60u) [[unlikely]] return; }
L_002A5D60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5E00; } }
L_002A5D68:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A5DE4; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7775u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5DB8; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5DB0u) [[unlikely]] return; }
L_002A5DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5DD4; } }
L_002A5DB8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5DD0u) [[unlikely]] return; }
L_002A5DD0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002A5DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5DDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A5DDCu) [[unlikely]] return; }
L_002A5DDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A5E04; } }
L_002A5DE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_002A5E00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A5E04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5E10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E24u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A5E24u) [[unlikely]] return; }
L_002A5E24:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A5E30u) [[unlikely]] return; }
L_002A5E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5E38u) [[unlikely]] return; }
L_002A5E38:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A5E6C; } }
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A5E64u) [[unlikely]] return; }
L_002A5E64:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A5E6C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5E8Cu); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A5E8Cu) [[unlikely]] return; }
L_002A5E8C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002A5EB4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A5F20; } }
L_002A5EB4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), 0u);
    st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7775u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A5EFC; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5EF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5EF4u) [[unlikely]] return; }
L_002A5EF4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A5F18; } }
L_002A5EFC:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A5F14u) [[unlikely]] return; }
L_002A5F14:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002A5F18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A5F20u) [[unlikely]] return; }
L_002A5F20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A5F30:
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22944u);
    st32((c.r[4].w[0] + 7924u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    st32((c.r[4].w[0] + 7920u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 734u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A5F60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5F90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002A5F90u) [[unlikely]] return; }
L_002A5F90:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FACu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A5FACu) [[unlikely]] return; }
L_002A5FAC:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FB8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A5FB8u) [[unlikely]] return; }
L_002A5FB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A5FC0u) [[unlikely]] return; }
L_002A5FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A5FE8; } }
    set32(c.r[5], 0u + 15u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FD8u); st32((c.r[16].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A5FD8u) [[unlikely]] return; }
L_002A5FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A5FE0u) [[unlikely]] return; }
L_002A5FE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A6204; } }
L_002A5FE8:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A5FF4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A5FF4u) [[unlikely]] return; }
L_002A5FF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6004u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6004u) [[unlikely]] return; }
L_002A6004:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_002A601C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F0B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 13107ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 4;
L_002A601C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6028u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6028u) [[unlikely]] return; }
L_002A6028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6034; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A6034:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7775u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A60E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);  if (t) { goto L_002A60A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A60A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A609Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A609Cu) [[unlikely]] return; }
L_002A609C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_002A617C; } }
L_002A60A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.budget -= 1;
L_002A60A8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A60D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A60D8u) [[unlikely]] return; }
L_002A60D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6178; } }
L_002A60E0:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);  if (t) { goto L_002A6148; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6144; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A613Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A613Cu) [[unlikely]] return; }
L_002A613C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6178; } }
L_002A6144:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.budget -= 1;
L_002A6148:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6178; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6178u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A6178u) [[unlikely]] return; }
L_002A6178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 1;
L_002A617C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6188u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A6188u) [[unlikely]] return; }
L_002A6188:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6200; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6200; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 734u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F040000u);
    c.r[2].d[0] = c.r[2].d[0] | 25417ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7775u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A61E8; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A61E0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A61E0u) [[unlikely]] return; }
L_002A61E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6200; } }
L_002A61E8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6200u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6200u) [[unlikely]] return; }
L_002A6200:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A6204:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6220:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6250u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002A6250u) [[unlikely]] return; }
L_002A6250:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A626Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A626Cu) [[unlikely]] return; }
L_002A626C:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6278u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A6278u) [[unlikely]] return; }
L_002A6278:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6280u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A6280u) [[unlikely]] return; }
L_002A6280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A629C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6294u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A6294u) [[unlikely]] return; }
L_002A6294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A629Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A629Cu) [[unlikely]] return; }
L_002A629C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A62A8u) [[unlikely]] return; }
L_002A62A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A62B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A62B8u) [[unlikely]] return; }
L_002A62B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A62C4; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A62C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7775u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6370; } }
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);  if (t) { goto L_002A6338; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6334; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A632Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A632Cu) [[unlikely]] return; }
L_002A632C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002A640C; } }
L_002A6334:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.budget -= 1;
L_002A6338:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6368u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A6368u) [[unlikely]] return; }
L_002A6368:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6408; } }
L_002A6370:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);  if (t) { goto L_002A63D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A63D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A63CCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A63CCu) [[unlikely]] return; }
L_002A63CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6408; } }
L_002A63D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41600000u);
    c.budget -= 1;
L_002A63D8:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6408u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A6408u) [[unlikely]] return; }
L_002A6408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002A640C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6418u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A6418u) [[unlikely]] return; }
L_002A6418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6490; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6490; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 734u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F620000u);
    c.r[2].d[0] = c.r[2].d[0] | 24717ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 734u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    st8((c.r[17].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7775u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A647C; } }
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6470u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6470u) [[unlikely]] return; }
L_002A6470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A6494; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002A647C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6490u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6490u) [[unlikely]] return; }
L_002A6490:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A6494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A64B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64CCu); set32(c.r[17], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A64CCu) [[unlikely]] return; }
L_002A64CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A64D8u) [[unlikely]] return; }
L_002A64D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A64E0u) [[unlikely]] return; }
L_002A64E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A64FC; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A64F4u) [[unlikely]] return; }
L_002A64F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A64FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A64FCu) [[unlikely]] return; }
L_002A64FC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6508u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A6508u) [[unlikely]] return; }
L_002A6508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6518u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6518u) [[unlikely]] return; }
L_002A6518:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);  if (t) { goto L_002A6528; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.budget -= 2;
L_002A6528:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6534u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6534u) [[unlikely]] return; }
L_002A6534:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);  if (t) { goto L_002A6548; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6544u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002A6544u) [[unlikely]] return; }
L_002A6544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.budget -= 1;
L_002A6548:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6554u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6554u) [[unlikely]] return; }
L_002A6554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A656C; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A656Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002A656Cu) [[unlikely]] return; }
L_002A656C:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_002A65D8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A65D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A65C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A65C8u) [[unlikely]] return; }
L_002A65C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A6608; } }
L_002A65D4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 1;
L_002A65D8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6608; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6608u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A6608u) [[unlikely]] return; }
L_002A6608:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6620:
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22960u);
    st32((c.r[4].w[0] + 7924u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    st32((c.r[4].w[0] + 7920u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A6650:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 9u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 324u), 0u);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 15;
    { st32((c.r[4].w[0] + 328u), 0u);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A6690:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66A8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A66A8u) [[unlikely]] return; }
L_002A66A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A66B0u) [[unlikely]] return; }
L_002A66B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A66BCu) [[unlikely]] return; }
L_002A66BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6700; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    set32(c.r[6], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A66F4u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A66F4u) [[unlikely]] return; }
L_002A66F4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6700u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A6700u) [[unlikely]] return; }
L_002A6700:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6710:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A672Cu); set32(c.r[16], c.r[17].w[0] + 320u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A672Cu) [[unlikely]] return; }
L_002A672C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A6758; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6740u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A6740u) [[unlikely]] return; }
L_002A6740:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A674Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A674Cu) [[unlikely]] return; }
L_002A674C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A6938; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A6758:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6760u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A6760u) [[unlikely]] return; }
L_002A6760:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A676Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A676Cu) [[unlikely]] return; }
L_002A676C:
    set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6778u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A6778u) [[unlikely]] return; }
L_002A6778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6788u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6788u) [[unlikely]] return; }
L_002A6788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_002A67A8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F1A0000u);
    c.r[2].d[0] = c.r[2].d[0] | 9437ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002A67A4u) [[unlikely]] return; }
L_002A67A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 1;
L_002A67A8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A67B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A67B4u) [[unlikely]] return; }
L_002A67B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A67C0; } }
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A67C0:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);  if (t) { goto L_002A6828; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6824; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A681Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A681Cu) [[unlikely]] return; }
L_002A681C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);  if (t) { goto L_002A685C; } }
L_002A6824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.budget -= 1;
L_002A6828:
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6858; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6858u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A6858u) [[unlikely]] return; }
L_002A6858:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.budget -= 1;
L_002A685C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6868u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6868u) [[unlikely]] return; }
L_002A6868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6874; } }
    st8((c.r[17].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002A6874:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);  if (t) { goto L_002A68DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A68D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40900000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A68D0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A68D0u) [[unlikely]] return; }
L_002A68D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 7756u));  if (t) { goto L_002A6910; } }
L_002A68D8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42180000u);
    c.budget -= 1;
L_002A68DC:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A690C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40100000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A690Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A690Cu) [[unlikely]] return; }
L_002A690C:
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.budget -= 1;
L_002A6910:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6934; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002A6934:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A6938:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6950:
    c.f[0] = ld32((c.r[4].w[0] + 324u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22976u);
    st32((c.r[4].w[0] + 7924u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 328u));
    st32((c.r[4].w[0] + 7920u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A6980:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[3].d[0] = c.r[2].d[0] | 39322ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[7], 0u + 9u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 324u), 0u);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 15;
    { st32((c.r[4].w[0] + 328u), 0u);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A69C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69D8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A69D8u) [[unlikely]] return; }
L_002A69D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A69E0u) [[unlikely]] return; }
L_002A69E0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A69ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A69ECu) [[unlikely]] return; }
L_002A69EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6A68; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F620000u);
    c.r[2].d[0] = c.r[2].d[0] | 24717ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7775u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);  if (t) { goto L_002A6A44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6A38u) [[unlikely]] return; }
L_002A6A38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A6A60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.budget -= 1;
L_002A6A44:
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6A5Cu) [[unlikely]] return; }
L_002A6A5C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002A6A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A6A68u) [[unlikely]] return; }
L_002A6A68:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6A80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6A9Cu); set32(c.r[17], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A6A9Cu) [[unlikely]] return; }
L_002A6A9C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AA8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A6AA8u) [[unlikely]] return; }
L_002A6AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A6AB0u) [[unlikely]] return; }
L_002A6AB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6ACC; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A6AC4u) [[unlikely]] return; }
L_002A6AC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6ACCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A6ACCu) [[unlikely]] return; }
L_002A6ACC:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A6AD8u) [[unlikely]] return; }
L_002A6AD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6AE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6AE8u) [[unlikely]] return; }
L_002A6AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);  if (t) { goto L_002A6AF8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.budget -= 2;
L_002A6AF8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6B04u) [[unlikely]] return; }
L_002A6B04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);  if (t) { goto L_002A6B18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 179u, depth + 1u); else { c.pc = 0x002D6440u; return; } if (c.pc != 0x002A6B14u) [[unlikely]] return; }
L_002A6B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.budget -= 1;
L_002A6B18:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A6B24u) [[unlikely]] return; }
L_002A6B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6B3C; } }
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B3Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 25u, depth + 1u); else { c.pc = 0x00198370u; return; } if (c.pc != 0x002A6B3Cu) [[unlikely]] return; }
L_002A6B3C:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_002A6BA8; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A6BA4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6B98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 538u, depth + 1u); else { c.pc = 0x002A7DA0u; return; } if (c.pc != 0x002A6B98u) [[unlikely]] return; }
L_002A6B98:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A6BD8; } }
L_002A6BA4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 1;
L_002A6BA8:
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A6BD8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6BD8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 539u, depth + 1u); else { c.pc = 0x002A7E70u; return; } if (c.pc != 0x002A6BD8u) [[unlikely]] return; }
L_002A6BD8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6BF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[2], c.r[28].w[0] - 28848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A6C10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22992u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A6C40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 4u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 7u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002A6C80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6C98; } }
L_002A6C80:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A6CC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6CBC; } }
L_002A6C98:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CB0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6CB0u) [[unlikely]] return; }
L_002A6CB0:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A6CF0; } }
L_002A6CBC:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A6CC0:
    st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6CF0; } }
    set32(c.r[2], 0u + 30u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CE4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A6CE4u) [[unlikely]] return; }
L_002A6CE4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6CF0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A6CF0u) [[unlikely]] return; }
L_002A6CF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7784u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7786u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D0Cu); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A6D0Cu) [[unlikely]] return; }
L_002A6D0C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6D20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D3Cu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A6D3Cu) [[unlikely]] return; }
L_002A6D3C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A6DF0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 737u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D5Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A6D5Cu) [[unlikely]] return; }
L_002A6D5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A6D74; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_002A6D74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6D7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A6D7Cu) [[unlikely]] return; }
L_002A6D7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6D90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A6E50; } }
L_002A6D90:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002A6DE0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002A6DDC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002A6DD4; }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6DC8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 421u, depth + 1u); else { c.pc = 0x002A7150u; return; } if (c.pc != 0x002A6DC8u) [[unlikely]] return; }
L_002A6DC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));  if (t) { goto L_002A6E54; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002A6DD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A6E50; } }
L_002A6DDC:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002A6DE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6DE8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A6DE8u) [[unlikely]] return; }
L_002A6DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A6EE8; } }
L_002A6DF0:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002A6E40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002A6E3C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002A6E34; }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E28u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 421u, depth + 1u); else { c.pc = 0x002A7150u; return; } if (c.pc != 0x002A6E28u) [[unlikely]] return; }
L_002A6E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6E50; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002A6E34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A6E50; } }
L_002A6E3C:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002A6E40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6E48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A6E48u) [[unlikely]] return; }
L_002A6E48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A6EE4; } }
L_002A6E50:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 1;
L_002A6E54:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7784u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[6].d[0];  if (t) { goto L_002A6E70; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7786u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002A6EE4; } }
L_002A6E70:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A6E88; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6E9C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A6E88:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0];  if (t) { goto L_002A6EC0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A6EC0; } }
L_002A6E9C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6EB4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6EB4u) [[unlikely]] return; }
L_002A6EB4:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A6ED4; } }
L_002A6EC0:
    c.r[6].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7814u)));
    c.f[12] = ld32((c.r[17].w[0] + 7796u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6ED4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A6ED4u) [[unlikely]] return; }
L_002A6ED4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7784u)));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7786u)));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002A6EE4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A6EE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A6F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A6F28; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A6F60; } }
L_002A6F28:
    st8((c.r[5].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7786u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[5].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[5].w[0] + 13u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.f[12] = ld32((c.r[16].w[0] + 7796u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F50u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A6F50u) [[unlikely]] return; }
L_002A6F50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A6F98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002A6F60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F68u); st8((c.r[16].w[0] + 737u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A6F68u) [[unlikely]] return; }
L_002A6F68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A6F98; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6F88u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A6F88u) [[unlikely]] return; }
L_002A6F88:
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 30u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002A6F98:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A6FB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A6FD4u); st8((c.r[4].w[0] + 737u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A6FD4u) [[unlikely]] return; }
L_002A6FD4:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7784u)));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002A6FF4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7786u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002A702C; } }
L_002A6FF4:
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7784u)));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7786u)));
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    c.r[6].d[0] = ld8((c.r[16].w[0] + 13u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7814u)));
    c.f[12] = ld32((c.r[17].w[0] + 7796u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7020u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A7020u) [[unlikely]] return; }
L_002A7020:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A70E0; } }
L_002A702C:
    set32(c.r[2], ld32((c.r[17].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 2u);  if (t) { goto L_002A70C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002A70C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7050u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7050u) [[unlikely]] return; }
L_002A7050:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A705Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A705Cu) [[unlikely]] return; }
L_002A705C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A70E0; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7090; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A70E0; } }
L_002A7090:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002A70B8; }
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70ACu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0069(c, 421u, depth + 1u); else { c.pc = 0x002A7150u; return; } if (c.pc != 0x002A70ACu) [[unlikely]] return; }
L_002A70AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A70E4; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002A70B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A70E0; } }
L_002A70C0:
    set32(c.r[6], 0u + 2u);
    c.budget -= 1;
L_002A70C4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A70D8u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A70D8u) [[unlikely]] return; }
L_002A70D8:
    set32(c.r[3], 0u + 4u);
    st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002A70E0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A70E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7114u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A7114u) [[unlikely]] return; }
L_002A7114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7134; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7128u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A7128u) [[unlikely]] return; }
L_002A7128:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A7134u) [[unlikely]] return; }
L_002A7134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7150:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7170u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A7170u) [[unlikely]] return; }
L_002A7170:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A71D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 19u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A718Cu); set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002A718Cu) [[unlikely]] return; }
L_002A718C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 54u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71A8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A71A8u) [[unlikely]] return; }
L_002A71A8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A71B4u) [[unlikely]] return; }
L_002A71B4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71C0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A71C0u) [[unlikely]] return; }
L_002A71C0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A71CCu) [[unlikely]] return; }
L_002A71CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002A71E0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A71D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A71E0u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A71E0u) [[unlikely]] return; }
L_002A71E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7200; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A7200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7230:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[2], c.r[28].w[0] - 28840u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A7250:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[3], 0u + 4u);
    set32(c.r[2], 0u + 7u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7290u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A7290u) [[unlikely]] return; }
L_002A7290:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A729Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0069(c, 433u, depth + 1u); else { c.pc = 0x002A72B0u; return; } if (c.pc != 0x002A729Cu) [[unlikely]] return; }
L_002A729C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A72B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A72CCu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A72CCu) [[unlikely]] return; }
L_002A72CC:
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002A731C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_002A7318; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_002A7310; }
    set32(c.r[2], 0u + 5u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7304u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0069(c, 437u, depth + 1u); else { c.pc = 0x002A7340u; return; } if (c.pc != 0x002A7304u) [[unlikely]] return; }
L_002A7304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A7328; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_002A7310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A7324; } }
L_002A7318:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002A731C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7324u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A7324u) [[unlikely]] return; }
L_002A7324:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A7328:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[16], c.r[17].w[0] + 320u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7360u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A7360u) [[unlikely]] return; }
L_002A7360:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A73C8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 128u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A737Cu); set32(c.r[5], c.r[2].w[0] - c.r[3].w[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002A737Cu) [[unlikely]] return; }
L_002A737C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 54u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7398u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A7398u) [[unlikely]] return; }
L_002A7398:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A73A4u) [[unlikely]] return; }
L_002A73A4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73B0u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A73B0u) [[unlikely]] return; }
L_002A73B0:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A73BCu) [[unlikely]] return; }
L_002A73BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_002A73D0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A73C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A73D0u); mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A73D0u) [[unlikely]] return; }
L_002A73D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A73F0; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A73F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    mmi::paddub(c.r[2], c.r[17], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7420:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 23016u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A7440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 23040u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A7470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 30u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 56u), 0u);
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74B8u); st32((c.r[4].w[0] + 48u), 0u);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A74B8u) [[unlikely]] return; }
L_002A74B8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A74C4u) [[unlikely]] return; }
L_002A74C4:
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A74DCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A74DCu) [[unlikely]] return; }
L_002A74DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A74F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A750Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A750Cu) [[unlikely]] return; }
L_002A750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7514u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7514u) [[unlikely]] return; }
L_002A7514:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7520u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A7520u) [[unlikely]] return; }
L_002A7520:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A75DC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A7558; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A75D8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A7558:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7560u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0069(c, 469u, depth + 1u); else { c.pc = 0x002A76B0u; return; } if (c.pc != 0x002A7560u) [[unlikely]] return; }
L_002A7560:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A75B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A758Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A758Cu) [[unlikely]] return; }
L_002A758C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A759Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002A759Cu) [[unlikely]] return; }
L_002A759C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75ACu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002A75ACu) [[unlikely]] return; }
L_002A75AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A75FC; } }
L_002A75B4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75CCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A75CCu) [[unlikely]] return; }
L_002A75CC:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A75F8; } }
L_002A75D8:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A75DC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75E8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002A75E8u) [[unlikely]] return; }
L_002A75E8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A75F8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002A75F8u) [[unlikely]] return; }
L_002A75F8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A75FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7624u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A7624u) [[unlikely]] return; }
L_002A7624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7650; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7644u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A7644u) [[unlikely]] return; }
L_002A7644:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A7650:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7674u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A7674u) [[unlikely]] return; }
L_002A7674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7694; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7688u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A7688u) [[unlikely]] return; }
L_002A7688:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7694u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A7694u) [[unlikely]] return; }
L_002A7694:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A76B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 334u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76D4u); st8((c.r[4].w[0] + 334u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A76D4u) [[unlikely]] return; }
L_002A76D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A7730; } }
    set32(c.r[5], 0u + 14u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002A76E8u) [[unlikely]] return; }
L_002A76E8:
    set32(c.r[5], 0u + 49u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A76F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A76F4u) [[unlikely]] return; }
L_002A76F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7700u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A7700u) [[unlikely]] return; }
L_002A7700:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A770Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A770Cu) [[unlikely]] return; }
L_002A770C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7718u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A7718u) [[unlikely]] return; }
L_002A7718:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7724u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A7724u) [[unlikely]] return; }
L_002A7724:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002A773C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A7730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7738u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A7738u) [[unlikely]] return; }
L_002A7738:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002A773C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7750:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002A779C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7778u); set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A7778u) [[unlikely]] return; }
L_002A7778:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7784u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A7784u) [[unlikely]] return; }
L_002A7784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A779C; } }
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 4;
L_002A779C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 23056u);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A77C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A77C0u) [[unlikely]] return; }
L_002A77C0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A77E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 30u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7814u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7814u) [[unlikely]] return; }
L_002A7814:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7820u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A7820u) [[unlikely]] return; }
L_002A7820:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A784C; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7844u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A7844u) [[unlikely]] return; }
L_002A7844:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A7868; } }
L_002A784C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7864u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A7864u) [[unlikely]] return; }
L_002A7864:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A7868:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7880:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A789Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A789Cu) [[unlikely]] return; }
L_002A789C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A78A4u) [[unlikely]] return; }
L_002A78A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7978; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A78BCu) [[unlikely]] return; }
L_002A78BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A78E4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7978; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A78E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A78ECu);  if (depth < kMaxDepth) unit_0069(c, 469u, depth + 1u); else { c.pc = 0x002A76B0u; return; } if (c.pc != 0x002A78ECu) [[unlikely]] return; }
L_002A78EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A792C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7914u); st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002A7914u) [[unlikely]] return; }
L_002A7914:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7924u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002A7924u) [[unlikely]] return; }
L_002A7924:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A797C; } }
L_002A792C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7958; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7950u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A7950u) [[unlikely]] return; }
L_002A7950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002A7974; } }
L_002A7958:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7970u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A7970u) [[unlikely]] return; }
L_002A7970:
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002A7974:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002A7978:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A797C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A79A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A79A4u) [[unlikely]] return; }
L_002A79A4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A79B4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002A79B4u) [[unlikely]] return; }
L_002A79B4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A79C4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002A79C4u) [[unlikely]] return; }
L_002A79C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A79F0; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 23u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A79E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A79E8u) [[unlikely]] return; }
L_002A79E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_002A7A0C; } }
L_002A79F0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 23u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A7A08u) [[unlikely]] return; }
L_002A7A08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_002A7A0C:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7A30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7A44u) [[unlikely]] return; }
L_002A7A44:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A7A50u) [[unlikely]] return; }
L_002A7A50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A7A58u) [[unlikely]] return; }
L_002A7A58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7AA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_002A7A8C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002A7A78u) [[unlikely]] return; }
L_002A7A78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x002A7A80u) [[unlikely]] return; }
L_002A7A80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A7AA4; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_002A7A8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7A94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A7A94u) [[unlikely]] return; }
L_002A7A94:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A7AA0u) [[unlikely]] return; }
L_002A7AA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A7AA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7AB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 23072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AE0u); set32(c.r[5], c.r[16].w[0] + 320u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A7AE0u) [[unlikely]] return; }
L_002A7AE0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A7AF0u) [[unlikely]] return; }
L_002A7AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7AF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A7AF8u) [[unlikely]] return; }
L_002A7AF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7B10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[2], 0u + 30u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    st8((c.r[5].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 52u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B48u); st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7B48u) [[unlikely]] return; }
L_002A7B48:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A7B54u) [[unlikely]] return; }
L_002A7B54:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A7B6Cu) [[unlikely]] return; }
L_002A7B6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7B9Cu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7B9Cu) [[unlikely]] return; }
L_002A7B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BA4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A7BA4u) [[unlikely]] return; }
L_002A7BA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7C58; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BBCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A7BBCu) [[unlikely]] return; }
L_002A7BBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A7BE0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7C58; } }
L_002A7BE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7BF4u); st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0069(c, 469u, depth + 1u); else { c.pc = 0x002A76B0u; return; } if (c.pc != 0x002A7BF4u) [[unlikely]] return; }
L_002A7BF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7C40; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C10u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002A7C10u) [[unlikely]] return; }
L_002A7C10:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C20u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002A7C20u) [[unlikely]] return; }
L_002A7C20:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C38u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A7C38u) [[unlikely]] return; }
L_002A7C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A7C5C; } }
L_002A7C40:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7C58u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A7C58u) [[unlikely]] return; }
L_002A7C58:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A7C5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[4].w[0] + 7952u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 7952u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7956u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 7956u), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 7960u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CBCu); st32((c.r[4].w[0] + 7960u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A7CBCu) [[unlikely]] return; }
L_002A7CBC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A7CC8u) [[unlikely]] return; }
L_002A7CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A7CD0u) [[unlikely]] return; }
L_002A7CD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A7D0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CE0u); c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x002D52A0u; return; } if (c.pc != 0x002A7CE0u) [[unlikely]] return; }
L_002A7CE0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A7D04; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002A7CF0u) [[unlikely]] return; }
L_002A7CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7CF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x002A7CF8u) [[unlikely]] return; }
L_002A7CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A7D10; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A7D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7D0Cu);  if (depth < kMaxDepth) unit_0076(c, 83u, depth + 1u); else { c.pc = 0x002D92F0u; return; } if (c.pc != 0x002A7D0Cu) [[unlikely]] return; }
L_002A7D0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A7D10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A7D20:
    st32((c.r[4].w[0] + 7924u), 0u);
    st32((c.r[4].w[0] + 7920u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 737u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002A7D30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002A7D88; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7D68; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[3].d[0] | 1024ull;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);  if (t) { goto L_002A7D88; } }
L_002A7D68:
    set32(c.r[6], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[5], 0u - 65u);
    set32(c.r[3], 0u - 1025u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 8;
L_002A7D88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7D90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7DA0:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 575u));
    c.r[3].d[0] = c.r[7].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_002A7DE0; } }
    c.r[3].d[0] = c.r[7].d[0] & 128ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[8].d[0] << 56;  if (t) { goto L_002A7DE4; } }
    set32(c.r[7], ld32((c.r[4].w[0] + 592u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7DE0; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    set32(c.r[3], 0u + 18u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0];  if (t) { goto L_002A7DE0; } }
    set32(c.r[8], 0u + 1u);
    c.budget -= 1;
L_002A7DE0:
    c.r[3].d[0] = c.r[8].d[0] << 56;
    c.budget -= 1;
L_002A7DE4:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A7E68; } }
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 2ull;  if (t) { goto L_002A7E34; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7E2C; } }
    c.f[0] = ld32((c.r[4].w[0] + 7740u));
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.f[0]);  if (t) { goto L_002A7E30; } }
L_002A7E2C:
    st32((c.r[5].w[0] + 4u), c.f[12]);
    c.budget -= 1;
L_002A7E30:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 1;
L_002A7E34:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7E68; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[12]));
    c.budget -= 5;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7E64; } }
    c.f[0] = ld32((c.r[4].w[0] + 7740u));
    c.f[0] = fp::mul(c.f[13], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), c.f[0]);  if (t) { goto L_002A7E68; } }
L_002A7E64:
    st32((c.r[5].w[0] + 8u), c.f[12]);
    c.budget -= 1;
L_002A7E68:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7E70:
    c.r[6].d[0] = c.r[6].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].d[0] & 1ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] & 2ull;  if (t) { goto L_002A7EBC; } }
    c.f[1] = ld32((c.r[5].w[0] + 4u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), 0u);  if (t) { goto L_002A7EB8; } }
L_002A7EA8:
    c.f[0] = ld32((c.r[4].w[0] + 7740u));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 4;
L_002A7EB8:
    c.r[3].d[0] = c.r[6].d[0] & 2ull;
    c.budget -= 1;
L_002A7EBC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A7EF8; } }
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A7EE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 8u), 0u);  if (t) { goto L_002A7EF8; } }
L_002A7EE8:
    c.f[0] = ld32((c.r[4].w[0] + 7740u));
    c.f[0] = fp::mul(c.f[12], c.f[0]);
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 4;
L_002A7EF8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A7F00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 52u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_002A7F1C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A7F28u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x002A7F28u) [[unlikely]] return; }
L_002A7F28:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 56ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A7F1Cu | kUnwind; return; } goto L_002A7F1C; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A7F50:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 325u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002A7F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 23216u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A7F90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 23248u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A4000u < 16384u) { entry = entries_0069[(t - 0x002A4000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A7FB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[12] = 0u;
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[5].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    c.budget -= 13;
    { st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A7FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    [[clang::musttail]] return unit_006A(c, 1u, depth);
}

}
