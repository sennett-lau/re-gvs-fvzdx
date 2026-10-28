#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0050[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0,
    25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55,
    0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 61, 0, 0, 0, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
    118, 119, 120, 121, 122, 123, 124, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0,
    151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0,
    161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192,
    193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254,
    0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304,
    0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311,
    0, 312, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0,
    375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 383,
    0, 384, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 422,
    0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 434, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440,
    0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0,
    0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 0, 482, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0050(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00240000;
    case 2u: goto L_00240018;
    case 3u: goto L_00240020;
    case 4u: goto L_00240030;
    case 5u: goto L_00240040;
    case 6u: goto L_00240050;
    case 7u: goto L_00240060;
    case 8u: goto L_00240080;
    case 9u: goto L_00240084;
    case 10u: goto L_002400A0;
    case 11u: goto L_002400C0;
    case 12u: goto L_002400E0;
    case 13u: goto L_002400F0;
    case 14u: goto L_00240100;
    case 15u: goto L_00240120;
    case 16u: goto L_00240134;
    case 17u: goto L_00240140;
    case 18u: goto L_00240160;
    case 19u: goto L_00240180;
    case 20u: goto L_002401B4;
    case 21u: goto L_002401BC;
    case 22u: goto L_002401C4;
    case 23u: goto L_002401E0;
    case 24u: goto L_002401F0;
    case 25u: goto L_00240200;
    case 26u: goto L_00240278;
    case 27u: goto L_002402BC;
    case 28u: goto L_00240340;
    case 29u: goto L_00240368;
    case 30u: goto L_002403C0;
    case 31u: goto L_002403E8;
    case 32u: goto L_00240460;
    case 33u: goto L_00240480;
    case 34u: goto L_002404B4;
    case 35u: goto L_00240520;
    case 36u: goto L_00240570;
    case 37u: goto L_00240634;
    case 38u: goto L_0024063C;
    case 39u: goto L_00240644;
    case 40u: goto L_00240660;
    case 41u: goto L_00240670;
    case 42u: goto L_00240680;
    case 43u: goto L_00240710;
    case 44u: goto L_00240754;
    case 45u: goto L_002407B8;
    case 46u: goto L_00240818;
    case 47u: goto L_00240870;
    case 48u: goto L_002408A0;
    case 49u: goto L_00240900;
    case 50u: goto L_00240920;
    case 51u: goto L_00240968;
    case 52u: goto L_00240974;
    case 53u: goto L_0024099C;
    case 54u: goto L_002409A4;
    case 55u: goto L_002409FC;
    case 56u: goto L_00240A04;
    case 57u: goto L_00240A20;
    case 58u: goto L_00240A58;
    case 59u: goto L_00240AD0;
    case 60u: goto L_00240B00;
    case 61u: goto L_00240B10;
    case 62u: goto L_00240B20;
    case 63u: goto L_00240B24;
    case 64u: goto L_00240B28;
    case 65u: goto L_00240B2C;
    case 66u: goto L_00240B30;
    case 67u: goto L_00240B34;
    case 68u: goto L_00240B38;
    case 69u: goto L_00240B3C;
    case 70u: goto L_00240B40;
    case 71u: goto L_00240B44;
    case 72u: goto L_00240B48;
    case 73u: goto L_00240B4C;
    case 74u: goto L_00240B50;
    case 75u: goto L_00240B54;
    case 76u: goto L_00240B58;
    case 77u: goto L_00240B5C;
    case 78u: goto L_00240B60;
    case 79u: goto L_00240B64;
    case 80u: goto L_00240B68;
    case 81u: goto L_00240B6C;
    case 82u: goto L_00240B70;
    case 83u: goto L_00240B74;
    case 84u: goto L_00240B78;
    case 85u: goto L_00240B7C;
    case 86u: goto L_00240B80;
    case 87u: goto L_00240B84;
    case 88u: goto L_00240B88;
    case 89u: goto L_00240B8C;
    case 90u: goto L_00240B90;
    case 91u: goto L_00240B94;
    case 92u: goto L_00240B98;
    case 93u: goto L_00240B9C;
    case 94u: goto L_00240BA0;
    case 95u: goto L_00240BA4;
    case 96u: goto L_00240BA8;
    case 97u: goto L_00240BAC;
    case 98u: goto L_00240BB0;
    case 99u: goto L_00240BB4;
    case 100u: goto L_00240BB8;
    case 101u: goto L_00240BBC;
    case 102u: goto L_00240BC0;
    case 103u: goto L_00240BC4;
    case 104u: goto L_00240BC8;
    case 105u: goto L_00240BCC;
    case 106u: goto L_00240BD0;
    case 107u: goto L_00240BD4;
    case 108u: goto L_00240BD8;
    case 109u: goto L_00240BDC;
    case 110u: goto L_00240BE0;
    case 111u: goto L_00240BE4;
    case 112u: goto L_00240BE8;
    case 113u: goto L_00240BEC;
    case 114u: goto L_00240BF0;
    case 115u: goto L_00240BF4;
    case 116u: goto L_00240BF8;
    case 117u: goto L_00240BFC;
    case 118u: goto L_00240C00;
    case 119u: goto L_00240C04;
    case 120u: goto L_00240C08;
    case 121u: goto L_00240C0C;
    case 122u: goto L_00240C10;
    case 123u: goto L_00240C14;
    case 124u: goto L_00240C18;
    case 125u: goto L_00240C1C;
    case 126u: goto L_00240C20;
    case 127u: goto L_00240C58;
    case 128u: goto L_00240C78;
    case 129u: goto L_00240CB0;
    case 130u: goto L_00240CC8;
    case 131u: goto L_00240CD0;
    case 132u: goto L_00240D00;
    case 133u: goto L_00240D40;
    case 134u: goto L_00240D58;
    case 135u: goto L_00240D90;
    case 136u: goto L_00240DA0;
    case 137u: goto L_00240DE0;
    case 138u: goto L_00240DFC;
    case 139u: goto L_00240E20;
    case 140u: goto L_00240F90;
    case 141u: goto L_00240FA0;
    case 142u: goto L_00240FC0;
    case 143u: goto L_00241010;
    case 144u: goto L_00241030;
    case 145u: goto L_00241094;
    case 146u: goto L_0024109C;
    case 147u: goto L_002410A8;
    case 148u: goto L_002410CC;
    case 149u: goto L_002410D4;
    case 150u: goto L_002410E4;
    case 151u: goto L_00241100;
    case 152u: goto L_00241180;
    case 153u: goto L_0024118C;
    case 154u: goto L_00241194;
    case 155u: goto L_0024119C;
    case 156u: goto L_002411AC;
    case 157u: goto L_002411B4;
    case 158u: goto L_002411BC;
    case 159u: goto L_002411E0;
    case 160u: goto L_002411F0;
    case 161u: goto L_00241200;
    case 162u: goto L_00241204;
    case 163u: goto L_00241208;
    case 164u: goto L_0024120C;
    case 165u: goto L_00241210;
    case 166u: goto L_00241214;
    case 167u: goto L_00241218;
    case 168u: goto L_0024121C;
    case 169u: goto L_00241220;
    case 170u: goto L_00241224;
    case 171u: goto L_00241228;
    case 172u: goto L_0024122C;
    case 173u: goto L_00241230;
    case 174u: goto L_00241234;
    case 175u: goto L_00241238;
    case 176u: goto L_0024123C;
    case 177u: goto L_00241240;
    case 178u: goto L_00241244;
    case 179u: goto L_00241248;
    case 180u: goto L_0024124C;
    case 181u: goto L_00241250;
    case 182u: goto L_00241254;
    case 183u: goto L_00241258;
    case 184u: goto L_0024125C;
    case 185u: goto L_00241260;
    case 186u: goto L_00241264;
    case 187u: goto L_00241268;
    case 188u: goto L_0024126C;
    case 189u: goto L_00241270;
    case 190u: goto L_00241274;
    case 191u: goto L_00241278;
    case 192u: goto L_0024127C;
    case 193u: goto L_00241280;
    case 194u: goto L_00241284;
    case 195u: goto L_00241288;
    case 196u: goto L_0024128C;
    case 197u: goto L_00241290;
    case 198u: goto L_00241294;
    case 199u: goto L_00241298;
    case 200u: goto L_0024129C;
    case 201u: goto L_002412A0;
    case 202u: goto L_002412A4;
    case 203u: goto L_002412A8;
    case 204u: goto L_002412AC;
    case 205u: goto L_002412B0;
    case 206u: goto L_002412B4;
    case 207u: goto L_002412B8;
    case 208u: goto L_002412BC;
    case 209u: goto L_002412C0;
    case 210u: goto L_002412C4;
    case 211u: goto L_002412C8;
    case 212u: goto L_002412CC;
    case 213u: goto L_002412D0;
    case 214u: goto L_002412D4;
    case 215u: goto L_002412D8;
    case 216u: goto L_002412DC;
    case 217u: goto L_002412E0;
    case 218u: goto L_002412E4;
    case 219u: goto L_002412E8;
    case 220u: goto L_002412EC;
    case 221u: goto L_002412F0;
    case 222u: goto L_002412F4;
    case 223u: goto L_002412F8;
    case 224u: goto L_002412FC;
    case 225u: goto L_00241300;
    case 226u: goto L_00241310;
    case 227u: goto L_00241334;
    case 228u: goto L_00241350;
    case 229u: goto L_00241370;
    case 230u: goto L_002413D0;
    case 231u: goto L_00241400;
    case 232u: goto L_00241480;
    case 233u: goto L_00241494;
    case 234u: goto L_002414B0;
    case 235u: goto L_002414B8;
    case 236u: goto L_002414C0;
    case 237u: goto L_002414C8;
    case 238u: goto L_002414D0;
    case 239u: goto L_002414D8;
    case 240u: goto L_002414F4;
    case 241u: goto L_00241520;
    case 242u: goto L_0024158C;
    case 243u: goto L_00241608;
    case 244u: goto L_0024161C;
    case 245u: goto L_00241638;
    case 246u: goto L_00241640;
    case 247u: goto L_00241648;
    case 248u: goto L_00241650;
    case 249u: goto L_00241658;
    case 250u: goto L_00241660;
    case 251u: goto L_00241690;
    case 252u: goto L_00241800;
    case 253u: goto L_00241810;
    case 254u: goto L_0024187C;
    case 255u: goto L_00241884;
    case 256u: goto L_00241894;
    case 257u: goto L_002418A4;
    case 258u: goto L_002418B0;
    case 259u: goto L_002418BC;
    case 260u: goto L_002418CC;
    case 261u: goto L_002418D4;
    case 262u: goto L_002418E4;
    case 263u: goto L_002418EC;
    case 264u: goto L_0024193C;
    case 265u: goto L_00241980;
    case 266u: goto L_002419EC;
    case 267u: goto L_002419F8;
    case 268u: goto L_00241A20;
    case 269u: goto L_00241A5C;
    case 270u: goto L_00241AB0;
    case 271u: goto L_00241AF0;
    case 272u: goto L_00241B30;
    case 273u: goto L_00241B50;
    case 274u: goto L_00241B70;
    case 275u: goto L_00241BC0;
    case 276u: goto L_00241BF0;
    case 277u: goto L_00241C34;
    case 278u: goto L_00241C70;
    case 279u: goto L_00241CB8;
    case 280u: goto L_00241CC8;
    case 281u: goto L_00241D90;
    case 282u: goto L_00241DA0;
    case 283u: goto L_00241DB0;
    case 284u: goto L_00241E24;
    case 285u: goto L_00241E64;
    case 286u: goto L_00241E78;
    case 287u: goto L_00241EE0;
    case 288u: goto L_00241FC8;
    case 289u: goto L_00241FF8;
    case 290u: goto L_00242000;
    case 291u: goto L_00242008;
    case 292u: goto L_00242018;
    case 293u: goto L_00242020;
    case 294u: goto L_00242028;
    case 295u: goto L_00242030;
    case 296u: goto L_0024203C;
    case 297u: goto L_00242044;
    case 298u: goto L_0024204C;
    case 299u: goto L_00242054;
    case 300u: goto L_0024205C;
    case 301u: goto L_00242064;
    case 302u: goto L_0024206C;
    case 303u: goto L_00242074;
    case 304u: goto L_0024207C;
    case 305u: goto L_00242084;
    case 306u: goto L_002420C8;
    case 307u: goto L_002420D8;
    case 308u: goto L_002420E4;
    case 309u: goto L_002420EC;
    case 310u: goto L_002420F4;
    case 311u: goto L_002420FC;
    case 312u: goto L_00242104;
    case 313u: goto L_0024210C;
    case 314u: goto L_00242114;
    case 315u: goto L_0024211C;
    case 316u: goto L_0024212C;
    case 317u: goto L_00242134;
    case 318u: goto L_00242168;
    case 319u: goto L_00242170;
    case 320u: goto L_0024217C;
    case 321u: goto L_002421D0;
    case 322u: goto L_00242200;
    case 323u: goto L_00242228;
    case 324u: goto L_00242254;
    case 325u: goto L_00242260;
    case 326u: goto L_00242280;
    case 327u: goto L_002422A8;
    case 328u: goto L_00242310;
    case 329u: goto L_00242340;
    case 330u: goto L_00242374;
    case 331u: goto L_002423B8;
    case 332u: goto L_002423C4;
    case 333u: goto L_002423D0;
    case 334u: goto L_002423F0;
    case 335u: goto L_0024243C;
    case 336u: goto L_00242454;
    case 337u: goto L_00242540;
    case 338u: goto L_00242550;
    case 339u: goto L_00242560;
    case 340u: goto L_002425B8;
    case 341u: goto L_002425F8;
    case 342u: goto L_00242600;
    case 343u: goto L_00242608;
    case 344u: goto L_00242618;
    case 345u: goto L_00242620;
    case 346u: goto L_00242628;
    case 347u: goto L_00242630;
    case 348u: goto L_00242638;
    case 349u: goto L_00242640;
    case 350u: goto L_00242648;
    case 351u: goto L_00242660;
    case 352u: goto L_002426D0;
    case 353u: goto L_002426E8;
    case 354u: goto L_00242770;
    case 355u: goto L_00242800;
    case 356u: goto L_00242814;
    case 357u: goto L_00242860;
    case 358u: goto L_00242890;
    case 359u: goto L_002428B8;
    case 360u: goto L_002428E4;
    case 361u: goto L_002428F0;
    case 362u: goto L_00242910;
    case 363u: goto L_00242938;
    case 364u: goto L_002429A0;
    case 365u: goto L_002429D0;
    case 366u: goto L_00242A08;
    case 367u: goto L_00242A14;
    case 368u: goto L_00242A80;
    case 369u: goto L_00242A8C;
    case 370u: goto L_00242AB0;
    case 371u: goto L_00242B10;
    case 372u: goto L_00242B20;
    case 373u: goto L_00242BE0;
    case 374u: goto L_00242BF0;
    case 375u: goto L_00242C00;
    case 376u: goto L_00242C8C;
    case 377u: goto L_00242CC4;
    case 378u: goto L_00242CCC;
    case 379u: goto L_00242CD4;
    case 380u: goto L_00242CE4;
    case 381u: goto L_00242CEC;
    case 382u: goto L_00242CF4;
    case 383u: goto L_00242CFC;
    case 384u: goto L_00242D04;
    case 385u: goto L_00242D0C;
    case 386u: goto L_00242D14;
    case 387u: goto L_00242D1C;
    case 388u: goto L_00242D30;
    case 389u: goto L_00242DA4;
    case 390u: goto L_00242DBC;
    case 391u: goto L_00242E10;
    case 392u: goto L_00242E20;
    case 393u: goto L_00242E28;
    case 394u: goto L_00242E5C;
    case 395u: goto L_00242E68;
    case 396u: goto L_00242E94;
    case 397u: goto L_00242EE0;
    case 398u: goto L_00242F10;
    case 399u: goto L_00242F38;
    case 400u: goto L_00242F64;
    case 401u: goto L_00242F70;
    case 402u: goto L_00242F90;
    case 403u: goto L_00242FB8;
    case 404u: goto L_00243010;
    case 405u: goto L_00243040;
    case 406u: goto L_002430C0;
    case 407u: goto L_00243114;
    case 408u: goto L_00243120;
    case 409u: goto L_00243140;
    case 410u: goto L_00243234;
    case 411u: goto L_0024323C;
    case 412u: goto L_00243260;
    case 413u: goto L_00243270;
    case 414u: goto L_00243280;
    case 415u: goto L_002432F8;
    case 416u: goto L_00243338;
    case 417u: goto L_0024333C;
    case 418u: goto L_0024334C;
    case 419u: goto L_0024335C;
    case 420u: goto L_00243364;
    case 421u: goto L_0024336C;
    case 422u: goto L_0024337C;
    case 423u: goto L_00243384;
    case 424u: goto L_0024338C;
    case 425u: goto L_00243394;
    case 426u: goto L_0024339C;
    case 427u: goto L_002433B0;
    case 428u: goto L_002433B8;
    case 429u: goto L_002433C0;
    case 430u: goto L_002433C8;
    case 431u: goto L_002433D0;
    case 432u: goto L_002433D8;
    case 433u: goto L_002433F0;
    case 434u: goto L_002433F8;
    case 435u: goto L_0024340C;
    case 436u: goto L_0024344C;
    case 437u: goto L_00243454;
    case 438u: goto L_0024345C;
    case 439u: goto L_00243464;
    case 440u: goto L_0024347C;
    case 441u: goto L_00243484;
    case 442u: goto L_00243498;
    case 443u: goto L_002434D8;
    case 444u: goto L_002434E0;
    case 445u: goto L_002434F0;
    case 446u: goto L_002434F8;
    case 447u: goto L_00243508;
    case 448u: goto L_00243514;
    case 449u: goto L_00243528;
    case 450u: goto L_00243534;
    case 451u: goto L_00243540;
    case 452u: goto L_00243548;
    case 453u: goto L_00243550;
    case 454u: goto L_0024355C;
    case 455u: goto L_00243570;
    case 456u: goto L_00243578;
    case 457u: goto L_0024358C;
    case 458u: goto L_002435F0;
    case 459u: goto L_00243630;
    case 460u: goto L_00243640;
    case 461u: goto L_00243660;
    case 462u: goto L_002436A4;
    case 463u: goto L_002436E4;
    case 464u: goto L_002437F0;
    case 465u: goto L_00243804;
    case 466u: goto L_0024383C;
    case 467u: goto L_00243888;
    case 468u: goto L_002438C4;
    case 469u: goto L_002438E4;
    case 470u: goto L_00243914;
    case 471u: goto L_00243930;
    case 472u: goto L_00243A90;
    case 473u: goto L_00243AFC;
    case 474u: goto L_00243B24;
    case 475u: goto L_00243BB0;
    case 476u: goto L_00243BB8;
    case 477u: goto L_00243BC0;
    case 478u: goto L_00243BD8;
    case 479u: goto L_00243C24;
    case 480u: goto L_00243C48;
    case 481u: goto L_00243C74;
    case 482u: goto L_00243C88;
    case 483u: goto L_00243C90;
    case 484u: goto L_00243CA0;
    case 485u: goto L_00243CA8;
    case 486u: goto L_00243CB0;
    case 487u: goto L_00243CB8;
    case 488u: goto L_00243CC0;
    case 489u: goto L_00243CE0;
    case 490u: goto L_00243CF0;
    case 491u: goto L_00243D80;
    case 492u: goto L_00243DA0;
    case 493u: goto L_00243DB0;
    case 494u: goto L_00243DB8;
    case 495u: goto L_00243DC0;
    case 496u: goto L_00243DC8;
    case 497u: goto L_00243DD0;
    case 498u: goto L_00243DD8;
    case 499u: goto L_00243DF0;
    case 500u: goto L_00243E3C;
    case 501u: goto L_00243EA4;
    case 502u: goto L_00243EAC;
    case 503u: goto L_00243EFC;
    case 504u: goto L_00243F58;
    case 505u: goto L_00243FA4;
    default: bad_entry(c, 0x00240000u); return;
    }
