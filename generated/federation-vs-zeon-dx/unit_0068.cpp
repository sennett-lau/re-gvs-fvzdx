#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0068[4096] = {
    1, 2, 0, 0, 0, 3, 4, 0, 0, 0, 5, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0,
    36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 42, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46,
    0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    63, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0,
    140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0,
    0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203,
    0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232,
    0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0,
    271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0,
    282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 296,
    0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0,
    334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0,
    340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0,
    0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0,
    366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0,
    430, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 443,
    0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0,
    0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 493,
    0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0,
    0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0,
    0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 522,
    0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0,
    527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0,
    0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549,
    0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0,
    561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0,
    0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0,
    585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0,
    0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0,
    606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0,
    0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0,
    0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624,
    0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0,
};

void unit_0068(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_002A0000;
    case 2u: goto L_002A0004;
    case 3u: goto L_002A0014;
    case 4u: goto L_002A0018;
    case 5u: goto L_002A0028;
    case 6u: goto L_002A002C;
    case 7u: goto L_002A0030;
    case 8u: goto L_002A0054;
    case 9u: goto L_002A0064;
    case 10u: goto L_002A006C;
    case 11u: goto L_002A0088;
    case 12u: goto L_002A00A0;
    case 13u: goto L_002A00B8;
    case 14u: goto L_002A00C0;
    case 15u: goto L_002A00DC;
    case 16u: goto L_002A0100;
    case 17u: goto L_002A0118;
    case 18u: goto L_002A0120;
    case 19u: goto L_002A013C;
    case 20u: goto L_002A0164;
    case 21u: goto L_002A0180;
    case 22u: goto L_002A01A0;
    case 23u: goto L_002A01F4;
    case 24u: goto L_002A0214;
    case 25u: goto L_002A022C;
    case 26u: goto L_002A0240;
    case 27u: goto L_002A0254;
    case 28u: goto L_002A0260;
    case 29u: goto L_002A026C;
    case 30u: goto L_002A0274;
    case 31u: goto L_002A02A0;
    case 32u: goto L_002A02B8;
    case 33u: goto L_002A02D0;
    case 34u: goto L_002A02E0;
    case 35u: goto L_002A02F4;
    case 36u: goto L_002A0300;
    case 37u: goto L_002A0308;
    case 38u: goto L_002A032C;
    case 39u: goto L_002A0344;
    case 40u: goto L_002A035C;
    case 41u: goto L_002A0370;
    case 42u: goto L_002A0384;
    case 43u: goto L_002A0390;
    case 44u: goto L_002A0398;
    case 45u: goto L_002A03E4;
    case 46u: goto L_002A03FC;
    case 47u: goto L_002A040C;
    case 48u: goto L_002A0418;
    case 49u: goto L_002A042C;
    case 50u: goto L_002A0438;
    case 51u: goto L_002A0444;
    case 52u: goto L_002A045C;
    case 53u: goto L_002A0470;
    case 54u: goto L_002A0484;
    case 55u: goto L_002A0498;
    case 56u: goto L_002A04BC;
    case 57u: goto L_002A04E0;
    case 58u: goto L_002A04EC;
    case 59u: goto L_002A04FC;
    case 60u: goto L_002A052C;
    case 61u: goto L_002A0538;
    case 62u: goto L_002A0550;
    case 63u: goto L_002A0580;
    case 64u: goto L_002A058C;
    case 65u: goto L_002A05C4;
    case 66u: goto L_002A05E0;
    case 67u: goto L_002A0624;
    case 68u: goto L_002A0644;
    case 69u: goto L_002A0668;
    case 70u: goto L_002A0680;
    case 71u: goto L_002A0694;
    case 72u: goto L_002A06A0;
    case 73u: goto L_002A06AC;
    case 74u: goto L_002A06B4;
    case 75u: goto L_002A06D0;
    case 76u: goto L_002A06FC;
    case 77u: goto L_002A0714;
    case 78u: goto L_002A072C;
    case 79u: goto L_002A0740;
    case 80u: goto L_002A0754;
    case 81u: goto L_002A0760;
    case 82u: goto L_002A0768;
    case 83u: goto L_002A078C;
    case 84u: goto L_002A07A4;
    case 85u: goto L_002A07C0;
    case 86u: goto L_002A07D4;
    case 87u: goto L_002A07E0;
    case 88u: goto L_002A07E8;
    case 89u: goto L_002A0834;
    case 90u: goto L_002A084C;
    case 91u: goto L_002A085C;
    case 92u: goto L_002A0868;
    case 93u: goto L_002A087C;
    case 94u: goto L_002A0894;
    case 95u: goto L_002A08A0;
    case 96u: goto L_002A08B4;
    case 97u: goto L_002A08C0;
    case 98u: goto L_002A08D8;
    case 99u: goto L_002A08F0;
    case 100u: goto L_002A0904;
    case 101u: goto L_002A0918;
    case 102u: goto L_002A093C;
    case 103u: goto L_002A0960;
    case 104u: goto L_002A096C;
    case 105u: goto L_002A097C;
    case 106u: goto L_002A09B8;
    case 107u: goto L_002A09C4;
    case 108u: goto L_002A09D8;
    case 109u: goto L_002A09E4;
    case 110u: goto L_002A0A00;
    case 111u: goto L_002A0A20;
    case 112u: goto L_002A0A40;
    case 113u: goto L_002A0A60;
    case 114u: goto L_002A0AA8;
    case 115u: goto L_002A0AC0;
    case 116u: goto L_002A0AE4;
    case 117u: goto L_002A0AFC;
    case 118u: goto L_002A0B0C;
    case 119u: goto L_002A0B38;
    case 120u: goto L_002A0B58;
    case 121u: goto L_002A0B70;
    case 122u: goto L_002A0BA0;
    case 123u: goto L_002A0BCC;
    case 124u: goto L_002A0BEC;
    case 125u: goto L_002A0C00;
    case 126u: goto L_002A0C14;
    case 127u: goto L_002A0C34;
    case 128u: goto L_002A0C50;
    case 129u: goto L_002A0C60;
    case 130u: goto L_002A0C74;
    case 131u: goto L_002A0CB4;
    case 132u: goto L_002A0CC0;
    case 133u: goto L_002A0CDC;
    case 134u: goto L_002A0CE8;
    case 135u: goto L_002A0CF8;
    case 136u: goto L_002A0D0C;
    case 137u: goto L_002A0D40;
    case 138u: goto L_002A0D5C;
    case 139u: goto L_002A0D70;
    case 140u: goto L_002A0D80;
    case 141u: goto L_002A0D90;
    case 142u: goto L_002A0DA4;
    case 143u: goto L_002A0DE4;
    case 144u: goto L_002A0E2C;
    case 145u: goto L_002A0E44;
    case 146u: goto L_002A0E5C;
    case 147u: goto L_002A0E70;
    case 148u: goto L_002A0E94;
    case 149u: goto L_002A0EA4;
    case 150u: goto L_002A0EAC;
    case 151u: goto L_002A0EC8;
    case 152u: goto L_002A0EE0;
    case 153u: goto L_002A0F00;
    case 154u: goto L_002A0F54;
    case 155u: goto L_002A0F74;
    case 156u: goto L_002A0F8C;
    case 157u: goto L_002A0FA0;
    case 158u: goto L_002A0FB4;
    case 159u: goto L_002A0FC0;
    case 160u: goto L_002A0FCC;
    case 161u: goto L_002A0FD4;
    case 162u: goto L_002A1000;
    case 163u: goto L_002A1018;
    case 164u: goto L_002A1030;
    case 165u: goto L_002A1040;
    case 166u: goto L_002A1054;
    case 167u: goto L_002A1060;
    case 168u: goto L_002A1068;
    case 169u: goto L_002A108C;
    case 170u: goto L_002A10A4;
    case 171u: goto L_002A10BC;
    case 172u: goto L_002A10D0;
    case 173u: goto L_002A10E4;
    case 174u: goto L_002A10F0;
    case 175u: goto L_002A10F8;
    case 176u: goto L_002A1144;
    case 177u: goto L_002A115C;
    case 178u: goto L_002A116C;
    case 179u: goto L_002A1178;
    case 180u: goto L_002A118C;
    case 181u: goto L_002A1198;
    case 182u: goto L_002A11A4;
    case 183u: goto L_002A11BC;
    case 184u: goto L_002A11D0;
    case 185u: goto L_002A11E4;
    case 186u: goto L_002A11F4;
    case 187u: goto L_002A1224;
    case 188u: goto L_002A1230;
    case 189u: goto L_002A1240;
    case 190u: goto L_002A1270;
    case 191u: goto L_002A127C;
    case 192u: goto L_002A12B4;
    case 193u: goto L_002A12D0;
    case 194u: goto L_002A1314;
    case 195u: goto L_002A1334;
    case 196u: goto L_002A1358;
    case 197u: goto L_002A1370;
    case 198u: goto L_002A1384;
    case 199u: goto L_002A1390;
    case 200u: goto L_002A139C;
    case 201u: goto L_002A13A4;
    case 202u: goto L_002A13C0;
    case 203u: goto L_002A13FC;
    case 204u: goto L_002A1414;
    case 205u: goto L_002A142C;
    case 206u: goto L_002A1440;
    case 207u: goto L_002A1454;
    case 208u: goto L_002A1460;
    case 209u: goto L_002A1468;
    case 210u: goto L_002A148C;
    case 211u: goto L_002A14A4;
    case 212u: goto L_002A14C0;
    case 213u: goto L_002A14D4;
    case 214u: goto L_002A14E0;
    case 215u: goto L_002A14E8;
    case 216u: goto L_002A1534;
    case 217u: goto L_002A154C;
    case 218u: goto L_002A155C;
    case 219u: goto L_002A1568;
    case 220u: goto L_002A157C;
    case 221u: goto L_002A1594;
    case 222u: goto L_002A15A0;
    case 223u: goto L_002A15B4;
    case 224u: goto L_002A15C0;
    case 225u: goto L_002A15D8;
    case 226u: goto L_002A15F0;
    case 227u: goto L_002A1604;
    case 228u: goto L_002A1614;
    case 229u: goto L_002A1650;
    case 230u: goto L_002A165C;
    case 231u: goto L_002A1670;
    case 232u: goto L_002A167C;
    case 233u: goto L_002A1690;
    case 234u: goto L_002A16A0;
    case 235u: goto L_002A16C0;
    case 236u: goto L_002A16D0;
    case 237u: goto L_002A16F0;
    case 238u: goto L_002A16FC;
    case 239u: goto L_002A1730;
    case 240u: goto L_002A1740;
    case 241u: goto L_002A1760;
    case 242u: goto L_002A1780;
    case 243u: goto L_002A17E8;
    case 244u: goto L_002A17F4;
    case 245u: goto L_002A1820;
    case 246u: goto L_002A1850;
    case 247u: goto L_002A1860;
    case 248u: goto L_002A1898;
    case 249u: goto L_002A18B0;
    case 250u: goto L_002A18C4;
    case 251u: goto L_002A18CC;
    case 252u: goto L_002A18E8;
    case 253u: goto L_002A1944;
    case 254u: goto L_002A195C;
    case 255u: goto L_002A1984;
    case 256u: goto L_002A1990;
    case 257u: goto L_002A19A0;
    case 258u: goto L_002A19BC;
    case 259u: goto L_002A19CC;
    case 260u: goto L_002A19D8;
    case 261u: goto L_002A19E4;
    case 262u: goto L_002A1A0C;
    case 263u: goto L_002A1A18;
    case 264u: goto L_002A1A38;
    case 265u: goto L_002A1A6C;
    case 266u: goto L_002A1A80;
    case 267u: goto L_002A1AA0;
    case 268u: goto L_002A1ACC;
    case 269u: goto L_002A1AE8;
    case 270u: goto L_002A1AF4;
    case 271u: goto L_002A1B00;
    case 272u: goto L_002A1B08;
    case 273u: goto L_002A1B1C;
    case 274u: goto L_002A1B28;
    case 275u: goto L_002A1B40;
    case 276u: goto L_002A1B64;
    case 277u: goto L_002A1B7C;
    case 278u: goto L_002A1BA0;
    case 279u: goto L_002A1BCC;
    case 280u: goto L_002A1BE8;
    case 281u: goto L_002A1BF4;
    case 282u: goto L_002A1C00;
    case 283u: goto L_002A1C08;
    case 284u: goto L_002A1C1C;
    case 285u: goto L_002A1C28;
    case 286u: goto L_002A1C40;
    case 287u: goto L_002A1C64;
    case 288u: goto L_002A1C74;
    case 289u: goto L_002A1C90;
    case 290u: goto L_002A1CA4;
    case 291u: goto L_002A1CB0;
    case 292u: goto L_002A1CBC;
    case 293u: goto L_002A1CC4;
    case 294u: goto L_002A1CD8;
    case 295u: goto L_002A1CE4;
    case 296u: goto L_002A1CFC;
    case 297u: goto L_002A1D20;
    case 298u: goto L_002A1D40;
    case 299u: goto L_002A1D80;
    case 300u: goto L_002A1DA0;
    case 301u: goto L_002A1DB4;
    case 302u: goto L_002A1DBC;
    case 303u: goto L_002A1DD8;
    case 304u: goto L_002A1E34;
    case 305u: goto L_002A1E38;
    case 306u: goto L_002A1E6C;
    case 307u: goto L_002A1E78;
    case 308u: goto L_002A1EA0;
    case 309u: goto L_002A1EB0;
    case 310u: goto L_002A1ECC;
    case 311u: goto L_002A1EDC;
    case 312u: goto L_002A1EE8;
    case 313u: goto L_002A1EF4;
    case 314u: goto L_002A1F1C;
    case 315u: goto L_002A1F28;
    case 316u: goto L_002A1F48;
    case 317u: goto L_002A1F9C;
    case 318u: goto L_002A1FA8;
    case 319u: goto L_002A1FC0;
    case 320u: goto L_002A1FD4;
    case 321u: goto L_002A1FE0;
    case 322u: goto L_002A2028;
    case 323u: goto L_002A2030;
    case 324u: goto L_002A2040;
    case 325u: goto L_002A2054;
    case 326u: goto L_002A2060;
    case 327u: goto L_002A2090;
    case 328u: goto L_002A20D4;
    case 329u: goto L_002A2130;
    case 330u: goto L_002A213C;
    case 331u: goto L_002A2150;
    case 332u: goto L_002A2164;
    case 333u: goto L_002A2170;
    case 334u: goto L_002A2180;
    case 335u: goto L_002A21A0;
    case 336u: goto L_002A21C0;
    case 337u: goto L_002A21CC;
    case 338u: goto L_002A2234;
    case 339u: goto L_002A2264;
    case 340u: goto L_002A2280;
    case 341u: goto L_002A2294;
    case 342u: goto L_002A22A0;
    case 343u: goto L_002A22B0;
    case 344u: goto L_002A22C0;
    case 345u: goto L_002A22CC;
    case 346u: goto L_002A2304;
    case 347u: goto L_002A2320;
    case 348u: goto L_002A2330;
    case 349u: goto L_002A2344;
    case 350u: goto L_002A2350;
    case 351u: goto L_002A2360;
    case 352u: goto L_002A2370;
    case 353u: goto L_002A2378;
    case 354u: goto L_002A2388;
    case 355u: goto L_002A23A8;
    case 356u: goto L_002A23DC;
    case 357u: goto L_002A23EC;
    case 358u: goto L_002A2404;
    case 359u: goto L_002A2428;
    case 360u: goto L_002A2470;
    case 361u: goto L_002A2488;
    case 362u: goto L_002A2498;
    case 363u: goto L_002A24C8;
    case 364u: goto L_002A24E4;
    case 365u: goto L_002A24F0;
    case 366u: goto L_002A2500;
    case 367u: goto L_002A2514;
    case 368u: goto L_002A2530;
    case 369u: goto L_002A2538;
    case 370u: goto L_002A2550;
    case 371u: goto L_002A2570;
    case 372u: goto L_002A25AC;
    case 373u: goto L_002A25B4;
    case 374u: goto L_002A25C0;
    case 375u: goto L_002A25D0;
    case 376u: goto L_002A2600;
    case 377u: goto L_002A2610;
    case 378u: goto L_002A263C;
    case 379u: goto L_002A2650;
    case 380u: goto L_002A2664;
    case 381u: goto L_002A267C;
    case 382u: goto L_002A2688;
    case 383u: goto L_002A26B8;
    case 384u: goto L_002A26D0;
    case 385u: goto L_002A26E8;
    case 386u: goto L_002A2704;
    case 387u: goto L_002A272C;
    case 388u: goto L_002A2738;
    case 389u: goto L_002A277C;
    case 390u: goto L_002A278C;
    case 391u: goto L_002A2794;
    case 392u: goto L_002A27A4;
    case 393u: goto L_002A2838;
    case 394u: goto L_002A2864;
    case 395u: goto L_002A2880;
    case 396u: goto L_002A2894;
    case 397u: goto L_002A28A0;
    case 398u: goto L_002A28D4;
    case 399u: goto L_002A2910;
    case 400u: goto L_002A2918;
    case 401u: goto L_002A2930;
    case 402u: goto L_002A2940;
    case 403u: goto L_002A2954;
    case 404u: goto L_002A2968;
    case 405u: goto L_002A2974;
    case 406u: goto L_002A29AC;
    case 407u: goto L_002A29D0;
    case 408u: goto L_002A29D8;
    case 409u: goto L_002A29F0;
    case 410u: goto L_002A2A10;
    case 411u: goto L_002A2A38;
    case 412u: goto L_002A2A40;
    case 413u: goto L_002A2A58;
    case 414u: goto L_002A2A70;
    case 415u: goto L_002A2A84;
    case 416u: goto L_002A2A90;
    case 417u: goto L_002A2A98;
    case 418u: goto L_002A2AEC;
    case 419u: goto L_002A2B1C;
    case 420u: goto L_002A2B30;
    case 421u: goto L_002A2B44;
    case 422u: goto L_002A2B50;
    case 423u: goto L_002A2B60;
    case 424u: goto L_002A2B6C;
    case 425u: goto L_002A2BA4;
    case 426u: goto L_002A2BC0;
    case 427u: goto L_002A2BD0;
    case 428u: goto L_002A2BE4;
    case 429u: goto L_002A2BF0;
    case 430u: goto L_002A2C00;
    case 431u: goto L_002A2C10;
    case 432u: goto L_002A2C18;
    case 433u: goto L_002A2C38;
    case 434u: goto L_002A2C6C;
    case 435u: goto L_002A2C7C;
    case 436u: goto L_002A2C94;
    case 437u: goto L_002A2CB8;
    case 438u: goto L_002A2D00;
    case 439u: goto L_002A2D18;
    case 440u: goto L_002A2D28;
    case 441u: goto L_002A2D58;
    case 442u: goto L_002A2D68;
    case 443u: goto L_002A2D7C;
    case 444u: goto L_002A2D88;
    case 445u: goto L_002A2D9C;
    case 446u: goto L_002A2DB0;
    case 447u: goto L_002A2DD0;
    case 448u: goto L_002A2DE8;
    case 449u: goto L_002A2DF0;
    case 450u: goto L_002A2E00;
    case 451u: goto L_002A2E68;
    case 452u: goto L_002A2E74;
    case 453u: goto L_002A2E90;
    case 454u: goto L_002A2EA4;
    case 455u: goto L_002A2EC0;
    case 456u: goto L_002A2EC8;
    case 457u: goto L_002A2ED8;
    case 458u: goto L_002A2EEC;
    case 459u: goto L_002A2F40;
    case 460u: goto L_002A2F60;
    case 461u: goto L_002A2F6C;
    case 462u: goto L_002A2FB0;
    case 463u: goto L_002A2FC0;
    case 464u: goto L_002A2FC8;
    case 465u: goto L_002A2FD8;
    case 466u: goto L_002A2FE0;
    case 467u: goto L_002A3080;
    case 468u: goto L_002A30A8;
    case 469u: goto L_002A30C0;
    case 470u: goto L_002A30D4;
    case 471u: goto L_002A30E0;
    case 472u: goto L_002A3114;
    case 473u: goto L_002A3150;
    case 474u: goto L_002A3164;
    case 475u: goto L_002A3178;
    case 476u: goto L_002A3180;
    case 477u: goto L_002A31B8;
    case 478u: goto L_002A31DC;
    case 479u: goto L_002A31E4;
    case 480u: goto L_002A3200;
    case 481u: goto L_002A3220;
    case 482u: goto L_002A3240;
    case 483u: goto L_002A3260;
    case 484u: goto L_002A3290;
    case 485u: goto L_002A32A4;
    case 486u: goto L_002A32C0;
    case 487u: goto L_002A3300;
    case 488u: goto L_002A3314;
    case 489u: goto L_002A3324;
    case 490u: goto L_002A3348;
    case 491u: goto L_002A3364;
    case 492u: goto L_002A3370;
    case 493u: goto L_002A337C;
    case 494u: goto L_002A3388;
    case 495u: goto L_002A3394;
    case 496u: goto L_002A33A0;
    case 497u: goto L_002A33AC;
    case 498u: goto L_002A33C0;
    case 499u: goto L_002A33CC;
    case 500u: goto L_002A33E0;
    case 501u: goto L_002A33F4;
    case 502u: goto L_002A3430;
    case 503u: goto L_002A343C;
    case 504u: goto L_002A3450;
    case 505u: goto L_002A3470;
    case 506u: goto L_002A3490;
    case 507u: goto L_002A34B0;
    case 508u: goto L_002A34C0;
    case 509u: goto L_002A34E8;
    case 510u: goto L_002A3530;
    case 511u: goto L_002A3544;
    case 512u: goto L_002A3554;
    case 513u: goto L_002A3578;
    case 514u: goto L_002A3594;
    case 515u: goto L_002A35A0;
    case 516u: goto L_002A35AC;
    case 517u: goto L_002A35B8;
    case 518u: goto L_002A35C4;
    case 519u: goto L_002A35D0;
    case 520u: goto L_002A35DC;
    case 521u: goto L_002A35F0;
    case 522u: goto L_002A35FC;
    case 523u: goto L_002A3610;
    case 524u: goto L_002A3624;
    case 525u: goto L_002A3660;
    case 526u: goto L_002A366C;
    case 527u: goto L_002A3680;
    case 528u: goto L_002A36A0;
    case 529u: goto L_002A36A8;
    case 530u: goto L_002A36CC;
    case 531u: goto L_002A36D4;
    case 532u: goto L_002A36F4;
    case 533u: goto L_002A3710;
    case 534u: goto L_002A3740;
    case 535u: goto L_002A3754;
    case 536u: goto L_002A375C;
    case 537u: goto L_002A3778;
    case 538u: goto L_002A37C0;
    case 539u: goto L_002A37D0;
    case 540u: goto L_002A37E4;
    case 541u: goto L_002A37F4;
    case 542u: goto L_002A3818;
    case 543u: goto L_002A3834;
    case 544u: goto L_002A3840;
    case 545u: goto L_002A384C;
    case 546u: goto L_002A3858;
    case 547u: goto L_002A3864;
    case 548u: goto L_002A3870;
    case 549u: goto L_002A387C;
    case 550u: goto L_002A3890;
    case 551u: goto L_002A389C;
    case 552u: goto L_002A38B0;
    case 553u: goto L_002A38C4;
    case 554u: goto L_002A390C;
    case 555u: goto L_002A3918;
    case 556u: goto L_002A392C;
    case 557u: goto L_002A3934;
    case 558u: goto L_002A3950;
    case 559u: goto L_002A3964;
    case 560u: goto L_002A3978;
    case 561u: goto L_002A3980;
    case 562u: goto L_002A3990;
    case 563u: goto L_002A39B8;
    case 564u: goto L_002A39C0;
    case 565u: goto L_002A39E0;
    case 566u: goto L_002A39F0;
    case 567u: goto L_002A3A20;
    case 568u: goto L_002A3A34;
    case 569u: goto L_002A3A48;
    case 570u: goto L_002A3A54;
    case 571u: goto L_002A3A88;
    case 572u: goto L_002A3AA0;
    case 573u: goto L_002A3AB4;
    case 574u: goto L_002A3AC4;
    case 575u: goto L_002A3AE8;
    case 576u: goto L_002A3B04;
    case 577u: goto L_002A3B10;
    case 578u: goto L_002A3B1C;
    case 579u: goto L_002A3B28;
    case 580u: goto L_002A3B34;
    case 581u: goto L_002A3B40;
    case 582u: goto L_002A3B4C;
    case 583u: goto L_002A3B60;
    case 584u: goto L_002A3B6C;
    case 585u: goto L_002A3B80;
    case 586u: goto L_002A3B9C;
    case 587u: goto L_002A3BA4;
    case 588u: goto L_002A3BB0;
    case 589u: goto L_002A3BE4;
    case 590u: goto L_002A3C18;
    case 591u: goto L_002A3C20;
    case 592u: goto L_002A3C38;
    case 593u: goto L_002A3C4C;
    case 594u: goto L_002A3C60;
    case 595u: goto L_002A3C74;
    case 596u: goto L_002A3C88;
    case 597u: goto L_002A3C90;
    case 598u: goto L_002A3CA0;
    case 599u: goto L_002A3CC0;
    case 600u: goto L_002A3CE0;
    case 601u: goto L_002A3D00;
    case 602u: goto L_002A3D20;
    case 603u: goto L_002A3D40;
    case 604u: goto L_002A3D60;
    case 605u: goto L_002A3D74;
    case 606u: goto L_002A3D80;
    case 607u: goto L_002A3DB0;
    case 608u: goto L_002A3DBC;
    case 609u: goto L_002A3DD0;
    case 610u: goto L_002A3DE8;
    case 611u: goto L_002A3DF8;
    case 612u: goto L_002A3E14;
    case 613u: goto L_002A3E1C;
    case 614u: goto L_002A3E34;
    case 615u: goto L_002A3E48;
    case 616u: goto L_002A3E54;
    case 617u: goto L_002A3E78;
    case 618u: goto L_002A3E8C;
    case 619u: goto L_002A3E98;
    case 620u: goto L_002A3EA4;
    case 621u: goto L_002A3EB0;
    case 622u: goto L_002A3ED0;
    case 623u: goto L_002A3EE4;
    case 624u: goto L_002A3EFC;
    case 625u: goto L_002A3F10;
    case 626u: goto L_002A3F30;
    case 627u: goto L_002A3F50;
    case 628u: goto L_002A3F64;
    case 629u: goto L_002A3F70;
    case 630u: goto L_002A3FA0;
    case 631u: goto L_002A3FB4;
    case 632u: goto L_002A3FE0;
    case 633u: goto L_002A3FF0;
    default: bad_entry(c, 0x002A0000u); return;
    }
