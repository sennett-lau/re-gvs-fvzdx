#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006F[4096] = {
    1, 0, 2, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 52, 0, 0, 53,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0,
    0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0,
    145, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0,
    175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0,
    181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0,
    0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    225, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0,
    251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0,
    0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0,
    0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0,
    0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0,
    0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342,
    0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0,
    0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0,
    0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0,
    0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0,
    0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460,
    0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0,
    0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0,
    473, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0,
    0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0,
    491, 0, 0, 0, 0, 492, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0,
    0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0,
    513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0,
    531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0,
    537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0,
    0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0,
    0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 557, 0,
    558, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0,
    578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592,
    0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006F(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002BC000;
    case 2u: goto L_002BC008;
    case 3u: goto L_002BC00C;
    case 4u: goto L_002BC020;
    case 5u: goto L_002BC088;
    case 6u: goto L_002BC098;
    case 7u: goto L_002BC0A8;
    case 8u: goto L_002BC0F0;
    case 9u: goto L_002BC118;
    case 10u: goto L_002BC134;
    case 11u: goto L_002BC140;
    case 12u: goto L_002BC150;
    case 13u: goto L_002BC16C;
    case 14u: goto L_002BC174;
    case 15u: goto L_002BC1AC;
    case 16u: goto L_002BC1B4;
    case 17u: goto L_002BC1C4;
    case 18u: goto L_002BC1E0;
    case 19u: goto L_002BC290;
    case 20u: goto L_002BC2C0;
    case 21u: goto L_002BC2DC;
    case 22u: goto L_002BC300;
    case 23u: goto L_002BC318;
    case 24u: goto L_002BC324;
    case 25u: goto L_002BC330;
    case 26u: goto L_002BC35C;
    case 27u: goto L_002BC370;
    case 28u: goto L_002BC390;
    case 29u: goto L_002BC3AC;
    case 30u: goto L_002BC3BC;
    case 31u: goto L_002BC3D8;
    case 32u: goto L_002BC3E8;
    case 33u: goto L_002BC3F0;
    case 34u: goto L_002BC40C;
    case 35u: goto L_002BC418;
    case 36u: goto L_002BC430;
    case 37u: goto L_002BC440;
    case 38u: goto L_002BC460;
    case 39u: goto L_002BC480;
    case 40u: goto L_002BC4D4;
    case 41u: goto L_002BC4F8;
    case 42u: goto L_002BC524;
    case 43u: goto L_002BC53C;
    case 44u: goto L_002BC56C;
    case 45u: goto L_002BC580;
    case 46u: goto L_002BC594;
    case 47u: goto L_002BC5B0;
    case 48u: goto L_002BC600;
    case 49u: goto L_002BC618;
    case 50u: goto L_002BC650;
    case 51u: goto L_002BC664;
    case 52u: goto L_002BC670;
    case 53u: goto L_002BC67C;
    case 54u: goto L_002BC684;
    case 55u: goto L_002BC6A4;
    case 56u: goto L_002BC6F0;
    case 57u: goto L_002BC708;
    case 58u: goto L_002BC720;
    case 59u: goto L_002BC74C;
    case 60u: goto L_002BC768;
    case 61u: goto L_002BC774;
    case 62u: goto L_002BC780;
    case 63u: goto L_002BC788;
    case 64u: goto L_002BC79C;
    case 65u: goto L_002BC7A4;
    case 66u: goto L_002BC7C8;
    case 67u: goto L_002BC7F4;
    case 68u: goto L_002BC804;
    case 69u: goto L_002BC858;
    case 70u: goto L_002BC870;
    case 71u: goto L_002BC884;
    case 72u: goto L_002BC890;
    case 73u: goto L_002BC89C;
    case 74u: goto L_002BC8A4;
    case 75u: goto L_002BC8BC;
    case 76u: goto L_002BC8C4;
    case 77u: goto L_002BC8E0;
    case 78u: goto L_002BC8F4;
    case 79u: goto L_002BC904;
    case 80u: goto L_002BC938;
    case 81u: goto L_002BC940;
    case 82u: goto L_002BC950;
    case 83u: goto L_002BC970;
    case 84u: goto L_002BC9D0;
    case 85u: goto L_002BC9D8;
    case 86u: goto L_002BCA18;
    case 87u: goto L_002BCA30;
    case 88u: goto L_002BCA5C;
    case 89u: goto L_002BCA88;
    case 90u: goto L_002BCAA0;
    case 91u: goto L_002BCAB8;
    case 92u: goto L_002BCAC0;
    case 93u: goto L_002BCAF8;
    case 94u: goto L_002BCB04;
    case 95u: goto L_002BCB10;
    case 96u: goto L_002BCB48;
    case 97u: goto L_002BCB70;
    case 98u: goto L_002BCB84;
    case 99u: goto L_002BCB90;
    case 100u: goto L_002BCBA0;
    case 101u: goto L_002BCBB0;
    case 102u: goto L_002BCBB8;
    case 103u: goto L_002BCC08;
    case 104u: goto L_002BCC3C;
    case 105u: goto L_002BCC4C;
    case 106u: goto L_002BCC64;
    case 107u: goto L_002BCCB8;
    case 108u: goto L_002BCCD0;
    case 109u: goto L_002BCCE8;
    case 110u: goto L_002BCD18;
    case 111u: goto L_002BCD28;
    case 112u: goto L_002BCD30;
    case 113u: goto L_002BCD44;
    case 114u: goto L_002BCD64;
    case 115u: goto L_002BCD74;
    case 116u: goto L_002BCD7C;
    case 117u: goto L_002BCD90;
    case 118u: goto L_002BCDA8;
    case 119u: goto L_002BCDB0;
    case 120u: goto L_002BCDCC;
    case 121u: goto L_002BCDD8;
    case 122u: goto L_002BCDE0;
    case 123u: goto L_002BCDF0;
    case 124u: goto L_002BCE3C;
    case 125u: goto L_002BCE54;
    case 126u: goto L_002BCE68;
    case 127u: goto L_002BCE70;
    case 128u: goto L_002BCE80;
    case 129u: goto L_002BCEA0;
    case 130u: goto L_002BCEEC;
    case 131u: goto L_002BCF18;
    case 132u: goto L_002BCF30;
    case 133u: goto L_002BCF44;
    case 134u: goto L_002BCF60;
    case 135u: goto L_002BCFA0;
    case 136u: goto L_002BCFB4;
    case 137u: goto L_002BCFC0;
    case 138u: goto L_002BCFCC;
    case 139u: goto L_002BCFD4;
    case 140u: goto L_002BD004;
    case 141u: goto L_002BD01C;
    case 142u: goto L_002BD040;
    case 143u: goto L_002BD060;
    case 144u: goto L_002BD074;
    case 145u: goto L_002BD080;
    case 146u: goto L_002BD08C;
    case 147u: goto L_002BD094;
    case 148u: goto L_002BD0A8;
    case 149u: goto L_002BD0B0;
    case 150u: goto L_002BD0C8;
    case 151u: goto L_002BD0EC;
    case 152u: goto L_002BD110;
    case 153u: goto L_002BD124;
    case 154u: goto L_002BD130;
    case 155u: goto L_002BD138;
    case 156u: goto L_002BD148;
    case 157u: goto L_002BD1A0;
    case 158u: goto L_002BD1B4;
    case 159u: goto L_002BD1BC;
    case 160u: goto L_002BD1D0;
    case 161u: goto L_002BD1F0;
    case 162u: goto L_002BD234;
    case 163u: goto L_002BD270;
    case 164u: goto L_002BD284;
    case 165u: goto L_002BD28C;
    case 166u: goto L_002BD2A8;
    case 167u: goto L_002BD2F0;
    case 168u: goto L_002BD308;
    case 169u: goto L_002BD320;
    case 170u: goto L_002BD334;
    case 171u: goto L_002BD340;
    case 172u: goto L_002BD34C;
    case 173u: goto L_002BD354;
    case 174u: goto L_002BD364;
    case 175u: goto L_002BD380;
    case 176u: goto L_002BD3A4;
    case 177u: goto L_002BD3C8;
    case 178u: goto L_002BD3D0;
    case 179u: goto L_002BD3E0;
    case 180u: goto L_002BD3F4;
    case 181u: goto L_002BD400;
    case 182u: goto L_002BD408;
    case 183u: goto L_002BD418;
    case 184u: goto L_002BD470;
    case 185u: goto L_002BD484;
    case 186u: goto L_002BD48C;
    case 187u: goto L_002BD4A0;
    case 188u: goto L_002BD4C0;
    case 189u: goto L_002BD500;
    case 190u: goto L_002BD538;
    case 191u: goto L_002BD550;
    case 192u: goto L_002BD564;
    case 193u: goto L_002BD580;
    case 194u: goto L_002BD5CC;
    case 195u: goto L_002BD5E0;
    case 196u: goto L_002BD60C;
    case 197u: goto L_002BD628;
    case 198u: goto L_002BD634;
    case 199u: goto L_002BD640;
    case 200u: goto L_002BD648;
    case 201u: goto L_002BD65C;
    case 202u: goto L_002BD664;
    case 203u: goto L_002BD67C;
    case 204u: goto L_002BD698;
    case 205u: goto L_002BD6E0;
    case 206u: goto L_002BD6F0;
    case 207u: goto L_002BD704;
    case 208u: goto L_002BD710;
    case 209u: goto L_002BD71C;
    case 210u: goto L_002BD724;
    case 211u: goto L_002BD738;
    case 212u: goto L_002BD740;
    case 213u: goto L_002BD758;
    case 214u: goto L_002BD780;
    case 215u: goto L_002BD798;
    case 216u: goto L_002BD7A0;
    case 217u: goto L_002BD7B0;
    case 218u: goto L_002BD814;
    case 219u: goto L_002BD82C;
    case 220u: goto L_002BD840;
    case 221u: goto L_002BD848;
    case 222u: goto L_002BD860;
    case 223u: goto L_002BD880;
    case 224u: goto L_002BD8C4;
    case 225u: goto L_002BD900;
    case 226u: goto L_002BD910;
    case 227u: goto L_002BD924;
    case 228u: goto L_002BD940;
    case 229u: goto L_002BD97C;
    case 230u: goto L_002BD988;
    case 231u: goto L_002BD9A0;
    case 232u: goto L_002BD9B4;
    case 233u: goto L_002BD9C0;
    case 234u: goto L_002BD9CC;
    case 235u: goto L_002BD9D4;
    case 236u: goto L_002BD9E8;
    case 237u: goto L_002BD9F0;
    case 238u: goto L_002BDA08;
    case 239u: goto L_002BDA24;
    case 240u: goto L_002BDA48;
    case 241u: goto L_002BDA70;
    case 242u: goto L_002BDA88;
    case 243u: goto L_002BDA90;
    case 244u: goto L_002BDAA0;
    case 245u: goto L_002BDAF0;
    case 246u: goto L_002BDB08;
    case 247u: goto L_002BDB1C;
    case 248u: goto L_002BDB24;
    case 249u: goto L_002BDB40;
    case 250u: goto L_002BDB60;
    case 251u: goto L_002BDB80;
    case 252u: goto L_002BDBA0;
    case 253u: goto L_002BDBC0;
    case 254u: goto L_002BDBE0;
    case 255u: goto L_002BDC00;
    case 256u: goto L_002BDC48;
    case 257u: goto L_002BDC70;
    case 258u: goto L_002BDC80;
    case 259u: goto L_002BDC94;
    case 260u: goto L_002BDCB4;
    case 261u: goto L_002BDCCC;
    case 262u: goto L_002BDCE0;
    case 263u: goto L_002BDCF4;
    case 264u: goto L_002BDD08;
    case 265u: goto L_002BDD3C;
    case 266u: goto L_002BDD48;
    case 267u: goto L_002BDD54;
    case 268u: goto L_002BDD60;
    case 269u: goto L_002BDD6C;
    case 270u: goto L_002BDD84;
    case 271u: goto L_002BDDA4;
    case 272u: goto L_002BDDB0;
    case 273u: goto L_002BDDC0;
    case 274u: goto L_002BDDD8;
    case 275u: goto L_002BDDE4;
    case 276u: goto L_002BDDF8;
    case 277u: goto L_002BDE08;
    case 278u: goto L_002BDE20;
    case 279u: goto L_002BDE40;
    case 280u: goto L_002BDE50;
    case 281u: goto L_002BDE60;
    case 282u: goto L_002BDEAC;
    case 283u: goto L_002BDEBC;
    case 284u: goto L_002BDF10;
    case 285u: goto L_002BDF24;
    case 286u: goto L_002BDF38;
    case 287u: goto L_002BDF44;
    case 288u: goto L_002BDF50;
    case 289u: goto L_002BDF60;
    case 290u: goto L_002BDF6C;
    case 291u: goto L_002BDF78;
    case 292u: goto L_002BDF90;
    case 293u: goto L_002BDF9C;
    case 294u: goto L_002BDFD0;
    case 295u: goto L_002BDFE4;
    case 296u: goto L_002BDFF4;
    case 297u: goto L_002BE034;
    case 298u: goto L_002BE050;
    case 299u: goto L_002BE068;
    case 300u: goto L_002BE080;
    case 301u: goto L_002BE0A0;
    case 302u: goto L_002BE0B4;
    case 303u: goto L_002BE0FC;
    case 304u: goto L_002BE124;
    case 305u: goto L_002BE13C;
    case 306u: goto L_002BE150;
    case 307u: goto L_002BE164;
    case 308u: goto L_002BE170;
    case 309u: goto L_002BE178;
    case 310u: goto L_002BE19C;
    case 311u: goto L_002BE1B4;
    case 312u: goto L_002BE1CC;
    case 313u: goto L_002BE1E0;
    case 314u: goto L_002BE1F4;
    case 315u: goto L_002BE200;
    case 316u: goto L_002BE208;
    case 317u: goto L_002BE220;
    case 318u: goto L_002BE254;
    case 319u: goto L_002BE260;
    case 320u: goto L_002BE26C;
    case 321u: goto L_002BE278;
    case 322u: goto L_002BE284;
    case 323u: goto L_002BE29C;
    case 324u: goto L_002BE2BC;
    case 325u: goto L_002BE2CC;
    case 326u: goto L_002BE2E0;
    case 327u: goto L_002BE2EC;
    case 328u: goto L_002BE2F4;
    case 329u: goto L_002BE30C;
    case 330u: goto L_002BE320;
    case 331u: goto L_002BE340;
    case 332u: goto L_002BE348;
    case 333u: goto L_002BE358;
    case 334u: goto L_002BE364;
    case 335u: goto L_002BE398;
    case 336u: goto L_002BE3E8;
    case 337u: goto L_002BE434;
    case 338u: goto L_002BE43C;
    case 339u: goto L_002BE450;
    case 340u: goto L_002BE464;
    case 341u: goto L_002BE470;
    case 342u: goto L_002BE47C;
    case 343u: goto L_002BE48C;
    case 344u: goto L_002BE498;
    case 345u: goto L_002BE4AC;
    case 346u: goto L_002BE4B8;
    case 347u: goto L_002BE4C0;
    case 348u: goto L_002BE4F0;
    case 349u: goto L_002BE504;
    case 350u: goto L_002BE510;
    case 351u: goto L_002BE518;
    case 352u: goto L_002BE528;
    case 353u: goto L_002BE568;
    case 354u: goto L_002BE570;
    case 355u: goto L_002BE594;
    case 356u: goto L_002BE5B0;
    case 357u: goto L_002BE5D0;
    case 358u: goto L_002BE5DC;
    case 359u: goto L_002BE614;
    case 360u: goto L_002BE630;
    case 361u: goto L_002BE678;
    case 362u: goto L_002BE69C;
    case 363u: goto L_002BE6C0;
    case 364u: goto L_002BE6D0;
    case 365u: goto L_002BE6E4;
    case 366u: goto L_002BE6F0;
    case 367u: goto L_002BE6F8;
    case 368u: goto L_002BE71C;
    case 369u: goto L_002BE734;
    case 370u: goto L_002BE750;
    case 371u: goto L_002BE764;
    case 372u: goto L_002BE770;
    case 373u: goto L_002BE778;
    case 374u: goto L_002BE790;
    case 375u: goto L_002BE7C4;
    case 376u: goto L_002BE7D0;
    case 377u: goto L_002BE7DC;
    case 378u: goto L_002BE7E8;
    case 379u: goto L_002BE7F4;
    case 380u: goto L_002BE80C;
    case 381u: goto L_002BE82C;
    case 382u: goto L_002BE83C;
    case 383u: goto L_002BE850;
    case 384u: goto L_002BE868;
    case 385u: goto L_002BE874;
    case 386u: goto L_002BE888;
    case 387u: goto L_002BE890;
    case 388u: goto L_002BE8A8;
    case 389u: goto L_002BE8C0;
    case 390u: goto L_002BE8EC;
    case 391u: goto L_002BE8F8;
    case 392u: goto L_002BE90C;
    case 393u: goto L_002BE914;
    case 394u: goto L_002BE924;
    case 395u: goto L_002BE930;
    case 396u: goto L_002BE964;
    case 397u: goto L_002BE9B4;
    case 398u: goto L_002BEA0C;
    case 399u: goto L_002BEA18;
    case 400u: goto L_002BEA2C;
    case 401u: goto L_002BEA34;
    case 402u: goto L_002BEA48;
    case 403u: goto L_002BEA5C;
    case 404u: goto L_002BEA68;
    case 405u: goto L_002BEA74;
    case 406u: goto L_002BEA84;
    case 407u: goto L_002BEA90;
    case 408u: goto L_002BEAA4;
    case 409u: goto L_002BEABC;
    case 410u: goto L_002BEAC8;
    case 411u: goto L_002BEADC;
    case 412u: goto L_002BEAE4;
    case 413u: goto L_002BEB20;
    case 414u: goto L_002BEB34;
    case 415u: goto L_002BEB40;
    case 416u: goto L_002BEB48;
    case 417u: goto L_002BEB58;
    case 418u: goto L_002BEBA4;
    case 419u: goto L_002BEBB0;
    case 420u: goto L_002BEBC4;
    case 421u: goto L_002BEBCC;
    case 422u: goto L_002BEBF0;
    case 423u: goto L_002BEC00;
    case 424u: goto L_002BEC20;
    case 425u: goto L_002BED10;
    case 426u: goto L_002BED40;
    case 427u: goto L_002BED50;
    case 428u: goto L_002BEDAC;
    case 429u: goto L_002BEDCC;
    case 430u: goto L_002BEDDC;
    case 431u: goto L_002BEDFC;
    case 432u: goto L_002BEE48;
    case 433u: goto L_002BEE64;
    case 434u: goto L_002BEE70;
    case 435u: goto L_002BEE8C;
    case 436u: goto L_002BEEA0;
    case 437u: goto L_002BEEA8;
    case 438u: goto L_002BEEC0;
    case 439u: goto L_002BEED4;
    case 440u: goto L_002BEEE0;
    case 441u: goto L_002BEEE8;
    case 442u: goto L_002BEEF8;
    case 443u: goto L_002BEF40;
    case 444u: goto L_002BEF50;
    case 445u: goto L_002BEF70;
    case 446u: goto L_002BEF90;
    case 447u: goto L_002BEFB0;
    case 448u: goto L_002BEFF0;
    case 449u: goto L_002BF018;
    case 450u: goto L_002BF030;
    case 451u: goto L_002BF044;
    case 452u: goto L_002BF064;
    case 453u: goto L_002BF07C;
    case 454u: goto L_002BF090;
    case 455u: goto L_002BF0A4;
    case 456u: goto L_002BF0C4;
    case 457u: goto L_002BF0D8;
    case 458u: goto L_002BF0E4;
    case 459u: goto L_002BF0F0;
    case 460u: goto L_002BF0FC;
    case 461u: goto L_002BF108;
    case 462u: goto L_002BF120;
    case 463u: goto L_002BF12C;
    case 464u: goto L_002BF13C;
    case 465u: goto L_002BF154;
    case 466u: goto L_002BF160;
    case 467u: goto L_002BF174;
    case 468u: goto L_002BF184;
    case 469u: goto L_002BF1A0;
    case 470u: goto L_002BF1B4;
    case 471u: goto L_002BF1D0;
    case 472u: goto L_002BF1E8;
    case 473u: goto L_002BF200;
    case 474u: goto L_002BF214;
    case 475u: goto L_002BF224;
    case 476u: goto L_002BF26C;
    case 477u: goto L_002BF284;
    case 478u: goto L_002BF298;
    case 479u: goto L_002BF2B0;
    case 480u: goto L_002BF2D0;
    case 481u: goto L_002BF314;
    case 482u: goto L_002BF344;
    case 483u: goto L_002BF35C;
    case 484u: goto L_002BF370;
    case 485u: goto L_002BF384;
    case 486u: goto L_002BF390;
    case 487u: goto L_002BF398;
    case 488u: goto L_002BF3BC;
    case 489u: goto L_002BF3D4;
    case 490u: goto L_002BF3EC;
    case 491u: goto L_002BF400;
    case 492u: goto L_002BF414;
    case 493u: goto L_002BF420;
    case 494u: goto L_002BF428;
    case 495u: goto L_002BF440;
    case 496u: goto L_002BF454;
    case 497u: goto L_002BF460;
    case 498u: goto L_002BF46C;
    case 499u: goto L_002BF478;
    case 500u: goto L_002BF490;
    case 501u: goto L_002BF4A8;
    case 502u: goto L_002BF4B8;
    case 503u: goto L_002BF4CC;
    case 504u: goto L_002BF4D8;
    case 505u: goto L_002BF4E0;
    case 506u: goto L_002BF4F8;
    case 507u: goto L_002BF510;
    case 508u: goto L_002BF524;
    case 509u: goto L_002BF53C;
    case 510u: goto L_002BF544;
    case 511u: goto L_002BF560;
    case 512u: goto L_002BF574;
    case 513u: goto L_002BF580;
    case 514u: goto L_002BF588;
    case 515u: goto L_002BF598;
    case 516u: goto L_002BF5E0;
    case 517u: goto L_002BF5F8;
    case 518u: goto L_002BF610;
    case 519u: goto L_002BF624;
    case 520u: goto L_002BF62C;
    case 521u: goto L_002BF640;
    case 522u: goto L_002BF660;
    case 523u: goto L_002BF66C;
    case 524u: goto L_002BF6A4;
    case 525u: goto L_002BF6C0;
    case 526u: goto L_002BF704;
    case 527u: goto L_002BF72C;
    case 528u: goto L_002BF750;
    case 529u: goto L_002BF760;
    case 530u: goto L_002BF774;
    case 531u: goto L_002BF780;
    case 532u: goto L_002BF788;
    case 533u: goto L_002BF7AC;
    case 534u: goto L_002BF7C4;
    case 535u: goto L_002BF7E0;
    case 536u: goto L_002BF7F4;
    case 537u: goto L_002BF800;
    case 538u: goto L_002BF808;
    case 539u: goto L_002BF820;
    case 540u: goto L_002BF834;
    case 541u: goto L_002BF840;
    case 542u: goto L_002BF84C;
    case 543u: goto L_002BF858;
    case 544u: goto L_002BF870;
    case 545u: goto L_002BF888;
    case 546u: goto L_002BF898;
    case 547u: goto L_002BF8AC;
    case 548u: goto L_002BF8C4;
    case 549u: goto L_002BF8D0;
    case 550u: goto L_002BF8E4;
    case 551u: goto L_002BF8EC;
    case 552u: goto L_002BF904;
    case 553u: goto L_002BF920;
    case 554u: goto L_002BF934;
    case 555u: goto L_002BF958;
    case 556u: goto L_002BF964;
    case 557u: goto L_002BF978;
    case 558u: goto L_002BF980;
    case 559u: goto L_002BF990;
    case 560u: goto L_002BF9A4;
    case 561u: goto L_002BF9B0;
    case 562u: goto L_002BF9B8;
    case 563u: goto L_002BF9C8;
    case 564u: goto L_002BFA10;
    case 565u: goto L_002BFA28;
    case 566u: goto L_002BFA48;
    case 567u: goto L_002BFA54;
    case 568u: goto L_002BFA68;
    case 569u: goto L_002BFA70;
    case 570u: goto L_002BFA80;
    case 571u: goto L_002BFAA0;
    case 572u: goto L_002BFAD0;
    case 573u: goto L_002BFAE4;
    case 574u: goto L_002BFB14;
    case 575u: goto L_002BFB1C;
    case 576u: goto L_002BFB44;
    case 577u: goto L_002BFB68;
    case 578u: goto L_002BFB80;
    case 579u: goto L_002BFB90;
    case 580u: goto L_002BFBF0;
    case 581u: goto L_002BFC20;
    case 582u: goto L_002BFC4C;
    case 583u: goto L_002BFC70;
    case 584u: goto L_002BFCD8;
    case 585u: goto L_002BFCF4;
    case 586u: goto L_002BFD10;
    case 587u: goto L_002BFD30;
    case 588u: goto L_002BFE30;
    case 589u: goto L_002BFE40;
    case 590u: goto L_002BFE50;
    case 591u: goto L_002BFF6C;
    case 592u: goto L_002BFF7C;
    case 593u: goto L_002BFF90;
    default: bad_entry(c, 0x002BC000u); return;
    }