L_00240000:
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 6;
L_00240018:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 2;
L_00240020:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240030:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 4;
L_00240040:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00240050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], c.r[4].w[0] + 320u);
    set32(c.r[8], c.r[28].w[0] - 29284u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 4;
L_00240060:
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[12], c.r[10], c.r[0]);
    mmi::paddub(c.r[13], c.r[10], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_002400C8; } }
    goto L_00240084;
L_00240080:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.budget -= 1;
L_00240084:
    st32((c.r[12].w[0] + 32u), c.r[9].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[3].d[0] << 56;
    set32(c.r[6], c.r[10].w[0] + c.r[14].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 7;
L_002400A0:
    set32(c.r[7], c.r[14].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    st8((c.r[6].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[13].w[0]), c.r[5].w[0]);
    st32((c.r[13].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 8u), c.r[9].w[0]);
    c.budget -= 8;
L_002400C0:
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.budget -= 2;
L_002400C8:
    c.r[14].d[0] = c.r[11].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.r[3].d[0] = c.r[14].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240084u | kUnwind; return; } goto L_00240084; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002400E0:
    c.budget -= 1;
    c.pc = 0x002400E4u; [[clang::musttail]] return dispatch(c, 0u, depth);
L_002400F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[3] = c.r[2].w[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.budget -= 4;
L_00240100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3C360000u);
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBBB60000u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 8;
L_00240120:
    c.r[2].d[0] = c.r[2].d[0] | 2913ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_00240170; } }
L_00240134:
    c.f[0] = ld32((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
L_00240140:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.f[0] = fp::add(c.f[0], c.f[3]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] + 16u);
    c.budget -= 8;
L_00240160:
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 32u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.budget -= 4;
L_00240170:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240134u | kUnwind; return; } goto L_00240134; } }
    goto L_00240184;
L_00240180:
    c.budget -= 1;
L_00240184:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002401AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002401AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401B4u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002401B4u) [[unlikely]] return; }
L_002401B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401BCu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002401BCu) [[unlikely]] return; }
L_002401BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002401C4u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002401C4u) [[unlikely]] return; }
L_002401C4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002401E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002401F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00240200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 10128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29280u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10144u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[21].w[0] + 320u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240278u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00240278u) [[unlikely]] return; }
L_00240278:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[3].w[0] - 10192u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[16], c.r[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[16], c.r[0]);  if (t) { goto L_00240380; } }
    set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_002402BC:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 40u));
    set32(c.r[2], 0u + 117u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_002402D0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002402D0:
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 10112u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 112u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 116u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 120u), c.f[0]);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240340u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00240340u) [[unlikely]] return; }
L_00240340:
    st8((c.r[28].w[0] - 29277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240368u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00240368u) [[unlikely]] return; }
L_00240368:
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 6;
L_00240380:
    c.r[6].d[0] = c.r[17].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[16].w[0] + c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002402BCu | kUnwind; return; } goto L_002402BC; }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002403C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002403E8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002403E8u) [[unlikely]] return; }
L_002403E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240448; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 48u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[4], c.r[3].w[0] + 1120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] + 1664u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 22;
L_00240448:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 9968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00240480:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[10], c.r[4].w[0] + 320u);
    set32(c.r[8], c.r[28].w[0] - 29276u);
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[12], c.r[10], c.r[0]);
    mmi::paddub(c.r[13], c.r[10], c.r[0]);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x3F000000u);  if (t) { goto L_002404F8; } }
L_002404B4:
    st32((c.r[12].w[0] + 32u), c.r[9].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], c.r[11].w[0] + 1u);
    c.r[11].d[0] = c.r[3].d[0] << 56;
    set32(c.r[6], c.r[10].w[0] + c.r[14].w[0]);
    set32(c.r[7], c.r[7].w[0] << 1);
    set32(c.r[7], c.r[8].w[0] + c.r[7].w[0]);
    set32(c.r[7], c.r[14].w[0] + c.r[7].w[0]);
    c.r[7].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[12], c.r[12].w[0] + 4u);
    c.r[11].d[0] = static_cast<std::uint64_t>(c.r[11].sd[0] >> 56);
    st8((c.r[6].w[0] + 40u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st32((c.r[13].w[0]), c.r[5].w[0]);
    st32((c.r[13].w[0] + 4u), 0u);
    st32((c.r[13].w[0] + 8u), c.r[9].w[0]);
    set32(c.r[13], c.r[13].w[0] + 16u);
    c.budget -= 17;
L_002404F8:
    c.r[14].d[0] = c.r[11].d[0] << 56;
    c.r[14].d[0] = static_cast<std::uint64_t>(c.r[14].sd[0] >> 56);
    c.r[3].d[0] = c.r[14].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002404B4u | kUnwind; return; } goto L_002404B4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240520:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[4] = c.r[2].w[0];
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3DCC0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[3] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[2] = c.r[2].w[0];
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBCF00000u);
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.r[2].d[0] = c.r[2].d[0] | 61681ull;
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 20;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (t) { goto L_002405F0; } }
L_00240570:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0024059C; } }
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[3]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.f[0]);  if (t) { goto L_002405B8; } }
L_0024059C:
    c.f[0] = ld32((c.r[4].w[0]));
    c.f[0] = fp::add(c.f[0], c.f[2]);
    st32((c.r[4].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    c.f[0] = fp::add(c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    c.budget -= 7;
L_002405B8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 26ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_002405DC; } }
    c.f[0] = ld32((c.r[5].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 32u), c.f[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 5;
L_002405DC:
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[4], c.r[4].w[0] + 16u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
L_002405F0:
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240570u | kUnwind; return; } goto L_00240570; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0024062C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0024062C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240634u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00240634u) [[unlikely]] return; }
L_00240634:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024063Cu); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0024063Cu) [[unlikely]] return; }
L_0024063C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240644u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00240644u) [[unlikely]] return; }
L_00240644:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240660:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00240670:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00240680:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[29].w[0] + 128u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 9936u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 256u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[22], c.r[21].w[0] + 320u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] - 10096u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 9952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[5].w[0]);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240710u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00240710u) [[unlikely]] return; }
L_00240710:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[18], c.r[3].w[0] - 10000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[19], c.r[22], c.r[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[20], c.r[22], c.r[0]);  if (t) { goto L_00240830; } }
    set32(c.r[2], c.r[22].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00240754:
    c.r[3].d[0] = ld8((c.r[2].w[0] + 40u));
    set32(c.r[2], 0u + 114u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00240768; } }
    set32(c.r[17], 0u + 1u);
    c.budget -= 1;
