#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_009A[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0,
    15, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0,
    0, 0, 36, 0, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0,
    44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 64, 0,
    0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73,
    0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0,
    0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0,
    108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0,
    0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0,
    0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0,
    0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0,
    0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 206,
    0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0,
    0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0,
    0, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 240,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0,
    0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0,
    293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0,
    312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0,
    319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0,
    0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0,
    0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    401, 0, 402, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0,
    0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441,
    0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 0,
    0, 0, 0, 452, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490,
    0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0,
    0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0,
    0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0,
    0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0,
    513, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0,
    0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535,
    0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    546, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552,
    0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0,
    560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0,
    0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0,
    0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0,
    0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 0, 0,
    0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0,
    0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0,
};

void unit_009A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00368000;
    case 2u: goto L_00368018;
    case 3u: goto L_00368028;
    case 4u: goto L_00368038;
    case 5u: goto L_00368044;
    case 6u: goto L_00368050;
    case 7u: goto L_00368060;
    case 8u: goto L_00368080;
    case 9u: goto L_00368090;
    case 10u: goto L_003680A0;
    case 11u: goto L_003680AC;
    case 12u: goto L_003680B8;
    case 13u: goto L_003680D0;
    case 14u: goto L_003680EC;
    case 15u: goto L_00368100;
    case 16u: goto L_00368110;
    case 17u: goto L_00368120;
    case 18u: goto L_0036813C;
    case 19u: goto L_00368150;
    case 20u: goto L_00368160;
    case 21u: goto L_00368170;
    case 22u: goto L_00368190;
    case 23u: goto L_003681B0;
    case 24u: goto L_003681C8;
    case 25u: goto L_003681D8;
    case 26u: goto L_003681E4;
    case 27u: goto L_003681F0;
    case 28u: goto L_00368200;
    case 29u: goto L_00368218;
    case 30u: goto L_00368228;
    case 31u: goto L_00368238;
    case 32u: goto L_00368244;
    case 33u: goto L_00368250;
    case 34u: goto L_00368260;
    case 35u: goto L_00368278;
    case 36u: goto L_00368288;
    case 37u: goto L_00368298;
    case 38u: goto L_003682A4;
    case 39u: goto L_003682B0;
    case 40u: goto L_003682C0;
    case 41u: goto L_003682D8;
    case 42u: goto L_003682E8;
    case 43u: goto L_003682F4;
    case 44u: goto L_00368300;
    case 45u: goto L_00368310;
    case 46u: goto L_00368330;
    case 47u: goto L_00368340;
    case 48u: goto L_00368354;
    case 49u: goto L_00368360;
    case 50u: goto L_0036836C;
    case 51u: goto L_00368380;
    case 52u: goto L_00368398;
    case 53u: goto L_003683A8;
    case 54u: goto L_003683BC;
    case 55u: goto L_003683D4;
    case 56u: goto L_003683E0;
    case 57u: goto L_003683F8;
    case 58u: goto L_00368404;
    case 59u: goto L_00368420;
    case 60u: goto L_0036842C;
    case 61u: goto L_00368438;
    case 62u: goto L_00368450;
    case 63u: goto L_00368468;
    case 64u: goto L_00368478;
    case 65u: goto L_00368484;
    case 66u: goto L_00368490;
    case 67u: goto L_003684A0;
    case 68u: goto L_003684B8;
    case 69u: goto L_003684C8;
    case 70u: goto L_003684D8;
    case 71u: goto L_003684E4;
    case 72u: goto L_003684F0;
    case 73u: goto L_003684FC;
    case 74u: goto L_00368508;
    case 75u: goto L_00368530;
    case 76u: goto L_00368540;
    case 77u: goto L_0036855C;
    case 78u: goto L_0036856C;
    case 79u: goto L_0036857C;
    case 80u: goto L_0036858C;
    case 81u: goto L_0036859C;
    case 82u: goto L_003685AC;
    case 83u: goto L_003685C0;
    case 84u: goto L_003685D4;
    case 85u: goto L_003685F0;
    case 86u: goto L_00368630;
    case 87u: goto L_00368640;
    case 88u: goto L_00368650;
    case 89u: goto L_003686A0;
    case 90u: goto L_003686C8;
    case 91u: goto L_003686D8;
    case 92u: goto L_003686F0;
    case 93u: goto L_0036870C;
    case 94u: goto L_00368720;
    case 95u: goto L_00368738;
    case 96u: goto L_00368748;
    case 97u: goto L_00368754;
    case 98u: goto L_0036876C;
    case 99u: goto L_00368778;
    case 100u: goto L_00368784;
    case 101u: goto L_00368790;
    case 102u: goto L_003687A8;
    case 103u: goto L_003687B8;
    case 104u: goto L_003687C0;
    case 105u: goto L_003687D4;
    case 106u: goto L_003687E0;
    case 107u: goto L_003687EC;
    case 108u: goto L_00368800;
    case 109u: goto L_00368818;
    case 110u: goto L_00368828;
    case 111u: goto L_00368838;
    case 112u: goto L_00368840;
    case 113u: goto L_00368854;
    case 114u: goto L_00368860;
    case 115u: goto L_00368878;
    case 116u: goto L_00368884;
    case 117u: goto L_00368890;
    case 118u: goto L_003688A0;
    case 119u: goto L_003688C0;
    case 120u: goto L_003688D0;
    case 121u: goto L_003688E0;
    case 122u: goto L_003688EC;
    case 123u: goto L_00368904;
    case 124u: goto L_00368910;
    case 125u: goto L_00368928;
    case 126u: goto L_00368934;
    case 127u: goto L_00368940;
    case 128u: goto L_00368950;
    case 129u: goto L_00368970;
    case 130u: goto L_00368980;
    case 131u: goto L_00368990;
    case 132u: goto L_0036899C;
    case 133u: goto L_003689A8;
    case 134u: goto L_003689C0;
    case 135u: goto L_003689E0;
    case 136u: goto L_003689F0;
    case 137u: goto L_00368A08;
    case 138u: goto L_00368A38;
    case 139u: goto L_00368A68;
    case 140u: goto L_00368A98;
    case 141u: goto L_00368AC8;
    case 142u: goto L_00368AF8;
    case 143u: goto L_00368B28;
    case 144u: goto L_00368B58;
    case 145u: goto L_00368B88;
    case 146u: goto L_00368BB8;
    case 147u: goto L_00368BE8;
    case 148u: goto L_00368C18;
    case 149u: goto L_00368C30;
    case 150u: goto L_00368C50;
    case 151u: goto L_00368C70;
    case 152u: goto L_00368C8C;
    case 153u: goto L_00368C9C;
    case 154u: goto L_00368CB0;
    case 155u: goto L_00368CD0;
    case 156u: goto L_00368CE8;
    case 157u: goto L_00368CF8;
    case 158u: goto L_00368D04;
    case 159u: goto L_00368D10;
    case 160u: goto L_00368D20;
    case 161u: goto L_00368D40;
    case 162u: goto L_00368D50;
    case 163u: goto L_00368D60;
    case 164u: goto L_00368D6C;
    case 165u: goto L_00368D78;
    case 166u: goto L_00368D90;
    case 167u: goto L_00368DB0;
    case 168u: goto L_00368DC0;
    case 169u: goto L_00368DD0;
    case 170u: goto L_00368DDC;
    case 171u: goto L_00368DE8;
    case 172u: goto L_00368E00;
    case 173u: goto L_00368E18;
    case 174u: goto L_00368E28;
    case 175u: goto L_00368E34;
    case 176u: goto L_00368E40;
    case 177u: goto L_00368E50;
    case 178u: goto L_00368E68;
    case 179u: goto L_00368E78;
    case 180u: goto L_00368E84;
    case 181u: goto L_00368E90;
    case 182u: goto L_00368EA0;
    case 183u: goto L_00368EB8;
    case 184u: goto L_00368EC8;
    case 185u: goto L_00368ED4;
    case 186u: goto L_00368EE0;
    case 187u: goto L_00368EF0;
    case 188u: goto L_00368F08;
    case 189u: goto L_00368F18;
    case 190u: goto L_00368F24;
    case 191u: goto L_00368F30;
    case 192u: goto L_00368F40;
    case 193u: goto L_00368F60;
    case 194u: goto L_00368F74;
    case 195u: goto L_00368F7C;
    case 196u: goto L_00368FB0;
    case 197u: goto L_00368FE0;
    case 198u: goto L_00368FF8;
    case 199u: goto L_00369008;
    case 200u: goto L_00369014;
    case 201u: goto L_00369020;
    case 202u: goto L_00369030;
    case 203u: goto L_00369050;
    case 204u: goto L_00369060;
    case 205u: goto L_00369070;
    case 206u: goto L_0036907C;
    case 207u: goto L_00369088;
    case 208u: goto L_003690A0;
    case 209u: goto L_003690C0;
    case 210u: goto L_003690DC;
    case 211u: goto L_003690EC;
    case 212u: goto L_003690FC;
    case 213u: goto L_00369110;
    case 214u: goto L_00369128;
    case 215u: goto L_00369134;
    case 216u: goto L_00369148;
    case 217u: goto L_00369170;
    case 218u: goto L_00369188;
    case 219u: goto L_00369194;
    case 220u: goto L_003691A0;
    case 221u: goto L_003691B0;
    case 222u: goto L_003691C8;
    case 223u: goto L_003691D8;
    case 224u: goto L_003691E8;
    case 225u: goto L_003691F8;
    case 226u: goto L_00369210;
    case 227u: goto L_0036921C;
    case 228u: goto L_00369228;
    case 229u: goto L_00369240;
    case 230u: goto L_00369258;
    case 231u: goto L_00369268;
    case 232u: goto L_00369278;
    case 233u: goto L_00369288;
    case 234u: goto L_00369298;
    case 235u: goto L_003692A4;
    case 236u: goto L_003692B0;
    case 237u: goto L_003692C0;
    case 238u: goto L_003692E0;
    case 239u: goto L_003692F4;
    case 240u: goto L_003692FC;
    case 241u: goto L_00369330;
    case 242u: goto L_00369340;
    case 243u: goto L_0036935C;
    case 244u: goto L_0036936C;
    case 245u: goto L_0036938C;
    case 246u: goto L_003693A0;
    case 247u: goto L_003693B8;
    case 248u: goto L_003693C8;
    case 249u: goto L_003693D4;
    case 250u: goto L_003693E0;
    case 251u: goto L_003693F0;
    case 252u: goto L_00369410;
    case 253u: goto L_00369420;
    case 254u: goto L_00369430;
    case 255u: goto L_0036943C;
    case 256u: goto L_00369448;
    case 257u: goto L_00369460;
    case 258u: goto L_00369490;
    case 259u: goto L_003694A0;
    case 260u: goto L_003694B0;
    case 261u: goto L_003694C0;
    case 262u: goto L_003694D0;
    case 263u: goto L_003694DC;
    case 264u: goto L_003694E8;
    case 265u: goto L_00369500;
    case 266u: goto L_0036951C;
    case 267u: goto L_0036952C;
    case 268u: goto L_00369538;
    case 269u: goto L_00369550;
    case 270u: goto L_00369574;
    case 271u: goto L_00369580;
    case 272u: goto L_003695B0;
    case 273u: goto L_003695B8;
    case 274u: goto L_003695F0;
    case 275u: goto L_00369610;
    case 276u: goto L_0036963C;
    case 277u: goto L_00369664;
    case 278u: goto L_00369670;
    case 279u: goto L_00369694;
    case 280u: goto L_003696A0;
    case 281u: goto L_003696B4;
    case 282u: goto L_003696BC;
    case 283u: goto L_003696C8;
    case 284u: goto L_003696D4;
    case 285u: goto L_003696E0;
    case 286u: goto L_003696EC;
    case 287u: goto L_003696F8;
    case 288u: goto L_00369704;
    case 289u: goto L_00369740;
    case 290u: goto L_00369758;
    case 291u: goto L_00369768;
    case 292u: goto L_00369774;
    case 293u: goto L_00369780;
    case 294u: goto L_00369790;
    case 295u: goto L_003697B0;
    case 296u: goto L_003697C0;
    case 297u: goto L_003697D0;
    case 298u: goto L_003697DC;
    case 299u: goto L_003697E8;
    case 300u: goto L_00369800;
    case 301u: goto L_00369824;
    case 302u: goto L_00369834;
    case 303u: goto L_00369844;
    case 304u: goto L_00369854;
    case 305u: goto L_00369864;
    case 306u: goto L_0036986C;
    case 307u: goto L_00369880;
    case 308u: goto L_003698A4;
    case 309u: goto L_003698B0;
    case 310u: goto L_003698D0;
    case 311u: goto L_003698F0;
    case 312u: goto L_00369900;
    case 313u: goto L_00369910;
    case 314u: goto L_0036991C;
    case 315u: goto L_00369928;
    case 316u: goto L_00369940;
    case 317u: goto L_00369960;
    case 318u: goto L_00369970;
    case 319u: goto L_00369980;
    case 320u: goto L_0036998C;
    case 321u: goto L_00369998;
    case 322u: goto L_003699B0;
    case 323u: goto L_003699C8;
    case 324u: goto L_003699D4;
    case 325u: goto L_003699E0;
    case 326u: goto L_00369A0C;
    case 327u: goto L_00369A2C;
    case 328u: goto L_00369A40;
    case 329u: goto L_00369A50;
    case 330u: goto L_00369A70;
    case 331u: goto L_00369A88;
    case 332u: goto L_00369A98;
    case 333u: goto L_00369AAC;
    case 334u: goto L_00369AB8;
    case 335u: goto L_00369AC4;
    case 336u: goto L_00369AD0;
    case 337u: goto L_00369AE8;
    case 338u: goto L_00369AF8;
    case 339u: goto L_00369B0C;
    case 340u: goto L_00369B18;
    case 341u: goto L_00369B24;
    case 342u: goto L_00369B30;
    case 343u: goto L_00369B54;
    case 344u: goto L_00369B74;
    case 345u: goto L_00369C00;
    case 346u: goto L_00369C50;
    case 347u: goto L_00369C60;
    case 348u: goto L_00369C94;
    case 349u: goto L_00369CC8;
    case 350u: goto L_00369CD8;
    case 351u: goto L_00369CE0;
    case 352u: goto L_00369CF4;
    case 353u: goto L_00369D00;
    case 354u: goto L_00369D20;
    case 355u: goto L_00369D44;
    case 356u: goto L_00369D60;
    case 357u: goto L_00369D70;
    case 358u: goto L_00369D84;
    case 359u: goto L_00369D9C;
    case 360u: goto L_00369DB0;
    case 361u: goto L_00369DC4;
    case 362u: goto L_00369DD8;
    case 363u: goto L_00369DE0;
    case 364u: goto L_00369DF0;
    case 365u: goto L_00369E30;
    case 366u: goto L_00369E40;
    case 367u: goto L_00369E60;
    case 368u: goto L_00369E68;
    case 369u: goto L_00369E8C;
    case 370u: goto L_00369EA4;
    case 371u: goto L_00369EB4;
    case 372u: goto L_00369ED4;
    case 373u: goto L_00369EDC;
    case 374u: goto L_00369F00;
    case 375u: goto L_00369F14;
    case 376u: goto L_00369F38;
    case 377u: goto L_00369F5C;
    case 378u: goto L_00369F74;
    case 379u: goto L_00369F84;
    case 380u: goto L_00369FA4;
    case 381u: goto L_00369FAC;
    case 382u: goto L_00369FD0;
    case 383u: goto L_00369FE4;
    case 384u: goto L_0036A008;
    case 385u: goto L_0036A02C;
    case 386u: goto L_0036A05C;
    case 387u: goto L_0036A078;
    case 388u: goto L_0036A098;
    case 389u: goto L_0036A0A8;
    case 390u: goto L_0036A0CC;
    case 391u: goto L_0036A0D8;
    case 392u: goto L_0036A100;
    case 393u: goto L_0036A12C;
    case 394u: goto L_0036A140;
    case 395u: goto L_0036A17C;
    case 396u: goto L_0036A18C;
    case 397u: goto L_0036A1A0;
    case 398u: goto L_0036A1B8;
    case 399u: goto L_0036A1D0;
    case 400u: goto L_0036A1E8;
    case 401u: goto L_0036A200;
    case 402u: goto L_0036A208;
    case 403u: goto L_0036A210;
    case 404u: goto L_0036A220;
    case 405u: goto L_0036A228;
    case 406u: goto L_0036A258;
    case 407u: goto L_0036A260;
    case 408u: goto L_0036A2D4;
    case 409u: goto L_0036A2F4;
    case 410u: goto L_0036A304;
    case 411u: goto L_0036A30C;
    case 412u: goto L_0036A338;
    case 413u: goto L_0036A34C;
    case 414u: goto L_0036A36C;
    case 415u: goto L_0036A374;
    case 416u: goto L_0036A3B0;
    case 417u: goto L_0036A418;
    case 418u: goto L_0036A454;
    case 419u: goto L_0036A468;
    case 420u: goto L_0036A488;
    case 421u: goto L_0036A4B0;
    case 422u: goto L_0036A4D0;
    case 423u: goto L_0036A53C;
    case 424u: goto L_0036A55C;
    case 425u: goto L_0036A5F0;
    case 426u: goto L_0036A610;
    case 427u: goto L_0036A620;
    case 428u: goto L_0036A640;
    case 429u: goto L_0036A710;
    case 430u: goto L_0036A748;
    case 431u: goto L_0036A768;
    case 432u: goto L_0036A790;
    case 433u: goto L_0036A798;
    case 434u: goto L_0036A7AC;
    case 435u: goto L_0036A7C8;
    case 436u: goto L_0036A7DC;
    case 437u: goto L_0036A7F0;
    case 438u: goto L_0036A80C;
    case 439u: goto L_0036A844;
    case 440u: goto L_0036A874;
    case 441u: goto L_0036A87C;
    case 442u: goto L_0036A894;
    case 443u: goto L_0036A8C0;
    case 444u: goto L_0036A8D4;
    case 445u: goto L_0036A95C;
    case 446u: goto L_0036A98C;
    case 447u: goto L_0036A994;
    case 448u: goto L_0036A9D8;
    case 449u: goto L_0036A9E0;
    case 450u: goto L_0036A9E8;
    case 451u: goto L_0036A9F0;
    case 452u: goto L_0036AA0C;
    case 453u: goto L_0036AA1C;
    case 454u: goto L_0036AA24;
    case 455u: goto L_0036AA7C;
    case 456u: goto L_0036AB04;
    case 457u: goto L_0036AB40;
    case 458u: goto L_0036AB70;
    case 459u: goto L_0036AB9C;
    case 460u: goto L_0036ABBC;
    case 461u: goto L_0036AC04;
    case 462u: goto L_0036AC0C;
    case 463u: goto L_0036AC34;
    case 464u: goto L_0036AC44;
    case 465u: goto L_0036AC4C;
    case 466u: goto L_0036AC6C;
    case 467u: goto L_0036ACAC;
    case 468u: goto L_0036ACCC;
    case 469u: goto L_0036ACD4;
    case 470u: goto L_0036AD08;
    case 471u: goto L_0036AD10;
    case 472u: goto L_0036AD3C;
    case 473u: goto L_0036AD44;
    case 474u: goto L_0036AD70;
    case 475u: goto L_0036AD90;
    case 476u: goto L_0036ADE8;
    case 477u: goto L_0036AE7C;
    case 478u: goto L_0036AE90;
    case 479u: goto L_0036AEB0;
    case 480u: goto L_0036AED4;
    case 481u: goto L_0036AF00;
    case 482u: goto L_0036AF38;
    case 483u: goto L_0036AF40;
    case 484u: goto L_0036AF74;
    case 485u: goto L_0036AFA0;
    case 486u: goto L_0036AFC8;
    case 487u: goto L_0036AFE0;
    case 488u: goto L_0036B014;
    case 489u: goto L_0036B044;
    case 490u: goto L_0036B07C;
    case 491u: goto L_0036B090;
    case 492u: goto L_0036B0F8;
    case 493u: goto L_0036B10C;
    case 494u: goto L_0036B120;
    case 495u: goto L_0036B134;
    case 496u: goto L_0036B148;
    case 497u: goto L_0036B174;
    case 498u: goto L_0036B188;
    case 499u: goto L_0036B19C;
    case 500u: goto L_0036B1A8;
    case 501u: goto L_0036B1B8;
    case 502u: goto L_0036B1E8;
    case 503u: goto L_0036B210;
    case 504u: goto L_0036B230;
    case 505u: goto L_0036B260;
    case 506u: goto L_0036B274;
    case 507u: goto L_0036B288;
    case 508u: goto L_0036B2D0;
    case 509u: goto L_0036B2E0;
    case 510u: goto L_0036B2F0;
    case 511u: goto L_0036B2FC;
    case 512u: goto L_0036B370;
    case 513u: goto L_0036B380;
    case 514u: goto L_0036B394;
    case 515u: goto L_0036B3A4;
    case 516u: goto L_0036B3CC;
    case 517u: goto L_0036B3D4;
    case 518u: goto L_0036B434;
    case 519u: goto L_0036B440;
    case 520u: goto L_0036B448;
    case 521u: goto L_0036B4A8;
    case 522u: goto L_0036B4C8;
    case 523u: goto L_0036B540;
    case 524u: goto L_0036B54C;
    case 525u: goto L_0036B55C;
    case 526u: goto L_0036B578;
    case 527u: goto L_0036B590;
    case 528u: goto L_0036B5DC;
    case 529u: goto L_0036B638;
    case 530u: goto L_0036B64C;
    case 531u: goto L_0036B65C;
    case 532u: goto L_0036B670;
    case 533u: goto L_0036B69C;
    case 534u: goto L_0036B6C0;
    case 535u: goto L_0036B77C;
    case 536u: goto L_0036B78C;
    case 537u: goto L_0036B7C8;
    case 538u: goto L_0036B7D0;
    case 539u: goto L_0036B7D8;
    case 540u: goto L_0036B820;
    case 541u: goto L_0036B830;
    case 542u: goto L_0036B850;
    case 543u: goto L_0036B9B0;
    case 544u: goto L_0036B9E0;
    case 545u: goto L_0036BA10;
    case 546u: goto L_0036BA80;
    case 547u: goto L_0036BA90;
    case 548u: goto L_0036BA98;
    case 549u: goto L_0036BAA4;
    case 550u: goto L_0036BACC;
    case 551u: goto L_0036BAE0;
    case 552u: goto L_0036BAFC;
    case 553u: goto L_0036BB10;
    case 554u: goto L_0036BB20;
    case 555u: goto L_0036BB64;
    case 556u: goto L_0036BBB0;
    case 557u: goto L_0036BBB8;
    case 558u: goto L_0036BBCC;
    case 559u: goto L_0036BBE4;
    case 560u: goto L_0036BC00;
    case 561u: goto L_0036BC50;
    case 562u: goto L_0036BC7C;
    case 563u: goto L_0036BCBC;
    case 564u: goto L_0036BCD4;
    case 565u: goto L_0036BCF0;
    case 566u: goto L_0036BD14;
    case 567u: goto L_0036BD30;
    case 568u: goto L_0036BD40;
    case 569u: goto L_0036BD50;
    case 570u: goto L_0036BD74;
    case 571u: goto L_0036BD84;
    case 572u: goto L_0036BD98;
    case 573u: goto L_0036BDB0;
    case 574u: goto L_0036BDD0;
    case 575u: goto L_0036BDE4;
    case 576u: goto L_0036BDF8;
    case 577u: goto L_0036BE0C;
    case 578u: goto L_0036BE20;
    case 579u: goto L_0036BE54;
    case 580u: goto L_0036BE5C;
    case 581u: goto L_0036BE70;
    case 582u: goto L_0036BE84;
    case 583u: goto L_0036BE98;
    case 584u: goto L_0036BEAC;
    case 585u: goto L_0036BEC0;
    case 586u: goto L_0036BED4;
    case 587u: goto L_0036BEF0;
    case 588u: goto L_0036BEF8;
    case 589u: goto L_0036BF0C;
    case 590u: goto L_0036BF1C;
    case 591u: goto L_0036BF34;
    case 592u: goto L_0036BF3C;
    case 593u: goto L_0036BF50;
    case 594u: goto L_0036BF6C;
    case 595u: goto L_0036BFA0;
    case 596u: goto L_0036BFC0;
    case 597u: goto L_0036BFD0;
    case 598u: goto L_0036BFEC;
    case 599u: goto L_0036BFF4;
    default: bad_entry(c, 0x00368000u); return;
    }
