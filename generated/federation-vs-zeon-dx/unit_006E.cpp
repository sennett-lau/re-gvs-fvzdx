#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_006E[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 10, 0, 0,
    11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0,
    17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0,
    29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0,
    35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0,
    0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0,
    0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0,
    0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0,
    122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161,
    0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0,
    0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0,
    0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0,
    232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0,
    0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0,
    312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0,
    0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0,
    347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0,
    0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0,
    0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0,
    386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0,
    0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0,
    0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0,
    423, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0,
    439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0,
    0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0,
    504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    509, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0,
    517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0,
    0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0,
    0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 555, 0,
    556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0,
    0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0,
    0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0,
    584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0,
    594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0,
    0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0,
    622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 644, 0,
    0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0,
    0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_006E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002B8000;
    case 2u: goto L_002B800C;
    case 3u: goto L_002B801C;
    case 4u: goto L_002B8028;
    case 5u: goto L_002B8034;
    case 6u: goto L_002B803C;
    case 7u: goto L_002B8048;
    case 8u: goto L_002B8050;
    case 9u: goto L_002B8070;
    case 10u: goto L_002B8074;
    case 11u: goto L_002B8080;
    case 12u: goto L_002B8094;
    case 13u: goto L_002B80A0;
    case 14u: goto L_002B80A8;
    case 15u: goto L_002B80B8;
    case 16u: goto L_002B80F8;
    case 17u: goto L_002B8100;
    case 18u: goto L_002B8124;
    case 19u: goto L_002B8140;
    case 20u: goto L_002B8160;
    case 21u: goto L_002B816C;
    case 22u: goto L_002B81A4;
    case 23u: goto L_002B81C0;
    case 24u: goto L_002B8200;
    case 25u: goto L_002B8228;
    case 26u: goto L_002B824C;
    case 27u: goto L_002B8260;
    case 28u: goto L_002B8274;
    case 29u: goto L_002B8280;
    case 30u: goto L_002B8288;
    case 31u: goto L_002B82AC;
    case 32u: goto L_002B82C4;
    case 33u: goto L_002B82E0;
    case 34u: goto L_002B82F4;
    case 35u: goto L_002B8300;
    case 36u: goto L_002B8308;
    case 37u: goto L_002B8320;
    case 38u: goto L_002B8354;
    case 39u: goto L_002B8360;
    case 40u: goto L_002B836C;
    case 41u: goto L_002B8378;
    case 42u: goto L_002B8384;
    case 43u: goto L_002B839C;
    case 44u: goto L_002B83BC;
    case 45u: goto L_002B83CC;
    case 46u: goto L_002B83E0;
    case 47u: goto L_002B83F8;
    case 48u: goto L_002B8404;
    case 49u: goto L_002B8418;
    case 50u: goto L_002B8420;
    case 51u: goto L_002B8438;
    case 52u: goto L_002B8450;
    case 53u: goto L_002B847C;
    case 54u: goto L_002B8488;
    case 55u: goto L_002B849C;
    case 56u: goto L_002B84A4;
    case 57u: goto L_002B84B4;
    case 58u: goto L_002B84C0;
    case 59u: goto L_002B84F4;
    case 60u: goto L_002B8544;
    case 61u: goto L_002B859C;
    case 62u: goto L_002B85A8;
    case 63u: goto L_002B85BC;
    case 64u: goto L_002B85C4;
    case 65u: goto L_002B85D8;
    case 66u: goto L_002B85EC;
    case 67u: goto L_002B85F8;
    case 68u: goto L_002B8604;
    case 69u: goto L_002B8614;
    case 70u: goto L_002B8620;
    case 71u: goto L_002B8634;
    case 72u: goto L_002B864C;
    case 73u: goto L_002B8658;
    case 74u: goto L_002B866C;
    case 75u: goto L_002B8674;
    case 76u: goto L_002B86B0;
    case 77u: goto L_002B86C4;
    case 78u: goto L_002B86D0;
    case 79u: goto L_002B86D8;
    case 80u: goto L_002B86E8;
    case 81u: goto L_002B8734;
    case 82u: goto L_002B8740;
    case 83u: goto L_002B8754;
    case 84u: goto L_002B875C;
    case 85u: goto L_002B8780;
    case 86u: goto L_002B8790;
    case 87u: goto L_002B87B0;
    case 88u: goto L_002B88A0;
    case 89u: goto L_002B88D0;
    case 90u: goto L_002B88E0;
    case 91u: goto L_002B893C;
    case 92u: goto L_002B895C;
    case 93u: goto L_002B896C;
    case 94u: goto L_002B898C;
    case 95u: goto L_002B89D8;
    case 96u: goto L_002B89F4;
    case 97u: goto L_002B8A00;
    case 98u: goto L_002B8A1C;
    case 99u: goto L_002B8A30;
    case 100u: goto L_002B8A38;
    case 101u: goto L_002B8A50;
    case 102u: goto L_002B8A64;
    case 103u: goto L_002B8A70;
    case 104u: goto L_002B8A78;
    case 105u: goto L_002B8A88;
    case 106u: goto L_002B8AD0;
    case 107u: goto L_002B8AE0;
    case 108u: goto L_002B8B00;
    case 109u: goto L_002B8B20;
    case 110u: goto L_002B8B40;
    case 111u: goto L_002B8B80;
    case 112u: goto L_002B8BA8;
    case 113u: goto L_002B8BC0;
    case 114u: goto L_002B8BD4;
    case 115u: goto L_002B8BF4;
    case 116u: goto L_002B8C0C;
    case 117u: goto L_002B8C20;
    case 118u: goto L_002B8C34;
    case 119u: goto L_002B8C54;
    case 120u: goto L_002B8C68;
    case 121u: goto L_002B8C74;
    case 122u: goto L_002B8C80;
    case 123u: goto L_002B8C8C;
    case 124u: goto L_002B8C98;
    case 125u: goto L_002B8CB0;
    case 126u: goto L_002B8CBC;
    case 127u: goto L_002B8CCC;
    case 128u: goto L_002B8CE4;
    case 129u: goto L_002B8CF0;
    case 130u: goto L_002B8D04;
    case 131u: goto L_002B8D14;
    case 132u: goto L_002B8D30;
    case 133u: goto L_002B8D44;
    case 134u: goto L_002B8D60;
    case 135u: goto L_002B8D78;
    case 136u: goto L_002B8D90;
    case 137u: goto L_002B8DA4;
    case 138u: goto L_002B8DB4;
    case 139u: goto L_002B8DFC;
    case 140u: goto L_002B8E14;
    case 141u: goto L_002B8E28;
    case 142u: goto L_002B8E40;
    case 143u: goto L_002B8E60;
    case 144u: goto L_002B8EA4;
    case 145u: goto L_002B8ED4;
    case 146u: goto L_002B8EEC;
    case 147u: goto L_002B8F00;
    case 148u: goto L_002B8F14;
    case 149u: goto L_002B8F20;
    case 150u: goto L_002B8F28;
    case 151u: goto L_002B8F4C;
    case 152u: goto L_002B8F64;
    case 153u: goto L_002B8F7C;
    case 154u: goto L_002B8F90;
    case 155u: goto L_002B8FA4;
    case 156u: goto L_002B8FB0;
    case 157u: goto L_002B8FB8;
    case 158u: goto L_002B8FD0;
    case 159u: goto L_002B8FE4;
    case 160u: goto L_002B8FF0;
    case 161u: goto L_002B8FFC;
    case 162u: goto L_002B9008;
    case 163u: goto L_002B9020;
    case 164u: goto L_002B9038;
    case 165u: goto L_002B9048;
    case 166u: goto L_002B905C;
    case 167u: goto L_002B9068;
    case 168u: goto L_002B9070;
    case 169u: goto L_002B9088;
    case 170u: goto L_002B90A0;
    case 171u: goto L_002B90B4;
    case 172u: goto L_002B90CC;
    case 173u: goto L_002B90D4;
    case 174u: goto L_002B90F0;
    case 175u: goto L_002B9104;
    case 176u: goto L_002B9110;
    case 177u: goto L_002B9118;
    case 178u: goto L_002B9128;
    case 179u: goto L_002B9170;
    case 180u: goto L_002B9188;
    case 181u: goto L_002B91A0;
    case 182u: goto L_002B91B4;
    case 183u: goto L_002B91BC;
    case 184u: goto L_002B91D0;
    case 185u: goto L_002B91F0;
    case 186u: goto L_002B91FC;
    case 187u: goto L_002B9234;
    case 188u: goto L_002B9250;
    case 189u: goto L_002B9294;
    case 190u: goto L_002B92BC;
    case 191u: goto L_002B92E0;
    case 192u: goto L_002B92F0;
    case 193u: goto L_002B9304;
    case 194u: goto L_002B9310;
    case 195u: goto L_002B9318;
    case 196u: goto L_002B933C;
    case 197u: goto L_002B9354;
    case 198u: goto L_002B9370;
    case 199u: goto L_002B9384;
    case 200u: goto L_002B9390;
    case 201u: goto L_002B9398;
    case 202u: goto L_002B93B0;
    case 203u: goto L_002B93C4;
    case 204u: goto L_002B93D0;
    case 205u: goto L_002B93DC;
    case 206u: goto L_002B93E8;
    case 207u: goto L_002B9400;
    case 208u: goto L_002B9418;
    case 209u: goto L_002B9428;
    case 210u: goto L_002B943C;
    case 211u: goto L_002B9454;
    case 212u: goto L_002B9460;
    case 213u: goto L_002B9474;
    case 214u: goto L_002B947C;
    case 215u: goto L_002B9494;
    case 216u: goto L_002B94B0;
    case 217u: goto L_002B94C4;
    case 218u: goto L_002B94E8;
    case 219u: goto L_002B94F4;
    case 220u: goto L_002B9508;
    case 221u: goto L_002B9510;
    case 222u: goto L_002B9520;
    case 223u: goto L_002B9534;
    case 224u: goto L_002B9540;
    case 225u: goto L_002B9548;
    case 226u: goto L_002B9558;
    case 227u: goto L_002B95A0;
    case 228u: goto L_002B95B8;
    case 229u: goto L_002B95D8;
    case 230u: goto L_002B95E4;
    case 231u: goto L_002B95F8;
    case 232u: goto L_002B9600;
    case 233u: goto L_002B9610;
    case 234u: goto L_002B9630;
    case 235u: goto L_002B9650;
    case 236u: goto L_002B9670;
    case 237u: goto L_002B96B4;
    case 238u: goto L_002B96D8;
    case 239u: goto L_002B96F0;
    case 240u: goto L_002B9704;
    case 241u: goto L_002B9724;
    case 242u: goto L_002B973C;
    case 243u: goto L_002B9750;
    case 244u: goto L_002B9764;
    case 245u: goto L_002B9784;
    case 246u: goto L_002B9798;
    case 247u: goto L_002B97A4;
    case 248u: goto L_002B97B0;
    case 249u: goto L_002B97BC;
    case 250u: goto L_002B97C8;
    case 251u: goto L_002B97D4;
    case 252u: goto L_002B97EC;
    case 253u: goto L_002B97F8;
    case 254u: goto L_002B9808;
    case 255u: goto L_002B9820;
    case 256u: goto L_002B982C;
    case 257u: goto L_002B9840;
    case 258u: goto L_002B9850;
    case 259u: goto L_002B9860;
    case 260u: goto L_002B9874;
    case 261u: goto L_002B9890;
    case 262u: goto L_002B98A8;
    case 263u: goto L_002B98C0;
    case 264u: goto L_002B98D4;
    case 265u: goto L_002B98E4;
    case 266u: goto L_002B9928;
    case 267u: goto L_002B9940;
    case 268u: goto L_002B9954;
    case 269u: goto L_002B995C;
    case 270u: goto L_002B9970;
    case 271u: goto L_002B9990;
    case 272u: goto L_002B99D4;
    case 273u: goto L_002B99EC;
    case 274u: goto L_002B9A18;
    case 275u: goto L_002B9A30;
    case 276u: goto L_002B9A40;
    case 277u: goto L_002B9A54;
    case 278u: goto L_002B9A5C;
    case 279u: goto L_002B9A68;
    case 280u: goto L_002B9A8C;
    case 281u: goto L_002B9AA4;
    case 282u: goto L_002B9ABC;
    case 283u: goto L_002B9AD0;
    case 284u: goto L_002B9AE4;
    case 285u: goto L_002B9AF0;
    case 286u: goto L_002B9AF8;
    case 287u: goto L_002B9B10;
    case 288u: goto L_002B9B24;
    case 289u: goto L_002B9B30;
    case 290u: goto L_002B9B3C;
    case 291u: goto L_002B9B48;
    case 292u: goto L_002B9B54;
    case 293u: goto L_002B9B6C;
    case 294u: goto L_002B9B84;
    case 295u: goto L_002B9B94;
    case 296u: goto L_002B9BA8;
    case 297u: goto L_002B9BB4;
    case 298u: goto L_002B9BBC;
    case 299u: goto L_002B9BD4;
    case 300u: goto L_002B9BF0;
    case 301u: goto L_002B9C04;
    case 302u: goto L_002B9C1C;
    case 303u: goto L_002B9C24;
    case 304u: goto L_002B9C40;
    case 305u: goto L_002B9C54;
    case 306u: goto L_002B9C60;
    case 307u: goto L_002B9C68;
    case 308u: goto L_002B9C78;
    case 309u: goto L_002B9CBC;
    case 310u: goto L_002B9CD4;
    case 311u: goto L_002B9CEC;
    case 312u: goto L_002B9D00;
    case 313u: goto L_002B9D08;
    case 314u: goto L_002B9D20;
    case 315u: goto L_002B9D40;
    case 316u: goto L_002B9D4C;
    case 317u: goto L_002B9D84;
    case 318u: goto L_002B9DA0;
    case 319u: goto L_002B9DE8;
    case 320u: goto L_002B9E0C;
    case 321u: goto L_002B9E30;
    case 322u: goto L_002B9E40;
    case 323u: goto L_002B9E54;
    case 324u: goto L_002B9E60;
    case 325u: goto L_002B9E68;
    case 326u: goto L_002B9E8C;
    case 327u: goto L_002B9EA4;
    case 328u: goto L_002B9EC0;
    case 329u: goto L_002B9ED4;
    case 330u: goto L_002B9EE0;
    case 331u: goto L_002B9EE8;
    case 332u: goto L_002B9F00;
    case 333u: goto L_002B9F14;
    case 334u: goto L_002B9F20;
    case 335u: goto L_002B9F2C;
    case 336u: goto L_002B9F38;
    case 337u: goto L_002B9F44;
    case 338u: goto L_002B9F5C;
    case 339u: goto L_002B9F74;
    case 340u: goto L_002B9F84;
    case 341u: goto L_002B9F98;
    case 342u: goto L_002B9FB0;
    case 343u: goto L_002B9FBC;
    case 344u: goto L_002B9FD0;
    case 345u: goto L_002B9FD8;
    case 346u: goto L_002B9FF0;
    case 347u: goto L_002BA000;
    case 348u: goto L_002BA014;
    case 349u: goto L_002BA038;
    case 350u: goto L_002BA044;
    case 351u: goto L_002BA058;
    case 352u: goto L_002BA060;
    case 353u: goto L_002BA070;
    case 354u: goto L_002BA084;
    case 355u: goto L_002BA090;
    case 356u: goto L_002BA098;
    case 357u: goto L_002BA0A8;
    case 358u: goto L_002BA0EC;
    case 359u: goto L_002BA104;
    case 360u: goto L_002BA124;
    case 361u: goto L_002BA130;
    case 362u: goto L_002BA144;
    case 363u: goto L_002BA14C;
    case 364u: goto L_002BA160;
    case 365u: goto L_002BA180;
    case 366u: goto L_002BA1A0;
    case 367u: goto L_002BA1C0;
    case 368u: goto L_002BA210;
    case 369u: goto L_002BA234;
    case 370u: goto L_002BA240;
    case 371u: goto L_002BA254;
    case 372u: goto L_002BA260;
    case 373u: goto L_002BA268;
    case 374u: goto L_002BA298;
    case 375u: goto L_002BA2BC;
    case 376u: goto L_002BA2D4;
    case 377u: goto L_002BA2DC;
    case 378u: goto L_002BA2F0;
    case 379u: goto L_002BA304;
    case 380u: goto L_002BA310;
    case 381u: goto L_002BA33C;
    case 382u: goto L_002BA350;
    case 383u: goto L_002BA35C;
    case 384u: goto L_002BA368;
    case 385u: goto L_002BA374;
    case 386u: goto L_002BA380;
    case 387u: goto L_002BA394;
    case 388u: goto L_002BA3AC;
    case 389u: goto L_002BA3C0;
    case 390u: goto L_002BA3CC;
    case 391u: goto L_002BA3D4;
    case 392u: goto L_002BA3E4;
    case 393u: goto L_002BA400;
    case 394u: goto L_002BA418;
    case 395u: goto L_002BA420;
    case 396u: goto L_002BA448;
    case 397u: goto L_002BA470;
    case 398u: goto L_002BA484;
    case 399u: goto L_002BA4A8;
    case 400u: goto L_002BA4D0;
    case 401u: goto L_002BA4E4;
    case 402u: goto L_002BA4F0;
    case 403u: goto L_002BA4F8;
    case 404u: goto L_002BA508;
    case 405u: goto L_002BA544;
    case 406u: goto L_002BA54C;
    case 407u: goto L_002BA570;
    case 408u: goto L_002BA580;
    case 409u: goto L_002BA5B4;
    case 410u: goto L_002BA5BC;
    case 411u: goto L_002BA5D0;
    case 412u: goto L_002BA5E0;
    case 413u: goto L_002BA610;
    case 414u: goto L_002BA61C;
    case 415u: goto L_002BA654;
    case 416u: goto L_002BA670;
    case 417u: goto L_002BA6C0;
    case 418u: goto L_002BA6D8;
    case 419u: goto L_002BA704;
    case 420u: goto L_002BA720;
    case 421u: goto L_002BA750;
    case 422u: goto L_002BA76C;
    case 423u: goto L_002BA780;
    case 424u: goto L_002BA794;
    case 425u: goto L_002BA7A0;
    case 426u: goto L_002BA7A8;
    case 427u: goto L_002BA7B8;
    case 428u: goto L_002BA800;
    case 429u: goto L_002BA80C;
    case 430u: goto L_002BA820;
    case 431u: goto L_002BA828;
    case 432u: goto L_002BA860;
    case 433u: goto L_002BA888;
    case 434u: goto L_002BA8A0;
    case 435u: goto L_002BA8B4;
    case 436u: goto L_002BA8C0;
    case 437u: goto L_002BA8C8;
    case 438u: goto L_002BA8F0;
    case 439u: goto L_002BA900;
    case 440u: goto L_002BA914;
    case 441u: goto L_002BA920;
    case 442u: goto L_002BA94C;
    case 443u: goto L_002BA960;
    case 444u: goto L_002BA96C;
    case 445u: goto L_002BA978;
    case 446u: goto L_002BA984;
    case 447u: goto L_002BA990;
    case 448u: goto L_002BA998;
    case 449u: goto L_002BA9BC;
    case 450u: goto L_002BA9DC;
    case 451u: goto L_002BAA00;
    case 452u: goto L_002BAA0C;
    case 453u: goto L_002BAA30;
    case 454u: goto L_002BAA48;
    case 455u: goto L_002BAA54;
    case 456u: goto L_002BAA68;
    case 457u: goto L_002BAA70;
    case 458u: goto L_002BAA80;
    case 459u: goto L_002BAA90;
    case 460u: goto L_002BAABC;
    case 461u: goto L_002BAAC8;
    case 462u: goto L_002BAB04;
    case 463u: goto L_002BAB24;
    case 464u: goto L_002BAB40;
    case 465u: goto L_002BAB60;
    case 466u: goto L_002BAB6C;
    case 467u: goto L_002BAB90;
    case 468u: goto L_002BABB0;
    case 469u: goto L_002BABBC;
    case 470u: goto L_002BABD0;
    case 471u: goto L_002BABD8;
    case 472u: goto L_002BABF0;
    case 473u: goto L_002BAC10;
    case 474u: goto L_002BAC30;
    case 475u: goto L_002BAC78;
    case 476u: goto L_002BACA8;
    case 477u: goto L_002BACC0;
    case 478u: goto L_002BACD4;
    case 479u: goto L_002BACDC;
    case 480u: goto L_002BACF8;
    case 481u: goto L_002BAD34;
    case 482u: goto L_002BAD48;
    case 483u: goto L_002BAD58;
    case 484u: goto L_002BAD70;
    case 485u: goto L_002BAD84;
    case 486u: goto L_002BAD90;
    case 487u: goto L_002BAD98;
    case 488u: goto L_002BADB0;
    case 489u: goto L_002BADC4;
    case 490u: goto L_002BADD4;
    case 491u: goto L_002BADEC;
    case 492u: goto L_002BADF4;
    case 493u: goto L_002BAE1C;
    case 494u: goto L_002BAE24;
    case 495u: goto L_002BAE38;
    case 496u: goto L_002BAE4C;
    case 497u: goto L_002BAE5C;
    case 498u: goto L_002BAE70;
    case 499u: goto L_002BAE98;
    case 500u: goto L_002BAEB4;
    case 501u: goto L_002BAEC0;
    case 502u: goto L_002BAEC8;
    case 503u: goto L_002BAEEC;
    case 504u: goto L_002BAF00;
    case 505u: goto L_002BAF10;
    case 506u: goto L_002BAF1C;
    case 507u: goto L_002BAF3C;
    case 508u: goto L_002BAF68;
    case 509u: goto L_002BAF80;
    case 510u: goto L_002BAF90;
    case 511u: goto L_002BAF9C;
    case 512u: goto L_002BAFB0;
    case 513u: goto L_002BAFC0;
    case 514u: goto L_002BAFD0;
    case 515u: goto L_002BAFE4;
    case 516u: goto L_002BAFF8;
    case 517u: goto L_002BB000;
    case 518u: goto L_002BB010;
    case 519u: goto L_002BB024;
    case 520u: goto L_002BB030;
    case 521u: goto L_002BB038;
    case 522u: goto L_002BB048;
    case 523u: goto L_002BB09C;
    case 524u: goto L_002BB0B0;
    case 525u: goto L_002BB0B8;
    case 526u: goto L_002BB0D0;
    case 527u: goto L_002BB0F0;
    case 528u: goto L_002BB0FC;
    case 529u: goto L_002BB134;
    case 530u: goto L_002BB150;
    case 531u: goto L_002BB1A0;
    case 532u: goto L_002BB1B8;
    case 533u: goto L_002BB1D0;
    case 534u: goto L_002BB20C;
    case 535u: goto L_002BB228;
    case 536u: goto L_002BB240;
    case 537u: goto L_002BB254;
    case 538u: goto L_002BB25C;
    case 539u: goto L_002BB278;
    case 540u: goto L_002BB2B4;
    case 541u: goto L_002BB2C8;
    case 542u: goto L_002BB2D8;
    case 543u: goto L_002BB2F0;
    case 544u: goto L_002BB304;
    case 545u: goto L_002BB310;
    case 546u: goto L_002BB318;
    case 547u: goto L_002BB330;
    case 548u: goto L_002BB344;
    case 549u: goto L_002BB354;
    case 550u: goto L_002BB378;
    case 551u: goto L_002BB398;
    case 552u: goto L_002BB3A4;
    case 553u: goto L_002BB3D8;
    case 554u: goto L_002BB3E4;
    case 555u: goto L_002BB3F8;
    case 556u: goto L_002BB400;
    case 557u: goto L_002BB414;
    case 558u: goto L_002BB428;
    case 559u: goto L_002BB438;
    case 560u: goto L_002BB450;
    case 561u: goto L_002BB478;
    case 562u: goto L_002BB494;
    case 563u: goto L_002BB4A0;
    case 564u: goto L_002BB4A8;
    case 565u: goto L_002BB4CC;
    case 566u: goto L_002BB4E0;
    case 567u: goto L_002BB4F0;
    case 568u: goto L_002BB4FC;
    case 569u: goto L_002BB528;
    case 570u: goto L_002BB548;
    case 571u: goto L_002BB580;
    case 572u: goto L_002BB5A0;
    case 573u: goto L_002BB5B8;
    case 574u: goto L_002BB5C8;
    case 575u: goto L_002BB5D4;
    case 576u: goto L_002BB5E8;
    case 577u: goto L_002BB5F8;
    case 578u: goto L_002BB610;
    case 579u: goto L_002BB624;
    case 580u: goto L_002BB644;
    case 581u: goto L_002BB650;
    case 582u: goto L_002BB664;
    case 583u: goto L_002BB66C;
    case 584u: goto L_002BB680;
    case 585u: goto L_002BB694;
    case 586u: goto L_002BB6A0;
    case 587u: goto L_002BB6A8;
    case 588u: goto L_002BB6B8;
    case 589u: goto L_002BB71C;
    case 590u: goto L_002BB738;
    case 591u: goto L_002BB758;
    case 592u: goto L_002BB764;
    case 593u: goto L_002BB778;
    case 594u: goto L_002BB780;
    case 595u: goto L_002BB790;
    case 596u: goto L_002BB7C0;
    case 597u: goto L_002BB800;
    case 598u: goto L_002BB81C;
    case 599u: goto L_002BB82C;
    case 600u: goto L_002BB890;
    case 601u: goto L_002BB8AC;
    case 602u: goto L_002BB8BC;
    case 603u: goto L_002BB924;
    case 604u: goto L_002BB938;
    case 605u: goto L_002BB944;
    case 606u: goto L_002BB950;
    case 607u: goto L_002BB95C;
    case 608u: goto L_002BB968;
    case 609u: goto L_002BB974;
    case 610u: goto L_002BB9B8;
    case 611u: goto L_002BB9CC;
    case 612u: goto L_002BB9D8;
    case 613u: goto L_002BB9F0;
    case 614u: goto L_002BBA40;
    case 615u: goto L_002BBA58;
    case 616u: goto L_002BBA6C;
    case 617u: goto L_002BBA84;
    case 618u: goto L_002BBA90;
    case 619u: goto L_002BBAA0;
    case 620u: goto L_002BBAC0;
    case 621u: goto L_002BBAE0;
    case 622u: goto L_002BBB00;
    case 623u: goto L_002BBB24;
    case 624u: goto L_002BBB2C;
    case 625u: goto L_002BBB48;
    case 626u: goto L_002BBB8C;
    case 627u: goto L_002BBBA0;
    case 628u: goto L_002BBBC4;
    case 629u: goto L_002BBBCC;
    case 630u: goto L_002BBBD8;
    case 631u: goto L_002BBC04;
    case 632u: goto L_002BBC1C;
    case 633u: goto L_002BBC28;
    case 634u: goto L_002BBC34;
    case 635u: goto L_002BBC40;
    case 636u: goto L_002BBC4C;
    case 637u: goto L_002BBC58;
    case 638u: goto L_002BBC80;
    case 639u: goto L_002BBC98;
    case 640u: goto L_002BBCBC;
    case 641u: goto L_002BBCC8;
    case 642u: goto L_002BBCD0;
    case 643u: goto L_002BBCE8;
    case 644u: goto L_002BBCF8;
    case 645u: goto L_002BBD10;
    case 646u: goto L_002BBD3C;
    case 647u: goto L_002BBD48;
    case 648u: goto L_002BBD6C;
    case 649u: goto L_002BBD78;
    case 650u: goto L_002BBD90;
    case 651u: goto L_002BBDA0;
    case 652u: goto L_002BBDB0;
    case 653u: goto L_002BBE10;
    case 654u: goto L_002BBE40;
    case 655u: goto L_002BBE6C;
    case 656u: goto L_002BBE90;
    case 657u: goto L_002BBF38;
    case 658u: goto L_002BBFBC;
    default: bad_entry(c, 0x002B8000u); return;
    }