L_00240768:
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 128u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[0] = ld32((c.r[18].w[0] + 4u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 132u), c.f[0]);
    c.f[2] = ld32((c.r[21].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[0] = fp::add(c.f[2], c.f[0]);
    st32((c.r[29].w[0] + 136u), c.f[0]);
    st32((c.r[29].w[0] + 140u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[19].w[0] + 32u));
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002407B8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x002407B8u) [[unlikely]] return; }
L_002407B8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[3].w[0] - 10096u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] - 9920u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[3].w[0] - 20416u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);
    c.f[0] = ld32((c.r[20].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[0]);
    c.f[0] = ld32((c.r[20].w[0] + 4u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240818u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00240818u) [[unlikely]] return; }
L_00240818:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    set32(c.r[18], c.r[18].w[0] + 16u);
    set32(c.r[19], c.r[19].w[0] + 4u);
    set32(c.r[20], c.r[20].w[0] + 16u);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 6;
L_00240830:
    c.r[6].d[0] = c.r[16].d[0] << 56;
    c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);
    c.r[3].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], c.r[22].w[0] + c.r[6].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00240754u | kUnwind; return; } goto L_00240754; }
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
L_00240870:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002408A0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002408A0u) [[unlikely]] return; }
L_002408A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002408E8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 49u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2304u);
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] + 2848u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 16;
L_002408E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00240900:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 8944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00240920:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[6].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] - 9904u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[6], c.r[6].w[0] << 5);
    set32(c.r[17], c.r[5].w[0] + c.r[6].w[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240968u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00240968u) [[unlikely]] return; }
L_00240968:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240974u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00240974u) [[unlikely]] return; }
L_00240974:
    c.f[3] = ld32((c.r[16].w[0] + 32u));
    c.f[2] = ld32((c.r[16].w[0] + 36u));
    c.f[1] = ld32((c.r[16].w[0] + 40u));
    c.f[0] = ld32((c.r[16].w[0] + 44u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 144u), c.f[3]);
    st32((c.r[16].w[0] + 148u), c.f[2]);
    st32((c.r[16].w[0] + 152u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024099Cu); st32((c.r[16].w[0] + 156u), c.f[0]);  if (depth < kMaxDepth) unit_0050(c, 129u, depth + 1u); else { c.pc = 0x00240CB0u; return; } if (c.pc != 0x0024099Cu) [[unlikely]] return; }
L_0024099C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 135u, depth + 1u); else { c.pc = 0x00240D90u; return; } if (c.pc != 0x002409A4u) [[unlikely]] return; }
L_002409A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 144u);  if (t) { goto L_002409F4; } }
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[5], c.r[28].w[0] - 29272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[4], c.r[16].w[0] + 144u);
    c.budget -= 18;
L_002409F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002409FCu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 323u, depth + 1u); else { c.pc = 0x00197790u; return; } if (c.pc != 0x002409FCu) [[unlikely]] return; }
L_002409FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 57u, depth + 1u); else { c.pc = 0x00240A20u; return; } if (c.pc != 0x00240A04u) [[unlikely]] return; }
L_00240A04:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00240AA8; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240AA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240A58u);  if (depth < kMaxDepth) unit_0050(c, 135u, depth + 1u); else { c.pc = 0x00240D90u; return; } if (c.pc != 0x00240A58u) [[unlikely]] return; }
L_00240A58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240AA8; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 1u)));
    set32(c.r[5], c.r[28].w[0] - 29272u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[6].d[0] = 0ull < c.r[6].d[0] ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], ld32((c.r[5].w[0])));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 4u));
    st32((c.r[2].w[0] + 4u), c.f[0]);
    st32((c.r[2].w[0] + 8u), c.r[3].w[0]);
    c.budget -= 18;
L_00240AA8:
    c.f[3] = ld32((c.r[16].w[0] + 144u));
    c.f[2] = ld32((c.r[16].w[0] + 148u));
    c.f[1] = ld32((c.r[16].w[0] + 152u));
    c.f[0] = ld32((c.r[16].w[0] + 156u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240AD0u); st32((c.r[16].w[0] + 44u), c.f[0]);  if (depth < kMaxDepth) unit_0050(c, 132u, depth + 1u); else { c.pc = 0x00240D00u; return; } if (c.pc != 0x00240AD0u) [[unlikely]] return; }
L_00240AD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240AE4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00240AF0; } }
L_00240AE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00240AF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00240B10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00240B20:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.budget -= 1;
L_00240B24:
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00240B28:
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    c.budget -= 1;
L_00240B2C:
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    c.budget -= 1;
L_00240B30:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.budget -= 1;
L_00240B34:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.budget -= 1;
L_00240B38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00240B3C:
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 1;
L_00240B40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B44:
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.budget -= 1;
L_00240B48:
    set32(c.r[3], 0u + 10u);
    c.budget -= 1;
L_00240B4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B50:
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00240B54:
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    c.budget -= 1;
L_00240B58:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_00240B5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B60:
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00240B64:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B68:
    st32((c.r[1].w[0] - 20352u), 0u);
    c.budget -= 1;
L_00240B6C:
    set32(c.r[3], c.r[19].w[0] + 32u);
    c.budget -= 1;
L_00240B70:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B74:
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.budget -= 1;
L_00240B78:
    set32(c.r[3], c.r[29].w[0] + 108u);
    c.budget -= 1;
L_00240B7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B80:
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.budget -= 1;
L_00240B84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B88:
    st32((c.r[1].w[0] - 20372u), 0u);
    c.budget -= 1;
L_00240B8C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00240B90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B94:
    st32((c.r[1].w[0] - 20404u), c.r[3].w[0]);
    c.budget -= 1;
L_00240B98:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240B9C:
    set32(c.r[18], c.r[19].w[0] + 320u);
    c.budget -= 1;
L_00240BA0:
    st32((c.r[1].w[0] - 20408u), c.r[3].w[0]);
    c.budget -= 1;
L_00240BA4:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_00240BA8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0])));
    c.budget -= 1;
L_00240BAC:
    c.budget -= 2;
    if (c.r[3].sd[0] < 0) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00240C7C; }
    goto L_00240BB4;
L_00240BB0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00240BB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_00240BB8:
    set32(c.r[4], c.r[2].w[0] - 9904u);
    c.budget -= 1;
L_00240BBC:
    c.r[5].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 1;
L_00240BC0:
    c.r[17].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00240BC4:
    set32(c.r[2], c.r[28].w[0] - 29256u);
    c.budget -= 1;
L_00240BC8:
    c.f[1] = ld32((c.r[18].w[0] + 4u));
    c.budget -= 1;
L_00240BCC:
    set32(c.r[3], c.r[17].w[0] << 2);
    c.budget -= 1;
L_00240BD0:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00240BD4:
    set32(c.r[3], c.r[5].w[0] << 5);
    c.budget -= 1;
L_00240BD8:
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00240BDC:
    c.f[0] = ld32((c.r[3].w[0] + 20u));
    c.budget -= 1;
L_00240BE0:
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_00240BE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240BECu); c.f[20] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00240BECu) [[unlikely]] return; }
    goto L_00240BEC;
L_00240BE8:
    c.f[20] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 1;
L_00240BEC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240BF0:
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.budget -= 1;
L_00240BF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_00240BF8:
    set32(c.r[6], c.r[2].w[0] - 8928u);
    c.budget -= 1;
L_00240BFC:
    c.r[7].d[0] = ld8((c.r[18].w[0] + 3u));
    c.budget -= 1;
L_00240C00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_00240C04:
    set32(c.r[2], c.r[2].w[0] - 8800u);
    c.budget -= 1;
L_00240C08:
    set32(c.r[3], c.r[17].w[0] << 5);
    c.budget -= 1;
L_00240C0C:
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00240C10:
    set32(c.r[2], c.r[7].w[0] << 3);
    c.budget -= 1;
L_00240C14:
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_00240C18:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_00240C1C:
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.budget -= 1;
L_00240C20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20416u), c.f[20]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[18].w[0] + 8u));
    c.f[1] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C58u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00240C58u) [[unlikely]] return; }
L_00240C58:
    st8((c.r[29].w[0] + 110u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 109u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[29].w[0] + 108u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st8((c.r[29].w[0] + 111u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240C78u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00240C78u) [[unlikely]] return; }
L_00240C78:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00240C7C:
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240BA8u | kUnwind; return; } goto L_00240BA8; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00240CB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 6;
L_00240CC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240CD0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 137u, depth + 1u); else { c.pc = 0x00240DE0u; return; } if (c.pc != 0x00240CD0u) [[unlikely]] return; }
L_00240CD0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 12u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240CC8u | kUnwind; return; } goto L_00240CC8; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00240D00:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[16].w[0] + 320u);
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_00240D70; } }
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[19], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 4;
L_00240D40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0])));
    c.budget -= 3;
    if (c.r[2].sd[0] < 0) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00240D64; }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240D58u); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 139u, depth + 1u); else { c.pc = 0x00240E20u; return; } if (c.pc != 0x00240D58u) [[unlikely]] return; }
L_00240D58:
    set32(c.r[18], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
L_00240D64:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240D40u | kUnwind; return; } goto L_00240D40; } }
L_00240D70:
    mmi::paddub(c.r[2], c.r[18], c.r[0]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00240D90:
    set32(c.r[5], c.r[4].w[0] + 320u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00240DC0; } }
L_00240DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    if (c.r[3].sd[0] >= 0) { set32(c.r[5], c.r[5].w[0] + 12u);  goto L_00240DBC; }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[2], c.r[5], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 12u);
    c.budget -= 4;
L_00240DBC:
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00240DC0:
    c.r[1].d[0] = c.r[4].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00240DD8; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00240DA0u | kUnwind; return; } goto L_00240DA0; } }
    c.budget -= 1;
L_00240DD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00240DE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240DFCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00240DFCu) [[unlikely]] return; }
L_00240DFC:
    set32(c.r[3], 0u - 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00240E20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[6], c.r[28].w[0] - 29272u);
    set32(c.r[4], c.r[28].w[0] - 29264u);
    c.r[7].d[0] = 0ull < c.r[7].d[0] ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], ld32((c.r[6].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);
    set32(c.r[2], 0u - 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0] + 8u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_00240ECC; } }
    c.f[2] = ld32((c.r[3].w[0] + 12u));
    c.f[1] = ld32((c.r[3].w[0] + 4u));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.f[0] = ld32((c.r[5].w[0] + 4u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[2], c.r[4].w[0] - c.r[2].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 2u));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 8u)));
    c.r[2].d[0] = c.r[4].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240ED4; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00240ED4; } }
L_00240ECC:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    st32((c.r[5].w[0] + 4u), c.f[0]);
    c.budget -= 2;
L_00240ED4:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00240F10; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0] + 2u)));
    set32(c.r[3], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[4].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[5].w[0] + 8u), c.f[0]);
    c.budget -= 10;
L_00240F10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00240F60; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00240F60; } }
    c.r[2].d[0] = ld8((c.r[5].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[2].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00240F5C; } }
    set32(c.r[2], 0u + 15u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_00240F5C:
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00240F60:
    c.f[1] = ld32((c.r[5].w[0] + 8u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[5], c.r[0]);  if (t) { goto L_00240F88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00240F94; } }
    mmi::paddub(c.r[4], c.r[5], c.r[0]);
    c.budget -= 1;
L_00240F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240F90u);  if (depth < kMaxDepth) unit_0050(c, 137u, depth + 1u); else { c.pc = 0x00240DE0u; return; } if (c.pc != 0x00240F90u) [[unlikely]] return; }
L_00240F90:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00240F94:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00240FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00240FC0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00240FC0u) [[unlikely]] return; }
L_00240FC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241000; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 51u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4112u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] + 4608u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 14;
L_00241000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00241010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 8720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00241030:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 8112u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    set32(c.r[6], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 68u);
    st128((c.r[6].w[0]) & ~15u, c.r[5]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[16], c.r[17].w[0] + 320u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st8((c.r[4].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 116u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 120u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241094u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00241094u) [[unlikely]] return; }
L_00241094:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024109Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0024109Cu) [[unlikely]] return; }
L_0024109C:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410A8u); set32(c.r[5], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002410A8u) [[unlikely]] return; }
L_002410A8:
    c.f[3] = ld32((c.r[17].w[0] + 32u));
    c.f[2] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 44u));
    st32((c.r[17].w[0] + 128u), c.f[3]);
    st32((c.r[17].w[0] + 132u), c.f[2]);
    st32((c.r[17].w[0] + 136u), c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410CCu); st32((c.r[17].w[0] + 140u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002410CCu) [[unlikely]] return; }