L_00368000:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368018u); set32(c.r[5], 0u + 25614u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368018u) [[unlikely]] return; }
L_00368018:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368028u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368028u) [[unlikely]] return; }
L_00368028:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368038u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00368038u) [[unlikely]] return; }
L_00368038:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368044u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368044u) [[unlikely]] return; }
L_00368044:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368050u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368050u) [[unlikely]] return; }
L_00368050:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368080u); set32(c.r[5], 0u + 25615u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368080u) [[unlikely]] return; }
L_00368080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368090u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368090u) [[unlikely]] return; }
L_00368090:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680A0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003680A0u) [[unlikely]] return; }
L_003680A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680ACu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003680ACu) [[unlikely]] return; }
L_003680AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680B8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003680B8u) [[unlikely]] return; }
L_003680B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003680D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 704u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003680ECu); set32(c.r[4], c.r[2].w[0] + 4224u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003680ECu) [[unlikely]] return; }
L_003680EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368100u); set32(c.r[4], c.r[3].w[0] + 4864u);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00368100u) [[unlikely]] return; }
L_00368100:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368110u); set32(c.r[4], c.r[3].w[0] + 4872u);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00368110u) [[unlikely]] return; }
L_00368110:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368120:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 704u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036813Cu); set32(c.r[4], c.r[2].w[0] + 3520u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036813Cu) [[unlikely]] return; }
L_0036813C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368150u); set32(c.r[4], c.r[3].w[0] + 4160u);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00368150u) [[unlikely]] return; }
L_00368150:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368160u); set32(c.r[4], c.r[3].w[0] + 4168u);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00368160u) [[unlikely]] return; }
L_00368160:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368170:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 136u, depth); }
L_00368190:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 8152u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365880u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 134u, depth); }
L_003681B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681C8u); set32(c.r[5], 0u + 25857u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003681C8u) [[unlikely]] return; }
L_003681C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003681D8u) [[unlikely]] return; }
L_003681D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681E4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003681E4u) [[unlikely]] return; }
L_003681E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003681F0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003681F0u) [[unlikely]] return; }
L_003681F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368218u); set32(c.r[5], 0u + 25860u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368218u) [[unlikely]] return; }
L_00368218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368228u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368228u) [[unlikely]] return; }
L_00368228:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368238u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00368238u) [[unlikely]] return; }
L_00368238:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368244u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368244u) [[unlikely]] return; }
L_00368244:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368250u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368250u) [[unlikely]] return; }
L_00368250:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368260:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368278u); set32(c.r[5], 0u + 25860u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368278u) [[unlikely]] return; }
L_00368278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368288u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368288u) [[unlikely]] return; }
L_00368288:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368298u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00368298u) [[unlikely]] return; }
L_00368298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682A4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003682A4u) [[unlikely]] return; }
L_003682A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682B0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003682B0u) [[unlikely]] return; }
L_003682B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003682C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682D8u); set32(c.r[5], 0u + 25862u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003682D8u) [[unlikely]] return; }
L_003682D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682E8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003682E8u) [[unlikely]] return; }
L_003682E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003682F4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003682F4u) [[unlikely]] return; }
L_003682F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368300u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368300u) [[unlikely]] return; }
L_00368300:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368330u); set32(c.r[5], 0u + 25863u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368330u) [[unlikely]] return; }
L_00368330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368340u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368340u) [[unlikely]] return; }
L_00368340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368354u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00368354u) [[unlikely]] return; }
L_00368354:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368360u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368360u) [[unlikely]] return; }
L_00368360:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036836Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x0036836Cu) [[unlikely]] return; }
L_0036836C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368398u); set32(c.r[5], 0u + 26121u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368398u) [[unlikely]] return; }
L_00368398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003683A8u) [[unlikely]] return; }
L_003683A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24864u);
    set32(c.r[6], 0u + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003683BCu) [[unlikely]] return; }