L_002B8000:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B800Cu); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002B800Cu) [[unlikely]] return; }
L_002B800C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B801Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B801Cu) [[unlikely]] return; }
L_002B801C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8028u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B8028u) [[unlikely]] return; }
L_002B8028:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_002B805C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B8034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B803Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B803Cu) [[unlikely]] return; }
L_002B803C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8048u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B8048u) [[unlikely]] return; }
L_002B8048:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8050u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B8050u) [[unlikely]] return; }
L_002B8050:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8070; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002B805C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 5;
L_002B8070:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8074:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8094u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B8094u) [[unlikely]] return; }
L_002B8094:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002B80A0u) [[unlikely]] return; }
L_002B80A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B80A8u) [[unlikely]] return; }
L_002B80A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B80B8u) [[unlikely]] return; }
L_002B80B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B80D4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B80D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8124; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002B810C; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B80F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B80F8u) [[unlikely]] return; }
L_002B80F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8100u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B8100u) [[unlikely]] return; }
L_002B8100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B8128; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002B810C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8124u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8124u) [[unlikely]] return; }
L_002B8124:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8128:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B8184; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8160u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002B8160u) [[unlikely]] return; }
L_002B8160:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B816Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002B816Cu) [[unlikely]] return; }
L_002B816C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8184; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002B8184:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26672u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B81A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B81A4u) [[unlikely]] return; }
L_002B81A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B81C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B820C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8200u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8200u) [[unlikely]] return; }
L_002B8200:
    set32(c.r[3], 0u + 129u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B8228; } }