L_002A0000:
    c.budget -= 1;
L_002A0004:
    set32(c.r[5], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0014u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x002A0014u) [[unlikely]] return; }
L_002A0014:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0018:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0028:
    c.budget -= 1;
L_002A002C:
    c.budget -= 1;
L_002A0030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = ld32((c.r[4].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0054u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x002A0054u) [[unlikely]] return; }
L_002A0054:
    set32(c.r[5], 0u + 255u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0064u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002A0064u) [[unlikely]] return; }
L_002A0064:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A006Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A006Cu) [[unlikely]] return; }
L_002A006C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0088; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0088u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A0088u) [[unlikely]] return; }
L_002A0088:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A00A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00B8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A00B8u) [[unlikely]] return; }
L_002A00B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A00C0u) [[unlikely]] return; }
L_002A00C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A00EC; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A00DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A00DCu) [[unlikely]] return; }
L_002A00DC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 3u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002A00EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0100:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0118u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A0118u) [[unlikely]] return; }
L_002A0118:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0120u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A0120u) [[unlikely]] return; }
L_002A0120:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A0134; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A0134:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A013Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A013Cu) [[unlikely]] return; }
L_002A013C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0170; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0164u); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 72u, depth + 1u); else { c.pc = 0x002D9110u; return; } if (c.pc != 0x002A0164u) [[unlikely]] return; }
L_002A0164:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A0170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21776u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A01A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 1216u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A01FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21286ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A01F4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A01F4u) [[unlikely]] return; }
L_002A01F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0230; } }
L_002A01FC:
    set32(c.r[6], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0214u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0214u) [[unlikely]] return; }