L_002410CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x002410D4u) [[unlikely]] return; }
L_002410D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[17].w[0] + 48u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002410E4u); set32(c.r[4], c.r[2].w[0] - 8736u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002410E4u) [[unlikely]] return; }
L_002410E4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00241100:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 180ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00241138; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00241138:
    c.f[1] = ld32((c.r[17].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = ld32((c.r[17].w[0] + 36u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 56u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241180u); st32((c.r[17].w[0] + 40u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00241180u) [[unlikely]] return; }
L_00241180:
    set32(c.r[2], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024118Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x0024118Cu) [[unlikely]] return; }
L_0024118C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241194u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00241194u) [[unlikely]] return; }
L_00241194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024119Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024119Cu) [[unlikely]] return; }
L_0024119C:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411ACu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002411ACu) [[unlikely]] return; }
L_002411AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002411B4u) [[unlikely]] return; }
L_002411B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002411BCu); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002411BCu) [[unlikely]] return; }
L_002411BC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002411E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_002411F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00241200:
    set32(c.r[29], c.r[29].w[0] - 128u);
    c.budget -= 1;
L_00241204:
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00241208:
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 1;
L_0024120C:
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 1;
L_00241210:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00241214:
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 1;
L_00241218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_0024121C:
    set32(c.r[2], c.r[2].w[0] - 28448u);
    c.budget -= 1;
L_00241220:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    c.budget -= 1;
L_00241224:
    set32(c.r[3], c.r[4].w[0] << 1);
    c.budget -= 1;
L_00241228:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 1;
L_0024122C:
    set32(c.r[3], c.r[3].w[0] << 7);
    c.budget -= 1;
L_00241230:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241238u); set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00241238u) [[unlikely]] return; }
    goto L_00241238;
L_00241234:
    set32(c.r[17], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_00241238:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241240u); set32(c.r[4], c.r[16].w[0] + 320u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00241240u) [[unlikely]] return; }
    goto L_00241240;
L_0024123C:
    set32(c.r[4], c.r[16].w[0] + 320u);
    c.budget -= 1;
L_00241240:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 1;
L_00241244:
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 1;
L_00241248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241250u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00241250u) [[unlikely]] return; }
    goto L_00241250;
L_0024124C:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 1;
L_00241250:
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.budget -= 1;
L_00241254:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00241258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241260u); set32(c.r[6], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00241260u) [[unlikely]] return; }
    goto L_00241260;
L_0024125C:
    set32(c.r[6], c.r[16].w[0] + 32u);
    c.budget -= 1;
L_00241260:
    set32(c.r[4], c.r[29].w[0] + 48u);
    c.budget -= 1;
L_00241264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024126Cu); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x0024126Cu) [[unlikely]] return; }
    goto L_0024126C;
L_00241268:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 1;
L_0024126C:
    c.f[13] = ld32((c.r[29].w[0] + 56u));
    c.budget -= 1;
L_00241270:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241278u); c.f[12] = ld32((c.r[29].w[0] + 48u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00241278u) [[unlikely]] return; }
    goto L_00241278;
L_00241274:
    c.f[12] = ld32((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00241278:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0024127C:
    set32(c.r[4], c.r[16].w[0] + 192u);
    c.budget -= 1;
L_00241280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241288u); st32((c.r[16].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00241288u) [[unlikely]] return; }
    goto L_00241288;
L_00241284:
    st32((c.r[16].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 1;
L_00241288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241290u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00241290u) [[unlikely]] return; }
    goto L_00241290;
L_0024128C:
    set32(c.r[4], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_00241290:
    c.f[13] = ld32((c.r[16].w[0] + 116u));
    c.budget -= 1;
L_00241294:
    c.f[14] = ld32((c.r[16].w[0] + 120u));
    c.budget -= 1;
L_00241298:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002412A0u); c.f[12] = ld32((c.r[16].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002412A0u) [[unlikely]] return; }
    goto L_002412A0;
L_0024129C:
    c.f[12] = ld32((c.r[16].w[0] + 112u));
    c.budget -= 1;
L_002412A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002412A8u); set32(c.r[4], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002412A8u) [[unlikely]] return; }
    goto L_002412A8;
L_002412A4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002412A8:
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.budget -= 1;
L_002412AC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412B0:
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    c.budget -= 1;
L_002412B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_002412B8:
    set32(c.r[2], c.r[2].w[0] - 8704u);
    c.budget -= 1;
L_002412BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412C0:
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.budget -= 1;
L_002412C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 1;
L_002412C8:
    set32(c.r[2], c.r[2].w[0] - 8624u);
    c.budget -= 1;
L_002412CC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412D0:
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.budget -= 1;
L_002412D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002412D8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412DC:
    st32((c.r[1].w[0] - 20344u), c.r[2].w[0]);
    c.budget -= 1;
L_002412E0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002412E4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412E8:
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.budget -= 1;
L_002412EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412F0:
    st32((c.r[1].w[0] - 20352u), 0u);
    c.budget -= 1;
L_002412F4:
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002412F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 1;
L_002412FC:
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00241300:
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241310u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00241310u) [[unlikely]] return; }
L_00241310:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 8640u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241334u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 190u, depth + 1u); else { c.pc = 0x00172FD0u; return; } if (c.pc != 0x00241334u) [[unlikely]] return; }
L_00241334:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00241350:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241370u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00241370u) [[unlikely]] return; }
L_00241370:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002413B4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 52u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] + 5072u);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[3], c.r[3].w[0] + 6160u);
    st32((c.r[2].w[0] + 168u), c.r[3].w[0]);
    c.budget -= 15;
L_002413B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002413D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] - 8448u);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00241400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[7].d[0] = ld8((c.r[4].w[0] + 3u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    set32(c.r[6], c.r[2].w[0] + 18304u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[3] = ld32((c.r[5].w[0] + 320u));
    c.f[2] = ld32((c.r[5].w[0] + 324u));
    c.f[1] = ld32((c.r[5].w[0] + 328u));
    c.f[0] = ld32((c.r[5].w[0] + 332u));
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[16], c.r[6].w[0] + c.r[7].w[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    st32((c.r[4].w[0] + 112u), c.f[3]);
    st32((c.r[4].w[0] + 116u), c.f[2]);
    st32((c.r[4].w[0] + 120u), c.f[1]);
    st32((c.r[4].w[0] + 124u), c.f[0]);
    st32((c.r[4].w[0] + 160u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    c.budget -= 27;
    { const bool t = c.r[2].sd[0] < 0; mmi::paddub(c.r[17], c.r[5], c.r[0]);  if (t) { goto L_00241488; } }
    set32(c.r[3], ld32((c.r[18].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241480u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00241480u) [[unlikely]] return; }
L_00241480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[16].w[0] + 8u));  if (t) { goto L_00241498; } }
L_00241488:
    set32(c.r[2], ld32((c.r[18].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241494u); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00241494u) [[unlikely]] return; }
L_00241494:
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.budget -= 1;
L_00241498:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[16].w[0]));
    c.f[13] = ld32((c.r[16].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414B0u); c.f[14] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002414B0u) [[unlikely]] return; }
L_002414B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414B8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 22u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x002414B8u) [[unlikely]] return; }
L_002414B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414C0u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 20u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002414C0u) [[unlikely]] return; }
L_002414C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414C8u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002414C8u) [[unlikely]] return; }
L_002414C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414D0u); set32(c.r[4], c.r[18].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002414D0u) [[unlikely]] return; }
L_002414D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414D8u); set32(c.r[4], c.r[18].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002414D8u) [[unlikely]] return; }
L_002414D8:
    set32(c.r[2], 0u + 5u);
    st16((c.r[18].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 16u)));
    set32(c.r[7], c.r[16].w[0] + 18u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002414F4u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 19u, depth + 1u); else { c.pc = 0x002387D0u; return; } if (c.pc != 0x002414F4u) [[unlikely]] return; }
L_002414F4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00241520:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004B0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[3], c.r[2].w[0] + 18304u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3u));
    set32(c.r[16], c.r[18].w[0] + 320u);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] << 5);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 20;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[3].w[0] + c.r[5].w[0]);  if (t) { goto L_0024158C; } }
    set32(c.r[2], 0u + 5u);
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    set32(c.r[7], c.r[17].w[0] + 18u);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024158Cu); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 19u, depth + 1u); else { c.pc = 0x002387D0u; return; } if (c.pc != 0x0024158Cu) [[unlikely]] return; }
L_0024158C:
    c.f[3] = ld32((c.r[16].w[0]));
    c.f[2] = ld32((c.r[16].w[0] + 4u));
    c.f[1] = ld32((c.r[16].w[0] + 8u));
    c.f[0] = ld32((c.r[16].w[0] + 12u));
    st32((c.r[19].w[0] + 112u), c.f[3]);
    st32((c.r[19].w[0] + 116u), c.f[2]);
    st32((c.r[19].w[0] + 120u), c.f[1]);
    st32((c.r[19].w[0] + 124u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    c.r[1].d[0] = c.r[2].sd[0] < 90ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002415CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 4u)));
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002415E8; } }
L_002415CC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[19].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 164u)));
    st16((c.r[19].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 18u)));
    st16((c.r[19].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_002415E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00241610; } }
    set32(c.r[3], ld32((c.r[19].w[0] + 28u)));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241608u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00241608u) [[unlikely]] return; }
L_00241608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[17].w[0] + 8u));  if (t) { goto L_00241620; } }
L_00241610:
    set32(c.r[2], ld32((c.r[19].w[0] + 28u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024161Cu); set32(c.r[4], c.r[2].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024161Cu) [[unlikely]] return; }
L_0024161C:
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.budget -= 1;
L_00241620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    c.f[12] = ld32((c.r[17].w[0]));
    c.f[13] = ld32((c.r[17].w[0] + 4u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241638u); c.f[14] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00241638u) [[unlikely]] return; }
L_00241638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241640u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 22u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00241640u) [[unlikely]] return; }
L_00241640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241648u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 20u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00241648u) [[unlikely]] return; }
L_00241648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241650u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 18u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00241650u) [[unlikely]] return; }
L_00241650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241658u); set32(c.r[4], c.r[19].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00241658u) [[unlikely]] return; }
L_00241658:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241660u); set32(c.r[4], c.r[19].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00241660u) [[unlikely]] return; }
L_00241660:
    set32(c.r[3], 0u + 1u);
    st8((c.r[19].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00241690:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[3].w[0] - 8608u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[7], c.r[7].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[7], c.r[6].w[0] + c.r[7].w[0]);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00241778; } }
    c.f[2] = ld32((c.r[7].w[0] + 48u));
    c.f[1] = ld32((c.r[7].w[0] + 16u));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 112u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 52u));
    c.f[1] = ld32((c.r[7].w[0] + 20u));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 116u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.f[2] = ld32((c.r[7].w[0] + 56u));
    c.f[1] = ld32((c.r[7].w[0] + 24u));
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    set32(c.r[3], ld32((c.r[7].w[0])));
    c.f[0] = ld32((c.r[4].w[0] + 120u));
    c.f[2] = fp::sub(c.f[2], c.f[1]);
    set32(c.r[3], c.r[5].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 120u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 32u)));
    c.r[3].d[0] = c.r[5].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 43;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00241778; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00241778:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[5], 0u + 120u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[0] = c.r[3].w[0];
    set32(c.r[5], c.r[5].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], 0u - 1u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 160u), c.f[0]);
    set32(c.r[5], ld32((c.r[7].w[0] + 32u)));
    c.budget -= 14;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_002417DC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[3].sd[0] < 120ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002417DC; } }
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[3], 0u + 1u);  if (t) { goto L_002417F0; } }
L_002417DC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002417F4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002417F0:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002417F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00241800:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00241810:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 78u)));
    set32(c.r[4], c.r[3].w[0] - 28448u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[3].d[0] | 32896ull;
    st32((c.r[29].w[0] + 188u), c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] << 1);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[5], c.r[5].w[0] << 7);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[18], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_00241874; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 641u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00241B30; } }
L_00241874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024187Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024187Cu) [[unlikely]] return; }
L_0024187C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241884u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 330u, depth + 1u); else { c.pc = 0x0013BF40u; return; } if (c.pc != 0x00241884u) [[unlikely]] return; }
L_00241884:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241894u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00241894u) [[unlikely]] return; }
L_00241894:
    set32(c.r[5], c.r[18].w[0] + 16u);
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418A4u); set32(c.r[6], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x002418A4u) [[unlikely]] return; }
L_002418A4:
    set32(c.r[4], c.r[29].w[0] + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002418B0u) [[unlikely]] return; }