L_002B820C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8228u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8228u) [[unlikely]] return; }
L_002B8228:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B824C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B824Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B824Cu) [[unlikely]] return; }
L_002B824C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8274u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B8274u) [[unlikely]] return; }
L_002B8274:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8280u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B8280u) [[unlikely]] return; }
L_002B8280:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8288u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B8288u) [[unlikely]] return; }
L_002B8288:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B82C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82ACu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B82ACu) [[unlikely]] return; }
L_002B82AC:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B82C4u) [[unlikely]] return; }
L_002B82C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B82E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B82F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B82F4u) [[unlikely]] return; }
L_002B82F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8300u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B8300u) [[unlikely]] return; }
L_002B8300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8308u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B8308u) [[unlikely]] return; }
L_002B8308:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B842C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8320u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B8320u) [[unlikely]] return; }
L_002B8320:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B83D8; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8354u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B8354u) [[unlikely]] return; }
L_002B8354:
    set32(c.r[5], 0u + 142u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8360u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002B8360u) [[unlikely]] return; }
L_002B8360:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B836Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B836Cu) [[unlikely]] return; }
L_002B836C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8378u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002B8378u) [[unlikely]] return; }
L_002B8378:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8384u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B8384u) [[unlikely]] return; }
L_002B8384:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B839Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B839Cu) [[unlikely]] return; }
L_002B839C:
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83BCu); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B83BCu) [[unlikely]] return; }
L_002B83BC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83CCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B83CCu) [[unlikely]] return; }
L_002B83CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B843C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B83D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83E0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B83E0u) [[unlikely]] return; }
L_002B83E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002B8410; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B83F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B83F8u) [[unlikely]] return; }
L_002B83F8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8404u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B8404u) [[unlikely]] return; }
L_002B8404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8438; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002B8410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8418u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B8418u) [[unlikely]] return; }
L_002B8418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8420u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B8420u) [[unlikely]] return; }
L_002B8420:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8438; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002B842C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8438u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B8438u) [[unlikely]] return; }
L_002B8438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B843C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B84AC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002B8494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B847Cu); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B847Cu) [[unlikely]] return; }
L_002B847C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8488u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B8488u) [[unlikely]] return; }
L_002B8488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B84A4; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002B8494:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B849Cu);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B849Cu) [[unlikely]] return; }
L_002B849C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B84A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B84A4u) [[unlikely]] return; }
L_002B84A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B8698; } }
L_002B84AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B84B4u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B84B4u) [[unlikely]] return; }
L_002B84B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B84C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B84C0u) [[unlikely]] return; }
L_002B84C0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_002B84F4; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002B84F4; } }
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[12] = ld32((c.r[16].w[0] + 7756u));
    set32(c.r[6], c.r[2].w[0] + 5u);
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B84F4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002B84F4u) [[unlikely]] return; }
L_002B84F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8510; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B8510:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002B854C; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8544u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B8544u) [[unlikely]] return; }
L_002B8544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8694; } }
L_002B854C:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8568; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002B8568:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B85D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B85CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002B85B4; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B859Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B859Cu) [[unlikely]] return; }
L_002B859C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B85A8u) [[unlikely]] return; }
L_002B85A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B85C4; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002B85B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B85BCu) [[unlikely]] return; }
L_002B85BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B85C4u) [[unlikely]] return; }
L_002B85C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8694; } }
L_002B85CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B85D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B85D8u) [[unlikely]] return; }
L_002B85D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B862C; } }
    set32(c.r[5], 0u + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B85ECu) [[unlikely]] return; }