L_002A0214:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A022Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A022Cu) [[unlikely]] return; }
L_002A022C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0230:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0254u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A0254u) [[unlikely]] return; }
L_002A0254:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0260u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A0260u) [[unlikely]] return; }
L_002A0260:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A026Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A026Cu) [[unlikely]] return; }
L_002A026C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0274u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A0274u) [[unlikely]] return; }
L_002A0274:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A02D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02A0u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A02A0u) [[unlikely]] return; }
L_002A02A0:
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A02B8u) [[unlikely]] return; }
L_002A02B8:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02D0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A02D0u) [[unlikely]] return; }
L_002A02D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A02E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A02F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A02F4u) [[unlikely]] return; }
L_002A02F4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0300u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A0300u) [[unlikely]] return; }
L_002A0300:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0308u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A0308u) [[unlikely]] return; }
L_002A0308:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A035C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A032Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A032Cu) [[unlikely]] return; }
L_002A032C:
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0344u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0344u) [[unlikely]] return; }
L_002A0344:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A035Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A035Cu) [[unlikely]] return; }
L_002A035C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0384u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A0384u) [[unlikely]] return; }
L_002A0384:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A0390u) [[unlikely]] return; }
L_002A0390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0398u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A0398u) [[unlikely]] return; }
L_002A0398:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002A0450; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A0424; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0420; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A03E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A03E4u) [[unlikely]] return; }
L_002A03E4:
    set32(c.r[6], c.r[2].w[0] + 6u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A03FCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A03FCu) [[unlikely]] return; }
L_002A03FC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A040Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A040Cu) [[unlikely]] return; }
L_002A040C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0418u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A0418u) [[unlikely]] return; }
L_002A0418:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0460; } }
L_002A0420:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A0424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A042Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A042Cu) [[unlikely]] return; }
L_002A042C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0438u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A0438u) [[unlikely]] return; }
L_002A0438:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0444u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A0444u) [[unlikely]] return; }
L_002A0444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A045C; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002A0450:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A045Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A045Cu) [[unlikely]] return; }
L_002A045C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0460:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0484u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A0484u) [[unlikely]] return; }
L_002A0484:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A04E4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0498u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0498u) [[unlikely]] return; }
L_002A0498:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002A04C4; } }
    set32(c.r[6], c.r[2].w[0] + 6u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04BCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A04BCu) [[unlikely]] return; }