L_003683BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24864u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683D4u); set32(c.r[5], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003683D4u) [[unlikely]] return; }
L_003683D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683E0u); set32(c.r[4], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003683E0u) [[unlikely]] return; }
L_003683E0:
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24870u);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003683F8u); set32(c.r[5], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x003683F8u) [[unlikely]] return; }
L_003683F8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368404u); set32(c.r[4], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00368404u) [[unlikely]] return; }
L_00368404:
    set32(c.r[2], c.r[2].w[0] + 6u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368420u); set32(c.r[5], c.r[2].w[0] + 24864u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00368420u) [[unlikely]] return; }
L_00368420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036842Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036842Cu) [[unlikely]] return; }
L_0036842C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368438u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368438u) [[unlikely]] return; }
L_00368438:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368468u); set32(c.r[5], 0u + 26124u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368468u) [[unlikely]] return; }
L_00368468:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368478u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368478u) [[unlikely]] return; }
L_00368478:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368484u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368484u) [[unlikely]] return; }
L_00368484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368490u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368490u) [[unlikely]] return; }
L_00368490:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003684A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 25936u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684B8u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003684B8u) [[unlikely]] return; }
L_003684B8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[3].w[0] - 32208u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684C8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003684C8u) [[unlikely]] return; }
L_003684C8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[3].w[0] - 32336u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684D8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003684D8u) [[unlikely]] return; }
L_003684D8:
    set32(c.r[4], c.r[28].w[0] - 25956u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684E4u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003684E4u) [[unlikely]] return; }
L_003684E4:
    set32(c.r[4], c.r[28].w[0] - 25944u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684F0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003684F0u) [[unlikely]] return; }
L_003684F0:
    set32(c.r[4], c.r[28].w[0] - 25948u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003684FCu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003684FCu) [[unlikely]] return; }
L_003684FC:
    set32(c.r[4], c.r[28].w[0] - 25952u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368508u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00368508u) [[unlikely]] return; }
L_00368508:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 32208u);
    c.r[7].d[0] = ld8((c.r[28].w[0] - 25956u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[8].d[0] = ld8((c.r[28].w[0] - 25944u));
    c.r[9].d[0] = ld8((c.r[28].w[0] - 25948u));
    c.r[10].d[0] = ld8((c.r[28].w[0] - 25952u));
    set32(c.r[4], c.r[28].w[0] - 25936u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368530u); set32(c.r[6], c.r[2].w[0] - 32336u);  if (depth < kMaxDepth) unit_0096(c, 50u, depth + 1u); else { c.pc = 0x00358A00u; return; } if (c.pc != 0x00368530u) [[unlikely]] return; }
L_00368530:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368540:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 5680u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036855Cu); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036855Cu) [[unlikely]] return; }
L_0036855C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 5678u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036856Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036856Cu) [[unlikely]] return; }
L_0036856C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 5676u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036857Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036857Cu) [[unlikely]] return; }
L_0036857C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 5674u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036858Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x0036858Cu) [[unlikely]] return; }
L_0036858C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 5673u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036859Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x0036859Cu) [[unlikely]] return; }
L_0036859C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 5672u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003685ACu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003685ACu) [[unlikely]] return; }
L_003685AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003685C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], 0u + 7u);
    set32(c.r[7], 0u + 930u);
    set32(c.r[8], 0u + 1085u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
L_003685D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 155u);
    set32(c.r[4], c.r[2].w[0] + c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[5], c.r[4].w[0] + 5517u);
    set32(c.r[4], c.r[2].w[0] + 5517u);
    c.budget -= 7;
L_003685F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003685F0u | kUnwind; return; } goto L_003685F0; } }
    set32(c.r[6], c.r[6].w[0] - 1u);
    set32(c.r[7], c.r[7].w[0] - 155u);
    c.budget -= 4;
    { const bool t = c.r[6].sd[0] > 0; set32(c.r[8], c.r[8].w[0] - 155u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003685D4u | kUnwind; return; } goto L_003685D4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368630u); set32(c.r[4], c.r[3].w[0] + 5518u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368630u) [[unlikely]] return; }
L_00368630:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368640u); set32(c.r[4], c.r[3].w[0] + 5526u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368640u) [[unlikely]] return; }
L_00368640:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368650u); set32(c.r[4], c.r[3].w[0] + 5544u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368650u) [[unlikely]] return; }
L_00368650:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5517u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5516u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5516u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[3].w[0] + 5516u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5516u));
    c.r[1].d[0] = c.r[3].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0036868C; } }
    set32(c.r[3], 0u + 8u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_0036868C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003686A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    st8((c.r[3].w[0] + 5347u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686C8u); set32(c.r[4], c.r[2].w[0] + 5348u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003686C8u) [[unlikely]] return; }
L_003686C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003686D8u); set32(c.r[4], c.r[3].w[0] + 5366u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003686D8u) [[unlikely]] return; }
L_003686D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003686F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036870Cu); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x0036870Cu) [[unlikely]] return; }
L_0036870C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25832u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368738u); set32(c.r[5], 0u + 26369u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368738u) [[unlikely]] return; }
L_00368738:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368748u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368748u) [[unlikely]] return; }
L_00368748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368754u); set32(c.r[4], c.r[2].w[0] - 32464u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00368754u) [[unlikely]] return; }
L_00368754:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036876Cu); set32(c.r[5], c.r[2].w[0] - 32464u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x0036876Cu) [[unlikely]] return; }
L_0036876C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368778u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368778u) [[unlikely]] return; }
L_00368778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368784u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368784u) [[unlikely]] return; }
L_00368784:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687A8u); set32(c.r[5], 0u + 26371u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003687A8u) [[unlikely]] return; }
L_003687A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687B8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003687B8u) [[unlikely]] return; }
L_003687B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687C0u); set32(c.r[4], c.r[28].w[0] - 25920u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003687C0u) [[unlikely]] return; }
L_003687C0:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687D4u); set32(c.r[5], c.r[28].w[0] - 25920u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x003687D4u) [[unlikely]] return; }
L_003687D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687E0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003687E0u) [[unlikely]] return; }
L_003687E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003687ECu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003687ECu) [[unlikely]] return; }
L_003687EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[4], c.r[28].w[0] - 25928u);
    set32(c.r[5], c.r[28].w[0] - 25920u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368818u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00368818u) [[unlikely]] return; }