L_002B85EC:
    set32(c.r[5], 0u + 142u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B85F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002B85F8u) [[unlikely]] return; }
L_002B85F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8604u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002B8604u) [[unlikely]] return; }
L_002B8604:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8614u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B8614u) [[unlikely]] return; }
L_002B8614:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8620u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B8620u) [[unlikely]] return; }
L_002B8620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (t) { goto L_002B8680; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B862C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8634u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B8634u) [[unlikely]] return; }
L_002B8634:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002B8664; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B864Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B864Cu) [[unlikely]] return; }
L_002B864C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8658u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B8658u) [[unlikely]] return; }
L_002B8658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8674; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002B8664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B866Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B866Cu) [[unlikely]] return; }
L_002B866C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8674u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B8674u) [[unlikely]] return; }
L_002B8674:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8694; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 1;
L_002B8680:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 5;
L_002B8694:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8698:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B86B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B86C4u) [[unlikely]] return; }
L_002B86C4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B86D0u) [[unlikely]] return; }
L_002B86D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B86D8u) [[unlikely]] return; }
L_002B86D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B86E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B86E8u) [[unlikely]] return; }
L_002B86E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8704; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B8704:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8780; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002B8768; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002B874C; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8734u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B8734u) [[unlikely]] return; }
L_002B8734:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8740u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B8740u) [[unlikely]] return; }
L_002B8740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B8784; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002B874C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8754u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B8754u) [[unlikely]] return; }
L_002B8754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B875Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B875Cu) [[unlikely]] return; }
L_002B875C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8780; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002B8768:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8780u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8780u) [[unlikely]] return; }
L_002B8780:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8784:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26696u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B87B0:
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
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_002B882C; } }
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
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 1580u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_002B8870; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002B882C:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_002B8840; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1576u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_002B8870; } }
L_002B8840:
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
L_002B8870:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B88AC; } }
    set32(c.r[2], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88A0u); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002B88A0u) [[unlikely]] return; }
L_002B88A0:
    set32(c.r[3], 0u + 129u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002B88D0; } }
L_002B88AC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[6], 0u + 8u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B88D0u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002B88D0u) [[unlikely]] return; }
L_002B88D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B88E0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_002B8950; } }
    c.f[1] = ld32((c.r[17].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    if ((c.fcr31 & kFpuCondition) != 0) { mmi::paddub(c.r[4], c.r[17], c.r[0]);  goto L_002B8954; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[12] = 0u;
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B893Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002B893Cu) [[unlikely]] return; }
L_002B893C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002B8950:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002B8954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B895Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B895Cu) [[unlikely]] return; }
L_002B895C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40E00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B896Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B896Cu) [[unlikely]] return; }
L_002B896C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);  if (t) { goto L_002B8980; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C80000u);
    c.budget -= 3;
L_002B8980:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B898Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B898Cu) [[unlikely]] return; }
L_002B898C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8998; } }
    st8((c.r[16].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002B8998:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8A38; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 512ull;
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 8u);  if (t) { goto L_002B8A28; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[17].w[0] + 804u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B89D8u) [[unlikely]] return; }
L_002B89D8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_002B8A08; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 26224u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B89F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002B89F4u) [[unlikely]] return; }
L_002B89F4:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A00u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B8A00u) [[unlikely]] return; }
L_002B8A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002B8A3C; } }
L_002B8A08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 26224u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002B8A1Cu) [[unlikely]] return; }
L_002B8A1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8A38; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_002B8A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A30u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B8A30u) [[unlikely]] return; }
L_002B8A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A38u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B8A38u) [[unlikely]] return; }
L_002B8A38:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8A3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002B8A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B8A64u) [[unlikely]] return; }
L_002B8A64:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002B8A70u) [[unlikely]] return; }
L_002B8A70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B8A78u) [[unlikely]] return; }
L_002B8A78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8A88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B8A88u) [[unlikely]] return; }
L_002B8A88:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8AA4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B8AA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8AD0; } }
    set32(c.r[2], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8AD0u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002B8AD0u) [[unlikely]] return; }
L_002B8AD0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8AE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26712u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8B00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8B20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8B40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B8B88; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8B80u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8B80u) [[unlikely]] return; }
L_002B8B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002B8BAC; } }
L_002B8B88:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BA8u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8BA8u) [[unlikely]] return; }
L_002B8BA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8BAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B8BC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B8BD4u) [[unlikely]] return; }
L_002B8BD4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8C0C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8BF4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B8BF4u) [[unlikely]] return; }
L_002B8BF4:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8C0Cu) [[unlikely]] return; }
L_002B8C0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8C20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B8C34u) [[unlikely]] return; }
L_002B8C34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002B8CFC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C54u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B8C54u) [[unlikely]] return; }
L_002B8C54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8CD4; } }
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B8C68u) [[unlikely]] return; }
L_002B8C68:
    set32(c.r[5], 0u + 137u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002B8C74u) [[unlikely]] return; }
L_002B8C74:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C80u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B8C80u) [[unlikely]] return; }
L_002B8C80:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C8Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B8C8Cu) [[unlikely]] return; }
L_002B8C8C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8C98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B8C98u) [[unlikely]] return; }
L_002B8C98:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CB0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8CB0u) [[unlikely]] return; }
L_002B8CB0:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002B8CBCu) [[unlikely]] return; }
L_002B8CBC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CCCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B8CCCu) [[unlikely]] return; }
L_002B8CCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B8D18; } }
L_002B8CD4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CE4u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B8CE4u) [[unlikely]] return; }
L_002B8CE4:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8CF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002B8CF0u) [[unlikely]] return; }
L_002B8CF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8D14; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002B8CFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002B8D04u) [[unlikely]] return; }
L_002B8D04:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D14u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B8D14u) [[unlikely]] return; }
L_002B8D14:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8D18:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8D30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B8D44u) [[unlikely]] return; }
L_002B8D44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002B8D6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D60u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002B8D60u) [[unlikely]] return; }
L_002B8D60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B8D7C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002B8D6C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8D78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x002B8D78u) [[unlikely]] return; }
L_002B8D78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8D7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B8DA4u) [[unlikely]] return; }
L_002B8DA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B8DB4u) [[unlikely]] return; }
L_002B8DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B8DD0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B8DD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8E28; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B8E20; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8DFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B8DFCu) [[unlikely]] return; }
L_002B8DFC:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 2u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8E14u) [[unlikely]] return; }
L_002B8E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B8E2C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B8E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8E28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002B8E28u) [[unlikely]] return; }
L_002B8E28:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B8E2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8E40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26784u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B8E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B8EAC; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EA4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8EA4u) [[unlikely]] return; }
L_002B8EA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B8ED4; } }
L_002B8EAC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 8u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8ED4u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8ED4u) [[unlikely]] return; }
L_002B8ED4:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8EECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B8EECu) [[unlikely]] return; }
L_002B8EEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F14u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B8F14u) [[unlikely]] return; }
L_002B8F14:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002B8F20u) [[unlikely]] return; }
L_002B8F20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B8F28u) [[unlikely]] return; }
L_002B8F28:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B8F7C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F4Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B8F4Cu) [[unlikely]] return; }
L_002B8F4C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F64u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B8F64u) [[unlikely]] return; }
L_002B8F64:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8F7Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B8F7Cu) [[unlikely]] return; }
L_002B8F7C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B8F90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B8FA4u) [[unlikely]] return; }
L_002B8FA4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002B8FB0u) [[unlikely]] return; }
L_002B8FB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FB8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B8FB8u) [[unlikely]] return; }
L_002B8FB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B907C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FD0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B8FD0u) [[unlikely]] return; }
L_002B8FD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B9054; } }
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B8FE4u) [[unlikely]] return; }
L_002B8FE4:
    set32(c.r[5], 0u + 137u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002B8FF0u) [[unlikely]] return; }
L_002B8FF0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B8FFCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B8FFCu) [[unlikely]] return; }
L_002B8FFC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9008u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B9008u) [[unlikely]] return; }
L_002B9008:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9020u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9020u) [[unlikely]] return; }
L_002B9020:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9038u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9038u) [[unlikely]] return; }
L_002B9038:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9048u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9048u) [[unlikely]] return; }
L_002B9048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9070; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B9054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B905Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B905Cu) [[unlikely]] return; }
L_002B905C:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9068u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9068u) [[unlikely]] return; }
L_002B9068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9070u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9070u) [[unlikely]] return; }
L_002B9070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B908C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002B907C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9088u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9088u) [[unlikely]] return; }
L_002B9088:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B908C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B90A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B90B4u) [[unlikely]] return; }
L_002B90B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B90D4; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B90CCu) [[unlikely]] return; }
L_002B90CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B90D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B90D4u) [[unlikely]] return; }
L_002B90D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B90F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9104u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9104u) [[unlikely]] return; }
L_002B9104:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9110u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9110u) [[unlikely]] return; }
L_002B9110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9118u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9118u) [[unlikely]] return; }
L_002B9118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9128u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B9128u) [[unlikely]] return; }
L_002B9128:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9144; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B9144:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B91BC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B91AC; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9170u) [[unlikely]] return; }
L_002B9170:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9188u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9188u) [[unlikely]] return; }
L_002B9188:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91A0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B91A0u) [[unlikely]] return; }
L_002B91A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B91C0; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B91AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B91B4u) [[unlikely]] return; }
L_002B91B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B91BCu) [[unlikely]] return; }
L_002B91BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B91C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B91D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B9214; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91F0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002B91F0u) [[unlikely]] return; }
L_002B91F0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B91FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002B91FCu) [[unlikely]] return; }
L_002B91FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9214; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002B9214:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26816u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9234u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9234u) [[unlikely]] return; }
L_002B9234:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9250:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B929C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9294u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9294u) [[unlikely]] return; }
L_002B9294:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_002B92C0; } }
L_002B929C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92BCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B92BCu) [[unlikely]] return; }
L_002B92BC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_002B92C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B92E0; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B92E0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B92E0u) [[unlikely]] return; }
L_002B92E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B92F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9304u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9304u) [[unlikely]] return; }
L_002B9304:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9310u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9310u) [[unlikely]] return; }
L_002B9310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9318u) [[unlikely]] return; }
L_002B9318:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9354; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B933Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B933Cu) [[unlikely]] return; }
L_002B933C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9354u) [[unlikely]] return; }
L_002B9354:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9384u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9384u) [[unlikely]] return; }
L_002B9384:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9390u) [[unlikely]] return; }
L_002B9390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9398u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9398u) [[unlikely]] return; }
L_002B9398:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B9488; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B93B0u) [[unlikely]] return; }
L_002B93B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B9434; } }
    set32(c.r[5], 0u + 97u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B93C4u) [[unlikely]] return; }