L_002A04BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A04E0; } }
L_002A04C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04E0u); set32(c.r[6], c.r[2].w[0] + 6u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A04E0u) [[unlikely]] return; }
L_002A04E0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A04E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04ECu);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002A04ECu) [[unlikely]] return; }
L_002A04EC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A04FCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A04FCu) [[unlikely]] return; }
L_002A04FC:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A0538; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A052Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A052Cu) [[unlikely]] return; }
L_002A052C:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0538u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A0538u) [[unlikely]] return; }
L_002A0538:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0550:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A05A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A05A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0580u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A0580u) [[unlikely]] return; }
L_002A0580:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A058Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A058Cu) [[unlikely]] return; }
L_002A058C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A05A4; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002A05A4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A05C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A05C4u) [[unlikely]] return; }
L_002A05C4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A05E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A062C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0624u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A0624u) [[unlikely]] return; }
L_002A0624:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A066C; } }
L_002A062C:
    set32(c.r[6], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0644u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0644u) [[unlikely]] return; }
L_002A0644:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0668; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0668u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A0668u) [[unlikely]] return; }
L_002A0668:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A066C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0694u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A0694u) [[unlikely]] return; }
L_002A0694:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A06A0u) [[unlikely]] return; }
L_002A06A0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A06ACu) [[unlikely]] return; }
L_002A06AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A06B4u) [[unlikely]] return; }
L_002A06B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A06C8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A06C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06D0u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A06D0u) [[unlikely]] return; }
L_002A06D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A072C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A06FCu); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A06FCu) [[unlikely]] return; }
L_002A06FC:
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0714u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0714u) [[unlikely]] return; }
L_002A0714:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A072Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A072Cu) [[unlikely]] return; }
L_002A072C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0754u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A0754u) [[unlikely]] return; }
L_002A0754:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0760u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A0760u) [[unlikely]] return; }
L_002A0760:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0768u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A0768u) [[unlikely]] return; }
L_002A0768:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A07A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A078Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A078Cu) [[unlikely]] return; }
L_002A078C:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 3u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A07A4u) [[unlikely]] return; }
L_002A07A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A07C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A07D4u) [[unlikely]] return; }
L_002A07D4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A07E0u) [[unlikely]] return; }
L_002A07E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A07E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A07E8u) [[unlikely]] return; }
L_002A07E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002A08CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A0874; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0870; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0834u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0834u) [[unlikely]] return; }
L_002A0834:
    set32(c.r[6], c.r[2].w[0] + 6u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A084Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A084Cu) [[unlikely]] return; }
L_002A084C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A085Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A085Cu) [[unlikely]] return; }
L_002A085C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0868u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A0868u) [[unlikely]] return; }
L_002A0868:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A08DC; } }
L_002A0870:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A0874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A087Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A087Cu) [[unlikely]] return; }
L_002A087C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002A08AC; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0894u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A0894u) [[unlikely]] return; }
L_002A0894:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A08A0u) [[unlikely]] return; }
L_002A08A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A08D8; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002A08AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A08B4u) [[unlikely]] return; }
L_002A08B4:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A08C0u) [[unlikely]] return; }
L_002A08C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A08D8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002A08CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A08D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A08D8u) [[unlikely]] return; }
L_002A08D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A08DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A08F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0904u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A0904u) [[unlikely]] return; }
L_002A0904:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A0964; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0918u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0918u) [[unlikely]] return; }
L_002A0918:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_002A0944; } }
    set32(c.r[6], c.r[2].w[0] + 6u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A093Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A093Cu) [[unlikely]] return; }
L_002A093C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0960; } }
L_002A0944:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0960u); set32(c.r[6], c.r[2].w[0] + 6u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0960u) [[unlikely]] return; }
L_002A0960:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A0964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A096Cu);  if (depth < kMaxDepth) unit_0073(c, 78u, depth + 1u); else { c.pc = 0x002CDDC0u; return; } if (c.pc != 0x002A096Cu) [[unlikely]] return; }
L_002A096C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A097Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A097Cu) [[unlikely]] return; }
L_002A097C:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A09E4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_002A09D0; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A09B8u) [[unlikely]] return; }
L_002A09B8:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A09C4u) [[unlikely]] return; }
L_002A09C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A09E8; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 1;
L_002A09D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A09D8u) [[unlikely]] return; }
L_002A09D8:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A09E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A09E4u) [[unlikely]] return; }
L_002A09E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A09E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0A00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A0A20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A0A40:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A0A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A0B04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F550000u);  if (t) { goto L_002A0ACC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0AA8u); set32(c.r[5], c.r[2].w[0] + 21424u);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002A0AA8u) [[unlikely]] return; }
L_002A0AA8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0AC0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A0AC0u) [[unlikely]] return; }
L_002A0AC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0B5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F550000u);
    c.budget -= 1;
L_002A0ACC:
    c.r[2].d[0] = c.r[2].d[0] | 21286ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 21424u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0AE4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 44u, depth + 1u); else { c.pc = 0x002C08B0u; return; } if (c.pc != 0x002A0AE4u) [[unlikely]] return; }
L_002A0AE4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0AFCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A0AFCu) [[unlikely]] return; }
L_002A0AFC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0B58; } }
L_002A0B04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B0Cu); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0B0Cu) [[unlikely]] return; }
L_002A0B0C:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002A0B40; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[7], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B38u); set32(c.r[6], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0B38u) [[unlikely]] return; }
L_002A0B38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0B58; } }
L_002A0B40:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0B58u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0B58u) [[unlikely]] return; }
L_002A0B58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0B5C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A0BEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A0BEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0BA0u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0BA0u) [[unlikely]] return; }
L_002A0BA0:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_002A0BD4; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[7], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0BCCu); set32(c.r[6], c.r[2].w[0] + 3u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0BCCu) [[unlikely]] return; }
L_002A0BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0BF0; } }
L_002A0BD4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0BECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0BECu) [[unlikely]] return; }
L_002A0BEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0BF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C14u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A0C14u) [[unlikely]] return; }
L_002A0C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0C50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C34u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0C34u) [[unlikely]] return; }
L_002A0C34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0C50u) [[unlikely]] return; }
L_002A0C50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0C74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A0C74u) [[unlikely]] return; }
L_002A0C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 3u);  if (t) { goto L_002A0D68; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1592u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A0D04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A0D00; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CB4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A0CB4u) [[unlikely]] return; }
L_002A0CB4:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A0CC0u) [[unlikely]] return; }
L_002A0CC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CDCu); set32(c.r[6], c.r[2].w[0] + 9u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0CDCu) [[unlikely]] return; }
L_002A0CDC:
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002A0CE8u) [[unlikely]] return; }
L_002A0CE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0CF8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A0CF8u) [[unlikely]] return; }
L_002A0CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0D84; } }
L_002A0D00:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A0D04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D0Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A0D0Cu) [[unlikely]] return; }
L_002A0D0C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002A0D48; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 8u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D40u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0D40u) [[unlikely]] return; }
L_002A0D40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0D80; } }
L_002A0D48:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D5Cu); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A0D5Cu) [[unlikely]] return; }
L_002A0D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0D80; } }
    set32(c.r[5], 0u + 3u);
    c.budget -= 1;
L_002A0D68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 255u, depth + 1u); else { c.pc = 0x002DF050u; return; } if (c.pc != 0x002A0D70u) [[unlikely]] return; }
L_002A0D70:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0D80u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A0D80u) [[unlikely]] return; }
L_002A0D80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0D84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0DA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A0DA4u) [[unlikely]] return; }
L_002A0DA4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_002A0E50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[6], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_002A0DEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 16u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0DE4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0DE4u) [[unlikely]] return; }
L_002A0DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0E60; } }
L_002A0DEC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_002A0E04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_002A0E38; } }
L_002A0E04:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 16u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E2Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0E2Cu) [[unlikely]] return; }
L_002A0E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0E5C; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 1;
L_002A0E38:
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E44u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A0E44u) [[unlikely]] return; }
L_002A0E44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A0E5C; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_002A0E50:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E5Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 259u, depth + 1u); else { c.pc = 0x002DF190u; return; } if (c.pc != 0x002A0E5Cu) [[unlikely]] return; }
L_002A0E5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = ld32((c.r[4].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0E94u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x002A0E94u) [[unlikely]] return; }
L_002A0E94:
    set32(c.r[5], 0u + 255u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0EA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x002A0EA4u) [[unlikely]] return; }
L_002A0EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0EACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A0EACu) [[unlikely]] return; }
L_002A0EAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A0EC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0EC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A0EC8u) [[unlikely]] return; }
L_002A0EC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0EE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A0F00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[4].w[0] + 1216u), c.r[6].w[0]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A0F5C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F550000u);
    c.r[2].d[0] = c.r[2].d[0] | 21286ull;
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[6].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F54u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A0F54u) [[unlikely]] return; }
L_002A0F54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A0F90; } }
L_002A0F5C:
    set32(c.r[6], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F74u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A0F74u) [[unlikely]] return; }
L_002A0F74:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0F8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A0F8Cu) [[unlikely]] return; }
L_002A0F8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A0F90:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A0FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A0FB4u) [[unlikely]] return; }
L_002A0FB4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A0FC0u) [[unlikely]] return; }
L_002A0FC0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A0FCCu) [[unlikely]] return; }
L_002A0FCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A0FD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A0FD4u) [[unlikely]] return; }
L_002A0FD4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1030; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1000u); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A1000u) [[unlikely]] return; }
L_002A1000:
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1018u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A1018u) [[unlikely]] return; }
L_002A1018:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1030u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A1030u) [[unlikely]] return; }
L_002A1030:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1054u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A1054u) [[unlikely]] return; }
L_002A1054:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1060u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1060u) [[unlikely]] return; }
L_002A1060:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1068u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1068u) [[unlikely]] return; }
L_002A1068:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A10BC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A108Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A108Cu) [[unlikely]] return; }
L_002A108C:
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A10A4u) [[unlikely]] return; }
L_002A10A4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10BCu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A10BCu) [[unlikely]] return; }
L_002A10BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A10D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A10E4u) [[unlikely]] return; }
L_002A10E4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A10F0u) [[unlikely]] return; }
L_002A10F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A10F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A10F8u) [[unlikely]] return; }
L_002A10F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002A11B0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1592u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A1184; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1180; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1144u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A1144u) [[unlikely]] return; }
L_002A1144:
    set32(c.r[6], c.r[2].w[0] + 9u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A115Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A115Cu) [[unlikely]] return; }