L_002418B0:
    c.f[13] = ld32((c.r[29].w[0] + 152u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418BCu); c.f[12] = ld32((c.r[29].w[0] + 144u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002418BCu) [[unlikely]] return; }
L_002418BC:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[4], c.r[17].w[0] + 192u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418CCu); st32((c.r[17].w[0] + 84u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002418CCu) [[unlikely]] return; }
L_002418CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418D4u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002418D4u) [[unlikely]] return; }
L_002418D4:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418E4u); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002418E4u) [[unlikely]] return; }
L_002418E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002418ECu); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002418ECu) [[unlikely]] return; }
L_002418EC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 531u));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[3].w[0] + 4368u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[5].w[0] << 3);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[5], ld32((c.r[2].w[0])));
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[4], 0u + 2u);
    st32((c.r[1].w[0] - 20340u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 188u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024193Cu); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x0024193Cu) [[unlikely]] return; }
L_0024193C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 432u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00241AFC; } }
    set32(c.r[18], c.r[29].w[0] + 164u);
    set32(c.r[4], c.r[29].w[0] + 160u);
    st32((c.r[29].w[0] + 160u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 168u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 172u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241980u); mmi::paddub(c.r[6], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 203u, depth + 1u); else { c.pc = 0x00102408u; return; } if (c.pc != 0x00241980u) [[unlikely]] return; }
L_00241980:
    c.f[12] = ld32((c.r[29].w[0] + 132u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[12]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[16], 0u + 1u);  if (t) { goto L_002419A0; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_002419A0:
    c.f[1] = ld32((c.r[18].w[0]));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[17], 0u + 1u);  if (t) { goto L_002419C0; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_002419C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002419DC; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[16], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[17], c.r[2].w[0] - c.r[17].w[0]);
    c.budget -= 3;
L_002419DC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == c.r[17].d[0]; set32(c.r[2], 0u + 50u);  if (t) { goto L_00241ABC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419ECu);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002419ECu) [[unlikely]] return; }
L_002419EC:
    c.f[12] = ld32((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002419F8u); c.f[20] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002419F8u) [[unlikely]] return; }
L_002419F8:
    c.f[1] = fp::add(c.f[20], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A20u);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00241A20u) [[unlikely]] return; }
L_00241A20:
    set32(c.r[18], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[18].w[0] + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00241A44; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);  if (t) { goto L_00241A50; } }
L_00241A44:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.budget -= 3;
L_00241A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241A5Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 172u, depth + 1u); else { c.pc = 0x0016EE90u; return; } if (c.pc != 0x00241A5Cu) [[unlikely]] return; }
L_00241A5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 20340u)));
    set32(c.r[3], c.r[18].w[0] << 6);
    set32(c.r[2], 0u + 50u);
    set32(c.r[2], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20340u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { const bool t = c.r[16].d[0] != 0ull; st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00241A98; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);  if (t) { goto L_00241AA4; } }
L_00241A98:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.budget -= 3;
L_00241AA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AB0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 172u, depth + 1u); else { c.pc = 0x0016EE90u; return; } if (c.pc != 0x00241AB0u) [[unlikely]] return; }
L_00241AB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_00241B34; } }
    set32(c.r[2], 0u + 50u);
    c.budget -= 1;
L_00241ABC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00241AD8; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);  if (t) { goto L_00241AE4; } }
L_00241AD8:
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.budget -= 3;
L_00241AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241AF0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 172u, depth + 1u); else { c.pc = 0x0016EE90u; return; } if (c.pc != 0x00241AF0u) [[unlikely]] return; }
L_00241AF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241B30; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00241AFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 50u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B30u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 162u, depth + 1u); else { c.pc = 0x0016EA60u; return; } if (c.pc != 0x00241B30u) [[unlikely]] return; }
L_00241B30:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00241B34:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00241B50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241B70u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00241B70u) [[unlikely]] return; }
L_00241B70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00241BA4; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 53u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 7104u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.budget -= 11;
L_00241BA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00241BC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6144u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00241BF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[7], c.r[2].w[0] + 4480u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 160u), 0u);
    set32(c.r[2], ld32((c.r[4].w[0] + 28u)));
    c.f[3] = ld32((c.r[2].w[0] + 32u));
    c.f[2] = ld32((c.r[2].w[0] + 36u));
    c.f[1] = ld32((c.r[2].w[0] + 40u));
    c.f[0] = ld32((c.r[2].w[0] + 44u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.budget -= 17;
L_00241C34:
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(0u));
    st8((c.r[6].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[8], c.r[8].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(0u));
    st32((c.r[6].w[0] + 4u), c.r[7].w[0]);
    c.r[2].d[0] = c.r[8].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 208u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241C34u | kUnwind; return; } goto L_00241C34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 7600u);
    c.budget -= 4;
    { st32((c.r[4].w[0] + 168u), c.r[2].w[0]);  goto L_00241C70; }
L_00241C70:
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42200000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_00241CAC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00241D80; } }
L_00241CAC:
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
L_00241CB8:
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[9], c.r[0]);
    c.budget -= 4;
L_00241CC8:
    set32(c.r[13], c.r[5].w[0] + c.r[11].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_00241D48; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00241D28; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] + c.r[11].w[0]);  if (t) { goto L_00241CF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { goto L_00241D5C; } }
    set32(c.r[3], c.r[9].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_00241CF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00241D20; } }
    c.f[0] = ld32((c.r[12].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00241D58; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00241D58; } }
L_00241D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00241D58; } }
L_00241D28:
    c.f[0] = ld32((c.r[12].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00241D58; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00241D58; } }
L_00241D48:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00241D58:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_00241D5C:
    c.r[3].d[0] = c.r[11].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241CC8u | kUnwind; return; } goto L_00241CC8; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241CB8u | kUnwind; return; } goto L_00241CB8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00241D80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00241D90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00241DA0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00241DB0:
    set32(c.r[29], c.r[29].w[0] - 320u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[23], c.r[4], c.r[0]);
    set32(c.r[2], c.r[29].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 4384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[23].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241E24u); st32((c.r[1].w[0] - 20372u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00241E24u) [[unlikely]] return; }
L_00241E24:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[6], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    set32(c.r[3], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[29].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.f[20] = ld32((c.r[23].w[0] + 160u));
    set32(c.r[30], c.r[29].w[0] + 288u);
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 16;
L_00241E64:
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[21], c.r[29].w[0] + 240u);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[20], c.r[17], c.r[0]);
    c.budget -= 5;
L_00241E78:
    set32(c.r[3], c.r[16].w[0] + c.r[18].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_00241EE8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[20].w[0] + 16u);  goto L_00241ED4; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00241EA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00241F14; } }
L_00241EA8:
    c.f[3] = ld32((c.r[20].w[0] + 16u));
    c.f[2] = ld32((c.r[20].w[0] + 20u));
    c.f[1] = ld32((c.r[20].w[0] + 24u));
    c.f[0] = ld32((c.r[20].w[0] + 28u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[21].w[0] + 12u), c.f[0]);  if (t) { goto L_00241F10; } }
    set32(c.r[4], c.r[20].w[0] + 16u);
    c.budget -= 1;
L_00241ED4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241EE0u); mmi::paddub(c.r[5], c.r[21], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 321u, depth + 1u); else { c.pc = 0x002421D0u; return; } if (c.pc != 0x00241EE0u) [[unlikely]] return; }
L_00241EE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00241F10; } }
L_00241EE8:
    c.f[3] = ld32((c.r[20].w[0] + 32u));
    c.f[2] = ld32((c.r[20].w[0] + 36u));
    c.f[1] = ld32((c.r[20].w[0] + 40u));
    c.f[0] = ld32((c.r[20].w[0] + 44u));
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[21].w[0]), c.f[3]);
    st32((c.r[21].w[0] + 4u), c.f[2]);
    st32((c.r[21].w[0] + 8u), c.f[1]);
    st32((c.r[21].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_00241F10:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00241F14:
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[20], c.r[20].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[21], c.r[21].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241E78u | kUnwind; return; } goto L_00241E78; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[19].d[0] == c.r[3].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_00242184; }
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 102u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00241F48; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 2;
L_00241F48:
    set32(c.r[2], 0u + 103u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 34u);  if (t) { goto L_00241F5C; } }
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], 0u + 34u);
    c.budget -= 2;
L_00241F5C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; c.r[2].d[0] = c.r[3].d[0] << 56;  if (t) { goto L_00241F6C; } }
    set32(c.r[3], 0u + 3u);
    c.r[2].d[0] = c.r[3].d[0] << 56;
    c.budget -= 2;
L_00241F6C:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6160u);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6224u);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6288u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241FC8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00241FC8u) [[unlikely]] return; }
L_00241FC8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 4384u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002420D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00241FF8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00241FF8u) [[unlikely]] return; }
L_00241FF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242000u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242000u) [[unlikely]] return; }
L_00242000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242008u);  if (depth < kMaxDepth) unit_000E(c, 325u, depth + 1u); else { c.pc = 0x0013BD20u; return; } if (c.pc != 0x00242008u) [[unlikely]] return; }
L_00242008:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242018u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00242018u) [[unlikely]] return; }
L_00242018:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242020u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x00242020u) [[unlikely]] return; }
L_00242020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242028u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00242028u) [[unlikely]] return; }
L_00242028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242030u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00242030u) [[unlikely]] return; }
L_00242030:
    set32(c.r[5], c.r[23].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024203Cu); mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x0024203Cu) [[unlikely]] return; }
L_0024203C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242044u); mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00242044u) [[unlikely]] return; }
L_00242044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024204Cu); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x0024204Cu) [[unlikely]] return; }
L_0024204C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242054u); c.f[12] = ld32((c.r[29].w[0] + 276u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00242054u) [[unlikely]] return; }
L_00242054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024205Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x0024205Cu) [[unlikely]] return; }
L_0024205C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242064u); c.f[12] = ld32((c.r[29].w[0] + 280u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00242064u) [[unlikely]] return; }
L_00242064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024206Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0024206Cu) [[unlikely]] return; }
L_0024206C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242074u); c.f[12] = ld32((c.r[29].w[0] + 272u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00242074u) [[unlikely]] return; }
L_00242074:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024207Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0024207Cu) [[unlikely]] return; }
L_0024207C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242084u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242084u) [[unlikely]] return; }
L_00242084:
    c.f[4] = ld32((c.r[29].w[0] + 224u));
    c.f[3] = ld32((c.r[29].w[0] + 228u));
    c.f[2] = ld32((c.r[29].w[0] + 232u));
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    st32((c.r[29].w[0] + 304u), c.f[4]);
    st32((c.r[29].w[0] + 308u), c.f[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 312u), c.f[2]);
    st32((c.r[29].w[0] + 316u), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20416u), c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420C8u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x002420C8u) [[unlikely]] return; }
L_002420C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242180; } }
L_002420D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420D8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002420D8u) [[unlikely]] return; }
L_002420D8:
    set32(c.r[5], c.r[23].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420E4u); mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002420E4u) [[unlikely]] return; }
L_002420E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420ECu); mmi::paddub(c.r[4], c.r[30], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002420ECu) [[unlikely]] return; }
L_002420EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420F4u); c.f[12] = ld32((c.r[29].w[0] + 276u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002420F4u) [[unlikely]] return; }
L_002420F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002420FCu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x002420FCu) [[unlikely]] return; }
L_002420FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242104u); c.f[12] = ld32((c.r[29].w[0] + 280u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00242104u) [[unlikely]] return; }
L_00242104:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024210Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x0024210Cu) [[unlikely]] return; }
L_0024210C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242114u); c.f[12] = ld32((c.r[29].w[0] + 272u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00242114u) [[unlikely]] return; }
L_00242114:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024211Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0024211Cu) [[unlikely]] return; }
L_0024211C:
    c.f[13] = ld32((c.r[29].w[0] + 244u));
    c.f[14] = ld32((c.r[29].w[0] + 248u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024212Cu); c.f[12] = ld32((c.r[29].w[0] + 240u));  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0024212Cu) [[unlikely]] return; }
L_0024212C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242134u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242134u) [[unlikely]] return; }
L_00242134:
    set32(c.r[2], c.r[29].w[0] + 176u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 34u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00242170; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242168u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 163u, depth + 1u); else { c.pc = 0x00172AB0u; return; } if (c.pc != 0x00242168u) [[unlikely]] return; }
L_00242168:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242180; } }
L_00242170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024217Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0024217Cu) [[unlikely]] return; }
L_0024217C:
    c.budget -= 1;
L_00242180:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 1;
L_00242184:
    c.r[3].d[0] = c.r[22].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00241E64u | kUnwind; return; } goto L_00241E64; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 320u);  c.pc = t; return; }
L_002421D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242200u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00242200u) [[unlikely]] return; }
L_00242200:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242228u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00242228u) [[unlikely]] return; }
L_00242228:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = 0u;
    c.f[12] = fp::sub(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00242258; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242254u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00242254u) [[unlikely]] return; }