L_002BC000:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC008u); c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7814u)));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BC008u) [[unlikely]] return; }
L_002BC008:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BC00C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BC020:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BC090; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002BC04C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BC0D8; } }
L_002BC04C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_002BC064; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BC0DC; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_002BC064:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC088u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC088u) [[unlikely]] return; }
L_002BC088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC0D4; } }
L_002BC090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC098u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BC098u) [[unlikely]] return; }
L_002BC098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC0A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BC0A8u) [[unlikely]] return; }
L_002BC0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC0C0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BC0C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC0D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BC0D8; } }
L_002BC0D4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BC0D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BC0DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC0F0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 61u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC118u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0079(c, 358u, depth + 1u); else { c.pc = 0x002E7E30u; return; } if (c.pc != 0x002BC118u) [[unlikely]] return; }
L_002BC118:
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    set32(c.r[4], c.r[17].w[0] + 2048u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC134u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002BC134u) [[unlikely]] return; }
L_002BC134:
    set32(c.r[2], ld32((c.r[17].w[0] + 7912u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC140u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002BC140u) [[unlikely]] return; }
L_002BC140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 26272u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC150u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x002BC150u) [[unlikely]] return; }
L_002BC150:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC16Cu); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002BC16Cu) [[unlikely]] return; }
L_002BC16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC174u); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x002BC174u) [[unlikely]] return; }
L_002BC174:
    set32(c.r[19], c.r[29].w[0] + 116u);
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002BC1F4; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002BC1F0; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1ACu); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x002BC1ACu) [[unlikely]] return; }
L_002BC1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1B4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x002BC1B4u) [[unlikely]] return; }
L_002BC1B4:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1C4u); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x002BC1C4u) [[unlikely]] return; }
L_002BC1C4:
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC1E0u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002BC1E0u) [[unlikely]] return; }
L_002BC1E0:
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
L_002BC1F0:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002BC1F4:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 1025ll ? 1ull : 0ull;  if (t) { goto L_002BC21C; } }
    c.r[1].d[0] = c.r[4].sd[0] < -1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BC228; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 1024u);  if (t) { goto L_002BC228; } }
    c.r[1].d[0] = c.r[4].sd[0] < 1025ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BC21C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BC228; } }
    set32(c.r[16], 0u + 1024u);
    c.budget -= 1;