L_002A115C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A116Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A116Cu) [[unlikely]] return; }
L_002A116C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1178u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A1178u) [[unlikely]] return; }
L_002A1178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A11C0; } }
L_002A1180:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A1184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A118Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A118Cu) [[unlikely]] return; }
L_002A118C:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1198u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A1198u) [[unlikely]] return; }
L_002A1198:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A11A4u) [[unlikely]] return; }
L_002A11A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A11BC; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002A11B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11BCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A11BCu) [[unlikely]] return; }
L_002A11BC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A11C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A11D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A11E4u) [[unlikely]] return; }
L_002A11E4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A11F4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A11F4u) [[unlikely]] return; }
L_002A11F4:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A1230; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1224u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A1224u) [[unlikely]] return; }
L_002A1224:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1230u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A1230u) [[unlikely]] return; }
L_002A1230:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A1294; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1294; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1270u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A1270u) [[unlikely]] return; }
L_002A1270:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A127Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A127Cu) [[unlikely]] return; }
L_002A127C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1294; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 4;
L_002A1294:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 21968u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A12B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A12B4u) [[unlikely]] return; }
L_002A12B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A12D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A131C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1314u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1314u) [[unlikely]] return; }
L_002A1314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A135C; } }
L_002A131C:
    set32(c.r[6], 0u + 2u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1334u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A1334u) [[unlikely]] return; }
L_002A1334:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A1358; } }
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1358u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A1358u) [[unlikely]] return; }
L_002A1358:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A135C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1384u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A1384u) [[unlikely]] return; }
L_002A1384:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1390u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A1390u) [[unlikely]] return; }
L_002A1390:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A139Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A139Cu) [[unlikely]] return; }
L_002A139C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A13A4u) [[unlikely]] return; }
L_002A13A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A13B8; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A13B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13C0u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A13C0u) [[unlikely]] return; }
L_002A13C0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A142C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A13FCu); st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A13FCu) [[unlikely]] return; }
L_002A13FC:
    set32(c.r[6], c.r[2].w[0] + 3u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A1414u) [[unlikely]] return; }
L_002A1414:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A142Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x002A142Cu) [[unlikely]] return; }
L_002A142C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1454u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A1454u) [[unlikely]] return; }
L_002A1454:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1460u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A1460u) [[unlikely]] return; }
L_002A1460:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1468u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1468u) [[unlikely]] return; }
L_002A1468:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A14A4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A148Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A148Cu) [[unlikely]] return; }
L_002A148C:
    c.f[12] = 0u;
    set32(c.r[6], c.r[2].w[0] + 3u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A14A4u) [[unlikely]] return; }
L_002A14A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A14C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A14D4u) [[unlikely]] return; }
L_002A14D4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A14E0u) [[unlikely]] return; }
L_002A14E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A14E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A14E8u) [[unlikely]] return; }
L_002A14E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_002A15CC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1592u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A1574; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1570; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[5], 0u - 1u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1534u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x002A1534u) [[unlikely]] return; }
L_002A1534:
    set32(c.r[6], c.r[2].w[0] + 9u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A154Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A154Cu) [[unlikely]] return; }
L_002A154C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A155Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A155Cu) [[unlikely]] return; }
L_002A155C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1568u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A1568u) [[unlikely]] return; }
L_002A1568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A15DC; } }
L_002A1570:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A1574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A157Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A157Cu) [[unlikely]] return; }
L_002A157C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_002A15AC; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1594u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A1594u) [[unlikely]] return; }
L_002A1594:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A15A0u) [[unlikely]] return; }
L_002A15A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A15D8; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_002A15AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A15B4u) [[unlikely]] return; }
L_002A15B4:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A15C0u) [[unlikely]] return; }
L_002A15C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A15D8; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 1;
L_002A15CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A15D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A15D8u) [[unlikely]] return; }
L_002A15D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A15DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A15F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1604u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1604u) [[unlikely]] return; }
L_002A1604:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1614u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 194u, depth + 1u); else { c.pc = 0x002DB5B0u; return; } if (c.pc != 0x002A1614u) [[unlikely]] return; }
L_002A1614:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A167C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_002A1668; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1650u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A1650u) [[unlikely]] return; }
L_002A1650:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A165Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A165Cu) [[unlikely]] return; }
L_002A165C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1680; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 1;
L_002A1668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1670u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A1670u) [[unlikely]] return; }
L_002A1670:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A167Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A167Cu) [[unlikely]] return; }
L_002A167C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1680:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1690:
    st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 321u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_002A16A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A16B4; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_002A16B4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A16C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A16D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 42u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_002A1708; } }
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_002A16F0:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A16FCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x002A16FCu) [[unlikely]] return; }
L_002A16FC:
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_002A1708:
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[1].d[0] = c.r[3].sd[0] < 46ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A16F0u | kUnwind; return; } goto L_002A16F0; } }
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A1730:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002A1740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A1760:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22176u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A1780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[7], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[5].d[0] == c.r[7].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A1828; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[3].d[0]) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F010000u);  goto L_002A1800; }
    c.budget -= 2;
    if (c.r[5].d[0] == 0ull) { set32(c.r[2], 0u + 3u);  goto L_002A17B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1854; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A17B8:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3EA10000u);
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].d[0] = c.r[2].d[0] | 10724ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[7], 0u + 9u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17E8u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A17E8u) [[unlikely]] return; }
L_002A17E8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A17F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A17F4u) [[unlikely]] return; }
L_002A17F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1850; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F010000u);
    c.budget -= 1;
L_002A1800:
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 47329ull;
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1820u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1820u) [[unlikely]] return; }
L_002A1820:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1850; } }
L_002A1828:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F3C0000u);
    st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[2].d[0] = c.r[2].d[0] | 22727ull;
    mmi::paddub(c.r[5], c.r[7], c.r[0]);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1850u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1850u) [[unlikely]] return; }
L_002A1850:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1854:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1860:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1898u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1898u) [[unlikely]] return; }
L_002A1898:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A18B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A18C4u) [[unlikely]] return; }
L_002A18C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A18CCu) [[unlikely]] return; }
L_002A18CC:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A18E8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A18E8u) [[unlikely]] return; }
L_002A18E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A190C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1990; } }
L_002A190C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A1954; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1944u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A1944u) [[unlikely]] return; }
L_002A1944:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_002A1968; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A1954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A195Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0068(c, 242u, depth + 1u); else { c.pc = 0x002A1780u; return; } if (c.pc != 0x002A195Cu) [[unlikely]] return; }
L_002A195C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1994; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_002A1968:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 12u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1984u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1984u) [[unlikely]] return; }
L_002A1984:
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1990u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x002A1990u) [[unlikely]] return; }
L_002A1990:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1994:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A19A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19BCu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A19BCu) [[unlikely]] return; }
L_002A19BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A19D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002A19CCu) [[unlikely]] return; }
L_002A19CC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A19D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19D8u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A19D8u) [[unlikely]] return; }
L_002A19D8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A19E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A19E4u) [[unlikely]] return; }
L_002A19E4:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1A0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1A0Cu) [[unlikely]] return; }
L_002A1A0C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A1A18u) [[unlikely]] return; }
L_002A1A18:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A38u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A1A38u) [[unlikely]] return; }
L_002A1A38:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A1A64; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1A6C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A1A64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1A6Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0068(c, 242u, depth + 1u); else { c.pc = 0x002A1780u; return; } if (c.pc != 0x002A1A6Cu) [[unlikely]] return; }
L_002A1A6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 734u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A1AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1ACCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002A1ACCu) [[unlikely]] return; }
L_002A1ACC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1AE8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A1AE8u) [[unlikely]] return; }
L_002A1AE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1AF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1AF4u) [[unlikely]] return; }
L_002A1AF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A1B00u) [[unlikely]] return; }
L_002A1B00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1B08u) [[unlikely]] return; }
L_002A1B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);  if (t) { goto L_002A1B34; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A1B1Cu) [[unlikely]] return; }
L_002A1B1C:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A1B28u) [[unlikely]] return; }
L_002A1B28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1B8C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41E00000u);
    c.budget -= 1;
L_002A1B34:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A1B40u) [[unlikely]] return; }
L_002A1B40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);  if (t) { goto L_002A1B70; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B6C; } }
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B64u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0068(c, 242u, depth + 1u); else { c.pc = 0x002A1780u; return; } if (c.pc != 0x002A1B64u) [[unlikely]] return; }
L_002A1B64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A1B88; } }
L_002A1B6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42300000u);
    c.budget -= 1;
L_002A1B70:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1B7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A1B7Cu) [[unlikely]] return; }
L_002A1B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1B88; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A1B88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1B8C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1BA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1BCCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002A1BCCu) [[unlikely]] return; }
L_002A1BCC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1BE8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A1BE8u) [[unlikely]] return; }
L_002A1BE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1BF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1BF4u) [[unlikely]] return; }
L_002A1BF4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A1C00u) [[unlikely]] return; }
L_002A1C00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1C08u) [[unlikely]] return; }
L_002A1C08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);  if (t) { goto L_002A1C34; } }
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A1C1Cu) [[unlikely]] return; }
L_002A1C1C:
    set32(c.r[5], 0u + 17u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A1C28u) [[unlikely]] return; }
L_002A1C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1C84; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.budget -= 1;
L_002A1C34:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A1C40u) [[unlikely]] return; }
L_002A1C40:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_002A1C68; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1C64; } }
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C64u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0068(c, 242u, depth + 1u); else { c.pc = 0x002A1780u; return; } if (c.pc != 0x002A1C64u) [[unlikely]] return; }
L_002A1C64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 1;
L_002A1C68:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1C74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A1C74u) [[unlikely]] return; }
L_002A1C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1C80; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A1C80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1C84:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1C90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A1CA4u) [[unlikely]] return; }
L_002A1CA4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1CB0u) [[unlikely]] return; }
L_002A1CB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A1CBCu) [[unlikely]] return; }
L_002A1CBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1CC4u) [[unlikely]] return; }
L_002A1CC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);  if (t) { goto L_002A1CF0; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A1CD8u) [[unlikely]] return; }
L_002A1CD8:
    set32(c.r[5], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A1CE4u) [[unlikely]] return; }
L_002A1CE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1D0C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D80000u);
    c.budget -= 1;