L_00368818:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368828u); set32(c.r[5], 0u + 26372u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368828u) [[unlikely]] return; }
L_00368828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368838u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368838u) [[unlikely]] return; }
L_00368838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368840u); set32(c.r[4], c.r[28].w[0] - 25928u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00368840u) [[unlikely]] return; }
L_00368840:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368854u); set32(c.r[5], c.r[28].w[0] - 25928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00368854u) [[unlikely]] return; }
L_00368854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368860u); set32(c.r[4], c.r[2].w[0] - 32016u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00368860u) [[unlikely]] return; }
L_00368860:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368878u); set32(c.r[5], c.r[2].w[0] - 32016u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00368878u) [[unlikely]] return; }
L_00368878:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368884u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368884u) [[unlikely]] return; }
L_00368884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368890u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368890u) [[unlikely]] return; }
L_00368890:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003688A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688C0u); set32(c.r[5], 0u + 26374u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003688C0u) [[unlikely]] return; }
L_003688C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688D0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003688D0u) [[unlikely]] return; }
L_003688D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688E0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003688E0u) [[unlikely]] return; }
L_003688E0:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003688ECu); set32(c.r[4], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003688ECu) [[unlikely]] return; }
L_003688EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368904u); set32(c.r[5], c.r[3].w[0] + 640u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00368904u) [[unlikely]] return; }
L_00368904:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368910u); set32(c.r[4], c.r[2].w[0] + 5366u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00368910u) [[unlikely]] return; }
L_00368910:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368928u); set32(c.r[5], c.r[3].w[0] + 5366u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00368928u) [[unlikely]] return; }
L_00368928:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368934u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368934u) [[unlikely]] return; }
L_00368934:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368940u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368940u) [[unlikely]] return; }
L_00368940:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368970u); set32(c.r[5], 0u + 26376u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368970u) [[unlikely]] return; }
L_00368970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368980u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368980u) [[unlikely]] return; }
L_00368980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368990u); c.r[5].d[0] = c.r[16].d[0] & 255ull;  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00368990u) [[unlikely]] return; }
L_00368990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036899Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036899Cu) [[unlikely]] return; }
L_0036899C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003689A8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003689A8u) [[unlikely]] return; }
L_003689A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003689C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 5321u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365870u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 133u, depth); }
L_003689E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 25804u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365870u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 133u, depth); }
L_003689F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 31u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A08u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00368A08u) [[unlikely]] return; }
L_00368A08:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A38u); set32(c.r[4], c.r[2].w[0] + 1344u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368A38u) [[unlikely]] return; }
L_00368A38:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A68u); set32(c.r[4], c.r[2].w[0] + 1352u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368A68u) [[unlikely]] return; }
L_00368A68:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368A98u); set32(c.r[4], c.r[2].w[0] + 704u);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00368A98u) [[unlikely]] return; }
L_00368A98:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AC8u); set32(c.r[4], c.r[2].w[0] + 1370u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368AC8u) [[unlikely]] return; }
L_00368AC8:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368AF8u); set32(c.r[4], c.r[2].w[0] + 1372u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368AF8u) [[unlikely]] return; }
L_00368AF8:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B28u); set32(c.r[4], c.r[2].w[0] + 1374u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368B28u) [[unlikely]] return; }
L_00368B28:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B58u); set32(c.r[4], c.r[2].w[0] + 1376u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368B58u) [[unlikely]] return; }
L_00368B58:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368B88u); set32(c.r[4], c.r[2].w[0] + 1378u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368B88u) [[unlikely]] return; }
L_00368B88:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BB8u); set32(c.r[4], c.r[2].w[0] + 1400u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368BB8u) [[unlikely]] return; }
L_00368BB8:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368BE8u); set32(c.r[4], c.r[2].w[0] + 1402u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368BE8u) [[unlikely]] return; }
L_00368BE8:
    c.r[4].d[0] = ld8((c.r[29].w[0] + 31u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C18u); set32(c.r[4], c.r[2].w[0] + 1404u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00368C18u) [[unlikely]] return; }
L_00368C18:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368C30:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 4934u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365980u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 140u, depth); }
L_00368C50:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 5274u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 136u, depth); }
L_00368C70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C8Cu); set32(c.r[4], c.r[3].w[0] + 5334u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368C8Cu) [[unlikely]] return; }
L_00368C8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368C9Cu); set32(c.r[4], c.r[3].w[0] + 5342u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368C9Cu) [[unlikely]] return; }
L_00368C9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368CB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 5346u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365870u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 133u, depth); }
L_00368CD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CE8u); set32(c.r[5], 0u + 26897u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368CE8u) [[unlikely]] return; }
L_00368CE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368CF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368CF8u) [[unlikely]] return; }
L_00368CF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D04u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368D04u) [[unlikely]] return; }
L_00368D04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D10u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368D10u) [[unlikely]] return; }
L_00368D10:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368D20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D40u); set32(c.r[5], 0u + 26898u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368D40u) [[unlikely]] return; }
L_00368D40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D50u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368D50u) [[unlikely]] return; }
L_00368D50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D60u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00368D60u) [[unlikely]] return; }
L_00368D60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D6Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368D6Cu) [[unlikely]] return; }
L_00368D6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368D78u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368D78u) [[unlikely]] return; }
L_00368D78:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DB0u); set32(c.r[5], 0u + 26899u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368DB0u) [[unlikely]] return; }
L_00368DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368DC0u) [[unlikely]] return; }
L_00368DC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DD0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00368DD0u) [[unlikely]] return; }
L_00368DD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DDCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368DDCu) [[unlikely]] return; }
L_00368DDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368DE8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368DE8u) [[unlikely]] return; }
L_00368DE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00368E00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E18u); set32(c.r[5], 0u + 26900u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368E18u) [[unlikely]] return; }
L_00368E18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E28u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368E28u) [[unlikely]] return; }
L_00368E28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E34u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368E34u) [[unlikely]] return; }
L_00368E34:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E40u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368E40u) [[unlikely]] return; }
L_00368E40:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E68u); set32(c.r[5], 0u + 26901u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368E68u) [[unlikely]] return; }
L_00368E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368E78u) [[unlikely]] return; }
L_00368E78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E84u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368E84u) [[unlikely]] return; }
L_00368E84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368E90u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368E90u) [[unlikely]] return; }
L_00368E90:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368EA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EB8u); set32(c.r[5], 0u + 26902u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368EB8u) [[unlikely]] return; }
L_00368EB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368EC8u) [[unlikely]] return; }
L_00368EC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368ED4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368ED4u) [[unlikely]] return; }
L_00368ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368EE0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368EE0u) [[unlikely]] return; }
L_00368EE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368EF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F08u); set32(c.r[5], 0u + 26903u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368F08u) [[unlikely]] return; }
L_00368F08:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F18u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00368F18u) [[unlikely]] return; }
L_00368F18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F24u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00368F24u) [[unlikely]] return; }
L_00368F24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F30u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00368F30u) [[unlikely]] return; }
L_00368F30:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00368F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[28].w[0] - 26008u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00368F60u) [[unlikely]] return; }
L_00368F60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[3].w[0] - 6960u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00368F88; } }
L_00368F74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368F7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00368F7Cu) [[unlikely]] return; }
L_00368F7C:
    set32(c.r[17], c.r[17].w[0] + 64u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
L_00368F88:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26008u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00368F74u | kUnwind; return; } goto L_00368F74; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00368FB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[2].w[0] - 10032u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26012u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 10;
    { set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 136u, depth); }
L_00368FE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00368FF8u); set32(c.r[5], 0u + 26625u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00368FF8u) [[unlikely]] return; }
L_00368FF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369008u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369008u) [[unlikely]] return; }
L_00369008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369014u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00369014u) [[unlikely]] return; }
L_00369014:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369020u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369020u) [[unlikely]] return; }
L_00369020:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369050u); set32(c.r[5], 0u + 26626u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369050u) [[unlikely]] return; }
L_00369050:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369060u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369060u) [[unlikely]] return; }
L_00369060:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369070u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369070u) [[unlikely]] return; }
L_00369070:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036907Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036907Cu) [[unlikely]] return; }
L_0036907C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369088u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369088u) [[unlikely]] return; }
L_00369088:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003690A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 5209u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 136u, depth); }
L_003690C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690DCu); set32(c.r[4], c.r[3].w[0] + 8116u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x003690DCu) [[unlikely]] return; }
L_003690DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690ECu); set32(c.r[4], c.r[3].w[0] + 8120u);  if (depth < kMaxDepth) unit_0099(c, 135u, depth + 1u); else { c.pc = 0x003658A0u; return; } if (c.pc != 0x003690ECu) [[unlikely]] return; }
L_003690EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003690FCu); set32(c.r[4], c.r[3].w[0] + 8124u);  if (depth < kMaxDepth) unit_0099(c, 135u, depth + 1u); else { c.pc = 0x003658A0u; return; } if (c.pc != 0x003690FCu) [[unlikely]] return; }
L_003690FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369128u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00369128u) [[unlikely]] return; }
L_00369128:
    set32(c.r[4], c.r[29].w[0] + 28u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369134u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00369134u) [[unlikely]] return; }
L_00369134:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = ld16((c.r[29].w[0] + 28u));
    set32(c.r[4], ld32((c.r[3].w[0] + 8112u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369148u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 138u, depth + 1u); else { c.pc = 0x00365940u; return; } if (c.pc != 0x00369148u) [[unlikely]] return; }
L_00369148:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].d[0] = ld16((c.r[29].w[0] + 28u));
    set32(c.r[3], ld32((c.r[5].w[0] + 8112u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[5].w[0] + 8112u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369170:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 26016u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369188u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00369188u) [[unlikely]] return; }
L_00369188:
    set32(c.r[4], c.r[28].w[0] - 26020u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369194u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00369194u) [[unlikely]] return; }
L_00369194:
    set32(c.r[4], c.r[28].w[0] - 26024u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691A0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x003691A0u) [[unlikely]] return; }
L_003691A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003691B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691C8u); set32(c.r[5], 0u + 26721u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003691C8u) [[unlikely]] return; }
L_003691C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691D8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003691D8u) [[unlikely]] return; }
L_003691D8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 27272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691E8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003691E8u) [[unlikely]] return; }
L_003691E8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 27264u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003691F8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003691F8u) [[unlikely]] return; }
L_003691F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369210u); set32(c.r[5], c.r[3].w[0] + 5193u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00369210u) [[unlikely]] return; }
L_00369210:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036921Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036921Cu) [[unlikely]] return; }
L_0036921C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369228u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369228u) [[unlikely]] return; }
L_00369228:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369240:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369258u); set32(c.r[5], 0u + 26725u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369258u) [[unlikely]] return; }
L_00369258:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369268u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369268u) [[unlikely]] return; }
L_00369268:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26016u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369278u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369278u) [[unlikely]] return; }
L_00369278:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26020u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369288u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369288u) [[unlikely]] return; }
L_00369288:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 26024u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369298u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00369298u) [[unlikely]] return; }
L_00369298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692A4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003692A4u) [[unlikely]] return; }
L_003692A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692B0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003692B0u) [[unlikely]] return; }
L_003692B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003692C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[28].w[0] - 26032u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692E0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003692E0u) [[unlikely]] return; }
L_003692E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[3].w[0] - 10672u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00369308; } }
L_003692F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003692FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003692FCu) [[unlikely]] return; }
L_003692FC:
    set32(c.r[17], c.r[17].w[0] + 64u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
L_00369308:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26032u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003692F4u | kUnwind; return; } goto L_003692F4; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 26040u);
    c.budget -= 4;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365880u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 134u, depth); }
L_00369340:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[4], c.r[29].w[0] + 46u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036935Cu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036935Cu) [[unlikely]] return; }
L_0036935C:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 26044u));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036936Cu); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 463u, depth + 1u); else { c.pc = 0x00367410u; return; } if (c.pc != 0x0036936Cu) [[unlikely]] return; }
L_0036936C:
    set32(c.r[3], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 14512u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036938Cu); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x0036938Cu) [[unlikely]] return; }
L_0036938C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003693A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693B8u); set32(c.r[5], 0u + 26705u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003693B8u) [[unlikely]] return; }
L_003693B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003693C8u) [[unlikely]] return; }
L_003693C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693D4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003693D4u) [[unlikely]] return; }
L_003693D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003693E0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003693E0u) [[unlikely]] return; }
L_003693E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003693F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369410u); set32(c.r[5], 0u + 26706u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369410u) [[unlikely]] return; }
L_00369410:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369420u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369420u) [[unlikely]] return; }
L_00369420:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369430u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369430u) [[unlikely]] return; }
L_00369430:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036943Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036943Cu) [[unlikely]] return; }
L_0036943C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369448u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369448u) [[unlikely]] return; }
L_00369448:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369460:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[5], 0u + 26707u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369490u); mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369490u) [[unlikely]] return; }
L_00369490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694A0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003694A0u) [[unlikely]] return; }
L_003694A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694B0u); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003694B0u) [[unlikely]] return; }
L_003694B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694C0u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003694C0u) [[unlikely]] return; }
L_003694C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694D0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003694D0u) [[unlikely]] return; }
L_003694D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694DCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003694DCu) [[unlikely]] return; }
L_003694DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003694E8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003694E8u) [[unlikely]] return; }
L_003694E8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00369500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 14640u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036951Cu); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x0036951Cu) [[unlikely]] return; }
L_0036951C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 14576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036952Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x0036952Cu) [[unlikely]] return; }
L_0036952C:
    set32(c.r[4], c.r[28].w[0] - 26092u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369538u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00369538u) [[unlikely]] return; }