L_002BC228:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 7912u)));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[1].d[0] = c.r[16].sd[0] < 8193ll ? 1ull : 0ull;  if (t) { goto L_002BC258; } }
    c.r[1].d[0] = c.r[16].sd[0] < -8192ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[3].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002BC268; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 8192u);  if (t) { goto L_002BC264; } }
    c.r[1].d[0] = c.r[16].sd[0] < 8193ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BC258:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002BC264; } }
    set32(c.r[16], 0u + 8192u);
    c.budget -= 1;
L_002BC264:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002BC268:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[17].w[0] + 7912u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_002BC290:
    set32(c.r[2], ld32((c.r[4].w[0] + 1304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC2A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BC2B8; } }
L_002BC2A4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_002BC2B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BC2B8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002BC2B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC2C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC2DCu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BC2DCu) [[unlikely]] return; }
L_002BC2DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002BC368; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 345u)));
    set32(c.r[16], c.r[17].w[0] + 320u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 100u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC300u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BC300u) [[unlikely]] return; }
L_002BC300:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 48u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC318u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x002BC318u) [[unlikely]] return; }
L_002BC318:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC324u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BC324u) [[unlikely]] return; }
L_002BC324:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC330u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BC330u) [[unlikely]] return; }
L_002BC330:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 25u)));
    set32(c.r[2], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st8((c.r[16].w[0] + 25u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC35Cu); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BC35Cu) [[unlikely]] return; }
L_002BC35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BC374; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002BC368:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC370u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BC370u) [[unlikely]] return; }
L_002BC370:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BC374:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[16].w[0] + 139u);
    c.budget -= 7;
L_002BC3AC:
    c.r[5].d[0] = c.r[2].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x002BC3BCu) [[unlikely]] return; }