L_002A1CF0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1CFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002A1CFCu) [[unlikely]] return; }
L_002A1CFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A1D08; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A1D08:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1D0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22208u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A1D40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 7775u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 7815u), static_cast<std::uint8_t>(0u));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1D80u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1D80u) [[unlikely]] return; }
L_002A1D80:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1DA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1DB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A1DB4u) [[unlikely]] return; }
L_002A1DB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1DBCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1DBCu) [[unlikely]] return; }
L_002A1DBC:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1DD8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1DD8u) [[unlikely]] return; }
L_002A1DD8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A1DFC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1EA0; } }
L_002A1DFC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A1E44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A1E34u) [[unlikely]] return; }
L_002A1E34:
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_002A1E38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_002A1E84; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A1E44:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F100000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E6Cu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1E6Cu) [[unlikely]] return; }
L_002A1E6C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1E78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A1E78u) [[unlikely]] return; }
L_002A1E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A1EA4; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_002A1E84:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 12u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EA0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1EA0u) [[unlikely]] return; }
L_002A1EA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A1EA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1EB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1ECCu); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A1ECCu) [[unlikely]] return; }
L_002A1ECC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A1EE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002A1EDCu) [[unlikely]] return; }
L_002A1EDC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A1EE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EE8u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A1EE8u) [[unlikely]] return; }
L_002A1EE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1EF4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1EF4u) [[unlikely]] return; }
L_002A1EF4:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1F1C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1F1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A1F1Cu) [[unlikely]] return; }
L_002A1F1C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1F28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A1F28u) [[unlikely]] return; }
L_002A1F28:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1F48u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A1F48u) [[unlikely]] return; }
L_002A1F48:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 3u);  goto L_002A1F74; }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A1FA8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A1F74:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F100000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1F9Cu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A1F9Cu) [[unlikely]] return; }
L_002A1F9C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A1FA8u) [[unlikely]] return; }
L_002A1FA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A1FC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A1FD4u) [[unlikely]] return; }
L_002A1FD4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A1FE0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A1FE0u) [[unlikely]] return; }
L_002A1FE0:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A201C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E340000u);
    c.r[2].d[0] = c.r[2].d[0] | 29411ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.budget -= 7;
L_002A201C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2028u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A2028u) [[unlikely]] return; }
L_002A2028:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2030u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2030u) [[unlikely]] return; }
L_002A2030:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2054u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2054u) [[unlikely]] return; }
L_002A2054:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2060u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A2060u) [[unlikely]] return; }
L_002A2060:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002A20A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[13] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2090u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x002A2090u) [[unlikely]] return; }
L_002A2090:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_002A20A4:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42AC0000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002A20C8; } }
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 1;
L_002A20C8:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A20D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002A20D4u) [[unlikely]] return; }
L_002A20D4:
    c.f[1] = ld32((c.r[16].w[0] + 7756u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42240000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A2148; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2144; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F100000u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2130u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2130u) [[unlikely]] return; }
L_002A2130:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A213Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A213Cu) [[unlikely]] return; }
L_002A213C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A2174; } }
L_002A2144:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A2148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2150u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2150u) [[unlikely]] return; }
L_002A2150:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2170; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2164u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A2164u) [[unlikely]] return; }
L_002A2164:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A2170u) [[unlikely]] return; }
L_002A2170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A2174:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2180:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A21A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21C0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A21C0u) [[unlikely]] return; }
L_002A21C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A21CCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A21CCu) [[unlikely]] return; }
L_002A21CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A21F4; } }
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A2264; } }
L_002A21F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A223C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2234u); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2234u) [[unlikely]] return; }
L_002A2234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A224C; } }
L_002A223C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
L_002A224C:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2264u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2264u) [[unlikely]] return; }
L_002A2264:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2280:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2294u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2294u) [[unlikely]] return; }
L_002A2294:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A22A0u) [[unlikely]] return; }
L_002A22A0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A22B0u) [[unlikely]] return; }
L_002A22B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A22C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002A22C0u) [[unlikely]] return; }
L_002A22C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A22C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A22CCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A22CCu) [[unlikely]] return; }
L_002A22CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2320; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_002A2310; } }
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2304u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A2304u) [[unlikely]] return; }
L_002A2304:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A2324; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_002A2310:
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2320u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2320u) [[unlikely]] return; }
L_002A2320:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A2324:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2330:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2344u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2344u) [[unlikely]] return; }
L_002A2344:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2350u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A2350u) [[unlikely]] return; }
L_002A2350:
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2360u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A2360u) [[unlikely]] return; }
L_002A2360:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2370u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A2370u) [[unlikely]] return; }
L_002A2370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2378u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2378u) [[unlikely]] return; }
L_002A2378:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2388; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2388u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 169u, depth + 1u); else { c.pc = 0x002D62A0u; return; } if (c.pc != 0x002A2388u) [[unlikely]] return; }
L_002A2388:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23A8u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A23A8u) [[unlikely]] return; }
L_002A23A8:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A23D4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_002A23E0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A23D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23DCu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A23DCu) [[unlikely]] return; }
L_002A23DC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.budget -= 1;
L_002A23E0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A23ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A23ECu) [[unlikely]] return; }
L_002A23EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2410; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2404u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A2404u) [[unlikely]] return; }
L_002A2404:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A2458; } }
L_002A2410:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2428u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2428u) [[unlikely]] return; }
L_002A2428:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 12;
L_002A2458:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2488u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2488u) [[unlikely]] return; }
L_002A2488:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2498u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2498u) [[unlikely]] return; }
L_002A2498:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A24C0; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A24C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24C8u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A24C8u) [[unlikely]] return; }
L_002A24C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A24F0; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 31u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A24E4u) [[unlikely]] return; }
L_002A24E4:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A24F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A24F0u) [[unlikely]] return; }
L_002A24F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2514u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2514u) [[unlikely]] return; }
L_002A2514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2538; } }
    set32(c.r[2], 0u + 4u);
    set32(c.r[5], 0u + 31u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2530u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A2530u) [[unlikely]] return; }
L_002A2530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2538u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A2538u) [[unlikely]] return; }
L_002A2538:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22272u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A2570:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 2u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 734u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 1220u), c.r[2].w[0]);
    set32(c.r[6], 0u + 10u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A25ACu); mmi::paddub(c.r[7], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A25ACu) [[unlikely]] return; }
L_002A25AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A25B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 73u, depth + 1u); else { c.pc = 0x002DCA20u; return; } if (c.pc != 0x002A25B4u) [[unlikely]] return; }
L_002A25B4:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A25C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A25C0u) [[unlikely]] return; }
L_002A25C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A25D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st32((c.r[4].w[0] + 108u), 0u);
    set32(c.r[2], 0u + 7u);
    st32((c.r[4].w[0] + 104u), 0u);
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[4].w[0] + 1520u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A2608; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2600u);  if (depth < kMaxDepth) unit_0068(c, 371u, depth + 1u); else { c.pc = 0x002A2570u; return; } if (c.pc != 0x002A2600u) [[unlikely]] return; }
L_002A2600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A2640; } }
L_002A2608:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2610u);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2610u) [[unlikely]] return; }
L_002A2610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A263Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A263Cu) [[unlikely]] return; }
L_002A263C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A2640:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2650:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2664u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2664u) [[unlikely]] return; }
L_002A2664:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A267Cu); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A267Cu) [[unlikely]] return; }
L_002A267C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2688u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A2688u) [[unlikely]] return; }
L_002A2688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A26B0; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A26B8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A26B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26B8u);  if (depth < kMaxDepth) unit_0068(c, 371u, depth + 1u); else { c.pc = 0x002A2570u; return; } if (c.pc != 0x002A26B8u) [[unlikely]] return; }
L_002A26B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A26D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A26E8u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A26E8u) [[unlikely]] return; }
L_002A26E8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 734u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002A2720; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2704u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A2704u) [[unlikely]] return; }
L_002A2704:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2864; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 734u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 734u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002A2864; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002A2720:
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A272Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A272Cu) [[unlikely]] return; }
L_002A272C:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2738u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A2738u) [[unlikely]] return; }
L_002A2738:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_002A277C; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A277C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A277Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A277Cu) [[unlikely]] return; }
L_002A277C:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A278Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A278Cu) [[unlikely]] return; }
L_002A278C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2794u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2794u) [[unlikely]] return; }
L_002A2794:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002A27A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A27A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 189u, depth + 1u); else { c.pc = 0x002D65E0u; return; } if (c.pc != 0x002A27A4u) [[unlikely]] return; }
L_002A27A4:
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A27D4; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2864; } }
L_002A27D4:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[2]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[0] = c.f[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002A2840; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2838u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2838u) [[unlikely]] return; }
L_002A2838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A2868; } }
L_002A2840:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2864u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2864u) [[unlikely]] return; }
L_002A2864:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A2868:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A2880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2894u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2894u) [[unlikely]] return; }
L_002A2894:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A28A0u) [[unlikely]] return; }
L_002A28A0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A28CC; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A28CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A28D4u);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A28D4u) [[unlikely]] return; }
L_002A28D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2930; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2930; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2910u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A2910u) [[unlikely]] return; }
L_002A2910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2918u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A2918u) [[unlikely]] return; }
L_002A2918:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2930u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2930u) [[unlikely]] return; }
L_002A2930:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2940:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2954u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2954u) [[unlikely]] return; }
L_002A2954:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A297C; } }
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2968u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A2968u) [[unlikely]] return; }
L_002A2968:
    set32(c.r[5], 0u + 11u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2974u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A2974u) [[unlikely]] return; }
L_002A2974:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A29DC; } }
L_002A297C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A29D8; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7746u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A29D8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A29ACu) [[unlikely]] return; }
L_002A29AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A29D8; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29D0u); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A29D0u) [[unlikely]] return; }
L_002A29D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A29D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A29D8u) [[unlikely]] return; }
L_002A29D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A29DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A29F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A2A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 108u), 0u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A38u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2A38u) [[unlikely]] return; }
L_002A2A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2A40u) [[unlikely]] return; }
L_002A2A40:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 23u);
    set32(c.r[7], 0u + 30u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A58u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2A58u) [[unlikely]] return; }