L_002B93C4:
    set32(c.r[5], 0u + 137u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x002B93D0u) [[unlikely]] return; }
L_002B93D0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B93DCu) [[unlikely]] return; }
L_002B93DC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B93E8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B93E8u) [[unlikely]] return; }
L_002B93E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9400u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9400u) [[unlikely]] return; }
L_002B9400:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9418u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9418u) [[unlikely]] return; }
L_002B9418:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9428u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9428u) [[unlikely]] return; }
L_002B9428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B947C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B9434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B943Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B943Cu) [[unlikely]] return; }
L_002B943C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B946C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9454u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B9454u) [[unlikely]] return; }
L_002B9454:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9460u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B9460u) [[unlikely]] return; }
L_002B9460:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B947C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B946C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9474u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9474u) [[unlikely]] return; }
L_002B9474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B947Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B947Cu) [[unlikely]] return; }
L_002B947C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9498; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002B9488:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9494u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9494u) [[unlikely]] return; }
L_002B9494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9498:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B94B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B94C4u) [[unlikely]] return; }
L_002B94C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9510; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_002B9500; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B94E8u) [[unlikely]] return; }
L_002B94E8:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B94F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B94F4u) [[unlikely]] return; }
L_002B94F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9514; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 1;
L_002B9500:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9508u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9508u) [[unlikely]] return; }
L_002B9508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9510u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9510u) [[unlikely]] return; }
L_002B9510:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9514:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9534u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9534u) [[unlikely]] return; }
L_002B9534:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9540u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9540u) [[unlikely]] return; }
L_002B9540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9548u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9548u) [[unlikely]] return; }
L_002B9548:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9558u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B9558u) [[unlikely]] return; }
L_002B9558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9574; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 754u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_002B9574:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9600; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B95C0; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B95A0u) [[unlikely]] return; }
L_002B95A0:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B95B8u) [[unlikely]] return; }
L_002B95B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9604; } }
L_002B95C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B95F0; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B95D8u) [[unlikely]] return; }
L_002B95D8:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B95E4u) [[unlikely]] return; }
L_002B95E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9600; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B95F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B95F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B95F8u) [[unlikely]] return; }
L_002B95F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9600u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9600u) [[unlikely]] return; }
L_002B9600:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9604:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B9630:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B9650:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26880u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B9670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002B96BC; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96B4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B96B4u) [[unlikely]] return; }
L_002B96B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002B96DC; } }
L_002B96BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B96D8u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B96D8u) [[unlikely]] return; }
L_002B96D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B96DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002B96F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9704u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B9704u) [[unlikely]] return; }
L_002B9704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B973C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9724u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9724u) [[unlikely]] return; }
L_002B9724:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B973Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B973Cu) [[unlikely]] return; }
L_002B973C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9764u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B9764u) [[unlikely]] return; }
L_002B9764:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002B9838; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9784u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B9784u) [[unlikely]] return; }
L_002B9784:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9810; } }
    set32(c.r[5], 0u + 98u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9798u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B9798u) [[unlikely]] return; }
L_002B9798:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x002B97A4u) [[unlikely]] return; }
L_002B97A4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B97B0u) [[unlikely]] return; }
L_002B97B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97BCu); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002B97BCu) [[unlikely]] return; }
L_002B97BC:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97C8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B97C8u) [[unlikely]] return; }
L_002B97C8:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B97D4u) [[unlikely]] return; }
L_002B97D4:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97ECu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B97ECu) [[unlikely]] return; }
L_002B97EC:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B97F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002B97F8u) [[unlikely]] return; }
L_002B97F8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9808u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9808u) [[unlikely]] return; }
L_002B9808:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9854; } }
L_002B9810:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9820u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B9820u) [[unlikely]] return; }
L_002B9820:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B982Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002B982Cu) [[unlikely]] return; }
L_002B982C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9850; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_002B9838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9840u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002B9840u) [[unlikely]] return; }
L_002B9840:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9850u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9850u) [[unlikely]] return; }
L_002B9850:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9854:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9874u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B9874u) [[unlikely]] return; }
L_002B9874:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002B989C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 24u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9890u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002B9890u) [[unlikely]] return; }
L_002B9890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B98AC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002B989C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x002B98A8u) [[unlikely]] return; }
L_002B98A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B98AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B98C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002B98D4u) [[unlikely]] return; }
L_002B98D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B98E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B98E4u) [[unlikely]] return; }
L_002B98E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B98FC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002B98FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B995C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B994C; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9928u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9928u) [[unlikely]] return; }
L_002B9928:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9940u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9940u) [[unlikely]] return; }
L_002B9940:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9960; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B994C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9954u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9954u) [[unlikely]] return; }
L_002B9954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B995Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B995Cu) [[unlikely]] return; }
L_002B995C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9960:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9970:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26912u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002B9990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B99F4; } }
    set32(c.r[7], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99D4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B99D4u) [[unlikely]] return; }
L_002B99D4:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B99ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B99ECu) [[unlikely]] return; }
L_002B99EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9A34; } }
L_002B99F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A18u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9A18u) [[unlikely]] return; }
L_002B9A18:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B9A30u) [[unlikely]] return; }
L_002B9A30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9A34:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9A40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9A54u) [[unlikely]] return; }
L_002B9A54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9A5Cu) [[unlikely]] return; }
L_002B9A5C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002B9A68u) [[unlikely]] return; }
L_002B9A68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9ABC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9A8Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9A8Cu) [[unlikely]] return; }
L_002B9A8C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9AA4u) [[unlikely]] return; }
L_002B9AA4:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9ABCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B9ABCu) [[unlikely]] return; }
L_002B9ABC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9AD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9AE4u) [[unlikely]] return; }
L_002B9AE4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002B9AF0u) [[unlikely]] return; }
L_002B9AF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9AF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9AF8u) [[unlikely]] return; }
L_002B9AF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B9BC8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B10u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B9B10u) [[unlikely]] return; }
L_002B9B10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B9BA0; } }
    set32(c.r[5], 0u + 98u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B9B24u) [[unlikely]] return; }
L_002B9B24:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x002B9B30u) [[unlikely]] return; }
L_002B9B30:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B3Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B9B3Cu) [[unlikely]] return; }
L_002B9B3C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B48u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002B9B48u) [[unlikely]] return; }
L_002B9B48:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B54u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B9B54u) [[unlikely]] return; }
L_002B9B54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B6Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9B6Cu) [[unlikely]] return; }
L_002B9B6C:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B84u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9B84u) [[unlikely]] return; }
L_002B9B84:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9B94u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9B94u) [[unlikely]] return; }
L_002B9B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9BBC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B9BA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BA8u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B9BA8u) [[unlikely]] return; }
L_002B9BA8:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9BB4u) [[unlikely]] return; }
L_002B9BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9BBCu) [[unlikely]] return; }
L_002B9BBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9BD8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002B9BC8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9BD4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9BD4u) [[unlikely]] return; }
L_002B9BD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9BD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C04u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9C04u) [[unlikely]] return; }
L_002B9C04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9C24; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9C1Cu) [[unlikely]] return; }
L_002B9C1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9C24u) [[unlikely]] return; }
L_002B9C24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9C40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9C54u) [[unlikely]] return; }
L_002B9C54:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9C60u) [[unlikely]] return; }
L_002B9C60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9C68u) [[unlikely]] return; }
L_002B9C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9C78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002B9C78u) [[unlikely]] return; }
L_002B9C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9C90; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002B9C90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9D08; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B9CF8; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9CBCu) [[unlikely]] return; }
L_002B9CBC:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9CD4u) [[unlikely]] return; }
L_002B9CD4:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9CECu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B9CECu) [[unlikely]] return; }
L_002B9CEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9D0C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B9CF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9D00u) [[unlikely]] return; }
L_002B9D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9D08u) [[unlikely]] return; }
L_002B9D08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9D0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B9D64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D40u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002B9D40u) [[unlikely]] return; }
L_002B9D40:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002B9D4Cu) [[unlikely]] return; }
L_002B9D4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002B9D64; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002B9D64:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26944u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9D84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002B9D84u) [[unlikely]] return; }
L_002B9D84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002B9DF0; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9DE8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9DE8u) [[unlikely]] return; }
L_002B9DE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));  if (t) { goto L_002B9E10; } }
L_002B9DF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E0Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9E0Cu) [[unlikely]] return; }
L_002B9E0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 1;
L_002B9E10:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9E30; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E30u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002B9E30u) [[unlikely]] return; }
L_002B9E30:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E54u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9E54u) [[unlikely]] return; }
L_002B9E54:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9E60u) [[unlikely]] return; }
L_002B9E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9E68u) [[unlikely]] return; }
L_002B9E68:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002B9EA4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9E8Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9E8Cu) [[unlikely]] return; }
L_002B9E8C:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9EA4u) [[unlikely]] return; }
L_002B9EA4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002B9EC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9ED4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002B9ED4u) [[unlikely]] return; }
L_002B9ED4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002B9EE0u) [[unlikely]] return; }
L_002B9EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9EE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002B9EE8u) [[unlikely]] return; }
L_002B9EE8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002B9FE4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002B9F00u) [[unlikely]] return; }
L_002B9F00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002B9F90; } }
    set32(c.r[5], 0u + 98u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002B9F14u) [[unlikely]] return; }
L_002B9F14:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 165u, depth + 1u); else { c.pc = 0x002E9880u; return; } if (c.pc != 0x002B9F20u) [[unlikely]] return; }
L_002B9F20:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F2Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002B9F2Cu) [[unlikely]] return; }
L_002B9F2C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F38u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002B9F38u) [[unlikely]] return; }
L_002B9F38:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F44u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002B9F44u) [[unlikely]] return; }
L_002B9F44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F5Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002B9F5Cu) [[unlikely]] return; }
L_002B9F5C:
    set32(c.r[6], c.r[2].w[0] + 5u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F74u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002B9F74u) [[unlikely]] return; }