L_00369538:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 15408u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369574u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00369574u) [[unlikely]] return; }
L_00369574:
    set32(c.r[4], c.r[28].w[0] - 26096u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369580u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00369580u) [[unlikely]] return; }
L_00369580:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (t) { goto L_003695D8; } }
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[3].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[28].w[0] - 26104u);  if (t) { goto L_003695A8; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[28].w[0] - 26096u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[28].w[0] - 26104u);
    c.budget -= 3;
L_003695A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_003695C8; } }
L_003695B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003695B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003695B8u) [[unlikely]] return; }
L_003695B8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
L_003695C8:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26096u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003695B0u | kUnwind; return; } goto L_003695B0; } }
L_003695D8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003695F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 136u, depth); }
L_00369610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[2].w[0] - 16048u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26028u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 7);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036963Cu); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x0036963Cu) [[unlikely]] return; }
L_0036963C:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26028u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[3].w[0] - 19888u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369664u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00369664u) [[unlikely]] return; }
L_00369664:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369670:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 20656u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369694u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00369694u) [[unlikely]] return; }
L_00369694:
    set32(c.r[4], c.r[28].w[0] - 26116u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696A0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003696A0u) [[unlikely]] return; }
L_003696A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[3].w[0] - 27424u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00369710; } }
L_003696B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003696BCu) [[unlikely]] return; }
L_003696BC:
    set32(c.r[4], c.r[17].w[0] + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696C8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003696C8u) [[unlikely]] return; }
L_003696C8:
    set32(c.r[4], c.r[17].w[0] + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696D4u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003696D4u) [[unlikely]] return; }
L_003696D4:
    set32(c.r[4], c.r[17].w[0] + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696E0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x003696E0u) [[unlikely]] return; }
L_003696E0:
    set32(c.r[4], c.r[17].w[0] + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696ECu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003696ECu) [[unlikely]] return; }
L_003696EC:
    set32(c.r[4], c.r[17].w[0] + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003696F8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003696F8u) [[unlikely]] return; }
L_003696F8:
    set32(c.r[4], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369704u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00369704u) [[unlikely]] return; }
L_00369704:
    set32(c.r[17], c.r[17].w[0] + 520u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 3;
L_00369710:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003696B4u | kUnwind; return; } goto L_003696B4; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00369740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369758u); set32(c.r[5], 0u + 26640u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369758u) [[unlikely]] return; }
L_00369758:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369768u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369768u) [[unlikely]] return; }
L_00369768:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369774u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00369774u) [[unlikely]] return; }
L_00369774:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369780u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369780u) [[unlikely]] return; }
L_00369780:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003697B0u); set32(c.r[5], 0u + 26641u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003697B0u) [[unlikely]] return; }
L_003697B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003697C0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003697C0u) [[unlikely]] return; }
L_003697C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003697D0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003697D0u) [[unlikely]] return; }
L_003697D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003697DCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003697DCu) [[unlikely]] return; }
L_003697DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003697E8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003697E8u) [[unlikely]] return; }
L_003697E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369800:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369824u); set32(c.r[5], 0u + 26642u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369824u) [[unlikely]] return; }
L_00369824:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369834u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369834u) [[unlikely]] return; }
L_00369834:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369844u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369844u) [[unlikely]] return; }
L_00369844:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369854u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369854u) [[unlikely]] return; }
L_00369854:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[2].w[0] - 27424u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00369888; } }
L_00369864:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036986Cu); set32(c.r[4], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036986Cu) [[unlikely]] return; }
L_0036986C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369880u); set32(c.r[5], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00369880u) [[unlikely]] return; }
L_00369880:
    set32(c.r[17], c.r[17].w[0] + 520u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_00369888:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26116u));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00369864u | kUnwind; return; } goto L_00369864; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698A4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003698A4u) [[unlikely]] return; }
L_003698A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698B0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003698B0u) [[unlikely]] return; }
L_003698B0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003698D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003698F0u); set32(c.r[5], 0u + 26643u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003698F0u) [[unlikely]] return; }
L_003698F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369900u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369900u) [[unlikely]] return; }
L_00369900:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369910u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369910u) [[unlikely]] return; }
L_00369910:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036991Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036991Cu) [[unlikely]] return; }
L_0036991C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369928u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369928u) [[unlikely]] return; }
L_00369928:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369960u); set32(c.r[5], 0u + 26644u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369960u) [[unlikely]] return; }
L_00369960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369970u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369970u) [[unlikely]] return; }
L_00369970:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369980u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00369980u) [[unlikely]] return; }
L_00369980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036998Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036998Cu) [[unlikely]] return; }
L_0036998C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369998u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369998u) [[unlikely]] return; }
L_00369998:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003699B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 26128u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699C8u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003699C8u) [[unlikely]] return; }
L_003699C8:
    set32(c.r[4], c.r[28].w[0] - 26136u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003699D4u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003699D4u) [[unlikely]] return; }
L_003699D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003699E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[16].d[0] = c.r[4].d[0] & 255ull;
    set32(c.r[2], c.r[2].w[0] - 28704u);
    set32(c.r[3], c.r[16].w[0] << 7);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A0Cu); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00369A0Cu) [[unlikely]] return; }
L_00369A0C:
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[3], c.r[3].w[0] + 29152u);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A2Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00369A2Cu) [[unlikely]] return; }
L_00369A2C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369A40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369A50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } [[clang::musttail]] return unit_0099(c, 136u, depth); }
L_00369A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A88u); set32(c.r[5], 0u + 26656u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369A88u) [[unlikely]] return; }
L_00369A88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369A98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369A98u) [[unlikely]] return; }
L_00369A98:
    set32(c.r[5], ld32((c.r[28].w[0] - 27260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AACu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00369AACu) [[unlikely]] return; }
L_00369AAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AB8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00369AB8u) [[unlikely]] return; }
L_00369AB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AC4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369AC4u) [[unlikely]] return; }
L_00369AC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369AD0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AE8u); set32(c.r[5], 0u + 26659u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00369AE8u) [[unlikely]] return; }
L_00369AE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369AF8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00369AF8u) [[unlikely]] return; }
L_00369AF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[5], c.r[28].w[0] - 26128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B0Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00369B0Cu) [[unlikely]] return; }
L_00369B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B18u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00369B18u) [[unlikely]] return; }
L_00369B18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B24u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00369B24u) [[unlikely]] return; }
L_00369B24:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 25504u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B54u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369B54u) [[unlikely]] return; }
L_00369B54:
    set32(c.r[3], c.r[28].w[0] - 24944u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], c.r[2].w[0] - 25504u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369B74u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369B74u) [[unlikely]] return; }
L_00369B74:
    set32(c.r[3], c.r[28].w[0] - 24944u);
    st32((c.r[2].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 112u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2F00000u);
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[3].w[0];
    c.budget -= 14;
    { const bool t = c.r[16].sd[0] < 0; set32(c.r[4], c.r[16].w[0] >> 1);  if (t) { goto L_00369BBC; } }
    c.f[0] = c.r[16].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00369BD4; } }
    set32(c.r[4], c.r[16].w[0] >> 1);
    c.budget -= 1;
L_00369BBC:
    c.r[3].d[0] = c.r[16].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_00369BD4:
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[28].w[0] - 24944u), 0u);
    st32((c.r[28].w[0] - 24940u), c.f[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00369C00:
    c.f[1] = ld32((c.r[28].w[0] - 24944u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00369C44; } }
    c.f[0] = ld32((c.r[28].w[0] - 24940u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[28].w[0] - 24944u), c.f[0]);  if (t) { goto L_00369C44; } }
    st32((c.r[28].w[0] - 24944u), c.r[3].w[0]);
    c.budget -= 1;
L_00369C44:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00369C50:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 24944u), c.r[3].w[0]);  c.pc = t; return; }
L_00369C60:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43480000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = ld32((c.r[16].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00369C9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369C94u);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x00369C94u) [[unlikely]] return; }
L_00369C94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00369D48; } }
L_00369C9C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00369D44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CC8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369CC8u) [[unlikely]] return; }
L_00369CC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CD8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00369CD8u) [[unlikely]] return; }
L_00369CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CE0u); c.f[12] = ld32((c.r[16].w[0]));  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x00369CE0u) [[unlikely]] return; }
L_00369CE0:
    c.r[6].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369CF4u); set32(c.r[5], c.r[2].w[0] - 23848u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x00369CF4u) [[unlikely]] return; }
L_00369CF4:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D00u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00369D00u) [[unlikely]] return; }
L_00369D00:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19600u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19604u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D20u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369D20u) [[unlikely]] return; }
L_00369D20:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19608u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19612u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D44u); set32(c.r[4], c.r[2].w[0] - 23840u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369D44u) [[unlikely]] return; }
L_00369D44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00369D48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00369D60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D70u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x00369D70u) [[unlikely]] return; }
L_00369D70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 25104u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D84u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369D84u) [[unlikely]] return; }
L_00369D84:
    set32(c.r[4], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369D9Cu); set32(c.r[5], 0u + 73u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369D9Cu) [[unlikely]] return; }
L_00369D9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369DB0u) [[unlikely]] return; }
L_00369DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DC4u); set32(c.r[5], 0u + 76u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369DC4u) [[unlikely]] return; }
L_00369DC4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DD8u); set32(c.r[5], 0u + 77u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x00369DD8u) [[unlikely]] return; }
L_00369DD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369DE0u);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x00369DE0u) [[unlikely]] return; }
L_00369DE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00369DF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 6;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);  goto L_0036A10C; }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0036A034; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00369E28; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036A130; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00369E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E30u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369E30u) [[unlikely]] return; }
L_00369E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6640u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E40u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00369E40u) [[unlikely]] return; }
L_00369E40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19624u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E60u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369E60u) [[unlikely]] return; }
L_00369E60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E68u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369E68u) [[unlikely]] return; }
L_00369E68:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19628u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369E8Cu); set32(c.r[4], c.r[2].w[0] - 6704u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369E8Cu) [[unlikely]] return; }
L_00369E8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6632u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00369F0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EA4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369EA4u) [[unlikely]] return; }
L_00369EA4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6632u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EB4u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00369EB4u) [[unlikely]] return; }
L_00369EB4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19632u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369ED4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369ED4u) [[unlikely]] return; }
L_00369ED4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369EDCu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369EDCu) [[unlikely]] return; }
L_00369EDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19636u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F00u); set32(c.r[4], c.r[2].w[0] - 6686u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369F00u) [[unlikely]] return; }
L_00369F00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00369F5C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00369F0C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F14u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369F14u) [[unlikely]] return; }
L_00369F14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19632u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F38u); set32(c.r[4], c.r[2].w[0] - 23832u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369F38u) [[unlikely]] return; }
L_00369F38:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19636u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F5Cu); set32(c.r[4], c.r[2].w[0] - 23832u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369F5Cu) [[unlikely]] return; }
L_00369F5C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6624u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00369FDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F74u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369F74u) [[unlikely]] return; }
L_00369F74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6624u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369F84u); set32(c.r[5], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x00369F84u) [[unlikely]] return; }
L_00369F84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19640u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FA4u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369FA4u) [[unlikely]] return; }
L_00369FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FACu); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369FACu) [[unlikely]] return; }
L_00369FAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19644u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FD0u); set32(c.r[4], c.r[2].w[0] - 6668u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x00369FD0u) [[unlikely]] return; }
L_00369FD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A12C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00369FDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00369FE4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00369FE4u) [[unlikely]] return; }
L_00369FE4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19616u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19640u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A008u); set32(c.r[4], c.r[2].w[0] - 23832u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036A008u) [[unlikely]] return; }
L_0036A008:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19620u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19644u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A02Cu); set32(c.r[4], c.r[2].w[0] - 23832u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036A02Cu) [[unlikely]] return; }
L_0036A02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A12C; } }
L_0036A034:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A0A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A05Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036A05Cu) [[unlikely]] return; }
L_0036A05C:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A078u); set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0096(c, 45u, depth + 1u); else { c.pc = 0x003586F0u; return; } if (c.pc != 0x0036A078u) [[unlikely]] return; }
L_0036A078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43060000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A098u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036A098u) [[unlikely]] return; }
L_0036A098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 3u);  if (t) { goto L_0036A0D0; } }
L_0036A0A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0A8u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036A0A8u) [[unlikely]] return; }
L_0036A0A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43060000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0CCu); set32(c.r[4], c.r[2].w[0] - 23832u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036A0CCu) [[unlikely]] return; }
L_0036A0CC:
    set32(c.r[4], 0u + 3u);
    c.budget -= 1;