L_002A2A58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2A70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A84u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2A84u) [[unlikely]] return; }
L_002A2A84:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2A90u) [[unlikely]] return; }
L_002A2A90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2A98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2A98u) [[unlikely]] return; }
L_002A2A98:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A2B1C; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2AF4; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2AECu); st32((c.r[16].w[0] + 52u), 0u);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2AECu) [[unlikely]] return; }
L_002A2AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A2B04; } }
L_002A2AF4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    c.budget -= 4;
L_002A2B04:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B1Cu); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2B1Cu) [[unlikely]] return; }
L_002A2B1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2B30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B44u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2B44u) [[unlikely]] return; }
L_002A2B44:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2B50u) [[unlikely]] return; }
L_002A2B50:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2B60u) [[unlikely]] return; }
L_002A2B60:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2B6Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A2B6Cu) [[unlikely]] return; }
L_002A2B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2BC0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_002A2BB0; } }
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A2BA4u) [[unlikely]] return; }
L_002A2BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A2BC4; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_002A2BB0:
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2BC0u) [[unlikely]] return; }
L_002A2BC0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A2BC4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2BD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2BE4u) [[unlikely]] return; }
L_002A2BE4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2BF0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A2BF0u) [[unlikely]] return; }
L_002A2BF0:
    c.f[12] = ld32((c.r[16].w[0] + 1156u));
    c.f[13] = ld32((c.r[16].w[0] + 1160u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A2C00u) [[unlikely]] return; }
L_002A2C00:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A2C10u) [[unlikely]] return; }
L_002A2C10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2C18u) [[unlikely]] return; }
L_002A2C18:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C38u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A2C38u) [[unlikely]] return; }
L_002A2C38:
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A2C64; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_002A2C70; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A2C64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C6Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2C6Cu) [[unlikely]] return; }
L_002A2C6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.budget -= 1;
L_002A2C70:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A2C7Cu) [[unlikely]] return; }
L_002A2C7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2CA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2C94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 178u, depth + 1u); else { c.pc = 0x002DAF40u; return; } if (c.pc != 0x002A2C94u) [[unlikely]] return; }
L_002A2C94:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_002A2CE8; } }
L_002A2CA0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2CB8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2CB8u) [[unlikely]] return; }
L_002A2CB8:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FC00000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[0] = c.r[3].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[1]);
    c.f[1] = c.f[1] ^ fp::kSign;
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 12;
L_002A2CE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D18u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2D18u) [[unlikely]] return; }
L_002A2D18:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2D28u) [[unlikely]] return; }
L_002A2D28:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A2D50; } }
    st32((c.r[16].w[0] + 104u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A2D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D58u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2D58u) [[unlikely]] return; }
L_002A2D58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2D9C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D68u); c.r[4].d[0] = ld16((c.r[16].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x002D52A0u; return; } if (c.pc != 0x002A2D68u) [[unlikely]] return; }
L_002A2D68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A2D94; } }
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A2D7Cu) [[unlikely]] return; }
L_002A2D7C:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A2D88u) [[unlikely]] return; }
L_002A2D88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A2DA0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A2D94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2D9Cu);  if (depth < kMaxDepth) unit_0076(c, 83u, depth + 1u); else { c.pc = 0x002D92F0u; return; } if (c.pc != 0x002A2D9Cu) [[unlikely]] return; }
L_002A2D9C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A2DA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2DB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22336u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A2DD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DE8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2DE8u) [[unlikely]] return; }
L_002A2DE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2DF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2DF0u) [[unlikely]] return; }
L_002A2DF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A2E08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 189u, depth + 1u); else { c.pc = 0x002D65E0u; return; } if (c.pc != 0x002A2E00u) [[unlikely]] return; }
L_002A2E00:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_002A2E08:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2E38; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1220u), c.r[2].w[0]);  if (t) { goto L_002A2E4C; } }
L_002A2E38:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 5;
L_002A2E4C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 9u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E68u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A2E68u) [[unlikely]] return; }
L_002A2E68:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2E74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A2E74u) [[unlikely]] return; }
L_002A2E74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EA4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2EA4u) [[unlikely]] return; }
L_002A2EA4:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A2EC0u) [[unlikely]] return; }
L_002A2EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2EC8u) [[unlikely]] return; }
L_002A2EC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_002A2EE4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2ED8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 189u, depth + 1u); else { c.pc = 0x002D65E0u; return; } if (c.pc != 0x002A2ED8u) [[unlikely]] return; }
L_002A2ED8:
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
L_002A2EE4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2EECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A2EECu) [[unlikely]] return; }
L_002A2EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2F10; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A2F28; } }
L_002A2F10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 1220u), c.r[3].w[0]);
    c.budget -= 6;
L_002A2F28:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A2F40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F60u); st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 172u, depth + 1u); else { c.pc = 0x002DAD30u; return; } if (c.pc != 0x002A2F60u) [[unlikely]] return; }
L_002A2F60:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2F6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A2F6Cu) [[unlikely]] return; }
L_002A2F6C:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1220u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1220u), c.f[0]);  if (t) { goto L_002A2FB0; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A2FB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40200000u);
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 107u, depth + 1u); else { c.pc = 0x002DD2A0u; return; } if (c.pc != 0x002A2FB0u) [[unlikely]] return; }
L_002A2FB0:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.f[12] = 0u;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A2FC0u) [[unlikely]] return; }
L_002A2FC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A2FC8u) [[unlikely]] return; }
L_002A2FC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[17], c.r[2], c.r[0]);  if (t) { goto L_002A2FD8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 189u, depth + 1u); else { c.pc = 0x002D65E0u; return; } if (c.pc != 0x002A2FD8u) [[unlikely]] return; }
L_002A2FD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A2FE0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A2FE0u) [[unlikely]] return; }
L_002A2FE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A30A8; } }
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A301C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A30A8; } }
L_002A301C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40800000u);
    c.f[2] = c.r[2].w[0];
    set32(c.r[7], 0u + 4u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    fpu_div(c, 0u, c.f[0], c.f[2]);
    st32((c.r[16].w[0] + 104u), c.f[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = c.f[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 52u), 0u);
    c.budget -= 16;
    { const bool t = c.r[17].d[0] == 0ull; st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (t) { goto L_002A3088; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3080u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A3080u) [[unlikely]] return; }
L_002A3080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A30AC; } }
L_002A3088:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A30A8u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A30A8u) [[unlikely]] return; }
L_002A30A8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A30AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A30C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A30D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A30D4u) [[unlikely]] return; }
L_002A30D4:
    set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A30E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A30E0u) [[unlikely]] return; }
L_002A30E0:
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    c.f[0] = ld32((c.r[16].w[0] + 108u));
    c.f[2] = 0u;
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A310C; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
L_002A310C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3114u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 67u, depth + 1u); else { c.pc = 0x002DC970u; return; } if (c.pc != 0x002A3114u) [[unlikely]] return; }
L_002A3114:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3138; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 7;
L_002A3138:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3150:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3164u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3164u) [[unlikely]] return; }
L_002A3164:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3188; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3178u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A3178u) [[unlikely]] return; }
L_002A3178:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3180u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A3180u) [[unlikely]] return; }
L_002A3180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A31E8; } }
L_002A3188:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7744u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A31E4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 7746u)));
    set32(c.r[3], 0u + 11u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002A31E4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40C00000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A31B8u) [[unlikely]] return; }
L_002A31B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A31E4; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31DCu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A31DCu) [[unlikely]] return; }
L_002A31DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A31E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A31E4u) [[unlikely]] return; }
L_002A31E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A31E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3200:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 28864u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3220:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22368u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3240:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3260:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 6u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A3290:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A32A4u) [[unlikely]] return; }
L_002A32A4:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A32C0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A32C0u) [[unlikely]] return; }
L_002A32C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A32E4; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A32F0; } }
L_002A32E4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A32F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3314u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3314u) [[unlikely]] return; }
L_002A3314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3324u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A3324u) [[unlikely]] return; }
L_002A3324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A33C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3348u); st32((c.r[16].w[0] + 1216u), 0u);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A3348u) [[unlikely]] return; }
L_002A3348:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A33B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3364u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3364u) [[unlikely]] return; }
L_002A3364:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3370u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3370u) [[unlikely]] return; }
L_002A3370:
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A337Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A337Cu) [[unlikely]] return; }
L_002A337C:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3388u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A3388u) [[unlikely]] return; }
L_002A3388:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3394u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A3394u) [[unlikely]] return; }
L_002A3394:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A33A0u) [[unlikely]] return; }
L_002A33A0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33ACu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A33ACu) [[unlikely]] return; }
L_002A33AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A33C0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A33B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33C0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A33C0u) [[unlikely]] return; }
L_002A33C0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A33C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33CCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A33CCu) [[unlikely]] return; }
L_002A33CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A33E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A33F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A33F4u) [[unlikely]] return; }
L_002A33F4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A343C; } }
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A343C; } }
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3430u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A3430u) [[unlikely]] return; }
L_002A3430:
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A343Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A343Cu) [[unlikely]] return; }
L_002A343C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3450:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22400u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3490u); st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A3490u) [[unlikely]] return; }
L_002A3490:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 6u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A34B0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A34B0u) [[unlikely]] return; }
L_002A34B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A34C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7780u));
    c.f[0] = ld32((c.r[4].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A34E8u); st32((c.r[4].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A34E8u) [[unlikely]] return; }
L_002A34E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A350C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A3518; } }
L_002A350C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A3518:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3544u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3544u) [[unlikely]] return; }
L_002A3544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3554u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A3554u) [[unlikely]] return; }
L_002A3554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A35F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3578u); st32((c.r[16].w[0] + 1216u), 0u);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A3578u) [[unlikely]] return; }
L_002A3578:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A35E8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3594u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3594u) [[unlikely]] return; }
L_002A3594:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A35A0u) [[unlikely]] return; }
L_002A35A0:
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A35ACu) [[unlikely]] return; }
L_002A35AC:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A35B8u) [[unlikely]] return; }
L_002A35B8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A35C4u) [[unlikely]] return; }
L_002A35C4:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A35D0u) [[unlikely]] return; }
L_002A35D0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A35DCu) [[unlikely]] return; }
L_002A35DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A35F0; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A35E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35F0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A35F0u) [[unlikely]] return; }
L_002A35F0:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A35F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A35FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A35FCu) [[unlikely]] return; }
L_002A35FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3624u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3624u) [[unlikely]] return; }
L_002A3624:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A366C; } }
    c.f[2] = ld32((c.r[16].w[0] + 7780u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A366C; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3660u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A3660u) [[unlikely]] return; }