L_00242254:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00242258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242260u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00242260u) [[unlikely]] return; }
L_00242260:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00242280:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002422A8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002422A8u) [[unlikely]] return; }
L_002422A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002422FC; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 56u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 8976u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
L_002422FC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00242310:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6768u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00242340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] + 6320u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[4].w[0] + 160u), 0u);
    c.budget -= 13;
L_00242374:
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[7], c.r[7].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    st32((c.r[5].w[0] + 4u), c.r[6].w[0]);
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 224u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242374u | kUnwind; return; } goto L_00242374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 9568u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002423B8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002423B8u) [[unlikely]] return; }
L_002423B8:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002423C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 334u, depth + 1u); else { c.pc = 0x002423F0u; return; } if (c.pc != 0x002423C4u) [[unlikely]] return; }
L_002423C4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002423D0u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0050(c, 362u, depth + 1u); else { c.pc = 0x00242910u; return; } if (c.pc != 0x002423D0u) [[unlikely]] return; }
L_002423D0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002423F0:
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_0024242C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00242534; } }
L_0024242C:
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    set32(c.r[8], 0u + 2u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[9], 0u + 3u);
    c.budget -= 4;
L_0024243C:
    set32(c.r[11], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[13], c.r[0], c.r[0]);
    mmi::paddub(c.r[14], c.r[5], c.r[0]);
    mmi::paddub(c.r[15], c.r[11], c.r[0]);
    set32(c.r[6], c.r[11].w[0] + 112u);
    c.budget -= 6;
L_00242454:
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[14].w[0])));
    c.budget -= 3;
    { const bool t = c.r[10].d[0] == c.r[9].d[0];  if (t) { goto L_002424FC; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[8].d[0];  if (t) { goto L_002424DC; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == c.r[7].d[0];  if (t) { goto L_002424B8; } }
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[3], c.r[11].w[0] + c.r[13].w[0]);  if (t) { goto L_00242484; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[13], c.r[13].w[0] + 1u);  if (t) { goto L_0024250C; } }
    set32(c.r[3], c.r[11].w[0] + c.r[13].w[0]);
    c.budget -= 1;
L_00242484:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002424B0; } }
    c.f[0] = ld32((c.r[15].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242508; } }
    set32(c.r[3], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00242508; } }
L_002424B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[8].w[0]));  if (t) { goto L_00242508; } }
L_002424B8:
    c.f[0] = ld32((c.r[15].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242508; } }
    set32(c.r[3], c.r[10].w[0] + 1u);
    st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[5].w[0] + 4u), c.r[6].w[0]);  if (t) { goto L_00242508; } }
L_002424DC:
    c.f[0] = ld32((c.r[15].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242508; } }
    set32(c.r[3], c.r[10].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[14].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00242508; } }
L_002424FC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00242508:
    set32(c.r[13], c.r[13].w[0] + 1u);
    c.budget -= 1;
L_0024250C:
    c.r[3].d[0] = c.r[13].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[14], c.r[14].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[15], c.r[15].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242454u | kUnwind; return; } goto L_00242454; } }
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.r[3].d[0] = c.r[12].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024243Cu | kUnwind; return; } goto L_0024243C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00242534:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00242540:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00242550:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00242560:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 272u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29248u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[22], c.r[21].w[0] + 320u);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425B8u); st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002425B8u) [[unlikely]] return; }
L_002425B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002425F8u); st32((c.r[1].w[0] - 20372u), 0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002425F8u) [[unlikely]] return; }
L_002425F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242600u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242600u) [[unlikely]] return; }
L_00242600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242608u);  if (depth < kMaxDepth) unit_000E(c, 325u, depth + 1u); else { c.pc = 0x0013BD20u; return; } if (c.pc != 0x00242608u) [[unlikely]] return; }
L_00242608:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242618u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00242618u) [[unlikely]] return; }
L_00242618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242620u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x00242620u) [[unlikely]] return; }
L_00242620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242628u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00242628u) [[unlikely]] return; }
L_00242628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242630u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00242630u) [[unlikely]] return; }
L_00242630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242638u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00242638u) [[unlikely]] return; }
L_00242638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242640u); set32(c.r[4], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00242640u) [[unlikely]] return; }
L_00242640:
    c.f[20] = ld32((c.r[21].w[0] + 160u));
    mmi::paddub(c.r[23], c.r[0], c.r[0]);
    c.budget -= 2;
L_00242648:
    set32(c.r[30], ld32((c.r[22].w[0] + 4u)));
    set32(c.r[20], c.r[29].w[0] + 240u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[22], c.r[0]);
    mmi::paddub(c.r[19], c.r[30], c.r[0]);
    c.budget -= 6;
L_00242660:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002426F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[19].w[0] + 16u);  goto L_002426DC; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[19].w[0] + 16u);  goto L_002426C4; }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_00242698; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_0024271C; } }
L_00242698:
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.f[0]);  if (t) { goto L_00242718; } }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_002426C4:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426D0u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 357u, depth + 1u); else { c.pc = 0x00242860u; return; } if (c.pc != 0x002426D0u) [[unlikely]] return; }
L_002426D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242718; } }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_002426DC:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002426E8u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 357u, depth + 1u); else { c.pc = 0x00242860u; return; } if (c.pc != 0x002426E8u) [[unlikely]] return; }
L_002426E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242718; } }
L_002426F0:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.budget -= 10;
L_00242718:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0024271C:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + 48u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242660u | kUnwind; return; } goto L_00242660; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[17].d[0] == c.r[3].d[0]) { set32(c.r[23], c.r[23].w[0] + 1u);  goto L_0024281C; }
    c.f[2] = ld32((c.r[21].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = ld32((c.r[29].w[0] + 256u));
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 272u), c.f[2]);
    c.f[2] = ld32((c.r[21].w[0] + 36u));
    c.f[12] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 276u), c.f[2]);
    c.f[0] = ld32((c.r[21].w[0] + 40u));
    st32((c.r[29].w[0] + 280u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242770u); st32((c.r[29].w[0] + 284u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00242770u) [[unlikely]] return; }
L_00242770:
    st8((c.r[28].w[0] - 29245u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].d[0] = ld8((c.r[30].w[0]));
    set32(c.r[2], 0u + 6u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (t) { goto L_00242788; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00242788:
    c.f[1] = ld32((c.r[29].w[0] + 240u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.f[0] = ld32((c.r[29].w[0] + 244u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] + 6784u);
    st32((c.r[1].w[0] - 20416u), c.f[1]);
    set32(c.r[3], c.r[5].w[0] << 4);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20412u), c.f[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6816u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 6848u);
    set32(c.r[2], c.r[5].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 27;
    { const bool t = c.r[5].d[0] != 0ull; st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (t) { goto L_00242808; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242800u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00242800u) [[unlikely]] return; }
L_00242800:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242818; } }
L_00242808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242814u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 64u, depth + 1u); else { c.pc = 0x00171620u; return; } if (c.pc != 0x00242814u) [[unlikely]] return; }
L_00242814:
    c.budget -= 1;
L_00242818:
    set32(c.r[23], c.r[23].w[0] + 1u);
    c.budget -= 1;
L_0024281C:
    c.r[3].d[0] = c.r[23].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[22], c.r[22].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242648u | kUnwind; return; } goto L_00242648; } }
    ld128((c.r[29].w[0] + 160u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 144u) & ~15u, c.r[30]);
    ld128((c.r[29].w[0] + 128u) & ~15u, c.r[23]);
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00242860:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242890u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00242890u) [[unlikely]] return; }
L_00242890:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002428B8u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002428B8u) [[unlikely]] return; }
L_002428B8:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = 0u;
    c.f[12] = fp::sub(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002428E8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002428E4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x002428E4u) [[unlikely]] return; }
L_002428E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002428E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002428F0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x002428F0u) [[unlikely]] return; }
L_002428F0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00242910:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242938u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00242938u) [[unlikely]] return; }
L_00242938:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0024298C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 57u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[17].w[0]));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[17].w[0] + 8u));
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    set32(c.r[3], c.r[3].w[0] + 10656u);
    st32((c.r[2].w[0] + 32u), c.f[3]);
    st32((c.r[2].w[0] + 36u), c.f[2]);
    st32((c.r[2].w[0] + 40u), c.f[1]);
    st32((c.r[2].w[0] + 44u), c.f[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 19;
L_0024298C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002429A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6992u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002429D0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[18], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 160u), 0u);
    c.budget -= 14;
L_00242A08:
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A14u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x00242A14u) [[unlikely]] return; }
L_00242A14:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] << 8);
    st16((c.r[16].w[0] + 2u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 6880u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242A08u | kUnwind; return; } goto L_00242A08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E5C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 23908ull;
    st32((c.r[19].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBB580000u);
    c.r[2].d[0] = c.r[2].d[0] | 17616ull;
    st32((c.r[19].w[0] + 68u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 11264u);
    st32((c.r[19].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A80u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x00242A80u) [[unlikely]] return; }
L_00242A80:
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242A8Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 370u, depth + 1u); else { c.pc = 0x00242AB0u; return; } if (c.pc != 0x00242A8Cu) [[unlikely]] return; }
L_00242A8C:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00242AB0:
    c.f[2] = ld32((c.r[4].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::add(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 160u), c.f[1]);  if (t) { goto L_00242AEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00242BD8; } }
L_00242AEC:
    c.f[1] = ld32((c.r[4].w[0] + 68u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 160u));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 2u);
    c.budget -= 9;
L_00242B10:
    set32(c.r[9], ld32((c.r[5].w[0] + 4u)));
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    mmi::paddub(c.r[12], c.r[9], c.r[0]);
    c.budget -= 4;
L_00242B20:
    set32(c.r[13], c.r[5].w[0] + c.r[11].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[13].w[0])));
    c.budget -= 4;
    { const bool t = c.r[8].d[0] == c.r[7].d[0];  if (t) { goto L_00242BA0; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == c.r[6].d[0];  if (t) { goto L_00242B80; } }
    c.budget -= 2;
    { const bool t = c.r[8].d[0] == 0ull; set32(c.r[3], c.r[9].w[0] + c.r[11].w[0]);  if (t) { goto L_00242B4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], c.r[11].w[0] + 1u);  if (t) { goto L_00242BB4; } }
    set32(c.r[3], c.r[9].w[0] + c.r[11].w[0]);
    c.budget -= 1;
L_00242B4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00242B78; } }
    c.f[0] = ld32((c.r[12].w[0] + 48u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242BB0; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00242BB0; } }
L_00242B78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_00242BB0; } }
L_00242B80:
    c.f[0] = ld32((c.r[12].w[0] + 52u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00242BB0; } }
    set32(c.r[3], c.r[8].w[0] + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[13].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00242BB0; } }
L_00242BA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00242BB0:
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.budget -= 1;
L_00242BB4:
    c.r[3].d[0] = c.r[11].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[12], c.r[12].w[0] + 48u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242B20u | kUnwind; return; } goto L_00242B20; } }
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242B10u | kUnwind; return; } goto L_00242B10; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00242BD8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00242BE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00242BF0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00242C00:
    set32(c.r[29], c.r[29].w[0] - 256u);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], c.r[29].w[0] + 240u);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29244u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7008u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7040u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], 0u + 3u);
    set32(c.r[16], c.r[21].w[0] + 320u);
    c.budget -= 35;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242C8Cu); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x00242C8Cu) [[unlikely]] return; }
L_00242C8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CC4u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00242CC4u) [[unlikely]] return; }
L_00242CC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CCCu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242CCCu) [[unlikely]] return; }
L_00242CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CD4u);  if (depth < kMaxDepth) unit_000E(c, 325u, depth + 1u); else { c.pc = 0x0013BD20u; return; } if (c.pc != 0x00242CD4u) [[unlikely]] return; }
L_00242CD4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CE4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x00242CE4u) [[unlikely]] return; }
L_00242CE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CECu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x00242CECu) [[unlikely]] return; }
L_00242CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CF4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x00242CF4u) [[unlikely]] return; }
L_00242CF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242CFCu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00242CFCu) [[unlikely]] return; }
L_00242CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D04u); set32(c.r[4], c.r[21].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x00242D04u) [[unlikely]] return; }
L_00242D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D0Cu); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00242D0Cu) [[unlikely]] return; }
L_00242D0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242D14u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242D14u) [[unlikely]] return; }
L_00242D14:
    c.f[20] = ld32((c.r[21].w[0] + 160u));
    mmi::paddub(c.r[22], c.r[0], c.r[0]);
    c.budget -= 2;
L_00242D1C:
    set32(c.r[19], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[20], c.r[29].w[0] + 208u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 5;
L_00242D30:
    set32(c.r[3], c.r[16].w[0] + c.r[17].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], 0u + 3u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00242DC4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[19].w[0] + 16u);  goto L_00242DB0; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[19].w[0] + 16u);  goto L_00242D98; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00242D6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00242DEC; } }