L_0036A0D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A0D8u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036A0D8u) [[unlikely]] return; }
L_0036A0D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43880000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A100u); set32(c.r[4], c.r[2].w[0] - 6608u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036A100u) [[unlikely]] return; }
L_0036A100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A12C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D00000u);
    c.budget -= 1;
L_0036A10C:
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42A80000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A12Cu); set32(c.r[4], c.r[2].w[0] - 10032u);  if (depth < kMaxDepth) unit_0099(c, 110u, depth + 1u); else { c.pc = 0x003655A0u; return; } if (c.pc != 0x0036A12Cu) [[unlikely]] return; }
L_0036A12C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036A130:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036A140:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0036A398; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 23824u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036A17C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A18Cu); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036A18Cu) [[unlikely]] return; }
L_0036A18C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 25104u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1A0u); set32(c.r[5], 0u + 63u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A1A0u) [[unlikely]] return; }
L_0036A1A0:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 23632u);
    set32(c.r[5], 0u + 34u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1B8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A1B8u) [[unlikely]] return; }
L_0036A1B8:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 22976u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1D0u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A1D0u) [[unlikely]] return; }
L_0036A1D0:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 22976u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A1E8u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A1E8u) [[unlikely]] return; }
L_0036A1E8:
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 23344u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A200u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A200u) [[unlikely]] return; }
L_0036A200:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A208u); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036A208u) [[unlikely]] return; }
L_0036A208:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A394; } }
L_0036A210:
    set32(c.r[5], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A220u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0036A220u) [[unlikely]] return; }
L_0036A220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A228u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036A228u) [[unlikely]] return; }
L_0036A228:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A394; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A258u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036A258u) [[unlikely]] return; }
L_0036A258:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A394; } }
L_0036A260:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036A394; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[3], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A2BC; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_0036A394; } }
L_0036A2BC:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036A394; } }
L_0036A2D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0036A394; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036A394; } }
L_0036A2F4:
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[16].w[0] + 9u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A304u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0036A304u) [[unlikely]] return; }
L_0036A304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A30Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036A30Cu) [[unlikely]] return; }
L_0036A30C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0036A344; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A338u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036A338u) [[unlikely]] return; }
L_0036A338:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A394; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0036A344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A34Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036A34Cu) [[unlikely]] return; }
L_0036A34C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A394; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A36Cu); st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036A36Cu) [[unlikely]] return; }
L_0036A36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A394; } }
L_0036A374:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036A394; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));  if (t) { goto L_0036A398; } }
L_0036A394:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0036A398:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036A3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 4u);
    c.budget -= 9;
    { const bool t = c.r[6].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0036A49C; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0036A470; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0036A418; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0036A418; } }
    c.budget -= 2;
    if (c.r[6].d[0] == 0ull) { set32(c.r[2], c.r[6].w[0] + 1u);  goto L_0036A40C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0036A4C0; } }
    set32(c.r[2], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0036A40C:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A418u); st32((c.r[17].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036A418u) [[unlikely]] return; }
L_0036A418:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 23800u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0036A460; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A454u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036A454u) [[unlikely]] return; }
L_0036A454:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A4BC; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0036A460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A468u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036A468u) [[unlikely]] return; }
L_0036A468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A4BC; } }
L_0036A470:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0036A494; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A488u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036A488u) [[unlikely]] return; }
L_0036A488:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A4BC; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0036A494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036A4BC; } }
L_0036A49C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A4B8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A4B0u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036A4B0u) [[unlikely]] return; }
L_0036A4B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A4BC; } }
L_0036A4B8:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036A4BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036A4C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036A4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[8], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[8].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0036A618; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036A5A0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036A53C; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036A520; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0036A624; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036A520:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F860000u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A53Cu); st32((c.r[17].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036A53Cu) [[unlikely]] return; }
L_0036A53C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036A620; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A55Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036A55Cu) [[unlikely]] return; }
L_0036A55C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[5].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 23776u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 23772u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[4].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[4].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 36u), c.f[0]);  if (t) { goto L_0036A620; } }
L_0036A5A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[6], c.r[3].w[0] - 23776u);
    c.r[7].d[0] = ld8((c.r[16].w[0] + 9u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[3].w[0] - 23772u);
    set32(c.r[3], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[6].d[0] = ld8((c.r[16].w[0] + 9u));
    set32(c.r[3], 0u + 4u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 18;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0036A5F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A5F0u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[8].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036A5F0u) [[unlikely]] return; }
L_0036A5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A620; } }
L_0036A5F8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_0036A608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036A620; } }
L_0036A608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A610u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036A610u) [[unlikely]] return; }
L_0036A610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A620; } }
L_0036A618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A620u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036A620u) [[unlikely]] return; }
L_0036A620:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036A624:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036A640:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], ld32((c.r[4].w[0] + 28u)));  if (t) { goto L_0036A6F4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0036A6B8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0036A690; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 1u);  if (t) { goto L_0036A67C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036A704; } }
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0036A67C:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC2A00000u);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 5;
L_0036A690:
    c.r[5].d[0] = ld8((c.r[7].w[0] + 12u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0036A704; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036A704; } }
L_0036A6B8:
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[0] = c.r[3].w[0];
    c.f[2] = 0u;
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 36u), c.f[0]);  if (t) { goto L_0036A704; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), 0u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[7].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0036A704; } }
L_0036A6F4:
    c.r[3].d[0] = ld8((c.r[7].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036A704; } }
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036A704:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036A710:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 2u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036AD70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 23728u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036A748:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6608u);
    set32(c.r[6], 0u + 18u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A768u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036A768u) [[unlikely]] return; }
L_0036A768:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6608u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A790u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0036A790u) [[unlikely]] return; }
L_0036A790:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A798u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036A798u) [[unlikely]] return; }
L_0036A798:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 25104u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7ACu); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A7ACu) [[unlikely]] return; }
L_0036A7AC:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7C8u); set32(c.r[5], 0u + 61u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A7C8u) [[unlikely]] return; }
L_0036A7C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7DCu); set32(c.r[5], 0u + 62u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A7DCu) [[unlikely]] return; }
L_0036A7DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 21104u);
    set32(c.r[5], 0u + 37u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A7F0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A7F0u) [[unlikely]] return; }
L_0036A7F0:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 21104u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A80Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A80Cu) [[unlikely]] return; }
L_0036A80C:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25784u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036A830; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26000u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A86C; } }
L_0036A830:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A844u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036A844u) [[unlikely]] return; }
L_0036A844:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC3280000u);
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC33C0000u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 112u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 116u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 120u), c.r[3].w[0]);
    c.budget -= 10;
L_0036A86C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A874u);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036A874u) [[unlikely]] return; }
L_0036A874:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0036AD74; } }
L_0036A87C:
    set32(c.r[6], 0u + 2u);
    set32(c.r[4], c.r[16].w[0] + 8u);
    set32(c.r[5], c.r[16].w[0] + 9u);
    set32(c.r[8], c.r[28].w[0] - 27256u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A894u); mmi::paddub(c.r[7], c.r[6], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 337u, depth + 1u); else { c.pc = 0x00377B70u; return; } if (c.pc != 0x0036A894u) [[unlikely]] return; }
L_0036A894:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25784u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036A8B4; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26000u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A8B8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036A8B4:
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0036A8B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8C0u);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036A8C0u) [[unlikely]] return; }
L_0036A8C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036A954; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A8D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036A8D4u) [[unlikely]] return; }
L_0036A8D4:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036A900; } }
    c.r[4].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
L_0036A900:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036A924; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036A924; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036AD70; } }
L_0036A924:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6608u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036A948; } }
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036AD70; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0036A948:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036AD70; } }
L_0036A954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A95Cu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036A95Cu) [[unlikely]] return; }
L_0036A95C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD70; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25784u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036AD70; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26000u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD70; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A98Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036A98Cu) [[unlikely]] return; }
L_0036A98C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0036AD74; } }
L_0036A994:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 2u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[6], c.r[2].w[0] - 6608u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[8], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9D8u); st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x0036A9D8u) [[unlikely]] return; }
L_0036A9D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9E0u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x0036A9E0u) [[unlikely]] return; }
L_0036A9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036A9E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036A9F0u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x0036A9F0u) [[unlikely]] return; }
L_0036A9F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD70; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA0Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036AA0Cu) [[unlikely]] return; }
L_0036AA0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AA1Cu); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_0095(c, 189u, depth + 1u); else { c.pc = 0x00355B70u; return; } if (c.pc != 0x0036AA1Cu) [[unlikely]] return; }
L_0036AA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036AA24:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0036AA5C; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_0036AA48; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0036AA48:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
L_0036AA5C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0036AD74; } }
L_0036AA7C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0036AB48; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0036AB0C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036AACC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_0036AAB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0036AAB8:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
L_0036AACC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 152u);
    set32(c.r[4], 0u + 18u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB04u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0036AB04u) [[unlikely]] return; }
L_0036AB04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036AB0C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 18u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AB40u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036AB40u) [[unlikely]] return; }
L_0036AB40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036AB48:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036AD70; } }
L_0036AB70:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0036AD70; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 23760u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00368000u < 16384u) { entry = entries_009A[(t - 0x00368000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0036AB9C:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
L_0036ABBC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 32u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[16].w[0] + 11u);
    set32(c.r[4], 0u + 19u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC04u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x0036AC04u) [[unlikely]] return; }
L_0036AC04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036AC0C:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
L_0036AC34:
    set32(c.r[4], c.r[16].w[0] + 11u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC44u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 319u, depth + 1u); else { c.pc = 0x00377620u; return; } if (c.pc != 0x0036AC44u) [[unlikely]] return; }
L_0036AC44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC4Cu);  if (depth < kMaxDepth) unit_009E(c, 18u, depth + 1u); else { c.pc = 0x003782D0u; return; } if (c.pc != 0x0036AC4Cu) [[unlikely]] return; }
L_0036AC4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036ACA4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AC6Cu); st8((c.r[2].w[0] + 5511u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036AC6Cu) [[unlikely]] return; }
L_0036AC6C:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 11u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0036AC94; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0036AC94:
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0036AD70; } }
L_0036ACA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACACu);  if (depth < kMaxDepth) unit_009E(c, 19u, depth + 1u); else { c.pc = 0x00378310u; return; } if (c.pc != 0x0036ACACu) [[unlikely]] return; }
L_0036ACAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AD70; } }
    set32(c.r[2], 0u + 6u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ACCCu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036ACCCu) [[unlikely]] return; }