L_002BC3BC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + 139u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002BC3ACu | kUnwind; return; } goto L_002BC3AC; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0078(c, 202u, depth + 1u); else { c.pc = 0x002E2780u; return; } if (c.pc != 0x002BC3D8u) [[unlikely]] return; }
L_002BC3D8:
    set32(c.r[6], 0u + 15u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3E8u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 142u, depth + 1u); else { c.pc = 0x002E5AC0u; return; } if (c.pc != 0x002BC3E8u) [[unlikely]] return; }
L_002BC3E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC3F0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 85u, depth + 1u); else { c.pc = 0x002E5120u; return; } if (c.pc != 0x002BC3F0u) [[unlikely]] return; }
L_002BC3F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8387u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002BC418; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC40Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 99u, depth + 1u); else { c.pc = 0x002E5430u; return; } if (c.pc != 0x002BC40Cu) [[unlikely]] return; }
L_002BC40C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC418u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 99u, depth + 1u); else { c.pc = 0x002E5430u; return; } if (c.pc != 0x002BC418u) [[unlikely]] return; }
L_002BC418:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BC430:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BC440:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27360u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BC460:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27392u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BC480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BC4DC; } }
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC4DC; } }
    set32(c.r[2], 0u + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4D4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC4D4u) [[unlikely]] return; }
L_002BC4D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BC570; } }
L_002BC4DC:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BC508; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC4F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002BC4F8u) [[unlikely]] return; }
L_002BC4F8:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002BC544; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002BC508:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC524u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BC524u) [[unlikely]] return; }
L_002BC524:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC53Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC53Cu) [[unlikely]] return; }
L_002BC53C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BC56C; } }
L_002BC544:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC56Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC56Cu) [[unlikely]] return; }
L_002BC56C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BC570:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC594u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BC594u) [[unlikely]] return; }
L_002BC594:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC5B0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BC5B0u) [[unlikely]] return; }
L_002BC5B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BC5D4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BC63C; } }
L_002BC5D4:
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BC620; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC600u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BC600u) [[unlikely]] return; }
L_002BC600:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC618u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC618u) [[unlikely]] return; }
L_002BC618:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BC640; } }
L_002BC620:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.budget -= 7;
L_002BC63C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BC640:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC664u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BC664u) [[unlikely]] return; }
L_002BC664:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC670u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BC670u) [[unlikely]] return; }
L_002BC670:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC67Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BC67Cu) [[unlikely]] return; }
L_002BC67C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC684u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BC684u) [[unlikely]] return; }
L_002BC684:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6A4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002BC6A4u) [[unlikely]] return; }
L_002BC6A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BC6CC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BC708; } }
L_002BC6CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC6F0u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BC6F0u) [[unlikely]] return; }
L_002BC6F0:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC708u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC708u) [[unlikely]] return; }
L_002BC708:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC720:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC74Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002BC74Cu) [[unlikely]] return; }
L_002BC74C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC768u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BC768u) [[unlikely]] return; }
L_002BC768:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC774u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BC774u) [[unlikely]] return; }
L_002BC774:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC780u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BC780u) [[unlikely]] return; }
L_002BC780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC788u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BC788u) [[unlikely]] return; }
L_002BC788:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC7AC; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC79Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BC79Cu) [[unlikely]] return; }
L_002BC79C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC7A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BC7A4u) [[unlikely]] return; }
L_002BC7A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BC85C; } }
L_002BC7AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 748u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002BC7F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC7C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BC7C8u) [[unlikely]] return; }
L_002BC7C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC7F4; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC7F4u); st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002BC7F4u) [[unlikely]] return; }
L_002BC7F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002BC7F8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC804u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BC804u) [[unlikely]] return; }
L_002BC804:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC858; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3DF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC858; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E340000u);
    c.r[2].d[0] = c.r[2].d[0] | 14680ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC858u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BC858u) [[unlikely]] return; }
L_002BC858:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BC85C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC870:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC884u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BC884u) [[unlikely]] return; }
L_002BC884:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC890u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BC890u) [[unlikely]] return; }
L_002BC890:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC89Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BC89Cu) [[unlikely]] return; }
L_002BC89C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BC8A4u) [[unlikely]] return; }
L_002BC8A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC8C4; } }
    set32(c.r[5], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8BCu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BC8BCu) [[unlikely]] return; }
L_002BC8BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BC8C4u) [[unlikely]] return; }
L_002BC8C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC8E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC8F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BC8F4u) [[unlikely]] return; }
L_002BC8F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC904u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BC904u) [[unlikely]] return; }
L_002BC904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC920; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BC920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BC940; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC938u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BC938u) [[unlikely]] return; }
L_002BC938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC940u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BC940u) [[unlikely]] return; }
L_002BC940:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BC950:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27424u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BC970:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 746u));
    set32(c.r[2], 0u + 7u);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BC9AC; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 7;
L_002BC9AC:
    c.f[0] = ld32((c.r[16].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 52u), c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9D0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BC9D0u) [[unlikely]] return; }
L_002BC9D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BC9D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002BC9D8u) [[unlikely]] return; }
L_002BC9D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BC9E8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BC9E8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BCA3C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA18u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BCA18u) [[unlikely]] return; }
L_002BCA18:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BCA30u) [[unlikely]] return; }
L_002BCA30:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BCA88; } }
L_002BCA3C:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCA64; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BCA5Cu) [[unlikely]] return; }
L_002BCA5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BCA70; } }
L_002BCA64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BCA70:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCA88u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BCA88u) [[unlikely]] return; }
L_002BCA88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCAA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAB8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BCAB8u) [[unlikely]] return; }
L_002BCAB8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002BCAC0u) [[unlikely]] return; }
L_002BCAC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCAD0; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BCAD0:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BCAFC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCAF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BCAF8u) [[unlikely]] return; }
L_002BCAF8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BCAFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB04u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BCB04u) [[unlikely]] return; }
L_002BCB04:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BCB10u) [[unlikely]] return; }
L_002BCB10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCB58; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_002BCB54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002BCB48u) [[unlikely]] return; }
L_002BCB48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BCB5C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 1;
L_002BCB54:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002BCB58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BCB5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB84u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BCB84u) [[unlikely]] return; }
L_002BCB84:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCB90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BCB90u) [[unlikely]] return; }
L_002BCB90:
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002BCBA0u) [[unlikely]] return; }
L_002BCBA0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002BCBB0u) [[unlikely]] return; }
L_002BCBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCBB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002BCBB8u) [[unlikely]] return; }
L_002BCBB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCBC8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002BCBC8:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41100000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 1216u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BCC34; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002BCC08u) [[unlikely]] return; }
L_002BCC08:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCC30; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_002BCC40; } }
L_002BCC30:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BCC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC3Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BCC3Cu) [[unlikely]] return; }
L_002BCC3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 1;
L_002BCC40:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BCC4Cu) [[unlikely]] return; }
L_002BCC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_002BCC74; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCC64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002BCC64u) [[unlikely]] return; }
L_002BCC64:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002BCCB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_002BCC74:
    c.f[2] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCB8u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BCCB8u) [[unlikely]] return; }
L_002BCCB8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCCD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCCE8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BCCE8u) [[unlikely]] return; }
L_002BCCE8:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BCD10; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002BCD10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD18u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BCD18u) [[unlikely]] return; }
L_002BCD18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BCD3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002BCD28u) [[unlikely]] return; }
L_002BCD28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x002BCD30u) [[unlikely]] return; }
L_002BCD30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BCD80; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BCD3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD44u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002BCD44u) [[unlikely]] return; }
L_002BCD44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCD7C; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BCD64u) [[unlikely]] return; }
L_002BCD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCD7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002BCD74u) [[unlikely]] return; }
L_002BCD74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCD7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x002BCD7Cu) [[unlikely]] return; }
L_002BCD7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BCD80:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDA8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BCDA8u) [[unlikely]] return; }
L_002BCDA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002BCDB0u) [[unlikely]] return; }
L_002BCDB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BCDC4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002BCDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDCCu);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BCDCCu) [[unlikely]] return; }
L_002BCDCC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDD8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BCDD8u) [[unlikely]] return; }
L_002BCDD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BCDE0u) [[unlikely]] return; }
L_002BCDE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCDF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BCDF0u) [[unlikely]] return; }
L_002BCDF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BCE10; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BCE10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BCE70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BCE60; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE3Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BCE3Cu) [[unlikely]] return; }
L_002BCE3C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 7u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE54u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BCE54u) [[unlikely]] return; }
L_002BCE54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BCE74; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BCE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE68u);  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002BCE68u) [[unlikely]] return; }
L_002BCE68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCE70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 69u, depth + 1u); else { c.pc = 0x002D9080u; return; } if (c.pc != 0x002BCE70u) [[unlikely]] return; }
L_002BCE70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BCE74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCE80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27456u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BCEA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BCEF8; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCEECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BCEECu) [[unlikely]] return; }
L_002BCEEC:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BCF18; } }
L_002BCEF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF18u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BCF18u) [[unlikely]] return; }
L_002BCF18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCF30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BCF44u) [[unlikely]] return; }
L_002BCF44:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCF60u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BCF60u) [[unlikely]] return; }
L_002BCF60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BCF84; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BCF90; } }
L_002BCF84:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002BCF90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BCFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BCFB4u) [[unlikely]] return; }
L_002BCFB4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BCFC0u) [[unlikely]] return; }
L_002BCFC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BCFCCu) [[unlikely]] return; }
L_002BCFCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BCFD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BCFD4u) [[unlikely]] return; }
L_002BCFD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_002BD010; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD004u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD004u) [[unlikely]] return; }
L_002BD004:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD050; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_002BD010:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD01Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD01Cu) [[unlikely]] return; }
L_002BD01C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);  if (t) { goto L_002BD034; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F160000u);
    c.r[2].d[0] = c.r[2].d[0] | 38551ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.budget -= 4;