L_002B9F74:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F84u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9F84u) [[unlikely]] return; }
L_002B9F84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9FD8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002B9F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9F98u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002B9F98u) [[unlikely]] return; }
L_002B9F98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002B9FC8; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002B9FB0u) [[unlikely]] return; }
L_002B9FB0:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002B9FBCu) [[unlikely]] return; }
L_002B9FBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002B9FD8; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002B9FC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002B9FD0u) [[unlikely]] return; }
L_002B9FD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002B9FD8u) [[unlikely]] return; }
L_002B9FD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002B9FF4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002B9FE4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002B9FF0u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002B9FF0u) [[unlikely]] return; }
L_002B9FF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002B9FF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA014u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA014u) [[unlikely]] return; }
L_002BA014:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA060; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 24u);  if (t) { goto L_002BA050; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA038u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BA038u) [[unlikely]] return; }
L_002BA038:
    set32(c.r[5], 0u + 24u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA044u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BA044u) [[unlikely]] return; }
L_002BA044:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA064; } }
    set32(c.r[5], 0u + 24u);
    c.budget -= 1;
L_002BA050:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA058u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BA058u) [[unlikely]] return; }
L_002BA058:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA060u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BA060u) [[unlikely]] return; }
L_002BA060:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA064:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA084u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA084u) [[unlikely]] return; }
L_002BA084:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA090u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BA090u) [[unlikely]] return; }
L_002BA090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA098u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA098u) [[unlikely]] return; }
L_002BA098:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA0A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BA0A8u) [[unlikely]] return; }
L_002BA0A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA0C0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BA0C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA14C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA10C; } }
    set32(c.r[2], 0u + 2u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA0ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002BA0ECu) [[unlikely]] return; }
L_002BA0EC:
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA104u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BA104u) [[unlikely]] return; }
L_002BA104:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA150; } }
L_002BA10C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 12u);  if (t) { goto L_002BA13C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA124u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BA124u) [[unlikely]] return; }
L_002BA124:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA130u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BA130u) [[unlikely]] return; }
L_002BA130:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA14C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 1;
L_002BA13C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA144u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BA144u) [[unlikely]] return; }
L_002BA144:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA14Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BA14Cu) [[unlikely]] return; }
L_002BA14C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA150:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA160:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    set32(c.r[2], c.r[28].w[0] - 28752u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BA180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], c.r[28].w[0] - 28744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BA1A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 26976u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BA1C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    set32(c.r[6], 0u + 1u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA218; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA210u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA210u) [[unlikely]] return; }
L_002BA210:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002BA238; } }
L_002BA218:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA234u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA234u) [[unlikely]] return; }
L_002BA234:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BA240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA254u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA254u) [[unlikely]] return; }
L_002BA254:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA260u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BA260u) [[unlikely]] return; }
L_002BA260:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA268u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA268u) [[unlikely]] return; }
L_002BA268:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);  if (t) { goto L_002BA28C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (t) { goto L_002BA2D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.budget -= 1;
L_002BA28C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA298u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BA298u) [[unlikely]] return; }
L_002BA298:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);  if (t) { goto L_002BA2B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE5B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 29046ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.budget -= 4;
L_002BA2B0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BA2BCu) [[unlikely]] return; }
L_002BA2BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA2C8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BA2C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BA2D4u) [[unlikely]] return; }
L_002BA2D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA2DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BA2DCu) [[unlikely]] return; }
L_002BA2DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA304u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA304u) [[unlikely]] return; }
L_002BA304:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA310u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BA310u) [[unlikely]] return; }
L_002BA310:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002BA3DC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA33Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BA33Cu) [[unlikely]] return; }
L_002BA33C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BA3B8; } }
    set32(c.r[5], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA350u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BA350u) [[unlikely]] return; }
L_002BA350:
    set32(c.r[5], 0u + 61u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA35Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x002BA35Cu) [[unlikely]] return; }
L_002BA35C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA368u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BA368u) [[unlikely]] return; }
L_002BA368:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA374u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BA374u) [[unlikely]] return; }
L_002BA374:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA380u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BA380u) [[unlikely]] return; }
L_002BA380:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA394u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BA394u) [[unlikely]] return; }
L_002BA394:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3ACu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA3ACu) [[unlikely]] return; }
L_002BA3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA3D4; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BA3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3C0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BA3C0u) [[unlikely]] return; }
L_002BA3C0:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BA3CCu) [[unlikely]] return; }
L_002BA3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BA3D4u) [[unlikely]] return; }
L_002BA3D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA3E8; } }
L_002BA3DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA3E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BA3E4u) [[unlikely]] return; }
L_002BA3E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA3E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA418u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002BA418u) [[unlikely]] return; }
L_002BA418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA420u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA420u) [[unlikely]] return; }
L_002BA420:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA450; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], 0u + 49u);
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1312u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 728u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA448u); st8((c.r[16].w[0] + 810u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BA448u) [[unlikely]] return; }
L_002BA448:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA4B8; } }
L_002BA450:
    c.f[1] = ld32((c.r[16].w[0] + 7912u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA470u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002BA470u) [[unlikely]] return; }
L_002BA470:
    st32((c.r[16].w[0] + 7912u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BA484u) [[unlikely]] return; }
L_002BA484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);  if (t) { goto L_002BA49C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBE630000u);
    c.r[2].d[0] = c.r[2].d[0] | 34918ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41980000u);
    c.budget -= 4;
L_002BA49C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002BA4A8u) [[unlikely]] return; }
L_002BA4A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA4B4; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002BA4B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA4B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA4D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA4E4u) [[unlikely]] return; }
L_002BA4E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BA4F0u) [[unlikely]] return; }
L_002BA4F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA4F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA4F8u) [[unlikely]] return; }
L_002BA4F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA508u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BA508u) [[unlikely]] return; }
L_002BA508:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA520; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BA520:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA570; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BA558; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA544u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BA544u) [[unlikely]] return; }
L_002BA544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA54Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BA54Cu) [[unlikely]] return; }
L_002BA54C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA574; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002BA558:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA570u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA570u) [[unlikely]] return; }
L_002BA570:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA574:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BA5B4; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5B4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BA5B4u) [[unlikely]] return; }
L_002BA5B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BA5BCu) [[unlikely]] return; }
L_002BA5BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA5D0; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA5D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BA5D0u) [[unlikely]] return; }
L_002BA5D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BA634; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BA634; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA610u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BA610u) [[unlikely]] return; }
L_002BA610:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA61Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002BA61Cu) [[unlikely]] return; }
L_002BA61C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA634; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002BA634:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27008u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA654u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BA654u) [[unlikely]] return; }
L_002BA654:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BA728; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 129u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA6E0; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA6C0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BA6C0u) [[unlikely]] return; }
L_002BA6C0:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA6D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BA6D8u) [[unlikely]] return; }
L_002BA6D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA770; } }
L_002BA6E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7786u)));
    set32(c.r[2], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002BA70C; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA704u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BA704u) [[unlikely]] return; }
L_002BA704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA76C; } }
L_002BA70C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA720u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA720u) [[unlikely]] return; }
L_002BA720:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA76C; } }
L_002BA728:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA758; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 14u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA750u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA750u) [[unlikely]] return; }
L_002BA750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA76C; } }
L_002BA758:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA76Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BA76Cu) [[unlikely]] return; }
L_002BA76C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA770:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA794u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA794u) [[unlikely]] return; }
L_002BA794:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BA7A0u) [[unlikely]] return; }
L_002BA7A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA7A8u) [[unlikely]] return; }
L_002BA7A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA7B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BA7B8u) [[unlikely]] return; }
L_002BA7B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA7D0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BA7D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BA888; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BA830; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002BA818; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA800u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BA800u) [[unlikely]] return; }
L_002BA800:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA80Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BA80Cu) [[unlikely]] return; }
L_002BA80C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BA88C; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002BA818:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA820u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BA820u) [[unlikely]] return; }
L_002BA820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA828u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BA828u) [[unlikely]] return; }
L_002BA828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA888; } }
L_002BA830:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002BA86C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 14u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA860u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA860u) [[unlikely]] return; }
L_002BA860:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BA888; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002BA86C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 732u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA888u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA888u) [[unlikely]] return; }
L_002BA888:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BA88C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA8A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA8B4u) [[unlikely]] return; }
L_002BA8B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BA8C0u) [[unlikely]] return; }
L_002BA8C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BA8C8u) [[unlikely]] return; }
L_002BA8C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BA8E8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
L_002BA8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA8F0u);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BA8F0u) [[unlikely]] return; }
L_002BA8F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BA900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA914u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BA914u) [[unlikely]] return; }
L_002BA914:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA920u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BA920u) [[unlikely]] return; }
L_002BA920:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002BAA78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA94Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BA94Cu) [[unlikely]] return; }
L_002BA94C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BAA28; } }
    set32(c.r[5], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA960u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BA960u) [[unlikely]] return; }
L_002BA960:
    set32(c.r[5], 0u + 61u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA96Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x002BA96Cu) [[unlikely]] return; }
L_002BA96C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA978u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BA978u) [[unlikely]] return; }
L_002BA978:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA984u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BA984u) [[unlikely]] return; }
L_002BA984:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA990u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BA990u) [[unlikely]] return; }
L_002BA990:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA998u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BA998u) [[unlikely]] return; }
L_002BA998:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BA9C4; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA9BCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BA9BCu) [[unlikely]] return; }
L_002BA9BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));  if (t) { goto L_002BA9E0; } }
L_002BA9C4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BA9DCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BA9DCu) [[unlikely]] return; }
L_002BA9DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.budget -= 1;
L_002BA9E0:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA00u); set32(c.r[4], ld32((c.r[16].w[0] + 7912u)));  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x002BAA00u) [[unlikely]] return; }
L_002BAA00:
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA0Cu); set32(c.r[4], ld32((c.r[16].w[0] + 7912u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x002BAA0Cu) [[unlikely]] return; }
L_002BAA0C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 52u), c.f[0]);  if (t) { goto L_002BAA70; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BAA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA30u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BAA30u) [[unlikely]] return; }
L_002BAA30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002BAA60; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BAA48u) [[unlikely]] return; }
L_002BAA48:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BAA54u) [[unlikely]] return; }
L_002BAA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAA70; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002BAA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BAA68u) [[unlikely]] return; }
L_002BAA68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BAA70u) [[unlikely]] return; }
L_002BAA70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BAA84; } }
L_002BAA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAA80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BAA80u) [[unlikely]] return; }
L_002BAA80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BAA84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAA90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7912u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAABCu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002BAABCu) [[unlikely]] return; }
L_002BAABC:
    st32((c.r[16].w[0] + 7912u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAAC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BAAC8u) [[unlikely]] return; }