L_00242D6C:
    c.f[3] = ld32((c.r[19].w[0] + 16u));
    c.f[2] = ld32((c.r[19].w[0] + 20u));
    c.f[1] = ld32((c.r[19].w[0] + 24u));
    c.f[0] = ld32((c.r[19].w[0] + 28u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 12u), c.f[0]);  if (t) { goto L_00242DE8; } }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_00242D98:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DA4u); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 397u, depth + 1u); else { c.pc = 0x00242EE0u; return; } if (c.pc != 0x00242DA4u) [[unlikely]] return; }
L_00242DA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242DE8; } }
    set32(c.r[4], c.r[19].w[0] + 16u);
    c.budget -= 1;
L_00242DB0:
    c.f[12] = c.f[20];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242DBCu); mmi::paddub(c.r[5], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 397u, depth + 1u); else { c.pc = 0x00242EE0u; return; } if (c.pc != 0x00242DBCu) [[unlikely]] return; }
L_00242DBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00242DE8; } }
L_00242DC4:
    c.f[3] = ld32((c.r[19].w[0] + 32u));
    c.f[2] = ld32((c.r[19].w[0] + 36u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[19].w[0] + 44u));
    set32(c.r[18], c.r[18].w[0] + 1u);
    st32((c.r[20].w[0]), c.f[3]);
    st32((c.r[20].w[0] + 4u), c.f[2]);
    st32((c.r[20].w[0] + 8u), c.f[1]);
    st32((c.r[20].w[0] + 12u), c.f[0]);
    c.budget -= 9;
L_00242DE8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00242DEC:
    c.r[3].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 48u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242D30u | kUnwind; return; } goto L_00242D30; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[3].d[0]) { set32(c.r[22], c.r[22].w[0] + 1u);  goto L_00242E9C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E10u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00242E10u) [[unlikely]] return; }
L_00242E10:
    c.f[13] = ld32((c.r[21].w[0] + 52u));
    c.f[14] = ld32((c.r[21].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E20u); c.f[12] = ld32((c.r[21].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00242E20u) [[unlikely]] return; }
L_00242E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E28u); set32(c.r[4], c.r[29].w[0] + 144u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00242E28u) [[unlikely]] return; }
L_00242E28:
    c.f[3] = ld32((c.r[29].w[0] + 192u));
    c.f[2] = ld32((c.r[29].w[0] + 196u));
    c.f[0] = ld32((c.r[29].w[0] + 200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[29].w[0] + 240u), c.f[3]);
    st32((c.r[29].w[0] + 244u), c.f[2]);
    st32((c.r[29].w[0] + 248u), c.f[0]);
    c.f[0] = ld32((c.r[29].w[0] + 224u));
    st32((c.r[29].w[0] + 252u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E5Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00242E5Cu) [[unlikely]] return; }
L_00242E5C:
    st8((c.r[28].w[0] - 29241u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E68u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 2u)));  if (depth < kMaxDepth) unit_000E(c, 277u, depth + 1u); else { c.pc = 0x0013B2D0u; return; } if (c.pc != 0x00242E68u) [[unlikely]] return; }
L_00242E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20372u), c.f[0]);
    c.f[1] = ld32((c.r[29].w[0] + 208u));
    c.f[0] = ld32((c.r[29].w[0] + 212u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 20416u), c.f[1]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242E94u); st32((c.r[1].w[0] - 20412u), c.f[0]);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00242E94u) [[unlikely]] return; }
L_00242E94:
    set32(c.r[22], c.r[22].w[0] + 1u);
    c.budget -= 2;
L_00242E9C:
    c.r[3].d[0] = c.r[22].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00242D1Cu | kUnwind; return; } goto L_00242D1C; } }
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
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 256u);  c.pc = t; return; }
L_00242EE0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[5], c.r[17].w[0] + 16u);
    c.f[20] = c.f[12];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F10u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 27u, depth + 1u); else { c.pc = 0x0013CB50u; return; } if (c.pc != 0x00242F10u) [[unlikely]] return; }
L_00242F10:
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    fpu_div(c, 12u, c.f[1], c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F38u);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00242F38u) [[unlikely]] return; }
L_00242F38:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = 0u;
    c.f[12] = fp::sub(c.f[20], c.f[1]);
    fpu_compare(c, fp::key(c.f[12]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00242F68; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F64u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 31u, depth + 1u); else { c.pc = 0x0013CC40u; return; } if (c.pc != 0x00242F64u) [[unlikely]] return; }
L_00242F64:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00242F68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242F70u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 24u, depth + 1u); else { c.pc = 0x0013CAF0u; return; } if (c.pc != 0x00242F70u) [[unlikely]] return; }
L_00242F70:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00242F90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00242FB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x00242FB8u) [[unlikely]] return; }
L_00242FB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00242FF0; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], 0u + 19u);
    set32(c.r[4], 0u + 58u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    set32(c.r[3], c.r[3].w[0] + 12304u);
    st32((c.r[2].w[0] + 28u), c.r[17].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 12;
L_00242FF0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7392u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00243040:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[3].w[0] + 7328u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0024309C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00243120; } }
L_0024309C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[6], c.r[2].w[0] + 7056u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[7], c.r[2].w[0] + 7296u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[8], c.r[2].w[0] + 7216u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 36u);
    c.budget -= 9;
L_002430C0:
    st32((c.r[4].w[0] + 12u), c.r[6].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 32u);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[4].w[0] + 8u), c.r[8].w[0]);
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + 4u);
    set32(c.r[8], c.r[8].w[0] + 16u);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002430C0u | kUnwind; return; } goto L_002430C0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 12928u);
    st32((c.r[17].w[0] + 168u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], c.r[2].w[0] - 11344u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243114u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x00243114u) [[unlikely]] return; }
L_00243114:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243120u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0050(c, 409u, depth + 1u); else { c.pc = 0x00243140u; return; } if (c.pc != 0x00243120u) [[unlikely]] return; }
L_00243120:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0024316C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00243244; } }
L_0024316C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002431B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00243244; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 160u), c.r[2].w[0]);  if (t) { goto L_0024322C; } }
L_002431B4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002431F0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[4], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] >= 0; c.r[3].d[0] = c.r[4].d[0] & 3ull;  if (t) { goto L_002431EC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002431EC; } }
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 1;
L_002431EC:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002431F0:
    c.f[2] = ld32((c.r[16].w[0] + 160u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 160u), c.f[1]);  if (t) { goto L_0024322C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00243244; } }
L_0024322C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243234u); set32(c.r[4], c.r[5].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00243234u) [[unlikely]] return; }
L_00243234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024323Cu); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x0024323Cu) [[unlikely]] return; }
L_0024323C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00243244:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00243260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00243270:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00243280:
    set32(c.r[29], c.r[29].w[0] - 288u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[2].w[0] - 28448u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 78u)));
    set32(c.r[2], c.r[28].w[0] - 29240u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[17], c.r[21].w[0] + 320u);
    st8((c.r[1].w[0] - 20348u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[29].w[0] + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20400u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002432F8u); st32((c.r[1].w[0] - 20372u), 0u);  if (depth < kMaxDepth) unit_001E(c, 201u, depth + 1u); else { c.pc = 0x0017BBC0u; return; } if (c.pc != 0x002432F8u) [[unlikely]] return; }
L_002432F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 10u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20352u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243338u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 51u, depth + 1u); else { c.pc = 0x001712A0u; return; } if (c.pc != 0x00243338u) [[unlikely]] return; }
L_00243338:
    mmi::paddub(c.r[20], c.r[0], c.r[0]);
    c.budget -= 1;
L_0024333C:
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[19], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024334Cu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024334Cu) [[unlikely]] return; }
L_0024334C:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024335Cu); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0024335Cu) [[unlikely]] return; }
L_0024335C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243364u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00243364u) [[unlikely]] return; }
L_00243364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024336Cu); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x0024336Cu) [[unlikely]] return; }
L_0024336C:
    c.f[13] = ld32((c.r[19].w[0] + 4u));
    c.f[14] = ld32((c.r[19].w[0] + 8u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024337Cu); c.f[12] = ld32((c.r[19].w[0]));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x0024337Cu) [[unlikely]] return; }
L_0024337C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243384u); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00243384u) [[unlikely]] return; }
L_00243384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024338Cu);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x0024338Cu) [[unlikely]] return; }
L_0024338C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243394u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00243394u) [[unlikely]] return; }
L_00243394:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024339Cu);  if (depth < kMaxDepth) unit_000E(c, 325u, depth + 1u); else { c.pc = 0x0013BD20u; return; } if (c.pc != 0x0024339Cu) [[unlikely]] return; }
L_0024339C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.r[2].d[0] = c.r[2].d[0] | 244ull;
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 210u, depth + 1u); else { c.pc = 0x00102500u; return; } if (c.pc != 0x002433B0u) [[unlikely]] return; }
L_002433B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433B8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 328u, depth + 1u); else { c.pc = 0x0013BEC0u; return; } if (c.pc != 0x002433B8u) [[unlikely]] return; }
L_002433B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x002433C0u) [[unlikely]] return; }
L_002433C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433C8u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x002433C8u) [[unlikely]] return; }
L_002433C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433D0u); set32(c.r[4], c.r[29].w[0] + 192u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x002433D0u) [[unlikely]] return; }
L_002433D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433D8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x002433D8u) [[unlikely]] return; }
L_002433D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433F0u); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x002433F0u) [[unlikely]] return; }
L_002433F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002433F8u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002433F8u) [[unlikely]] return; }
L_002433F8:
    c.f[0] = ld32((c.r[21].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024340Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0024340Cu) [[unlikely]] return; }
L_0024340C:
    st8((c.r[28].w[0] - 29237u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024344Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x0024344Cu) [[unlikely]] return; }
L_0024344C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243454u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00243454u) [[unlikely]] return; }
L_00243454:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024345Cu); set32(c.r[4], c.r[29].w[0] + 208u);  if (depth < kMaxDepth) unit_000F(c, 17u, depth + 1u); else { c.pc = 0x0013C880u; return; } if (c.pc != 0x0024345Cu) [[unlikely]] return; }
L_0024345C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243464u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 331u, depth + 1u); else { c.pc = 0x0013BF80u; return; } if (c.pc != 0x00243464u) [[unlikely]] return; }
L_00243464:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.f[13] = c.f[12];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024347Cu); c.f[14] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x0024347Cu) [[unlikely]] return; }
L_0024347C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243484u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00243484u) [[unlikely]] return; }
L_00243484:
    c.f[0] = ld32((c.r[21].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243498u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00243498u) [[unlikely]] return; }
L_00243498:
    st8((c.r[28].w[0] - 29237u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7408u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 7568u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434D8u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x002434D8u) [[unlikely]] return; }
L_002434D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434E0u); set32(c.r[4], c.r[21].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002434E0u) [[unlikely]] return; }
L_002434E0:
    c.f[13] = ld32((c.r[18].w[0] + 20u));
    c.f[14] = ld32((c.r[18].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434F0u); c.f[12] = ld32((c.r[18].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x002434F0u) [[unlikely]] return; }
L_002434F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002434F8u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x002434F8u) [[unlikely]] return; }
L_002434F8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243508u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00243508u) [[unlikely]] return; }
L_00243508:
    set32(c.r[4], c.r[16].w[0] + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243514u); set32(c.r[5], c.r[29].w[0] + 176u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00243514u) [[unlikely]] return; }
L_00243514:
    c.f[1] = ld32((c.r[29].w[0] + 176u));
    c.f[0] = ld32((c.r[29].w[0] + 184u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243528u); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00243528u) [[unlikely]] return; }
L_00243528:
    c.f[12] = ld32((c.r[29].w[0] + 180u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243534u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00243534u) [[unlikely]] return; }
L_00243534:
    set32(c.r[4], c.r[29].w[0] + 112u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243540u); mmi::paddub(c.r[19], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00243540u) [[unlikely]] return; }
L_00243540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243548u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 2u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00243548u) [[unlikely]] return; }
L_00243548:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243550u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 4u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00243550u) [[unlikely]] return; }
L_00243550:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024355Cu); set32(c.r[4], c.r[2].w[0] + c.r[19].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x0024355Cu) [[unlikely]] return; }
L_0024355C:
    c.f[12] = ld32((c.r[17].w[0] + 4u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243570u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_000F(c, 18u, depth + 1u); else { c.pc = 0x0013C8A0u; return; } if (c.pc != 0x00243570u) [[unlikely]] return; }
L_00243570:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243578u); set32(c.r[4], c.r[29].w[0] + 224u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00243578u) [[unlikely]] return; }
L_00243578:
    c.f[0] = ld32((c.r[21].w[0] + 160u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024358Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x0024358Cu) [[unlikely]] return; }
L_0024358C:
    st8((c.r[28].w[0] - 29237u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 7408u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 7488u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[4].w[0] << 4);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20384u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 7568u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 166u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st32((c.r[1].w[0] - 20388u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[21].w[0] + 166u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002435F0u); st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 77u, depth + 1u); else { c.pc = 0x001719F0u; return; } if (c.pc != 0x002435F0u) [[unlikely]] return; }