L_002BD034:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD040u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD040u) [[unlikely]] return; }
L_002BD040:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD04C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BD04C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD050:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD074u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD074u) [[unlikely]] return; }
L_002BD074:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD080u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD080u) [[unlikely]] return; }
L_002BD080:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD08Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BD08Cu) [[unlikely]] return; }
L_002BD08C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD094u) [[unlikely]] return; }
L_002BD094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_002BD0BC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0A8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD0A8u) [[unlikely]] return; }
L_002BD0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD0B0u) [[unlikely]] return; }
L_002BD0B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD0FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_002BD0BC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD0C8u) [[unlikely]] return; }
L_002BD0C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);  if (t) { goto L_002BD0E0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EAD0000u);
    c.r[2].d[0] = c.r[2].d[0] | 30107ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42100000u);
    c.budget -= 4;
L_002BD0E0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD0ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD0ECu) [[unlikely]] return; }
L_002BD0EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD0F8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BD0F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD0FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD124u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD124u) [[unlikely]] return; }
L_002BD124:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD130u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD130u) [[unlikely]] return; }
L_002BD130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD138u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD138u) [[unlikely]] return; }
L_002BD138:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD148u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BD148u) [[unlikely]] return; }
L_002BD148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD168; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BD168:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD1BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_002BD1AC; } }
    set32(c.r[2], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1A0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD1A0u) [[unlikely]] return; }
L_002BD1A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD1C0; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_002BD1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD1B4u) [[unlikely]] return; }
L_002BD1B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD1BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD1BCu) [[unlikely]] return; }
L_002BD1BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD1C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD1D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27488u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BD1F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BD240; } }
    set32(c.r[2], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD234u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD234u) [[unlikely]] return; }
L_002BD234:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BD254; } }
L_002BD240:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 5;
L_002BD254:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD284u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD284u) [[unlikely]] return; }
L_002BD284:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD28Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD28Cu) [[unlikely]] return; }
L_002BD28C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2A8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD2A8u) [[unlikely]] return; }
L_002BD2A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD2CC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BD308; } }
L_002BD2CC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F350000u);
    c.r[2].d[0] = c.r[2].d[0] | 53918ull;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD2F0u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BD2F0u) [[unlikely]] return; }
L_002BD2F0:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD308u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD308u) [[unlikely]] return; }
L_002BD308:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD334u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD334u) [[unlikely]] return; }
L_002BD334:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD340u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD340u) [[unlikely]] return; }
L_002BD340:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD34Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BD34Cu) [[unlikely]] return; }
L_002BD34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD354u) [[unlikely]] return; }
L_002BD354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD364u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BD364u) [[unlikely]] return; }
L_002BD364:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_002BD374; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 2;
L_002BD374:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD380u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BD380u) [[unlikely]] return; }
L_002BD380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);  if (t) { goto L_002BD398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EB80000u);
    c.r[2].d[0] = c.r[2].d[0] | 4530ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42140000u);
    c.budget -= 4;
L_002BD398:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BD3A4u) [[unlikely]] return; }
L_002BD3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD3B0; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BD3B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD3D0; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD3C8u) [[unlikely]] return; }
L_002BD3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD3D0u) [[unlikely]] return; }
L_002BD3D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD3E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD3F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD3F4u) [[unlikely]] return; }
L_002BD3F4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD400u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD400u) [[unlikely]] return; }
L_002BD400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD408u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD408u) [[unlikely]] return; }
L_002BD408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD418u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BD418u) [[unlikely]] return; }
L_002BD418:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD438; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BD438:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD48C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_002BD47C; } }
    set32(c.r[2], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 6u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD470u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD470u) [[unlikely]] return; }
L_002BD470:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD490; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_002BD47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD484u) [[unlikely]] return; }
L_002BD484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD48Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD48Cu) [[unlikely]] return; }
L_002BD48C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD490:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD4A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27504u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BD4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BD50C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD500u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD500u) [[unlikely]] return; }
L_002BD500:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BD538; } }
L_002BD50C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD538u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD538u) [[unlikely]] return; }
L_002BD538:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD564u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD564u) [[unlikely]] return; }
L_002BD564:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD580u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD580u) [[unlikely]] return; }
L_002BD580:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD5A4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BD5CC; } }
L_002BD5A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65431ull;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD5CCu); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BD5CCu) [[unlikely]] return; }
L_002BD5CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD5E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD60Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002BD60Cu) [[unlikely]] return; }
L_002BD60C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD628u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD628u) [[unlikely]] return; }
L_002BD628:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD634u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD634u) [[unlikely]] return; }
L_002BD634:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD640u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BD640u) [[unlikely]] return; }
L_002BD640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD648u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD648u) [[unlikely]] return; }
L_002BD648:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_002BD670; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD65Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD65Cu) [[unlikely]] return; }
L_002BD65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD664u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD664u) [[unlikely]] return; }
L_002BD664:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD6E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 1;
L_002BD670:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD67Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD67Cu) [[unlikely]] return; }
L_002BD67C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);  if (t) { goto L_002BD68C; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.budget -= 2;
L_002BD68C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD698u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD698u) [[unlikely]] return; }
L_002BD698:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD6E0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD6E0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F290000u);
    c.r[2].d[0] = c.r[2].d[0] | 39763ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[6], 0u + 10u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD6E0u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD6E0u) [[unlikely]] return; }
L_002BD6E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD6E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD704u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD704u) [[unlikely]] return; }
L_002BD704:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD710u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD710u) [[unlikely]] return; }
L_002BD710:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD71Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BD71Cu) [[unlikely]] return; }
L_002BD71C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD724u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD724u) [[unlikely]] return; }
L_002BD724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_002BD74C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD738u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD738u) [[unlikely]] return; }
L_002BD738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD740u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD740u) [[unlikely]] return; }
L_002BD740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD768; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 1;
L_002BD74C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BD758u) [[unlikely]] return; }
L_002BD758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD764; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BD764:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD768:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD798u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD798u) [[unlikely]] return; }
L_002BD798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD7A0u) [[unlikely]] return; }
L_002BD7A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD7B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BD7B0u) [[unlikely]] return; }
L_002BD7B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BD7D0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BD7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BD848; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_002BD838; } }
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65431ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD814u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BD814u) [[unlikely]] return; }
L_002BD814:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    set32(c.r[7], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD82Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD82Cu) [[unlikely]] return; }
L_002BD82C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BD84C; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_002BD838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD840u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD840u) [[unlikely]] return; }
L_002BD840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD848u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD848u) [[unlikely]] return; }
L_002BD848:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BD84C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27536u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BD880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BD8D0; } }
    set32(c.r[2], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD8C4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD8C4u) [[unlikely]] return; }
L_002BD8C4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BD900; } }
L_002BD8D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD900u); st32((c.r[16].w[0] + 104u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BD900u) [[unlikely]] return; }
L_002BD900:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD924u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD924u) [[unlikely]] return; }
L_002BD924:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD940u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD940u) [[unlikely]] return; }
L_002BD940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BD964; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002BD97C; } }
L_002BD964:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD97Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BD97Cu) [[unlikely]] return; }
L_002BD97C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD988u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BD988u) [[unlikely]] return; }
L_002BD988:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BD9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002BD9B4u) [[unlikely]] return; }
L_002BD9B4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BD9C0u) [[unlikely]] return; }
L_002BD9C0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BD9CCu) [[unlikely]] return; }
L_002BD9CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BD9D4u) [[unlikely]] return; }
L_002BD9D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  if (t) { goto L_002BD9FC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BD9E8u) [[unlikely]] return; }
L_002BD9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BD9F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BD9F0u) [[unlikely]] return; }
L_002BD9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BDA58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002BD9FC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BDA08u) [[unlikely]] return; }
L_002BDA08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_002BDA18; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 2;
L_002BDA18:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BDA24u) [[unlikely]] return; }
L_002BDA24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);  if (t) { goto L_002BDA3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBEB80000u);
    c.r[2].d[0] = c.r[2].d[0] | 20971ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x424C0000u);
    c.budget -= 4;
L_002BDA3C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BDA48u) [[unlikely]] return; }
L_002BDA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDA54; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BDA54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BDA58:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDA70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BDA88u) [[unlikely]] return; }
L_002BDA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDA90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BDA90u) [[unlikely]] return; }
L_002BDA90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAA0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BDAA0u) [[unlikely]] return; }
L_002BDAA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDAC0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_002BDAC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BDB24; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 7u);  if (t) { goto L_002BDB14; } }
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDAF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BDAF0u) [[unlikely]] return; }
L_002BDAF0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB08u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BDB08u) [[unlikely]] return; }
L_002BDB08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BDB28; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_002BDB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BDB1Cu) [[unlikely]] return; }
L_002BDB1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDB24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BDB24u) [[unlikely]] return; }
L_002BDB24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BDB28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDB40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 28728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDB60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 28720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDB80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27552u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDBA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27584u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDBC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27616u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BDBE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BDC08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC00u);  if (depth < kMaxDepth) unit_006F(c, 581u, depth + 1u); else { c.pc = 0x002BFC20u; return; } if (c.pc != 0x002BDC00u) [[unlikely]] return; }
L_002BDC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDC70; } }
L_002BDC08:
    set32(c.r[6], 0u + 1u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDC50; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC48u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BDC48u) [[unlikely]] return; }
L_002BDC48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BDC74; } }
L_002BDC50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC70u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BDC70u) [[unlikely]] return; }
L_002BDC70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BDC74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDC80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDC94u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BDC94u) [[unlikely]] return; }
L_002BDC94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDCCC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCB4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BDCB4u) [[unlikely]] return; }
L_002BDCB4:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BDCCCu) [[unlikely]] return; }
L_002BDCCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDCE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDCF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BDCF4u) [[unlikely]] return; }
L_002BDCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BDDF0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD08u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BDD08u) [[unlikely]] return; }
L_002BDD08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDDC8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD3Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BDD3Cu) [[unlikely]] return; }
L_002BDD3C:
    set32(c.r[5], 0u + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BDD48u) [[unlikely]] return; }