L_002BAAC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BAB24; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BAB0C; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BAB04u) [[unlikely]] return; }
L_002BAB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BAB28; } }
L_002BAB0C:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB24u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BAB24u) [[unlikely]] return; }
L_002BAB24:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BAB28:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BAB84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB60u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BAB60u) [[unlikely]] return; }
L_002BAB60:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB6Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002BAB6Cu) [[unlikely]] return; }
L_002BAB6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BAB88; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002BAB84:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BAB88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAB90u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BAB90u) [[unlikely]] return; }
L_002BAB90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BABD8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BABC8; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BABB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BABB0u) [[unlikely]] return; }
L_002BABB0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BABBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BABBCu) [[unlikely]] return; }
L_002BABBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BABDC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BABC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BABD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BABD0u) [[unlikely]] return; }
L_002BABD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BABD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BABD8u) [[unlikely]] return; }
L_002BABD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BABDC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BABF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    set32(c.r[2], c.r[28].w[0] - 28736u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BAC10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27040u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BAC30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAC80; } }
    set32(c.r[7], 0u + 5u);
    c.f[12] = 0u;
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 3u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAC78u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BAC78u) [[unlikely]] return; }
L_002BAC78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_002BACAC; } }
L_002BAC80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACA8u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BACA8u) [[unlikely]] return; }
L_002BACA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BACAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BACC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BACD4u) [[unlikely]] return; }
L_002BACD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BACDCu) [[unlikely]] return; }
L_002BACDC:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BACF8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BACF8u) [[unlikely]] return; }
L_002BACF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BAD1C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_002BAD2C; } }
L_002BAD1C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_002BAD2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BAD34u) [[unlikely]] return; }
L_002BAD34:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD48u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BAD48u) [[unlikely]] return; }
L_002BAD48:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD58u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BAD58u) [[unlikely]] return; }
L_002BAD58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAD70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD84u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BAD84u) [[unlikely]] return; }
L_002BAD84:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BAD90u) [[unlikely]] return; }
L_002BAD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAD98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BAD98u) [[unlikely]] return; }
L_002BAD98:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BAE30; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BADB0u) [[unlikely]] return; }
L_002BADB0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADC4u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BADC4u) [[unlikely]] return; }
L_002BADC4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADD4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BADD4u) [[unlikely]] return; }
L_002BADD4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADECu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BADECu) [[unlikely]] return; }
L_002BADEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BADF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 20u, depth + 1u); else { c.pc = 0x002BC2C0u; return; } if (c.pc != 0x002BADF4u) [[unlikely]] return; }
L_002BADF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002BAE14; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BAE5C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002BAE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BAE1Cu) [[unlikely]] return; }
L_002BAE1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BAE24u) [[unlikely]] return; }
L_002BAE24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BAE60; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BAE30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE38u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BAE38u) [[unlikely]] return; }
L_002BAE38:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE4Cu); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BAE4Cu) [[unlikely]] return; }
L_002BAE4C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE5Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BAE5Cu) [[unlikely]] return; }
L_002BAE5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BAE60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAE70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAE98u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002BAE98u) [[unlikely]] return; }
L_002BAE98:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEB4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BAEB4u) [[unlikely]] return; }
L_002BAEB4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BAEC0u) [[unlikely]] return; }
L_002BAEC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BAEC8u) [[unlikely]] return; }
L_002BAEC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_002BAF74; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BAF44; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAEECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BAEECu) [[unlikely]] return; }
L_002BAEEC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF00u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BAF00u) [[unlikely]] return; }
L_002BAF00:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF10u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BAF10u) [[unlikely]] return; }
L_002BAF10:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF1Cu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006F(c, 20u, depth + 1u); else { c.pc = 0x002BC2C0u; return; } if (c.pc != 0x002BAF1Cu) [[unlikely]] return; }
L_002BAF1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BAF44; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF3Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BAF3Cu) [[unlikely]] return; }
L_002BAF3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BAFC4; } }
L_002BAF44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF68u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BAF68u) [[unlikely]] return; }
L_002BAF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BAFC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_002BAF74:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BAF80u) [[unlikely]] return; }
L_002BAF80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BAF94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 20u, depth + 1u); else { c.pc = 0x002BC2C0u; return; } if (c.pc != 0x002BAF90u) [[unlikely]] return; }
L_002BAF90:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BAF94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAF9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BAF9Cu) [[unlikely]] return; }
L_002BAF9C:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFB0u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BAFB0u) [[unlikely]] return; }
L_002BAFB0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFC0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BAFC0u) [[unlikely]] return; }
L_002BAFC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BAFC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BAFD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BAFE4u) [[unlikely]] return; }
L_002BAFE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB000; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BAFF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BAFF8u) [[unlikely]] return; }
L_002BAFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB000u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BB000u) [[unlikely]] return; }
L_002BB000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB024u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BB024u) [[unlikely]] return; }
L_002BB024:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB030u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BB030u) [[unlikely]] return; }
L_002BB030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB038u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BB038u) [[unlikely]] return; }
L_002BB038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB048u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BB048u) [[unlikely]] return; }
L_002BB048:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB060; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BB060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB0B8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002BB0A8; } }
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB09Cu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB09Cu) [[unlikely]] return; }
L_002BB09C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BB0BC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002BB0A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BB0B0u) [[unlikely]] return; }
L_002BB0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BB0B8u) [[unlikely]] return; }
L_002BB0B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB0BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB0D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BB114; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0F0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002BB0F0u) [[unlikely]] return; }
L_002BB0F0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB0FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002BB0FCu) [[unlikely]] return; }
L_002BB0FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB114; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002BB114:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27072u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002BB134u) [[unlikely]] return; }
L_002BB134:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002BB1D8; } }
    set32(c.r[7], 0u + 5u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[2], 0u + 129u);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB1C0; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB1A0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BB1A0u) [[unlikely]] return; }
L_002BB1A0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB1B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BB1B8u) [[unlikely]] return; }
L_002BB1B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BB22C; } }
L_002BB1C0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB1D0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB1D0u) [[unlikely]] return; }
L_002BB1D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB228; } }
L_002BB1D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002BB218; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB20Cu); set32(c.r[7], 0u + 9u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB20Cu) [[unlikely]] return; }
L_002BB20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB228; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002BB218:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB228u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB228u) [[unlikely]] return; }
L_002BB228:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB22C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB254u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BB254u) [[unlikely]] return; }
L_002BB254:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB25Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BB25Cu) [[unlikely]] return; }
L_002BB25C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB278u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BB278u) [[unlikely]] return; }
L_002BB278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BB29C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_002BB2AC; } }
L_002BB29C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_002BB2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BB2B4u) [[unlikely]] return; }
L_002BB2B4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2C8u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BB2C8u) [[unlikely]] return; }
L_002BB2C8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB2D8u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BB2D8u) [[unlikely]] return; }
L_002BB2D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB304u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BB304u) [[unlikely]] return; }
L_002BB304:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB310u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BB310u) [[unlikely]] return; }
L_002BB310:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB318u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BB318u) [[unlikely]] return; }
L_002BB318:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BB40C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB330u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BB330u) [[unlikely]] return; }
L_002BB330:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB344u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BB344u) [[unlikely]] return; }
L_002BB344:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB354u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BB354u) [[unlikely]] return; }
L_002BB354:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB380; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB378u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB378u) [[unlikely]] return; }
L_002BB378:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BB39C; } }
L_002BB380:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB398u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB398u) [[unlikely]] return; }
L_002BB398:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BB39C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3A4u);  if (depth < kMaxDepth) unit_006F(c, 20u, depth + 1u); else { c.pc = 0x002BC2C0u; return; } if (c.pc != 0x002BB3A4u) [[unlikely]] return; }
L_002BB3A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB3C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BB438; } }
L_002BB3C0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002BB3F0; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BB3D8u) [[unlikely]] return; }
L_002BB3D8:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BB3E4u) [[unlikely]] return; }
L_002BB3E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BB43C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002BB3F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB3F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BB3F8u) [[unlikely]] return; }
L_002BB3F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB400u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BB400u) [[unlikely]] return; }
L_002BB400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB438; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BB40C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BB414u) [[unlikely]] return; }
L_002BB414:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB428u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BB428u) [[unlikely]] return; }
L_002BB428:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB438u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BB438u) [[unlikely]] return; }
L_002BB438:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB43C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB450:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB478u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002BB478u) [[unlikely]] return; }
L_002BB478:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB494u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BB494u) [[unlikely]] return; }
L_002BB494:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BB4A0u) [[unlikely]] return; }
L_002BB4A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BB4A8u) [[unlikely]] return; }
L_002BB4A8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);  if (t) { goto L_002BB5AC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB550; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4CCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BB4CCu) [[unlikely]] return; }
L_002BB4CC:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4E0u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BB4E0u) [[unlikely]] return; }
L_002BB4E0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4F0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BB4F0u) [[unlikely]] return; }
L_002BB4F0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB4FCu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_006F(c, 20u, depth + 1u); else { c.pc = 0x002BC2C0u; return; } if (c.pc != 0x002BB4FCu) [[unlikely]] return; }
L_002BB4FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB550; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB530; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB528u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB528u) [[unlikely]] return; }
L_002BB528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB548; } }
L_002BB530:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB548u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB548u) [[unlikely]] return; }
L_002BB548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BB5FC; } }
L_002BB550:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002BB58C; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB580u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB580u) [[unlikely]] return; }
L_002BB580:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5A0; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002BB58C:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5A0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB5A0u) [[unlikely]] return; }
L_002BB5A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB5F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.budget -= 1;
L_002BB5AC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BB5B8u) [[unlikely]] return; }
L_002BB5B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BB5CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 20u, depth + 1u); else { c.pc = 0x002BC2C0u; return; } if (c.pc != 0x002BB5C8u) [[unlikely]] return; }
L_002BB5C8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BB5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002BB5D4u) [[unlikely]] return; }
L_002BB5D4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5E8u); st32((c.r[16].w[0] + 7916u), 0u);  if (depth < kMaxDepth) unit_0076(c, 234u, depth + 1u); else { c.pc = 0x002DBC20u; return; } if (c.pc != 0x002BB5E8u) [[unlikely]] return; }
L_002BB5E8:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB5F8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 1u, depth + 1u); else { c.pc = 0x002DC000u; return; } if (c.pc != 0x002BB5F8u) [[unlikely]] return; }
L_002BB5F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB5FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB624u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BB624u) [[unlikely]] return; }
L_002BB624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB66C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002BB65C; } }
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB644u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BB644u) [[unlikely]] return; }
L_002BB644:
    set32(c.r[5], 0u + 15u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB650u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BB650u) [[unlikely]] return; }