L_002A3660:
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A366Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 60u, depth + 1u); else { c.pc = 0x002D8F40u; return; } if (c.pc != 0x002A366Cu) [[unlikely]] return; }
L_002A366C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3680:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A36D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36A0u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A36A0u) [[unlikely]] return; }
L_002A36A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A36A8u) [[unlikely]] return; }
L_002A36A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A36D4; } }
    st32((c.r[16].w[0] + 68u), 0u);
    st32((c.r[16].w[0] + 52u), 0u);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36CCu); st32((c.r[16].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A36CCu) [[unlikely]] return; }
L_002A36CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A36D4u) [[unlikely]] return; }
L_002A36D4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A36F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A36F4u) [[unlikely]] return; }
L_002A36F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3710:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { st32((c.r[4].w[0] + 1216u), c.r[2].w[0]);  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A3740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3754u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A3754u) [[unlikely]] return; }
L_002A3754:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A375Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A375Cu) [[unlikely]] return; }
L_002A375C:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3778u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A3778u) [[unlikely]] return; }
L_002A3778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002A379C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_002A37C0; } }
L_002A379C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37C0u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A37C0u) [[unlikely]] return; }
L_002A37C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A37D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A37E4u) [[unlikely]] return; }
L_002A37E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A37F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A37F4u) [[unlikely]] return; }
L_002A37F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A3894; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3818u); st32((c.r[16].w[0] + 1216u), 0u);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A3818u) [[unlikely]] return; }
L_002A3818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A3888; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3834u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3834u) [[unlikely]] return; }
L_002A3834:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3840u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3840u) [[unlikely]] return; }
L_002A3840:
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A384Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A384Cu) [[unlikely]] return; }
L_002A384C:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3858u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A3858u) [[unlikely]] return; }
L_002A3858:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3864u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A3864u) [[unlikely]] return; }
L_002A3864:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3870u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A3870u) [[unlikely]] return; }
L_002A3870:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A387Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A387Cu) [[unlikely]] return; }
L_002A387C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3890; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A3888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3890u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A3890u) [[unlikely]] return; }
L_002A3890:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A3894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A389Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A389Cu) [[unlikely]] return; }
L_002A389C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A38B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A38C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A38C4u) [[unlikely]] return; }
L_002A38C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3934; } }
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[1]);  if (t) { goto L_002A3934; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 6u);  if (t) { goto L_002A3924; } }
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A390Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 79u, depth + 1u); else { c.pc = 0x002D9240u; return; } if (c.pc != 0x002A390Cu) [[unlikely]] return; }
L_002A390C:
    set32(c.r[5], 0u + 37u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3918u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 76u, depth + 1u); else { c.pc = 0x002D91D0u; return; } if (c.pc != 0x002A3918u) [[unlikely]] return; }
L_002A3918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002A3938; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 1;
L_002A3924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A392Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A392Cu) [[unlikely]] return; }
L_002A392C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3934u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A3934u) [[unlikely]] return; }
L_002A3934:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A3938:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3950:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3964u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3964u) [[unlikely]] return; }
L_002A3964:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3980; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3978u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A3978u) [[unlikely]] return; }
L_002A3978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3980u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A3980u) [[unlikely]] return; }
L_002A3980:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[1].d[0] = c.r[2].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002A39C0; } }
    c.f[12] = 0u;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39B8u); set32(c.r[5], ld32((c.r[16].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002A39B8u) [[unlikely]] return; }
L_002A39B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A39C0u) [[unlikely]] return; }
L_002A39C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x002A39E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x002A39E0u) [[unlikely]] return; }
L_002A39E0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A39F0:
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
L_002A3A20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3A34u) [[unlikely]] return; }
L_002A3A34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7814u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3A54; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x002A3A48u) [[unlikely]] return; }
L_002A3A48:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 113u, depth + 1u); else { c.pc = 0x002D9850u; return; } if (c.pc != 0x002A3A54u) [[unlikely]] return; }
L_002A3A54:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3A88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3A88u); st8((c.r[16].w[0] + 575u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A3A88u) [[unlikely]] return; }
L_002A3A88:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3AA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3AB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3AB4u) [[unlikely]] return; }
L_002A3AB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3AC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A3AC4u) [[unlikely]] return; }
L_002A3AC4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A3B64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3AE8u); st32((c.r[16].w[0] + 1216u), 0u);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A3AE8u) [[unlikely]] return; }
L_002A3AE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002A3B58; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B04u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3B04u) [[unlikely]] return; }
L_002A3B04:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 360u, depth + 1u); else { c.pc = 0x002EB8E0u; return; } if (c.pc != 0x002A3B10u) [[unlikely]] return; }
L_002A3B10:
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A3B1Cu) [[unlikely]] return; }
L_002A3B1C:
    set32(c.r[5], 0u + 31u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A3B28u) [[unlikely]] return; }
L_002A3B28:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B34u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A3B34u) [[unlikely]] return; }
L_002A3B34:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A3B40u) [[unlikely]] return; }
L_002A3B40:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B4Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A3B4Cu) [[unlikely]] return; }
L_002A3B4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3B60; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002A3B58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B60u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A3B60u) [[unlikely]] return; }
L_002A3B60:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A3B64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A3B6Cu) [[unlikely]] return; }
L_002A3B6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3B80:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3B9Cu); set32(c.r[5], ld32((c.r[17].w[0] + 1312u)));  if (depth < kMaxDepth) unit_0075(c, 117u, depth + 1u); else { c.pc = 0x002D58B0u; return; } if (c.pc != 0x002A3B9Cu) [[unlikely]] return; }
L_002A3B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3BA4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x002A3BA4u) [[unlikely]] return; }
L_002A3BA4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3BB0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3BB0u) [[unlikely]] return; }
L_002A3BB0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3C4C; } }
    c.f[1] = ld32((c.r[17].w[0] + 7740u));
    c.f[0] = ld32((c.r[17].w[0] + 1216u));
    c.f[2] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_002A3C4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3BE4u); c.r[4].d[0] = ld16((c.r[17].w[0] + 704u));  if (depth < kMaxDepth) unit_0075(c, 89u, depth + 1u); else { c.pc = 0x002D52A0u; return; } if (c.pc != 0x002A3BE4u) [[unlikely]] return; }
L_002A3BE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A3C44; } }
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_002A3C4C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 68u), 0u);
    st32((c.r[17].w[0] + 52u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[5], c.r[17].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C18u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002A3C18u) [[unlikely]] return; }
L_002A3C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C20u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 74u, depth + 1u); else { c.pc = 0x002DCA50u; return; } if (c.pc != 0x002A3C20u) [[unlikely]] return; }
L_002A3C20:
    c.f[12] = 0u;
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A3C38u) [[unlikely]] return; }
L_002A3C38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_002A3C50; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A3C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C4Cu);  if (depth < kMaxDepth) unit_0076(c, 83u, depth + 1u); else { c.pc = 0x002D92F0u; return; } if (c.pc != 0x002A3C4Cu) [[unlikely]] return; }
L_002A3C4C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002A3C50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3C60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3C74u) [[unlikely]] return; }
L_002A3C74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3C90; } }
    set32(c.r[5], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 64u, depth + 1u); else { c.pc = 0x002D8FE0u; return; } if (c.pc != 0x002A3C88u) [[unlikely]] return; }
L_002A3C88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3C90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 56u, depth + 1u); else { c.pc = 0x002D8EB0u; return; } if (c.pc != 0x002A3C90u) [[unlikely]] return; }
L_002A3C90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3CA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 28860u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3CC0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8387u)));
    set32(c.r[2], c.r[28].w[0] - 28856u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3CE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22472u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3D00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3D20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3D40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_0073(c, 49u, depth); }
L_002A3D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3D74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A3D74u) [[unlikely]] return; }
L_002A3D74:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3D80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A3D80u) [[unlikely]] return; }
L_002A3D80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3DBC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3DB0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x002A3DB0u) [[unlikely]] return; }
L_002A3DB0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3DBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A3DBCu) [[unlikely]] return; }
L_002A3DBC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3DE8u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A3DE8u) [[unlikely]] return; }
L_002A3DE8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3DF8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x002A3DF8u) [[unlikely]] return; }
L_002A3DF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002A3EA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 729u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
L_002A3E14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002A3E1Cu) [[unlikely]] return; }
L_002A3E1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3E68; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E34u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 140u, depth + 1u); else { c.pc = 0x002F92E0u; return; } if (c.pc != 0x002A3E34u) [[unlikely]] return; }
L_002A3E34:
    set32(c.r[2], c.r[16].w[0] + 32u);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E48u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x002A3E48u) [[unlikely]] return; }
L_002A3E48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E54u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002A3E54u) [[unlikely]] return; }
L_002A3E54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x002A3E14u | kUnwind; return; } goto L_002A3E14; } }
    c.budget -= 1;
L_002A3E68:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002A3E84; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E78u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002A3E78u) [[unlikely]] return; }
L_002A3E78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002A3EA4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002A3E84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E8Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002A3E8Cu) [[unlikely]] return; }
L_002A3E8C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3E98u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 22u, depth + 1u); else { c.pc = 0x00198340u; return; } if (c.pc != 0x002A3E98u) [[unlikely]] return; }
L_002A3E98:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EA4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x002A3EA4u) [[unlikely]] return; }
L_002A3EA4:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002A3EA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 221u, depth + 1u); else { c.pc = 0x002DB900u; return; } if (c.pc != 0x002A3EB0u) [[unlikely]] return; }
L_002A3EB0:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002A3ED0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EE4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x002A3EE4u) [[unlikely]] return; }
L_002A3EE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002A3EFC; } }
    set32(c.r[5], 0u + 10u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3EFCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x002A3EFCu) [[unlikely]] return; }
L_002A3EFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3F10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 22528u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x002A0000u < 16384u) { entry = entries_0068[(t - 0x002A0000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002A3F30:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 2u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_002A3F50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F64u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3F64u) [[unlikely]] return; }
L_002A3F64:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3F70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 107u, depth + 1u); else { c.pc = 0x002D9700u; return; } if (c.pc != 0x002A3F70u) [[unlikely]] return; }
L_002A3F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3F84; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_002A3F84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x002A3FB4u) [[unlikely]] return; }
L_002A3FB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002A3FE0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002A3FE0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x002A3FE0u) [[unlikely]] return; }
L_002A3FE0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002A3FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 4;
    [[clang::musttail]] return unit_0069(c, 1u, depth);
}

}