L_002BDD48:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD54u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BDD54u) [[unlikely]] return; }
L_002BDD54:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD60u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BDD60u) [[unlikely]] return; }
L_002BDD60:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD6Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BDD6Cu) [[unlikely]] return; }
L_002BDD6C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDD84u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BDD84u) [[unlikely]] return; }
L_002BDD84:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDA4u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BDDA4u) [[unlikely]] return; }
L_002BDDA4:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002BDDB0u) [[unlikely]] return; }
L_002BDDB0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDC0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BDDC0u) [[unlikely]] return; }
L_002BDDC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BDE0C; } }
L_002BDDC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDD8u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BDDD8u) [[unlikely]] return; }
L_002BDDD8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BDDE4u) [[unlikely]] return; }
L_002BDDE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDE08; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002BDDF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDDF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002BDDF8u) [[unlikely]] return; }
L_002BDDF8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE08u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BDE08u) [[unlikely]] return; }
L_002BDE08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BDE0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDE20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BDE48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE40u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BDE40u) [[unlikely]] return; }
L_002BDE40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BDFC0; } }
L_002BDE48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE50u);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BDE50u) [[unlikely]] return; }
L_002BDE50:
    set32(c.r[5], 0u + 5u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDE60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x002BDE60u) [[unlikely]] return; }
L_002BDE60:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDE7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BDE7C:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_002BDEC4; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002BDEACu) [[unlikely]] return; }
L_002BDEAC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDEBCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BDEBCu) [[unlikely]] return; }
L_002BDEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDFBC; } }
L_002BDEC4:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDEE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BDEE0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BDF1C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BDF18; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF10u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BDF10u) [[unlikely]] return; }
L_002BDF10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDFBC; } }
L_002BDF18:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BDF1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF24u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BDF24u) [[unlikely]] return; }
L_002BDF24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BDF80; } }
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BDF38u) [[unlikely]] return; }
L_002BDF38:
    set32(c.r[5], 0u + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BDF44u) [[unlikely]] return; }
L_002BDF44:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002BDF50u) [[unlikely]] return; }
L_002BDF50:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF60u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BDF60u) [[unlikely]] return; }
L_002BDF60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF6Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BDF6Cu) [[unlikely]] return; }
L_002BDF6C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF78u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BDF78u) [[unlikely]] return; }
L_002BDF78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_002BDFA8; } }
L_002BDF80:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF90u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BDF90u) [[unlikely]] return; }
L_002BDF90:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDF9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BDF9Cu) [[unlikely]] return; }
L_002BDF9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BDFBC; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002BDFA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    c.budget -= 5;
L_002BDFBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BDFC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BDFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BDFE4u) [[unlikely]] return; }
L_002BDFE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BDFF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BDFF4u) [[unlikely]] return; }
L_002BDFF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE010; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BE010:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE068; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BE040; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE034u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BE034u) [[unlikely]] return; }
L_002BE034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BE06C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BE040:
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE050u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE050u) [[unlikely]] return; }
L_002BE050:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE068u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE068u) [[unlikely]] return; }
L_002BE068:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BE06C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE080:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BE0A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 581u, depth + 1u); else { c.pc = 0x002BFC20u; return; } if (c.pc != 0x002BE0B4u) [[unlikely]] return; }
L_002BE0B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE13C; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE104; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE0FCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE0FCu) [[unlikely]] return; }
L_002BE0FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE124; } }
L_002BE104:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE124u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE124u) [[unlikely]] return; }
L_002BE124:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE13Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BE13Cu) [[unlikely]] return; }
L_002BE13C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE164u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BE164u) [[unlikely]] return; }
L_002BE164:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BE170u) [[unlikely]] return; }
L_002BE170:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE178u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE178u) [[unlikely]] return; }
L_002BE178:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE1CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE19Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE19Cu) [[unlikely]] return; }
L_002BE19C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE1B4u) [[unlikely]] return; }
L_002BE1B4:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1CCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BE1CCu) [[unlikely]] return; }
L_002BE1CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE1F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BE1F4u) [[unlikely]] return; }
L_002BE1F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE200u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BE200u) [[unlikely]] return; }
L_002BE200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE208u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE208u) [[unlikely]] return; }
L_002BE208:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BE300; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE220u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BE220u) [[unlikely]] return; }
L_002BE220:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BE2D8; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE254u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BE254u) [[unlikely]] return; }
L_002BE254:
    set32(c.r[5], 0u + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE260u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BE260u) [[unlikely]] return; }
L_002BE260:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE26Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BE26Cu) [[unlikely]] return; }
L_002BE26C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE278u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BE278u) [[unlikely]] return; }
L_002BE278:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE284u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BE284u) [[unlikely]] return; }
L_002BE284:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE29Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE29Cu) [[unlikely]] return; }
L_002BE29C:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2BCu); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BE2BCu) [[unlikely]] return; }
L_002BE2BC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2CCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE2CCu) [[unlikely]] return; }
L_002BE2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BE310; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BE2D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2E0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BE2E0u) [[unlikely]] return; }
L_002BE2E0:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE2ECu) [[unlikely]] return; }
L_002BE2EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE2F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE2F4u) [[unlikely]] return; }
L_002BE2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE30C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BE300:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE30Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE30Cu) [[unlikely]] return; }
L_002BE30C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BE310:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE320:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BE350; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE340u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE340u) [[unlikely]] return; }
L_002BE340:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE348u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE348u) [[unlikely]] return; }
L_002BE348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BE4E4; } }
L_002BE350:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE358u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE358u) [[unlikely]] return; }
L_002BE358:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE364u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE364u) [[unlikely]] return; }
L_002BE364:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BE398; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002BE398; } }
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 7756u));
    set32(c.r[6], c.r[2].w[0] + 5u);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE398u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BE398u) [[unlikely]] return; }
L_002BE398:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE3B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BE3B4:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002BE3F0; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE3E8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE3E8u) [[unlikely]] return; }
L_002BE3E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE4E0; } }
L_002BE3F0:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE40C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BE40C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BE448; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BE444; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE434u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE434u) [[unlikely]] return; }
L_002BE434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE43Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE43Cu) [[unlikely]] return; }
L_002BE43C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE4E0; } }
L_002BE444:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BE448:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE450u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BE450u) [[unlikely]] return; }
L_002BE450:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BE4A4; } }
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE464u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BE464u) [[unlikely]] return; }
L_002BE464:
    set32(c.r[5], 0u + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE470u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BE470u) [[unlikely]] return; }
L_002BE470:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE47Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BE47Cu) [[unlikely]] return; }
L_002BE47C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE48Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE48Cu) [[unlikely]] return; }
L_002BE48C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE498u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BE498u) [[unlikely]] return; }
L_002BE498:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_002BE4CC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BE4A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4ACu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BE4ACu) [[unlikely]] return; }
L_002BE4AC:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE4B8u) [[unlikely]] return; }
L_002BE4B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE4C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE4C0u) [[unlikely]] return; }
L_002BE4C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE4E0; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002BE4CC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 5;
L_002BE4E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BE4E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE4F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE504u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BE504u) [[unlikely]] return; }
L_002BE504:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE510u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BE510u) [[unlikely]] return; }
L_002BE510:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE518u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE518u) [[unlikely]] return; }
L_002BE518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE528u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BE528u) [[unlikely]] return; }
L_002BE528:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE544; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BE544:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE594; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BE57C; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE568u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE568u) [[unlikely]] return; }
L_002BE568:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE570u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE570u) [[unlikely]] return; }
L_002BE570:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BE598; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002BE57C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE594u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE594u) [[unlikely]] return; }
L_002BE594:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BE598:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE5B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BE5F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE5D0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BE5D0u) [[unlikely]] return; }
L_002BE5D0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE5DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002BE5DCu) [[unlikely]] return; }
L_002BE5DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE5F4; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002BE5F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27680u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE614u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BE614u) [[unlikely]] return; }
L_002BE614:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BE680; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE678u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE678u) [[unlikely]] return; }
L_002BE678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_002BE6A0; } }
L_002BE680:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE69Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE69Cu) [[unlikely]] return; }
L_002BE69C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_002BE6A0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE6C0; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BE6C0u) [[unlikely]] return; }
L_002BE6C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BE6E4u) [[unlikely]] return; }
L_002BE6E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BE6F0u) [[unlikely]] return; }
L_002BE6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE6F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE6F8u) [[unlikely]] return; }
L_002BE6F8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BE734; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE71Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE71Cu) [[unlikely]] return; }
L_002BE71C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE734u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE734u) [[unlikely]] return; }
L_002BE734:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE764u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BE764u) [[unlikely]] return; }
L_002BE764:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE770u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BE770u) [[unlikely]] return; }
L_002BE770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE778u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE778u) [[unlikely]] return; }
L_002BE778:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BE89C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE790u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BE790u) [[unlikely]] return; }
L_002BE790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BE848; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 96u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7C4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BE7C4u) [[unlikely]] return; }
L_002BE7C4:
    set32(c.r[5], 0u + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BE7D0u) [[unlikely]] return; }