L_002BB650:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BB670; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002BB65C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB664u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BB664u) [[unlikely]] return; }
L_002BB664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB66Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BB66Cu) [[unlikely]] return; }
L_002BB66C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB670:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB694u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BB694u) [[unlikely]] return; }
L_002BB694:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002BB6A0u) [[unlikely]] return; }
L_002BB6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BB6A8u) [[unlikely]] return; }
L_002BB6A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB6B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002BB6B8u) [[unlikely]] return; }
L_002BB6B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB6D0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 343u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_002BB6D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB780; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BB740; } }
    set32(c.r[6], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002BB728; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[7], 0u + 9u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB71Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB71Cu) [[unlikely]] return; }
L_002BB71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BB784; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002BB728:
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB738u); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BB738u) [[unlikely]] return; }
L_002BB738:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB780; } }
L_002BB740:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_002BB770; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002BB758u) [[unlikely]] return; }
L_002BB758:
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB764u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002BB764u) [[unlikely]] return; }
L_002BB764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BB780; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_002BB770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB778u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002BB778u) [[unlikely]] return; }
L_002BB778:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB780u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002BB780u) [[unlikely]] return; }
L_002BB780:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB784:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BB790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27096u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BB7C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 1200u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7744u)));
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7746u)));
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7784u)));
    st8((c.r[5].w[0] + 21u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7786u)));
    c.budget -= 14;
    { st8((c.r[5].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));  goto L_002BB800; }
L_002BB800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB81Cu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BB81Cu) [[unlikely]] return; }
L_002BB81C:
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB82Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_006E(c, 656u, depth + 1u); else { c.pc = 0x002BBE90u; return; } if (c.pc != 0x002BB82Cu) [[unlikely]] return; }
L_002BB82C:
    c.f[2] = ld32((c.r[17].w[0] + 7740u));
    c.f[1] = ld32((c.r[17].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1200u), c.f[1]);  if (t) { goto L_002BB870; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 729u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40800000u);
    set32(c.r[3], 0u + 6u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[17].w[0] + 1200u), c.r[4].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st16((c.r[17].w[0] + 166u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_002BB870:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BB890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB8ACu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BB8ACu) [[unlikely]] return; }
L_002BB8AC:
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB8BCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_006E(c, 656u, depth + 1u); else { c.pc = 0x002BBE90u; return; } if (c.pc != 0x002BB8BCu) [[unlikely]] return; }
L_002BB8BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BB8D8; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002BB8D8:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_002BB9D8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 1024ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BB91C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
L_002BB91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB924u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BB924u) [[unlikely]] return; }
L_002BB924:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BB9C4; } }
    set32(c.r[5], 0u + 95u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB938u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BB938u) [[unlikely]] return; }
L_002BB938:
    set32(c.r[5], 0u + 144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB944u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 263u, depth + 1u); else { c.pc = 0x002E6FD0u; return; } if (c.pc != 0x002BB944u) [[unlikely]] return; }
L_002BB944:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB950u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BB950u) [[unlikely]] return; }
L_002BB950:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB95Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002BB95Cu) [[unlikely]] return; }
L_002BB95C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB968u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BB968u) [[unlikely]] return; }
L_002BB968:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB974u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BB974u) [[unlikely]] return; }
L_002BB974:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 10u);  if (t) { goto L_002BB9B0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] <= 0;  if (t) { goto L_002BB9AC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));  if (t) { goto L_002BB9D8; } }
L_002BB9AC:
    set32(c.r[5], 0u + 10u);
    c.budget -= 1;
L_002BB9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BB9B8u) [[unlikely]] return; }
L_002BB9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002BB9DC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002BB9C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9CCu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BB9CCu) [[unlikely]] return; }
L_002BB9CC:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BB9D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002BB9D8u) [[unlikely]] return; }
L_002BB9D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BB9DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BB9F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002BBA38; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_002BBA24; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002BBA88; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_002BBA24:
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    c.budget -= 5;
L_002BBA38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA40u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 19u, depth + 1u); else { c.pc = 0x002BC290u; return; } if (c.pc != 0x002BBA40u) [[unlikely]] return; }
L_002BBA40:
    set32(c.r[16], c.r[2].w[0] + 16u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002BBA64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA58u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BBA58u) [[unlikely]] return; }
L_002BBA58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBA84; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002BBA64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA6Cu); st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002BBA6Cu) [[unlikely]] return; }
L_002BBA6C:
    c.f[12] = 0u;
    set32(c.r[7], 0u + 6u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002BBA84u) [[unlikely]] return; }
L_002BBA84:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002BBA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBA90u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BBA90u) [[unlikely]] return; }
L_002BBA90:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBAA0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 208u, depth + 1u); else { c.pc = 0x002DB7C0u; return; } if (c.pc != 0x002BBAA0u) [[unlikely]] return; }
L_002BBAA0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002BBAC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 27120u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002B8000u < 16384u) { entry = entries_006E[(t - 0x002B8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002BBAE0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1216u), c.r[3].w[0]);  c.pc = t; return; }
L_002BBB00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 179u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB24u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002BBB24u) [[unlikely]] return; }
L_002BBB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB2Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BBB2Cu) [[unlikely]] return; }
L_002BBB2C:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB48u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BBB48u) [[unlikely]] return; }
L_002BBB48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002BBB6C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002BBB84; } }
L_002BBB6C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
L_002BBB84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBB8Cu);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BBB8Cu) [[unlikely]] return; }
L_002BBB8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BBBA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3ECC0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = c.r[2].w[0];
    set32(c.r[5], 0u + 179u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002BBBC4u) [[unlikely]] return; }
L_002BBBC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002BBBCCu) [[unlikely]] return; }
L_002BBBCC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBBD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002BBBD8u) [[unlikely]] return; }
L_002BBBD8:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_002BBCF0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002BBC04u) [[unlikely]] return; }
L_002BBC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBCA0; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 63u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002BBC1Cu) [[unlikely]] return; }
L_002BBC1C:
    set32(c.r[5], 0u + 99u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002BBC28u) [[unlikely]] return; }
L_002BBC28:
    set32(c.r[5], 0u + 61u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x002BBC34u) [[unlikely]] return; }
L_002BBC34:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC40u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002BBC40u) [[unlikely]] return; }
L_002BBC40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC4Cu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002BBC4Cu) [[unlikely]] return; }
L_002BBC4C:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC58u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002BBC58u) [[unlikely]] return; }
L_002BBC58:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC80u); st32((c.r[16].w[0] + 1312u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BBC80u) [[unlikely]] return; }
L_002BBC80:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBC98u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BBC98u) [[unlikely]] return; }
L_002BBC98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002BBCE8; } }
L_002BBCA0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 4u);
    set32(c.r[5], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCBCu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002BBCBCu) [[unlikely]] return; }
L_002BBCBC:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002BBCC8u) [[unlikely]] return; }
L_002BBCC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002BBCD0u) [[unlikely]] return; }
L_002BBCD0:
    set32(c.r[6], 0u + 16u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCE8u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BBCE8u) [[unlikely]] return; }
L_002BBCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002BBCFC; } }
L_002BBCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBCF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_006F(c, 8u, depth + 1u); else { c.pc = 0x002BC0F0u; return; } if (c.pc != 0x002BBCF8u) [[unlikely]] return; }
L_002BBCF8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002BBCFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BBD10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7912u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD3Cu); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002BBD3Cu) [[unlikely]] return; }
L_002BBD3C:
    st32((c.r[16].w[0] + 7912u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002BBD48u) [[unlikely]] return; }
L_002BBD48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002BBD90; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 4u);
    set32(c.r[5], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD6Cu); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 55u, depth + 1u); else { c.pc = 0x002D8DE0u; return; } if (c.pc != 0x002BBD6Cu) [[unlikely]] return; }
L_002BBD6C:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 54u, depth + 1u); else { c.pc = 0x002D8D10u; return; } if (c.pc != 0x002BBD78u) [[unlikely]] return; }
L_002BBD78:
    set32(c.r[6], 0u + 16u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBD90u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002BBD90u) [[unlikely]] return; }
L_002BBD90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002BBDA0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBDB0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_002BBDD8; } }
    c.r[5].d[0] = ld8((c.r[6].w[0] + 23u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_002BBDD8; } }
    set32(c.r[3], 0u + 129u);
    st8((c.r[4].w[0] + 343u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002BBDD8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BBE08; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BBE08; } }
    c.r[3].d[0] = ld8((c.r[6].w[0] + 24u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_002BBE08; } }
    st8((c.r[6].w[0] + 24u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002BBE08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBE10:
    st8((c.r[4].w[0] + 344u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BBE30; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002BBE38; } }
L_002BBE30:
    st8((c.r[4].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_002BBE38:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002BBE40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1580u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_002BBE78; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 26176u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBE6Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002BBE6Cu) [[unlikely]] return; }
L_002BBE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_002BBE78; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_002BBE78:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002BBE90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & 20ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002BBEBC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BBFC4; } }
L_002BBEBC:
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_002BBF44; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7786u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002BBF40; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7744u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[6].d[0] != c.r[3].d[0]) { set32(c.r[7], 0u + 3u);  goto L_002BBEFC; }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7746u)));
    set32(c.r[3], 0u + 16u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BBF40; } }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_002BBEFC:
    set32(c.r[6], 0u + 16u);
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[5].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7786u)));
    st8((c.r[5].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7814u)));
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBF38u); set32(c.r[7], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BBF38u) [[unlikely]] return; }
L_002BBF38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_006F(c, 3u, depth); } }
L_002BBF40:
    c.r[1].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 1;
L_002BBF44:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002BBFC4; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7786u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0];  if (t) { goto L_002BBFC4; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7744u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[7], 0u + 3u);  if (t) { goto L_002BBF80; } }
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7746u)));
    set32(c.r[3], 0u + 17u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_002BBFC4; } }
    set32(c.r[7], 0u + 3u);
    c.budget -= 1;
L_002BBF80:
    set32(c.r[6], 0u + 17u);
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7784u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    st8((c.r[5].w[0] + 21u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7786u)));
    st8((c.r[5].w[0] + 22u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 7814u)));
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.f[12] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002BBFBCu); set32(c.r[7], c.r[2].w[0] + 10u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002BBFBCu) [[unlikely]] return; }
L_002BBFBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { [[clang::musttail]] return unit_006F(c, 2u, depth); } }
L_002BBFC4:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 21u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7784u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_002BBFE4; } }
    c.r[6].d[0] = ld8((c.r[5].w[0] + 22u));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7786u)));
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { [[clang::musttail]] return unit_006F(c, 2u, depth); } }
L_002BBFE4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 7786u)));
    st8((c.r[5].w[0] + 19u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 20u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[5].w[0] + 21u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[5].w[0] + 22u), static_cast<std::uint8_t>(c.r[6].w[0]));
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.f[12] = ld32((c.r[4].w[0] + 7796u));
    c.budget -= 7;
    [[clang::musttail]] return unit_006F(c, 1u, depth);
}

}