L_0036ACCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036ACD4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 3u));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 19u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD08u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036AD08u) [[unlikely]] return; }
L_0036AD08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AD70; } }
L_0036AD10:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 6608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD3Cu); set32(c.r[4], c.r[3].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0036AD3Cu) [[unlikely]] return; }
L_0036AD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0036AD74; } }
L_0036AD44:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036AD70; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], 0u + 19u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AD70u); st8((c.r[16].w[0] + 3u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0036AD70u) [[unlikely]] return; }
L_0036AD70:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0036AD74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036AD90:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0036AEC0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036AE98; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036ADE8; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036ADE0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0036AEE4; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036ADE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036ADE8u); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036ADE8u) [[unlikely]] return; }
L_0036ADE8:
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AE10; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036AE5C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036AE5C; } }
L_0036AE10:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036AE24; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[17].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_0036AE24:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[2].w[0] + 19648u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19652u);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[16].w[0] + 8u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.budget -= 14;
L_0036AE5C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0036AE88; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036AE7Cu) [[unlikely]] return; }
L_0036AE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AEE0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0036AE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AE90u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036AE90u) [[unlikely]] return; }
L_0036AE90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AEE0; } }
L_0036AE98:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 12u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_0036AEB8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AEB0u);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036AEB0u) [[unlikely]] return; }
L_0036AEB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AEE0; } }
L_0036AEB8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036AEE0; } }
L_0036AEC0:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036AEDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AED4u);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036AED4u) [[unlikely]] return; }
L_0036AED4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036AEE0; } }
L_0036AEDC:
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036AEE0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036AEE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036AF00:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 666u)));
    c.r[2].d[0] = c.r[17].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036AF28; } }
    set32(c.r[17], 0u + 14u);
    c.budget -= 1;
L_0036AF28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF38u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036AF38u) [[unlikely]] return; }
L_0036AF38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036AF40u) [[unlikely]] return; }
L_0036AF40:
    c.r[2].d[0] = c.r[17].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x436C0000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19664u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AF74u); c.f[13] = ld32((c.r[28].w[0] - 27252u));  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036AF74u) [[unlikely]] return; }
L_0036AF74:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);  if (t) { goto L_0036AFAC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[14] = c.r[2].w[0];
    c.f[13] = ld32((c.r[28].w[0] - 27252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A60000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AFA0u); set32(c.r[4], c.r[2].w[0] - 23576u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036AFA0u) [[unlikely]] return; }
L_0036AFA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0036AFCC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.budget -= 1;
L_0036AFAC:
    c.f[14] = c.r[2].w[0];
    c.f[13] = ld32((c.r[28].w[0] - 27252u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A60000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036AFC8u); set32(c.r[4], c.r[2].w[0] - 23568u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036AFC8u) [[unlikely]] return; }
L_0036AFC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036AFCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036AFE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] + 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[6], c.r[2].w[0] - 20736u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[16], c.r[3].w[0] - 1u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B014u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B014u) [[unlikely]] return; }
L_0036B014:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 23560u);
    set32(c.r[3], c.r[16].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[4], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B044u); set32(c.r[6], c.r[2].w[0] + 26960u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B044u) [[unlikely]] return; }
L_0036B044:
    st32((c.r[2].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42B80000u);
    st32((c.r[2].w[0] + 36u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42480000u);
    st32((c.r[2].w[0] + 40u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.r[4].d[0] = c.r[16].d[0] << 56;
    c.f[14] = c.r[2].w[0];
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 666u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B07Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_009D(c, 292u, depth + 1u); else { c.pc = 0x00376DA0u; return; } if (c.pc != 0x0036B07Cu) [[unlikely]] return; }
L_0036B07C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036B090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036B290; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0036B1B0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_0036B0CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0036B2B8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0036B0CC:
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5247u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st8((c.r[16].w[0] + 8u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5247u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B0F8u); st8((c.r[16].w[0] + 9u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036B0F8u) [[unlikely]] return; }
L_0036B0F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B10Cu); set32(c.r[5], 0u + 46u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B10Cu) [[unlikely]] return; }
L_0036B10C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B120u); set32(c.r[5], 0u + 47u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B120u) [[unlikely]] return; }
L_0036B120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B134u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B134u) [[unlikely]] return; }
L_0036B134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 19584u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B148u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B148u) [[unlikely]] return; }
L_0036B148:
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    st32((c.r[2].w[0] + 28u), c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26092u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 19760u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B174u); set32(c.r[5], 0u + 48u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B174u) [[unlikely]] return; }
L_0036B174:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B188u); set32(c.r[5], 0u + 49u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B188u) [[unlikely]] return; }
L_0036B188:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 19056u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B19Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B19Cu) [[unlikely]] return; }
L_0036B19C:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1A8u); st32((c.r[2].w[0] + 28u), c.r[16].w[0]);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036B1A8u) [[unlikely]] return; }
L_0036B1A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B2B4; } }
L_0036B1B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1B8u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0036B1B8u) [[unlikely]] return; }
L_0036B1B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B2B4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 8u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 9u);  if (t) { goto L_0036B1DC; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26092u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B1E8; } }
    set32(c.r[4], c.r[16].w[0] + 9u);
    c.budget -= 1;
L_0036B1DC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B1E8u); set32(c.r[6], 0u + 2u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0036B1E8u) [[unlikely]] return; }
L_0036B1E8:
    c.r[2].d[0] = ld8((c.r[16].w[0] + 9u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[16].w[0] + 8u);  if (t) { goto L_0036B204; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26092u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B210; } }
    set32(c.r[4], c.r[16].w[0] + 8u);
    c.budget -= 1;
L_0036B204:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B210u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0036B210u) [[unlikely]] return; }
L_0036B210:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 9u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 32u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B230u); st8((c.r[2].w[0] + 5247u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036B230u) [[unlikely]] return; }
L_0036B230:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0036B26C; } }
    c.r[5].d[0] = ld8((c.r[16].w[0] + 2u));
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 2u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 12u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B260u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036B260u) [[unlikely]] return; }
L_0036B260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B2B4; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0036B26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B274u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0036B274u) [[unlikely]] return; }
L_0036B274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B2B4; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B288u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0036B288u) [[unlikely]] return; }
L_0036B288:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0036B2B8; } }
L_0036B290:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0])));
    c.budget -= 6;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0036B2B4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = ld8((c.r[2].w[0] + 5247u));  if (t) { goto L_0036B2B8; } }
L_0036B2B4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0036B2B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036B2D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B2E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036B2E0u) [[unlikely]] return; }
L_0036B2E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B2F0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036B2F0u) [[unlikely]] return; }
L_0036B2F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B2FCu); set32(c.r[4], c.r[2].w[0] - 14640u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036B2FCu) [[unlikely]] return; }
L_0036B2FC:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] >> 1);  if (t) { goto L_0036B320; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0036B338; } }
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.budget -= 1;
L_0036B320:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0036B338:
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x432C0000u);
    c.f[1] = c.r[4].w[0];
    c.f[14] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = ld32((c.r[1].w[0] + 19728u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 14640u);
    c.f[13] = c.r[3].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B370u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036B370u) [[unlikely]] return; }
L_0036B370:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036B380:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B394u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036B394u) [[unlikely]] return; }
L_0036B394:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3A4u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036B3A4u) [[unlikely]] return; }
L_0036B3A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19744u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5247u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[16], ld32((c.r[2].w[0])));
    set32(c.r[5], ld32((c.r[16].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3CCu); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0036B3CCu) [[unlikely]] return; }
L_0036B3CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B3D4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036B3D4u) [[unlikely]] return; }
L_0036B3D4:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0036B3F0; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0036B408; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0036B3F0:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0036B408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[28].w[0] - 27248u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[1] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B434u); c.f[12] = fp::sub(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036B434u) [[unlikely]] return; }
L_0036B434:
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B440u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0036B440u) [[unlikely]] return; }
L_0036B440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B448u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036B448u) [[unlikely]] return; }
L_0036B448:
    set32(c.r[2], c.r[2].w[0] >> 1);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_0036B464; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0036B47C; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_0036B464:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 6;
L_0036B47C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[0] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = ld32((c.r[28].w[0] - 27244u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[0] = c.r[3].w[0];
    c.f[14] = c.r[2].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4A8u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036B4A8u) [[unlikely]] return; }
L_0036B4A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5247u));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0036B544; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B4C8u); set32(c.r[4], c.r[2].w[0] - 14576u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036B4C8u) [[unlikely]] return; }
L_0036B4C8:
    c.r[4].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { const bool t = c.r[4].sd[0] < 0; set32(c.r[3], c.r[4].w[0] >> 1);  if (t) { goto L_0036B4EC; } }
    c.f[0] = c.r[4].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0036B504; } }
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.budget -= 1;
L_0036B4EC:
    c.r[2].d[0] = c.r[4].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_0036B504:
    c.f[2] = fp::mul(c.f[1], c.f[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43A00000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[4].w[0];
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.f[13] = ld32((c.r[1].w[0] + 19740u));
    set32(c.r[4], c.r[2].w[0] - 14576u);
    c.f[14] = c.r[3].w[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B540u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036B540u) [[unlikely]] return; }
L_0036B540:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036B544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B54Cu);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036B54Cu) [[unlikely]] return; }
L_0036B54C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B55Cu); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036B55Cu) [[unlikely]] return; }
L_0036B55C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43CB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D70000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B578u);  if (depth < kMaxDepth) unit_009A(c, 561u, depth + 1u); else { c.pc = 0x0036BC50u; return; } if (c.pc != 0x0036B578u) [[unlikely]] return; }
L_0036B578:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_0036B590:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[16], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_0036B654; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036B5DC; } }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], c.r[5].w[0] + 1u);  goto L_0036B5D4; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0036B660; } }
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036B5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B5DCu); st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036B5DCu) [[unlikely]] return; }
L_0036B5DC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] - 23376u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] - 23372u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5247u));
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 32u), c.f[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5247u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[2].w[0]));
    st32((c.r[17].w[0] + 36u), c.f[0]);
    c.r[2].d[0] = ld8((c.r[16].w[0] + 12u));
    c.budget -= 19;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_0036B644; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B638u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 296u, depth + 1u); else { c.pc = 0x00376EB0u; return; } if (c.pc != 0x0036B638u) [[unlikely]] return; }
L_0036B638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B65C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_0036B644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B64Cu);  if (depth < kMaxDepth) unit_009D(c, 297u, depth + 1u); else { c.pc = 0x00376EC0u; return; } if (c.pc != 0x0036B64Cu) [[unlikely]] return; }
L_0036B64C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036B65C; } }
L_0036B654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B65Cu);  if (depth < kMaxDepth) unit_009D(c, 299u, depth + 1u); else { c.pc = 0x00376F50u; return; } if (c.pc != 0x0036B65Cu) [[unlikely]] return; }
L_0036B65C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036B660:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0036B670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25736u));
    set32(c.r[3], 0u + 3u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0036B6B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 18352u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B69Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036B69Cu) [[unlikely]] return; }
L_0036B69C:
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 24936u), c.r[3].w[0]);
    c.budget -= 5;
L_0036B6B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036B6C0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 19392ull;
    set32(c.r[3], ld32((c.r[3].w[0] + 5252u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[1].d[0] = c.r[16].sd[0] < 10000ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] != 0ull; c.f[20] = c.f[12];  if (t) { goto L_0036B704; } }
    set32(c.r[16], 0u + 9999u);
    c.budget -= 1;
L_0036B704:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[2].d[0] = c.r[2].d[0] | 19392ull;
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    set32(c.r[7], 0u + 3600u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x91A20000u);
    c.r[8].d[0] = c.r[2].d[0] | 46021ull;
    c.r[9].d[0] = c.hi.d[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[3].d[0] = c.r[2].d[0] | 34953ull;
    mmi::mult(c, 0, c.r[8].w[0], c.r[9].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 23344u);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[8], c.r[9].w[0] >> 31);
    mmi::div(c, 0, c.r[9].w[0], c.r[7].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 11));
    c.r[9].d[0] = c.hi.d[0];
    set32(c.r[7], c.r[2].w[0] + c.r[8].w[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[9].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[9].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[9].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 30;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B77Cu); set32(c.r[8], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036B77Cu) [[unlikely]] return; }
L_0036B77C:
    set32(c.r[17], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[4].d[0] = c.r[2].d[0] | 26215ull;
    mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);
    c.budget -= 4;