L_002BE7D0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BE7DCu) [[unlikely]] return; }
L_002BE7DC:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7E8u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BE7E8u) [[unlikely]] return; }
L_002BE7E8:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE7F4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BE7F4u) [[unlikely]] return; }
L_002BE7F4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE80Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE80Cu) [[unlikely]] return; }
L_002BE80C:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE82Cu); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BE82Cu) [[unlikely]] return; }
L_002BE82C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE83Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE83Cu) [[unlikely]] return; }
L_002BE83C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BE8AC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BE848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE850u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BE850u) [[unlikely]] return; }
L_002BE850:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002BE880; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE868u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BE868u) [[unlikely]] return; }
L_002BE868:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE874u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BE874u) [[unlikely]] return; }
L_002BE874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE8A8; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002BE880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE888u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE888u) [[unlikely]] return; }
L_002BE888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE890u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE890u) [[unlikely]] return; }
L_002BE890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE8A8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BE89C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8A8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE8A8u) [[unlikely]] return; }
L_002BE8A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BE8AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BE8C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BE91C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002BE904; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8ECu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BE8ECu) [[unlikely]] return; }
L_002BE8EC:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE8F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BE8F8u) [[unlikely]] return; }
L_002BE8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BE914; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002BE904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE90Cu);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BE90Cu) [[unlikely]] return; }
L_002BE90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE914u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BE914u) [[unlikely]] return; }
L_002BE914:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BEB08; } }
L_002BE91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE924u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BE924u) [[unlikely]] return; }
L_002BE924:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE930u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BE930u) [[unlikely]] return; }
L_002BE930:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002BE964; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002BE964; } }
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 7756u));
    set32(c.r[6], c.r[2].w[0] + 5u);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE964u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BE964u) [[unlikely]] return; }
L_002BE964:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE980; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BE980:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002BE9BC; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BE9B4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BE9B4u) [[unlikely]] return; }
L_002BE9B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB04; } }
L_002BE9BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BE9D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002BE9D8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BEA40; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEA3C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002BEA24; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BEA0Cu) [[unlikely]] return; }
L_002BEA0C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BEA18u) [[unlikely]] return; }
L_002BEA18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEA34; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002BEA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BEA2Cu) [[unlikely]] return; }
L_002BEA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BEA34u) [[unlikely]] return; }
L_002BEA34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB04; } }
L_002BEA3C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BEA40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA48u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BEA48u) [[unlikely]] return; }
L_002BEA48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BEA9C; } }
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BEA5Cu) [[unlikely]] return; }
L_002BEA5C:
    set32(c.r[5], 0u + 143u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BEA68u) [[unlikely]] return; }
L_002BEA68:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA74u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BEA74u) [[unlikely]] return; }
L_002BEA74:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA84u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BEA84u) [[unlikely]] return; }
L_002BEA84:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEA90u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BEA90u) [[unlikely]] return; }
L_002BEA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_002BEAF0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BEA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAA4u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BEAA4u) [[unlikely]] return; }
L_002BEAA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002BEAD4; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEABCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BEABCu) [[unlikely]] return; }
L_002BEABC:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BEAC8u) [[unlikely]] return; }
L_002BEAC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEAE4; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002BEAD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEADCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BEADCu) [[unlikely]] return; }
L_002BEADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEAE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BEAE4u) [[unlikely]] return; }
L_002BEAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEB04; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002BEAF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 5;
L_002BEB04:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BEB08:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEB20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BEB34u) [[unlikely]] return; }
L_002BEB34:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BEB40u) [[unlikely]] return; }
L_002BEB40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BEB48u) [[unlikely]] return; }
L_002BEB48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEB58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BEB58u) [[unlikely]] return; }
L_002BEB58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEB74; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BEB74:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BEBF0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BEBD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002BEBBC; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BEBA4u) [[unlikely]] return; }
L_002BEBA4:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BEBB0u) [[unlikely]] return; }
L_002BEBB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BEBF4; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002BEBBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BEBC4u) [[unlikely]] return; }
L_002BEBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BEBCCu) [[unlikely]] return; }
L_002BEBCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEBF0; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002BEBD8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEBF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BEBF0u) [[unlikely]] return; }
L_002BEBF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BEBF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEC00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27704u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BEC20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 12;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002BEC9C; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00400000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[2], c.r[2].w[0] - 15728u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8437u)));
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1580u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002BECE0; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002BEC9C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002BECB0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002BECE0; } }
L_002BECB0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8387u)));
    set32(c.r[2], c.r[2].w[0] + 5616u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 2u)));
    st16((c.r[16].w[0] + 1580u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 12;
L_002BECE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BED1C; } }
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED10u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BED10u) [[unlikely]] return; }
L_002BED10:
    set32(c.r[3], 0u + 129u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BED40; } }
L_002BED1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[6], 0u + 8u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BED40u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BED40u) [[unlikely]] return; }
L_002BED40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BED50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002BEDC0; } }
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_002BEDC4; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002BEDACu) [[unlikely]] return; }
L_002BEDAC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002BEDC0:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002BEDC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDCCu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BEDCCu) [[unlikely]] return; }
L_002BEDCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDDCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BEDDCu) [[unlikely]] return; }
L_002BEDDC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_002BEDF0; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 3;
L_002BEDF0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEDFCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BEDFCu) [[unlikely]] return; }
L_002BEDFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEE08; } }
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BEE08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BEEA8; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002BEE98; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BEE48u) [[unlikely]] return; }
L_002BEE48:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002BEE78; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 27312u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE64u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002BEE64u) [[unlikely]] return; }
L_002BEE64:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE70u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BEE70u) [[unlikely]] return; }
L_002BEE70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002BEEAC; } }
L_002BEE78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 27312u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEE8Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002BEE8Cu) [[unlikely]] return; }
L_002BEE8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BEEA8; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002BEE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEA0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BEEA0u) [[unlikely]] return; }
L_002BEEA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEA8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BEEA8u) [[unlikely]] return; }
L_002BEEA8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BEEAC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BEEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEED4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BEED4u) [[unlikely]] return; }
L_002BEED4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BEEE0u) [[unlikely]] return; }
L_002BEEE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BEEE8u) [[unlikely]] return; }
L_002BEEE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEEF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BEEF8u) [[unlikely]] return; }
L_002BEEF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BEF14; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BEF14:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BEF40; } }
    set32(c.r[2], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEF40u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BEF40u) [[unlikely]] return; }
L_002BEF40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BEF50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27720u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BEF70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27736u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BEF90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BEFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BEFF8; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BEFF0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BEFF0u) [[unlikely]] return; }
L_002BEFF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002BF01C; } }
L_002BEFF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF018u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF018u) [[unlikely]] return; }
L_002BF018:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF01C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BF030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF044u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BF044u) [[unlikely]] return; }
L_002BF044:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF07C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF064u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF064u) [[unlikely]] return; }
L_002BF064:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF07Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF07Cu) [[unlikely]] return; }
L_002BF07C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BF0A4u) [[unlikely]] return; }
L_002BF0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002BF16C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0C4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BF0C4u) [[unlikely]] return; }
L_002BF0C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF144; } }
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BF0D8u) [[unlikely]] return; }
L_002BF0D8:
    set32(c.r[5], 0u + 138u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002BF0E4u) [[unlikely]] return; }
L_002BF0E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0F0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BF0F0u) [[unlikely]] return; }
L_002BF0F0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF0FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BF0FCu) [[unlikely]] return; }
L_002BF0FC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF108u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF108u) [[unlikely]] return; }
L_002BF108:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF120u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF120u) [[unlikely]] return; }
L_002BF120:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF12Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002BF12Cu) [[unlikely]] return; }
L_002BF12C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF13Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BF13Cu) [[unlikely]] return; }
L_002BF13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF188; } }
L_002BF144:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF154u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BF154u) [[unlikely]] return; }
L_002BF154:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF160u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BF160u) [[unlikely]] return; }
L_002BF160:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF184; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002BF16C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002BF174u) [[unlikely]] return; }
L_002BF174:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF184u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BF184u) [[unlikely]] return; }
L_002BF184:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF188:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF1A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BF1B4u) [[unlikely]] return; }
L_002BF1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002BF1DC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1D0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BF1D0u) [[unlikely]] return; }
L_002BF1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF1EC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002BF1DC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF1E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x002BF1E8u) [[unlikely]] return; }
L_002BF1E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF1EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF214u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BF214u) [[unlikely]] return; }
L_002BF214:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF224u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BF224u) [[unlikely]] return; }
L_002BF224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF240; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BF240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF298; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002BF290; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF26Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF26Cu) [[unlikely]] return; }
L_002BF26C:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 2u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF284u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF284u) [[unlikely]] return; }
L_002BF284:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF29C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002BF290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF298u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BF298u) [[unlikely]] return; }
L_002BF298:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF29C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF2B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BF2D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BF31C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF314u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF314u) [[unlikely]] return; }
L_002BF314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF344; } }
L_002BF31C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF344u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF344u) [[unlikely]] return; }
L_002BF344:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF35Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BF35Cu) [[unlikely]] return; }
L_002BF35C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF384u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BF384u) [[unlikely]] return; }
L_002BF384:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BF390u) [[unlikely]] return; }
L_002BF390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF398u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF398u) [[unlikely]] return; }
L_002BF398:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF3EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3BCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF3BCu) [[unlikely]] return; }
L_002BF3BC:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF3D4u) [[unlikely]] return; }
L_002BF3D4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF3ECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BF3ECu) [[unlikely]] return; }
L_002BF3EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF414u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BF414u) [[unlikely]] return; }
L_002BF414:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF420u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BF420u) [[unlikely]] return; }
L_002BF420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF428u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF428u) [[unlikely]] return; }
L_002BF428:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BF4EC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF440u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BF440u) [[unlikely]] return; }
L_002BF440:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BF4C4; } }
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF454u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BF454u) [[unlikely]] return; }
L_002BF454:
    set32(c.r[5], 0u + 138u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF460u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002BF460u) [[unlikely]] return; }