L_002435F0:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.r[3].d[0] = c.r[20].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0024333Cu | kUnwind; return; } goto L_0024333C; } }
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 288u);  c.pc = t; return; }
L_00243630:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00243640:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 9008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00243660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[2], c.r[2].w[0] + 15744u);
    set32(c.r[5], c.r[18].w[0] + 32u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 88u), 0u);
    set32(c.r[17], c.r[18].w[0] + 320u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436A4u); st32((c.r[4].w[0] + 80u), 0u);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x002436A4u) [[unlikely]] return; }
L_002436A4:
    st32((c.r[18].w[0] + 36u), c.f[0]);
    st32((c.r[18].w[0] + 104u), 0u);
    st32((c.r[18].w[0] + 108u), 0u);
    st32((c.r[18].w[0] + 96u), 0u);
    st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 518u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 64u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[18].w[0] + 530u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002436E4u); st32((c.r[18].w[0] + 28u), 0u);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x002436E4u) [[unlikely]] return; }
L_002436E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00243830; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00240000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[3], c.r[2].w[0] + 18848u);
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    st8((c.r[16].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.f[3] = ld32((c.r[18].w[0] + 32u));
    c.f[2] = ld32((c.r[18].w[0] + 36u));
    c.f[1] = ld32((c.r[18].w[0] + 40u));
    c.f[0] = ld32((c.r[18].w[0] + 44u));
    st32((c.r[16].w[0] + 32u), c.f[3]);
    st32((c.r[16].w[0] + 36u), c.f[2]);
    st32((c.r[16].w[0] + 40u), c.f[1]);
    st32((c.r[16].w[0] + 44u), c.f[0]);
    set32(c.r[4], ld32((c.r[18].w[0] + 84u)));
    st32((c.r[16].w[0] + 84u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 29;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00243780; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    set32(c.r[2], c.r[2].w[0] - 14432u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0024379C; } }
L_00243780:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 13456u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[16].w[0] + 512u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 7;
L_0024379C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 13424u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[5], 0u + 224u);
    st16((c.r[16].w[0] + 514u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 512u)));
    set32(c.r[2], c.r[2].w[0] - 14640u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st16((c.r[16].w[0] + 516u), static_cast<std::uint16_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 579u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[16].w[0] + 519u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 5);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002437F0u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x002437F0u) [[unlikely]] return; }
L_002437F0:
    st32((c.r[16].w[0] + 28u), c.r[18].w[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243804u); st32((c.r[18].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_0081(c, 114u, depth + 1u); else { c.pc = 0x00305C00u; return; } if (c.pc != 0x00243804u) [[unlikely]] return; }
L_00243804:
    st32((c.r[16].w[0] + 264u), c.r[16].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 324u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 324u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
L_00243830:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0024383Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 16u, depth + 1u); else { c.pc = 0x003044E0u; return; } if (c.pc != 0x0024383Cu) [[unlikely]] return; }
L_0024383C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 3u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 600u);  if (t) { goto L_0024387C; } }
    set32(c.r[2], 0u + 180u);
    st32((c.r[17].w[0] + 4u), 0u);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    c.r[2].d[0] = c.r[2].d[0] & 15ull;
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 10u)));
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st8((c.r[17].w[0] + 33u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 35u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00243908; } }
    set32(c.r[2], 0u + 600u);
    c.budget -= 1;
L_0024387C:
    st32((c.r[17].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243888u); st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00243888u) [[unlikely]] return; }
L_00243888:
    c.r[3].d[0] = c.r[2].d[0] & 63ull;
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 8u)));
    set32(c.r[3], c.r[3].w[0] << 1);
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[18].w[0] + 32u));
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.f[0] = ld32((c.r[18].w[0] + 40u));
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438C4u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002438C4u) [[unlikely]] return; }
L_002438C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002438E4u); set32(c.r[4], ld32((c.r[18].w[0] + 84u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002438E4u) [[unlikely]] return; }
L_002438E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44FA0000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[2], 0u + 1u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    st8((c.r[17].w[0] + 34u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 35u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
L_00243908:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243914u); st8((c.r[17].w[0] + 36u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0050(c, 471u, depth + 1u); else { c.pc = 0x00243930u; return; } if (c.pc != 0x00243914u) [[unlikely]] return; }
L_00243914:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00243930:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[4].w[0] + 128u), c.f[3]);
    st32((c.r[4].w[0] + 132u), c.f[2]);
    st32((c.r[4].w[0] + 136u), c.f[1]);
    st32((c.r[4].w[0] + 140u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00243B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 34u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002439EC; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43F40000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243A98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44B50000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00243A98; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243A98; } }
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00243A98; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 34u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00243A98; } }
L_002439EC:
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B00000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_00243A50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44E70000u);
    c.f[2] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00243A4C; } }
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243A4C; } }
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243A98; } }
L_00243A4C:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00243A50:
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00243A88; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243A84; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00243A84:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00243A88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243A90u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00243A90u) [[unlikely]] return; }
L_00243A90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00243CCC; } }
L_00243A98:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00243B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 35u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243B5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00243B5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);  if (t) { goto L_00243B18; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);  if (t) { goto L_00243AF0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));  if (t) { goto L_00243B60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 1;
L_00243AF0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243AFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 151u, depth + 1u); else { c.pc = 0x00152F90u; return; } if (c.pc != 0x00243AFCu) [[unlikely]] return; }
L_00243AFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243B5C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00243B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43160000u);
    c.budget -= 1;
L_00243B18:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243B24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0014(c, 156u, depth + 1u); else { c.pc = 0x001530A0u; return; } if (c.pc != 0x00243B24u) [[unlikely]] return; }
L_00243B24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243B5C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 36u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 29598u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 36u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[17].w[0] + 532u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[17].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
L_00243B5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 514u)));
    c.budget -= 1;
L_00243B60:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_00243BCC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00243BA8; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243BA4; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00243BA4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00243BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BB0u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00243BB0u) [[unlikely]] return; }
L_00243BB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BB8u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0047(c, 216u, depth + 1u); else { c.pc = 0x0021EE00u; return; } if (c.pc != 0x00243BB8u) [[unlikely]] return; }
L_00243BB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BC0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 251u, depth + 1u); else { c.pc = 0x0024BA20u; return; } if (c.pc != 0x00243BC0u) [[unlikely]] return; }
L_00243BC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));  if (t) { goto L_00243C4C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_00243BCC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243BD8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0052(c, 243u, depth + 1u); else { c.pc = 0x0024B3F0u; return; } if (c.pc != 0x00243BD8u) [[unlikely]] return; }
L_00243BD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243C2C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00243C1C; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00243C18; } }
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00243C18:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00243C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C24u);  if (depth < kMaxDepth) unit_0081(c, 9u, depth + 1u); else { c.pc = 0x00304280u; return; } if (c.pc != 0x00243C24u) [[unlikely]] return; }
L_00243C24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243CC8; } }
L_00243C2C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00243C48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003D(c, 21u, depth + 1u); else { c.pc = 0x001F45D0u; return; } if (c.pc != 0x00243C48u) [[unlikely]] return; }
L_00243C48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 5u)));
    c.budget -= 1;
L_00243C4C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00243C80; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00243C6C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243C88; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00243C6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C74u);  if (depth < kMaxDepth) unit_0050(c, 499u, depth + 1u); else { c.pc = 0x00243DF0u; return; } if (c.pc != 0x00243C74u) [[unlikely]] return; }
L_00243C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00243C88; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00243C80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C88u);  if (depth < kMaxDepth) unit_0051(c, 27u, depth + 1u); else { c.pc = 0x00244520u; return; } if (c.pc != 0x00243C88u) [[unlikely]] return; }
L_00243C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243C90u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00243C90u) [[unlikely]] return; }
L_00243C90:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CA0u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00243CA0u) [[unlikely]] return; }
L_00243CA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CA8u); set32(c.r[4], ld32((c.r[17].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00243CA8u) [[unlikely]] return; }
L_00243CA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CB0u); set32(c.r[4], ld32((c.r[17].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00243CB0u) [[unlikely]] return; }
L_00243CB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CB8u); set32(c.r[4], ld32((c.r[17].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00243CB8u) [[unlikely]] return; }
L_00243CB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243CC0u); set32(c.r[4], c.r[17].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00243CC0u) [[unlikely]] return; }
L_00243CC0:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00243CC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00243CCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00243CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00243CF0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00243D44; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 529u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00243D2C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 324u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 324u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00243D6C; } }
L_00243D2C:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[3], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 384u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 384u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00243D6C; } }
L_00243D44:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].d[0] = ld8((c.r[4].w[0] + 531u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] + 324u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 324u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00243D6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00243D6C:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_00243D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 184u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00243DD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DA0u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x00243DA0u) [[unlikely]] return; }
L_00243DA0:
    c.f[13] = ld32((c.r[16].w[0] + 36u));
    c.f[14] = ld32((c.r[16].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DB0u); c.f[12] = ld32((c.r[16].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x00243DB0u) [[unlikely]] return; }
L_00243DB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DB8u); set32(c.r[4], ld32((c.r[16].w[0] + 84u)));  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x00243DB8u) [[unlikely]] return; }
L_00243DB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DC0u); set32(c.r[4], ld32((c.r[16].w[0] + 88u)));  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x00243DC0u) [[unlikely]] return; }
L_00243DC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DC8u); set32(c.r[4], ld32((c.r[16].w[0] + 80u)));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x00243DC8u) [[unlikely]] return; }
L_00243DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DD0u); set32(c.r[4], c.r[16].w[0] + 192u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x00243DD0u) [[unlikely]] return; }
L_00243DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243DD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 136u, depth + 1u); else { c.pc = 0x00306190u; return; } if (c.pc != 0x00243DD8u) [[unlikely]] return; }
L_00243DD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00243DF0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { [[clang::musttail]] return unit_0051(c, 14u, depth); } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[3], c.r[3].w[0] + 25376u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00240000u < 16384u) { entry = entries_0050[(t - 0x00240000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00243E3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    set32(c.r[2], 0u + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[16].w[0] + 16u);  if (t) { goto L_00243E9C; } }
    set32(c.r[4], c.r[3].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 8976u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[3], ld32((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[2] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.f[0] = ld32((c.r[3].w[0] + 12u));
    st32((c.r[16].w[0] + 16u), c.f[3]);
    st32((c.r[16].w[0] + 20u), c.f[2]);
    st32((c.r[16].w[0] + 24u), c.f[1]);
    st32((c.r[16].w[0] + 28u), c.f[0]);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.budget -= 17;
L_00243E9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243EA4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0051(c, 44u, depth + 1u); else { c.pc = 0x002448F0u; return; } if (c.pc != 0x00243EA4u) [[unlikely]] return; }
L_00243EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 10u)));  if (t) { [[clang::musttail]] return unit_0051(c, 15u, depth); } }
L_00243EAC:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[1].d[0] = c.r[3].sd[0] < 129ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00243ED8; } }
    c.r[2].d[0] = 0ull | 65408ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0051(c, 14u, depth); } }
L_00243ED8:
    st32((c.r[17].w[0] + 96u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3B830000u);
    c.r[2].d[0] = c.r[2].d[0] | 4719ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (t) { [[clang::musttail]] return unit_0051(c, 14u, depth); } }
L_00243EFC:
    c.f[1] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E750000u);
    c.r[2].d[0] = c.r[2].d[0] | 49807ull;
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00243F28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 104u), c.r[2].w[0]);  if (t) { goto L_00243F34; } }
L_00243F28:
    c.f[0] = ld32((c.r[17].w[0] + 108u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 3;
L_00243F34:
    c.f[3] = ld32((c.r[16].w[0] + 16u));
    c.f[2] = ld32((c.r[17].w[0] + 32u));
    c.f[1] = ld32((c.r[16].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.f[20] = fp::sub(c.f[3], c.f[2]);
    c.f[21] = fp::sub(c.f[1], c.f[0]);
    c.f[12] = c.f[20];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243F58u); c.f[13] = c.f[21];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00243F58u) [[unlikely]] return; }
L_00243F58:
    c.r[3].d[0] = 0ull | 65535ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[17].w[0] + 84u)));
    c.r[2].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 16u);  if (t) { goto L_00243F94; } }
    set32(c.r[2], 0u - 16u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_00243F98; } }
    set32(c.r[2], 0u + 16u);
    c.budget -= 1;
L_00243F94:
    st32((c.r[17].w[0] + 96u), c.r[2].w[0]);
    c.budget -= 1;
L_00243F98:
    c.facc = fp::mul(c.f[20], c.f[20]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00243FA4u); c.f[12] = fp::add(c.facc, fp::mul(c.f[21], c.f[21]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x00243FA4u) [[unlikely]] return; }
L_00243FA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40600000u);
    c.f[1] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { [[clang::musttail]] return unit_0051(c, 7u, depth); } }
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0051(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 33u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { [[clang::musttail]] return unit_0051(c, 3u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 15u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0051(c, 6u, depth); } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 15u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { [[clang::musttail]] return unit_0051(c, 6u, depth); } }
    [[clang::musttail]] return unit_0051(c, 2u, depth);
}

}