L_0036B78C:
    set32(c.r[3], c.r[16].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] <= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0036B7BC; } }
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { mmi::mult(c, 0, c.r[4].w[0], c.r[16].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0036B78Cu | kUnwind; return; } goto L_0036B78C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0036B7BC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7C8u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036B7C8u) [[unlikely]] return; }
L_0036B7C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7D0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036B7D0u) [[unlikely]] return; }
L_0036B7D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B7D8u); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0017(c, 230u, depth + 1u); else { c.pc = 0x0015E260u; return; } if (c.pc != 0x0036B7D8u) [[unlikely]] return; }
L_0036B7D8:
    set32(c.r[2], c.r[17].w[0] + 6u);
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[2].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43D90000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42380000u);
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.f[0] = c.r[6].w[0];
    c.f[14] = c.r[5].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    fpu_div(c, 1u, c.f[0], c.f[14]);
    c.f[0] = c.r[3].w[0];
    c.f[13] = c.r[2].w[0];
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B820u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036B820u) [[unlikely]] return; }
L_0036B820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B830u);  if (depth < kMaxDepth) unit_0017(c, 230u, depth + 1u); else { c.pc = 0x0015E260u; return; } if (c.pc != 0x0036B830u) [[unlikely]] return; }
L_0036B830:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0036B850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0036BA18; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0036B920; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 24936u)));  if (t) { goto L_0036BABC; } }
L_0036B888:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0036B8C8; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0036B8A8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0036B8A8:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 120u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC35C0000u);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34D0000u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 36u), c.r[3].w[0]);  if (t) { goto L_0036BAB8; } }
L_0036B8C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5225u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036B8E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036BAB8; } }
L_0036B8E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036B908; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036BAB8; } }
L_0036B908:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] - 9440u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0036BAB8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036BAB8; } }
L_0036B920:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_0036B9B8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0036B958; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_0036B948; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_0036B948:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0036B958:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036B980; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036B980:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3D800000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[12] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9B0u); st32((c.r[16].w[0] + 96u), c.f[12]);  if (depth < kMaxDepth) unit_009A(c, 534u, depth + 1u); else { c.pc = 0x0036B6C0u; return; } if (c.pc != 0x0036B9B0u) [[unlikely]] return; }
L_0036B9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
L_0036B9B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5225u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036B9E8; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.f[12] = 0u;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036B9E0u); st32((c.r[16].w[0] + 96u), 0u);  if (depth < kMaxDepth) unit_009A(c, 534u, depth + 1u); else { c.pc = 0x0036B6C0u; return; } if (c.pc != 0x0036B9E0u) [[unlikely]] return; }
L_0036B9E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
L_0036B9E8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 9440u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0036BA04; } }
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 3;
L_0036BA04:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA10u);  if (depth < kMaxDepth) unit_009A(c, 534u, depth + 1u); else { c.pc = 0x0036B6C0u; return; } if (c.pc != 0x0036BA10u) [[unlikely]] return; }
L_0036BA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
L_0036BA18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[6].d[0];  if (t) { goto L_0036BAAC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0036BA50; } }
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], c.r[4].w[0] + 1u);  goto L_0036BA44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_0036BA44:
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 16u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036BA50:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036BA78; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0036BA78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA80u); c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));  if (depth < kMaxDepth) unit_0007(c, 47u, depth + 1u); else { c.pc = 0x0011D138u; return; } if (c.pc != 0x0036BA80u) [[unlikely]] return; }
L_0036BA80:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FB00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA90u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x0036BA90u) [[unlikely]] return; }
L_0036BA90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BA98u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x0036BA98u) [[unlikely]] return; }
L_0036BA98:
    st32((c.r[16].w[0] + 96u), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BAA4u); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_009A(c, 534u, depth + 1u); else { c.pc = 0x0036B6C0u; return; } if (c.pc != 0x0036BAA4u) [[unlikely]] return; }
L_0036BAA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BAB8; } }
L_0036BAAC:
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0036BAB8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24936u)));
    c.budget -= 1;
L_0036BABC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0036BACC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BACCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 278u, depth + 1u); else { c.pc = 0x00376B70u; return; } if (c.pc != 0x0036BACCu) [[unlikely]] return; }
L_0036BACC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BAE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BAFCu); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BAFCu) [[unlikely]] return; }
L_0036BAFC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 17632u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BB10u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BB10u) [[unlikely]] return; }
L_0036BB10:
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036BB20:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0036BB58; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_0036BB50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0036BBE8; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0036BB50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036BBE4; } }
L_0036BB58:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
L_0036BB64:
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5517u));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_0036BB7C; }
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 3;
L_0036BB7C:
    c.r[3].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 155u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BB64u | kUnwind; return; } goto L_0036BB64; } }
    c.budget -= 2;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], 0u + 1u);  goto L_0036BB9C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0036BBE4; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0036BB9C:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBB0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036BBB0u) [[unlikely]] return; }
L_0036BBB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBB8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036BBB8u) [[unlikely]] return; }
L_0036BBB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] - 23328u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBCCu); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036BBCCu) [[unlikely]] return; }
L_0036BBCC:
    c.f[12] = ld32((c.r[28].w[0] - 27208u));
    c.f[13] = ld32((c.r[28].w[0] - 27204u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BBE4u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036BBE4u) [[unlikely]] return; }
L_0036BBE4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036BBE8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036BC00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x88880000u);
    c.r[2].d[0] = c.r[2].d[0] | 34953ull;
    mmi::multu(c, 0, c.r[2].w[0], c.r[4].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[2], c.r[2].w[0] >> 5);  if (t) { goto L_0036BC3C; } }
    mmi::divu(c, 0, c.r[2].w[0], c.r[5].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::mult(c, 0, c.r[2].w[0], c.r[6].w[0]); c.r[2].d[0] = c.lo.d[0];  if (t) { goto L_0036BC40; } }
L_0036BC3C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0036BC40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BC50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.f[21] = c.f[12];
    set32(c.r[4], ld32((c.r[2].w[0] + 5252u)));
    c.r[5].d[0] = ld16((c.r[2].w[0] + 8156u));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 8154u));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BC7Cu); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_009A(c, 560u, depth + 1u); else { c.pc = 0x0036BC00u; return; } if (c.pc != 0x0036BC7Cu) [[unlikely]] return; }
L_0036BC7C:
    set32(c.r[7], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x05F50000u);
    c.r[8].d[0] = c.r[3].d[0] | 57599ull;
    set32(c.r[6], ld32((c.r[28].w[0] - 25876u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 25880u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 5308u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[8].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 32u);  if (t) { goto L_0036BCB0; } }
    mmi::paddub(c.r[6], c.r[8], c.r[0]);
    c.budget -= 1;
L_0036BCB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BCBCu); set32(c.r[5], c.r[2].w[0] - 23320u);  if (depth < kMaxDepth) unit_0006(c, 7u, depth + 1u); else { c.pc = 0x001180C0u; return; } if (c.pc != 0x0036BCBCu) [[unlikely]] return; }
L_0036BCBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.f[12] = c.f[21];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BCD4u); c.f[13] = c.f[20];  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036BCD4u) [[unlikely]] return; }
L_0036BCD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0036BCF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 17104u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD14u); set32(c.r[5], 0u + 12u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BD14u) [[unlikely]] return; }
L_0036BD14:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036BD20; } }
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0036BD20:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BD30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036BD40u) [[unlikely]] return; }
L_0036BD40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD50u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036BD50u) [[unlikely]] return; }
L_0036BD50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19760u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[14] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[13] = ld32((c.r[1].w[0] + 19764u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD74u); set32(c.r[4], c.r[2].w[0] - 23312u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x0036BD74u) [[unlikely]] return; }
L_0036BD74:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD84u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036BD84u) [[unlikely]] return; }
L_0036BD84:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19768u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BD98u); c.f[13] = ld32((c.r[1].w[0] + 19772u));  if (depth < kMaxDepth) unit_009A(c, 561u, depth + 1u); else { c.pc = 0x0036BC50u; return; } if (c.pc != 0x0036BD98u) [[unlikely]] return; }
L_0036BD98:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0036BDB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[6], c.r[2].w[0] - 16480u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 50u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BDD0u) [[unlikely]] return; }
L_0036BDD0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDE4u); set32(c.r[5], 0u + 51u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BDE4u) [[unlikely]] return; }
L_0036BDE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BDF8u); set32(c.r[5], 0u + 52u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BDF8u) [[unlikely]] return; }
L_0036BDF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE0Cu); set32(c.r[5], 0u + 53u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BE0Cu) [[unlikely]] return; }
L_0036BE0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 14976u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE20u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BE20u) [[unlikely]] return; }
L_0036BE20:
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xC3890000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.f[12] = c.r[2].w[0];
    c.r[3].d[0] = ld8((c.r[1].w[0] + 24884u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43430000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE54u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0095(c, 16u, depth + 1u); else { c.pc = 0x00354240u; return; } if (c.pc != 0x0036BE54u) [[unlikely]] return; }
L_0036BE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE5Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 87u, depth + 1u); else { c.pc = 0x0036CE00u; return; } if (c.pc != 0x0036BE5Cu) [[unlikely]] return; }
L_0036BE5C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] + 26960u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE70u); set32(c.r[5], 0u + 18u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BE70u) [[unlikely]] return; }
L_0036BE70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 15056u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE84u); set32(c.r[5], 0u + 74u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BE84u) [[unlikely]] return; }
L_0036BE84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 15056u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BE98u); set32(c.r[5], 0u + 75u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BE98u) [[unlikely]] return; }
L_0036BE98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 15152u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEACu); set32(c.r[5], 0u + 54u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BEACu) [[unlikely]] return; }
L_0036BEAC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 15152u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEC0u); set32(c.r[5], 0u + 26u);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BEC0u) [[unlikely]] return; }
L_0036BEC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 14976u);
    set32(c.r[5], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BED4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BED4u) [[unlikely]] return; }
L_0036BED4:
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 14976u);
    set32(c.r[5], 0u + 7u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BEF0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BEF0u) [[unlikely]] return; }
L_0036BEF0:
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 2;
L_0036BEF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00370000u);
    set32(c.r[6], c.r[2].w[0] - 14144u);
    set32(c.r[4], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BF0Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009D(c, 270u, depth + 1u); else { c.pc = 0x00376A70u; return; } if (c.pc != 0x0036BF0Cu) [[unlikely]] return; }
L_0036BF0C:
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(0u));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BF1Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_009B(c, 55u, depth + 1u); else { c.pc = 0x0036C8C0u; return; } if (c.pc != 0x0036BF1Cu) [[unlikely]] return; }
L_0036BF1C:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BEF8u | kUnwind; return; } goto L_0036BEF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BF34u);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0036BF34u) [[unlikely]] return; }
L_0036BF34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BF3Cu);  if (depth < kMaxDepth) unit_009A(c, 532u, depth + 1u); else { c.pc = 0x0036B670u; return; } if (c.pc != 0x0036BF3Cu) [[unlikely]] return; }
L_0036BF3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0036BF50:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[6].d[0] = ld16((c.r[1].w[0] + 24890u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[3].w[0] - 2016u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0036BF88; } }
L_0036BF6C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 4u));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 328u);  goto L_0036BF84; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036BF98; } }
    set32(c.r[5], c.r[5].w[0] + 328u);
    c.budget -= 1;
L_0036BF84:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_0036BF88:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0036BF6Cu | kUnwind; return; } goto L_0036BF6C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0036BF98:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0036BFA0:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFC0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036BFC0u) [[unlikely]] return; }
L_0036BFC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFD0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x0036BFD0u) [[unlikely]] return; }
L_0036BFD0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] + 24880u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[12] = ld32((c.r[1].w[0] + 19776u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFECu); c.f[13] = ld32((c.r[1].w[0] + 19780u));  if (depth < kMaxDepth) unit_0095(c, 18u, depth + 1u); else { c.pc = 0x003542A0u; return; } if (c.pc != 0x0036BFECu) [[unlikely]] return; }
L_0036BFEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036BFF4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x0036BFF4u) [[unlikely]] return; }
L_0036BFF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[2].w[0] + 14058u);
    c.budget -= 3;
    [[clang::musttail]] return unit_009B(c, 1u, depth);
}

}