L_002BF460:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF46Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BF46Cu) [[unlikely]] return; }
L_002BF46C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF478u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BF478u) [[unlikely]] return; }
L_002BF478:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF490u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF490u) [[unlikely]] return; }
L_002BF490:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4A8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF4A8u) [[unlikely]] return; }
L_002BF4A8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4B8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BF4B8u) [[unlikely]] return; }
L_002BF4B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF4E0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BF4C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4CCu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BF4CCu) [[unlikely]] return; }
L_002BF4CC:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BF4D8u) [[unlikely]] return; }
L_002BF4D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BF4E0u) [[unlikely]] return; }
L_002BF4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF4FC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BF4EC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF4F8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BF4F8u) [[unlikely]] return; }
L_002BF4F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF4FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF510:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF524u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF524u) [[unlikely]] return; }
L_002BF524:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF544; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF53Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BF53Cu) [[unlikely]] return; }
L_002BF53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF544u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BF544u) [[unlikely]] return; }
L_002BF544:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF560:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF574u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BF574u) [[unlikely]] return; }
L_002BF574:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF580u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BF580u) [[unlikely]] return; }
L_002BF580:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF588u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF588u) [[unlikely]] return; }
L_002BF588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF598u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BF598u) [[unlikely]] return; }
L_002BF598:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF5B4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BF5B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF62C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002BF61C; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF5E0u) [[unlikely]] return; }
L_002BF5E0:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF5F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF5F8u) [[unlikely]] return; }
L_002BF5F8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF610u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BF610u) [[unlikely]] return; }
L_002BF610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF630; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002BF61C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF624u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BF624u) [[unlikely]] return; }
L_002BF624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF62Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BF62Cu) [[unlikely]] return; }
L_002BF62C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF630:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BF684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF660u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BF660u) [[unlikely]] return; }
L_002BF660:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF66Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002BF66Cu) [[unlikely]] return; }
L_002BF66C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF684; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002BF684:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27824u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF6A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BF6A4u) [[unlikely]] return; }
L_002BF6A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF6C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BF70C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF704u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF704u) [[unlikely]] return; }
L_002BF704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_002BF730; } }
L_002BF70C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF72Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF72Cu) [[unlikely]] return; }
L_002BF72C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_002BF730:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF750; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF750u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BF750u) [[unlikely]] return; }
L_002BF750:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF760:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF774u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BF774u) [[unlikely]] return; }
L_002BF774:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF780u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BF780u) [[unlikely]] return; }
L_002BF780:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF788u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF788u) [[unlikely]] return; }
L_002BF788:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF7C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7ACu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF7ACu) [[unlikely]] return; }
L_002BF7AC:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF7C4u) [[unlikely]] return; }
L_002BF7C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF7E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF7F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BF7F4u) [[unlikely]] return; }
L_002BF7F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF800u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BF800u) [[unlikely]] return; }
L_002BF800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF808u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF808u) [[unlikely]] return; }
L_002BF808:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BF8F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF820u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BF820u) [[unlikely]] return; }
L_002BF820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BF8A4; } }
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF834u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BF834u) [[unlikely]] return; }
L_002BF834:
    set32(c.r[5], 0u + 138u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF840u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002BF840u) [[unlikely]] return; }
L_002BF840:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF84Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BF84Cu) [[unlikely]] return; }
L_002BF84C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF858u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BF858u) [[unlikely]] return; }
L_002BF858:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF870u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BF870u) [[unlikely]] return; }
L_002BF870:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF888u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BF888u) [[unlikely]] return; }
L_002BF888:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF898u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BF898u) [[unlikely]] return; }
L_002BF898:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF8EC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BF8A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8ACu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BF8ACu) [[unlikely]] return; }
L_002BF8AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002BF8DC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BF8C4u) [[unlikely]] return; }
L_002BF8C4:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BF8D0u) [[unlikely]] return; }
L_002BF8D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BF8EC; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002BF8DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BF8E4u) [[unlikely]] return; }
L_002BF8E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF8ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BF8ECu) [[unlikely]] return; }
L_002BF8EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF908; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BF8F8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF904u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002BF904u) [[unlikely]] return; }
L_002BF904:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF908:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF920:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF934u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF934u) [[unlikely]] return; }
L_002BF934:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BF980; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_002BF970; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF958u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BF958u) [[unlikely]] return; }
L_002BF958:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF964u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BF964u) [[unlikely]] return; }
L_002BF964:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BF984; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 1;
L_002BF970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF978u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BF978u) [[unlikely]] return; }
L_002BF978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF980u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BF980u) [[unlikely]] return; }
L_002BF980:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BF984:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BF990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BF9A4u) [[unlikely]] return; }
L_002BF9A4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BF9B0u) [[unlikely]] return; }
L_002BF9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BF9B8u) [[unlikely]] return; }
L_002BF9B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BF9C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BF9C8u) [[unlikely]] return; }
L_002BF9C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BF9E4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002BF9E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BFA70; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFA30; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BFA10u) [[unlikely]] return; }
L_002BFA10:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BFA28u) [[unlikely]] return; }
L_002BFA28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BFA74; } }
L_002BFA30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002BFA60; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BFA48u) [[unlikely]] return; }
L_002BFA48:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BFA54u) [[unlikely]] return; }
L_002BFA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFA70; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002BFA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BFA68u) [[unlikely]] return; }
L_002BFA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFA70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BFA70u) [[unlikely]] return; }
L_002BFA70:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BFA74:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BFA80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], c.r[28].w[0] - 28712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002BC000u < 16384u) { entry = entries_006F[(t - 0x002BC000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BFAA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], 0u - 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 4u);
    c.budget -= 10;
    { st8((c.r[4].w[0] + 737u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002BFAD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFAE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BFAE4u) [[unlikely]] return; }
L_002BFAE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFB24; } }
    st8((c.r[16].w[0] + 737u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 4u);  if (t) { goto L_002BFB0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_002BFB0C; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_002BFB0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BFB14u) [[unlikely]] return; }
L_002BFB14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BFB1Cu) [[unlikely]] return; }
L_002BFB1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BFB70; } }
L_002BFB24:
    c.f[0] = ld32((c.r[16].w[0] + 7904u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB44u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002BFB44u) [[unlikely]] return; }
L_002BFB44:
    st32((c.r[16].w[0] + 7904u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[16].w[0] + 7908u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFB68u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002BFB68u) [[unlikely]] return; }
L_002BFB68:
    st32((c.r[16].w[0] + 7908u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 2;
L_002BFB70:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BFB80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFB90:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_002BFBB8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 23u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BFBB8; } }
    set32(c.r[3], 0u + 129u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002BFBB8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BFBE8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BFBE8; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BFBE8; } }
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BFBE8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFBF0:
    st8((c.r[4].w[0] + 344u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BFC10; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BFC18; } }
L_002BFC10:
    st8((c.r[4].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002BFC18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BFC20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1580u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFC58; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 27264u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFC4Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002BFC4Cu) [[unlikely]] return; }
L_002BFC4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BFC58; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BFC58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFC70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BFC94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFD14; } }
L_002BFC94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFCA8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFD14; } }
L_002BFCA8:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BFCD0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFCCC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFD14; } }
L_002BFCCC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BFCD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCD8u);  if (depth < kMaxDepth) unit_006F(c, 593u, depth + 1u); else { c.pc = 0x002BFF90u; return; } if (c.pc != 0x002BFCD8u) [[unlikely]] return; }
L_002BFCD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BFCEC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BFD14; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BFCEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFCF4u);  if (depth < kMaxDepth) unit_006F(c, 590u, depth + 1u); else { c.pc = 0x002BFE50u; return; } if (c.pc != 0x002BFCF4u) [[unlikely]] return; }
L_002BFCF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BFD08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BFD14; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BFD08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFD10u);  if (depth < kMaxDepth) unit_006F(c, 587u, depth + 1u); else { c.pc = 0x002BFD30u; return; } if (c.pc != 0x002BFD10u) [[unlikely]] return; }
L_002BFD10:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_002BFD14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BFD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFD50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFE40; } }
L_002BFD50:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFDC4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8427u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BFDB0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFD8C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFD94; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BFD8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002BFE44; } }
L_002BFD94:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002BFE40; } }
L_002BFDB0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFDC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFE40; } }
L_002BFDC4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFDE8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_002BFE00; } }
L_002BFDE8:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BFE00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFE40; } }
L_002BFE00:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 27856u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8427u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002BFE38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE30u);  if (depth < kMaxDepth) unit_0070(c, 14u, depth + 1u); else { c.pc = 0x002C00B0u; return; } if (c.pc != 0x002BFE30u) [[unlikely]] return; }
L_002BFE30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFE40; } }
L_002BFE38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFE40u);  if (depth < kMaxDepth) unit_0070(c, 35u, depth + 1u); else { c.pc = 0x002C0470u; return; } if (c.pc != 0x002BFE40u) [[unlikely]] return; }
L_002BFE40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BFE44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFE70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFF7C; } }
L_002BFE70:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFEE8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8428u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BFED4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFEAC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 18ull;  if (t) { goto L_002BFEB8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BFEAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002BFF80; } }
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    c.budget -= 1;
L_002BFEB8:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_002BFF7C; } }
L_002BFED4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFEE8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFF7C; } }
L_002BFEE8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFF0C; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_002BFF24; } }
L_002BFF0C:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BFF28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFF7C; } }
L_002BFF24:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_002BFF28:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 27952u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8428u)));
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 2);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_002BFF74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF6Cu);  if (depth < kMaxDepth) unit_0070(c, 14u, depth + 1u); else { c.pc = 0x002C00B0u; return; } if (c.pc != 0x002BFF6Cu) [[unlikely]] return; }
L_002BFF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BFF7C; } }
L_002BFF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BFF7Cu);  if (depth < kMaxDepth) unit_0070(c, 35u, depth + 1u); else { c.pc = 0x002C0470u; return; } if (c.pc != 0x002BFF7Cu) [[unlikely]] return; }
L_002BFF7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BFF80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BFF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFFB0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { [[clang::musttail]] return unit_0070(c, 12u, depth); } }
L_002BFFB0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0070(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8429u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0070(c, 2u, depth); } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BFFEC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BFFF4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BFFEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_0070(c, 13u, depth); } }
L_002BFFF4:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    c.budget -= 3;
    [[clang::musttail]] return unit_0070(c, 1u, depth);
}

}
