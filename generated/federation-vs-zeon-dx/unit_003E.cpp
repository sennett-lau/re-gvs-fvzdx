#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_003E[4096] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0,
    0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0,
    67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0,
    79, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0,
    0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0,
    126, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0,
    0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147,
    0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157,
    0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0,
    168, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0,
    0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199,
    0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 209, 0, 210,
    0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0,
    221, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232,
    0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 0, 243,
    0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0,
    254, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0,
    265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276,
    0, 277, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287,
    0, 0, 288, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 0,
    0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 308, 0, 309, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0,
    346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0,
    368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0,
    0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    420, 421, 422, 423, 424, 425, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_003E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_001F8000;
    case 2u: goto L_001F800C;
    case 3u: goto L_001F8018;
    case 4u: goto L_001F8030;
    case 5u: goto L_001F8040;
    case 6u: goto L_001F806C;
    case 7u: goto L_001F8074;
    case 8u: goto L_001F8088;
    case 9u: goto L_001F8094;
    case 10u: goto L_001F80A0;
    case 11u: goto L_001F80E4;
    case 12u: goto L_001F80F0;
    case 13u: goto L_001F8100;
    case 14u: goto L_001F8178;
    case 15u: goto L_001F81B0;
    case 16u: goto L_001F81B8;
    case 17u: goto L_001F81C0;
    case 18u: goto L_001F81C8;
    case 19u: goto L_001F81D0;
    case 20u: goto L_001F81D8;
    case 21u: goto L_001F81E4;
    case 22u: goto L_001F81F0;
    case 23u: goto L_001F8200;
    case 24u: goto L_001F8268;
    case 25u: goto L_001F8270;
    case 26u: goto L_001F8290;
    case 27u: goto L_001F8298;
    case 28u: goto L_001F82B4;
    case 29u: goto L_001F82C8;
    case 30u: goto L_001F82D4;
    case 31u: goto L_001F82F0;
    case 32u: goto L_001F836C;
    case 33u: goto L_001F8378;
    case 34u: goto L_001F8390;
    case 35u: goto L_001F8438;
    case 36u: goto L_001F8450;
    case 37u: goto L_001F8520;
    case 38u: goto L_001F8544;
    case 39u: goto L_001F8550;
    case 40u: goto L_001F85B0;
    case 41u: goto L_001F8610;
    case 42u: goto L_001F8650;
    case 43u: goto L_001F86C4;
    case 44u: goto L_001F86D0;
    case 45u: goto L_001F87A0;
    case 46u: goto L_001F87E4;
    case 47u: goto L_001F8804;
    case 48u: goto L_001F882C;
    case 49u: goto L_001F884C;
    case 50u: goto L_001F8870;
    case 51u: goto L_001F8880;
    case 52u: goto L_001F8888;
    case 53u: goto L_001F8890;
    case 54u: goto L_001F8898;
    case 55u: goto L_001F88A0;
    case 56u: goto L_001F88A8;
    case 57u: goto L_001F88B0;
    case 58u: goto L_001F88B8;
    case 59u: goto L_001F88C0;
    case 60u: goto L_001F88C8;
    case 61u: goto L_001F88D0;
    case 62u: goto L_001F88D8;
    case 63u: goto L_001F88E0;
    case 64u: goto L_001F88E8;
    case 65u: goto L_001F88F0;
    case 66u: goto L_001F88F8;
    case 67u: goto L_001F8900;
    case 68u: goto L_001F8908;
    case 69u: goto L_001F8910;
    case 70u: goto L_001F8918;
    case 71u: goto L_001F8920;
    case 72u: goto L_001F892C;
    case 73u: goto L_001F8938;
    case 74u: goto L_001F8944;
    case 75u: goto L_001F8950;
    case 76u: goto L_001F8960;
    case 77u: goto L_001F8970;
    case 78u: goto L_001F8978;
    case 79u: goto L_001F8980;
    case 80u: goto L_001F8988;
    case 81u: goto L_001F8990;
    case 82u: goto L_001F899C;
    case 83u: goto L_001F89A8;
    case 84u: goto L_001F89B4;
    case 85u: goto L_001F89C0;
    case 86u: goto L_001F89F8;
    case 87u: goto L_001F8A78;
    case 88u: goto L_001F8ABC;
    case 89u: goto L_001F8AC4;
    case 90u: goto L_001F8AF0;
    case 91u: goto L_001F8B60;
    case 92u: goto L_001F8B6C;
    case 93u: goto L_001F8B78;
    case 94u: goto L_001F8B98;
    case 95u: goto L_001F8BA4;
    case 96u: goto L_001F8BB0;
    case 97u: goto L_001F8BBC;
    case 98u: goto L_001F8BC4;
    case 99u: goto L_001F8C18;
    case 100u: goto L_001F8C38;
    case 101u: goto L_001F8C48;
    case 102u: goto L_001F8C68;
    case 103u: goto L_001F8C78;
    case 104u: goto L_001F8C98;
    case 105u: goto L_001F8CA8;
    case 106u: goto L_001F8CC8;
    case 107u: goto L_001F8CD4;
    case 108u: goto L_001F8CF0;
    case 109u: goto L_001F8D1C;
    case 110u: goto L_001F8D24;
    case 111u: goto L_001F8D34;
    case 112u: goto L_001F8D70;
    case 113u: goto L_001F8D9C;
    case 114u: goto L_001F8DC4;
    case 115u: goto L_001F8DE0;
    case 116u: goto L_001F8DF8;
    case 117u: goto L_001F8E10;
    case 118u: goto L_001F8E1C;
    case 119u: goto L_001F8E24;
    case 120u: goto L_001F8E34;
    case 121u: goto L_001F8E40;
    case 122u: goto L_001F8E4C;
    case 123u: goto L_001F8E58;
    case 124u: goto L_001F8E64;
    case 125u: goto L_001F8E74;
    case 126u: goto L_001F8E80;
    case 127u: goto L_001F8E8C;
    case 128u: goto L_001F8E98;
    case 129u: goto L_001F8EA4;
    case 130u: goto L_001F8EAC;
    case 131u: goto L_001F8EBC;
    case 132u: goto L_001F8EC8;
    case 133u: goto L_001F8ED4;
    case 134u: goto L_001F8EE0;
    case 135u: goto L_001F8EEC;
    case 136u: goto L_001F8EF4;
    case 137u: goto L_001F8F04;
    case 138u: goto L_001F8F10;
    case 139u: goto L_001F8F1C;
    case 140u: goto L_001F8F28;
    case 141u: goto L_001F8F34;
    case 142u: goto L_001F8F3C;
    case 143u: goto L_001F8F4C;
    case 144u: goto L_001F8F58;
    case 145u: goto L_001F8F64;
    case 146u: goto L_001F8F70;
    case 147u: goto L_001F8F7C;
    case 148u: goto L_001F8F8C;
    case 149u: goto L_001F8F98;
    case 150u: goto L_001F8FA4;
    case 151u: goto L_001F8FB0;
    case 152u: goto L_001F8FBC;
    case 153u: goto L_001F8FCC;
    case 154u: goto L_001F8FD8;
    case 155u: goto L_001F8FE4;
    case 156u: goto L_001F8FF0;
    case 157u: goto L_001F8FFC;
    case 158u: goto L_001F900C;
    case 159u: goto L_001F9018;
    case 160u: goto L_001F9024;
    case 161u: goto L_001F9030;
    case 162u: goto L_001F903C;
    case 163u: goto L_001F9044;
    case 164u: goto L_001F904C;
    case 165u: goto L_001F905C;
    case 166u: goto L_001F9068;
    case 167u: goto L_001F9074;
    case 168u: goto L_001F9080;
    case 169u: goto L_001F908C;
    case 170u: goto L_001F9094;
    case 171u: goto L_001F90A4;
    case 172u: goto L_001F90B0;
    case 173u: goto L_001F90BC;
    case 174u: goto L_001F90C8;
    case 175u: goto L_001F90D4;
    case 176u: goto L_001F90DC;
    case 177u: goto L_001F90EC;
    case 178u: goto L_001F90F8;
    case 179u: goto L_001F9104;
    case 180u: goto L_001F9110;
    case 181u: goto L_001F911C;
    case 182u: goto L_001F912C;
    case 183u: goto L_001F9138;
    case 184u: goto L_001F9144;
    case 185u: goto L_001F9150;
    case 186u: goto L_001F915C;
    case 187u: goto L_001F916C;
    case 188u: goto L_001F9178;
    case 189u: goto L_001F9184;
    case 190u: goto L_001F9190;
    case 191u: goto L_001F919C;
    case 192u: goto L_001F91AC;
    case 193u: goto L_001F91B8;
    case 194u: goto L_001F91C4;
    case 195u: goto L_001F91D0;
    case 196u: goto L_001F91DC;
    case 197u: goto L_001F91E4;
    case 198u: goto L_001F91EC;
    case 199u: goto L_001F91FC;
    case 200u: goto L_001F9208;
    case 201u: goto L_001F9214;
    case 202u: goto L_001F9220;
    case 203u: goto L_001F922C;
    case 204u: goto L_001F923C;
    case 205u: goto L_001F9248;
    case 206u: goto L_001F9254;
    case 207u: goto L_001F9260;
    case 208u: goto L_001F926C;
    case 209u: goto L_001F9274;
    case 210u: goto L_001F927C;
    case 211u: goto L_001F928C;
    case 212u: goto L_001F9298;
    case 213u: goto L_001F92A4;
    case 214u: goto L_001F92B0;
    case 215u: goto L_001F92BC;
    case 216u: goto L_001F92C4;
    case 217u: goto L_001F92CC;
    case 218u: goto L_001F92DC;
    case 219u: goto L_001F92E8;
    case 220u: goto L_001F92F4;
    case 221u: goto L_001F9300;
    case 222u: goto L_001F930C;
    case 223u: goto L_001F9314;
    case 224u: goto L_001F931C;
    case 225u: goto L_001F932C;
    case 226u: goto L_001F9338;
    case 227u: goto L_001F9344;
    case 228u: goto L_001F9350;
    case 229u: goto L_001F935C;
    case 230u: goto L_001F9364;
    case 231u: goto L_001F936C;
    case 232u: goto L_001F937C;
    case 233u: goto L_001F9388;
    case 234u: goto L_001F9394;
    case 235u: goto L_001F93A0;
    case 236u: goto L_001F93AC;
    case 237u: goto L_001F93B4;
    case 238u: goto L_001F93BC;
    case 239u: goto L_001F93CC;
    case 240u: goto L_001F93D8;
    case 241u: goto L_001F93E4;
    case 242u: goto L_001F93F0;
    case 243u: goto L_001F93FC;
    case 244u: goto L_001F9404;
    case 245u: goto L_001F9414;
    case 246u: goto L_001F9420;
    case 247u: goto L_001F942C;
    case 248u: goto L_001F9438;
    case 249u: goto L_001F9444;
    case 250u: goto L_001F944C;
    case 251u: goto L_001F945C;
    case 252u: goto L_001F9468;
    case 253u: goto L_001F9474;
    case 254u: goto L_001F9480;
    case 255u: goto L_001F948C;
    case 256u: goto L_001F9494;
    case 257u: goto L_001F94A4;
    case 258u: goto L_001F94B0;
    case 259u: goto L_001F94BC;
    case 260u: goto L_001F94C8;
    case 261u: goto L_001F94D4;
    case 262u: goto L_001F94DC;
    case 263u: goto L_001F94E4;
    case 264u: goto L_001F94F4;
    case 265u: goto L_001F9500;
    case 266u: goto L_001F950C;
    case 267u: goto L_001F9518;
    case 268u: goto L_001F9524;
    case 269u: goto L_001F952C;
    case 270u: goto L_001F9534;
    case 271u: goto L_001F9544;
    case 272u: goto L_001F9550;
    case 273u: goto L_001F955C;
    case 274u: goto L_001F9568;
    case 275u: goto L_001F9574;
    case 276u: goto L_001F957C;
    case 277u: goto L_001F9584;
    case 278u: goto L_001F9594;
    case 279u: goto L_001F95A0;
    case 280u: goto L_001F95AC;
    case 281u: goto L_001F95B8;
    case 282u: goto L_001F95C4;
    case 283u: goto L_001F95CC;
    case 284u: goto L_001F95D4;
    case 285u: goto L_001F95E4;
    case 286u: goto L_001F95F0;
    case 287u: goto L_001F95FC;
    case 288u: goto L_001F9608;
    case 289u: goto L_001F9614;
    case 290u: goto L_001F961C;
    case 291u: goto L_001F9624;
    case 292u: goto L_001F9634;
    case 293u: goto L_001F9640;
    case 294u: goto L_001F964C;
    case 295u: goto L_001F9658;
    case 296u: goto L_001F9664;
    case 297u: goto L_001F966C;
    case 298u: goto L_001F9674;
    case 299u: goto L_001F9684;
    case 300u: goto L_001F9690;
    case 301u: goto L_001F969C;
    case 302u: goto L_001F96A8;
    case 303u: goto L_001F96B4;
    case 304u: goto L_001F96BC;
    case 305u: goto L_001F96CC;
    case 306u: goto L_001F96D8;
    case 307u: goto L_001F96E4;
    case 308u: goto L_001F96EC;
    case 309u: goto L_001F96F4;
    case 310u: goto L_001F9710;
    case 311u: goto L_001F9728;
    case 312u: goto L_001F973C;
    case 313u: goto L_001F9750;
    case 314u: goto L_001F9760;
    case 315u: goto L_001F9790;
    case 316u: goto L_001F97F0;
    case 317u: goto L_001F9814;
    case 318u: goto L_001F9850;
    case 319u: goto L_001F9860;
    case 320u: goto L_001F9880;
    case 321u: goto L_001F98C0;
    case 322u: goto L_001F98D0;
    case 323u: goto L_001F98E0;
    case 324u: goto L_001F98F0;
    case 325u: goto L_001F9910;
    case 326u: goto L_001F9980;
    case 327u: goto L_001F9B10;
    case 328u: goto L_001F9B90;
    case 329u: goto L_001F9BA0;
    case 330u: goto L_001F9BC0;
    case 331u: goto L_001F9BF0;
    case 332u: goto L_001F9C00;
    case 333u: goto L_001F9C10;
    case 334u: goto L_001F9C20;
    case 335u: goto L_001F9C40;
    case 336u: goto L_001F9C80;
    case 337u: goto L_001F9D10;
    case 338u: goto L_001F9D90;
    case 339u: goto L_001F9DA0;
    case 340u: goto L_001F9DC0;
    case 341u: goto L_001F9E30;
    case 342u: goto L_001F9E5C;
    case 343u: goto L_001F9EA0;
    case 344u: goto L_001F9EE0;
    case 345u: goto L_001F9EF0;
    case 346u: goto L_001F9F00;
    case 347u: goto L_001F9F10;
    case 348u: goto L_001F9F30;
    case 349u: goto L_001F9F80;
    case 350u: goto L_001F9FE0;
    case 351u: goto L_001FA008;
    case 352u: goto L_001FA01C;
    case 353u: goto L_001FA03C;
    case 354u: goto L_001FA04C;
    case 355u: goto L_001FA054;
    case 356u: goto L_001FA0D0;
    case 357u: goto L_001FA0E0;
    case 358u: goto L_001FA0F0;
    case 359u: goto L_001FA110;
    case 360u: goto L_001FA140;
    case 361u: goto L_001FA190;
    case 362u: goto L_001FA1A0;
    case 363u: goto L_001FA1B0;
    case 364u: goto L_001FA1D0;
    case 365u: goto L_001FA2F0;
    case 366u: goto L_001FA3E0;
    case 367u: goto L_001FA3F0;
    case 368u: goto L_001FA400;
    case 369u: goto L_001FA4F0;
    case 370u: goto L_001FA508;
    case 371u: goto L_001FA540;
    case 372u: goto L_001FA5EC;
    case 373u: goto L_001FA660;
    case 374u: goto L_001FA678;
    case 375u: goto L_001FA684;
    case 376u: goto L_001FA690;
    case 377u: goto L_001FA69C;
    case 378u: goto L_001FA6A8;
    case 379u: goto L_001FA6DC;
    case 380u: goto L_001FA6F0;
    case 381u: goto L_001FA7FC;
    case 382u: goto L_001FA848;
    case 383u: goto L_001FA860;
    case 384u: goto L_001FA90C;
    case 385u: goto L_001FA92C;
    case 386u: goto L_001FA97C;
    case 387u: goto L_001FA9EC;
    case 388u: goto L_001FAA10;
    case 389u: goto L_001FAAD4;
    case 390u: goto L_001FAAE0;
    case 391u: goto L_001FAAF0;
    case 392u: goto L_001FAB00;
    case 393u: goto L_001FAB18;
    case 394u: goto L_001FAB38;
    case 395u: goto L_001FAB50;
    case 396u: goto L_001FAC28;
    case 397u: goto L_001FAC38;
    case 398u: goto L_001FAC50;
    case 399u: goto L_001FACE0;
    case 400u: goto L_001FAD38;
    case 401u: goto L_001FAD5C;
    case 402u: goto L_001FAD80;
    case 403u: goto L_001FADC4;
    case 404u: goto L_001FADD0;
    case 405u: goto L_001FADE0;
    case 406u: goto L_001FADF4;
    case 407u: goto L_001FAE10;
    case 408u: goto L_001FAEDC;
    case 409u: goto L_001FAF00;
    case 410u: goto L_001FAF30;
    case 411u: goto L_001FAF54;
    case 412u: goto L_001FAF84;
    case 413u: goto L_001FAFD0;
    case 414u: goto L_001FB000;
    case 415u: goto L_001FB014;
    case 416u: goto L_001FB020;
    case 417u: goto L_001FB080;
    case 418u: goto L_001FB09C;
    case 419u: goto L_001FB0A8;
    case 420u: goto L_001FB100;
    case 421u: goto L_001FB104;
    case 422u: goto L_001FB108;
    case 423u: goto L_001FB10C;
    case 424u: goto L_001FB110;
    case 425u: goto L_001FB114;
    case 426u: goto L_001FB118;
    case 427u: goto L_001FB120;
    case 428u: goto L_001FB150;
    case 429u: goto L_001FB170;
    case 430u: goto L_001FB180;
    case 431u: goto L_001FB190;
    case 432u: goto L_001FB210;
    case 433u: goto L_001FB300;
    case 434u: goto L_001FB3E0;
    case 435u: goto L_001FB578;
    case 436u: goto L_001FB5A0;
    case 437u: goto L_001FB648;
    case 438u: goto L_001FB68C;
    case 439u: goto L_001FB7F0;
    case 440u: goto L_001FB970;
    case 441u: goto L_001FB9F0;
    case 442u: goto L_001FBA34;
    case 443u: goto L_001FBAB0;
    case 444u: goto L_001FBAC8;
    case 445u: goto L_001FBAE0;
    case 446u: goto L_001FBAF8;
    case 447u: goto L_001FBB2C;
    case 448u: goto L_001FBB40;
    case 449u: goto L_001FBB50;
    case 450u: goto L_001FBBD8;
    case 451u: goto L_001FBD18;
    case 452u: goto L_001FBD94;
    case 453u: goto L_001FBE2C;
    case 454u: goto L_001FBE38;
    default: bad_entry(c, 0x001F8000u); return;
    }
L_001F8000:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F800Cu); set32(c.r[4], c.r[2].w[0] - 29456u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F800Cu) [[unlikely]] return; }
L_001F800C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8018u); set32(c.r[4], c.r[2].w[0] - 31216u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F8018u) [[unlikely]] return; }
L_001F8018:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F8030:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26481u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
L_001F8040:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F806C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 60u);
    set32(c.r[4], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F806Cu); st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001F806Cu) [[unlikely]] return; }
L_001F806C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8074u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F8074u) [[unlikely]] return; }
L_001F8074:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26482u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8088; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8088u);  if (depth < kMaxDepth) unit_003E(c, 90u, depth + 1u); else { c.pc = 0x001F8AF0u; return; } if (c.pc != 0x001F8088u) [[unlikely]] return; }
L_001F8088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8094u); set32(c.r[4], c.r[2].w[0] - 29456u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F8094u) [[unlikely]] return; }
L_001F8094:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F80A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26481u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001F80DC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 60u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
L_001F80DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80E4u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F80E4u) [[unlikely]] return; }
L_001F80E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F80F0u); set32(c.r[4], c.r[2].w[0] - 29456u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F80F0u) [[unlikely]] return; }
L_001F80F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F8100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + 5u);
    st16((c.r[3].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 8u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_001F8138; } }
    set32(c.r[2], 0u + 255u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001F8138:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F8160; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_001F8160:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F81D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8178u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001F8178u) [[unlikely]] return; }
L_001F8178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001F81D0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 255u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81B0u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F81B0u) [[unlikely]] return; }
L_001F81B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81B8u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F81B8u) [[unlikely]] return; }
L_001F81B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81C0u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F81C0u) [[unlikely]] return; }
L_001F81C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81C8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F81C8u) [[unlikely]] return; }
L_001F81C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81D0u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 292u, depth + 1u); else { c.pc = 0x00303CB0u; return; } if (c.pc != 0x001F81D0u) [[unlikely]] return; }
L_001F81D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81D8u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F81D8u) [[unlikely]] return; }
L_001F81D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81E4u); set32(c.r[4], c.r[2].w[0] - 29456u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F81E4u) [[unlikely]] return; }
L_001F81E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F81F0u); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F81F0u) [[unlikely]] return; }
L_001F81F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F8200:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F82C0; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 255u);
    set32(c.r[3], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[17], ld32((c.r[1].w[0] - 10740u)));
    c.budget -= 14;
L_001F8268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8270u); set32(c.r[4], ld32((c.r[17].w[0])));  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x001F8270u) [[unlikely]] return; }
L_001F8270:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8268u | kUnwind; return; } goto L_001F8268; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[16], ld32((c.r[1].w[0] - 11380u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_001F8290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8298u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x001F8298u) [[unlikely]] return; }
L_001F8298:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 6ll ? 1ull : 0ull;
    set32(c.r[16], c.r[16].w[0] + 4u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8290u | kUnwind; return; } goto L_001F8290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82B4u);  if (depth < kMaxDepth) unit_0093(c, 279u, depth + 1u); else { c.pc = 0x0034FB40u; return; } if (c.pc != 0x001F82B4u) [[unlikely]] return; }
L_001F82B4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F82C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82C8u);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F82C8u) [[unlikely]] return; }
L_001F82C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F82D4u); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F82D4u) [[unlikely]] return; }
L_001F82D4:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001F82F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_001F8364; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
L_001F8364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F836Cu);  if (depth < kMaxDepth) unit_003E(c, 50u, depth + 1u); else { c.pc = 0x001F8870u; return; } if (c.pc != 0x001F836Cu) [[unlikely]] return; }
L_001F836C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8378u); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F8378u) [[unlikely]] return; }
L_001F8378:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F8390:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31952u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[3]);
    set32(c.r[8], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 56u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st128((c.r[8].w[0]) & ~15u, c.r[5]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[3]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[28].w[0] - 29784u));
    c.f[0] = ld32((c.r[28].w[0] - 29780u));
    set32(c.r[4], c.r[29].w[0] + 52u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], 0u + 3u);
    st32((c.r[7].w[0]), c.f[1]);
    st32((c.r[7].w[0] + 4u), c.f[0]);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[7].w[0]);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 19476u)));
    set32(c.r[5], 0u + 13u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 42;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8438u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001F8438u) [[unlikely]] return; }
L_001F8438:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F8450:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31920u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    ld128((c.r[2].w[0]) & ~15u, c.r[7]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[5]);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[4]);
    set32(c.r[8], c.r[29].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    st128((c.r[8].w[0]) & ~15u, c.r[7]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[6]);
    st128((c.r[8].w[0] + 32u) & ~15u, c.r[5]);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st128((c.r[8].w[0] + 48u) & ~15u, c.r[4]);
    st32((c.r[29].w[0] + 92u), c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] - 31856u);
    c.f[3] = ld32((c.r[2].w[0]));
    c.f[2] = ld32((c.r[2].w[0] + 4u));
    c.f[1] = ld32((c.r[2].w[0] + 8u));
    c.f[0] = ld32((c.r[2].w[0] + 12u));
    set32(c.r[3], c.r[29].w[0] + 96u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u + 13u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 92u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 19472u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 52;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8520u); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001F8520u) [[unlikely]] return; }
L_001F8520:
    set32(c.r[2], c.r[29].w[0] + 48u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 104u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8544u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001F8544u) [[unlikely]] return; }
L_001F8544:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001F8550:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[28].w[0] - 29776u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31840u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29772u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 23;
    { set32(c.r[4], c.r[2].w[0] - 20416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FA40u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 207u, depth); }
L_001F85B0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[28].w[0] - 29768u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31824u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29764u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 23;
    { set32(c.r[4], c.r[2].w[0] - 20416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0016FA40u | kUnwind; return; } [[clang::musttail]] return unit_001B(c, 207u, depth); }
L_001F8610:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 8u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8650u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001F8650u) [[unlikely]] return; }
L_001F8650:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[2].d[0] = c.r[2].d[0] | 514ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    set32(c.r[2], c.r[28].w[0] - 25296u);
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31808u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29760u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F86C4u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001F86C4u) [[unlikely]] return; }
L_001F86C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F86D0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[3], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 112u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    set32(c.r[3], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 8u)));
    c.r[1].d[0] = c.r[2].sd[0] < 255ll ? 1ull : 0ull;
    c.budget -= 30;
    if (c.r[1].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  goto L_001F8778; }
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x437F0000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F877C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_001F8778:
    c.f[20] = c.r[2].w[0];
    c.budget -= 1;
L_001F877C:
    set32(c.r[2], 0u + 4u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31776u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[2].w[0] - 31712u);
    set32(c.r[19], c.r[29].w[0] + 112u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 9;
L_001F87A0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[19].w[0] + 3u));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[3], c.r[2].w[0] >> 1);  if (t) { goto L_001F87C4; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_001F87DC; } }
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.budget -= 1;
L_001F87C4:
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 6;
L_001F87DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F87E4u); c.f[12] = fp::mul(c.f[20], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001F87E4u) [[unlikely]] return; }
L_001F87E4:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st8((c.r[19].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[17].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F87A0u | kUnwind; return; } goto L_001F87A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8804u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001F8804u) [[unlikely]] return; }
L_001F8804:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 31792u);
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    c.r[2].d[0] = c.r[2].d[0] | 640ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F882Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001F882Cu) [[unlikely]] return; }
L_001F882C:
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 24);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.r[2].d[0] = c.r[2].d[0] | 20817ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F884Cu); st32((c.r[29].w[0] + 112u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001F884Cu) [[unlikely]] return; }
L_001F884C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001F8870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8880u);  if (depth < kMaxDepth) unit_0082(c, 86u, depth + 1u); else { c.pc = 0x0030A330u; return; } if (c.pc != 0x001F8880u) [[unlikely]] return; }
L_001F8880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8888u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001F8888u) [[unlikely]] return; }
L_001F8888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8890u);  if (depth < kMaxDepth) unit_0081(c, 5u, depth + 1u); else { c.pc = 0x003040D0u; return; } if (c.pc != 0x001F8890u) [[unlikely]] return; }
L_001F8890:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8898u);  if (depth < kMaxDepth) unit_003F(c, 87u, depth + 1u); else { c.pc = 0x001FD9C0u; return; } if (c.pc != 0x001F8898u) [[unlikely]] return; }
L_001F8898:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88A0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F88A0u) [[unlikely]] return; }
L_001F88A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88A8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F88A8u) [[unlikely]] return; }
L_001F88A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88B0u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F88B0u) [[unlikely]] return; }
L_001F88B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88B8u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F88B8u) [[unlikely]] return; }
L_001F88B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88C0u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F88C0u) [[unlikely]] return; }
L_001F88C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88C8u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F88C8u) [[unlikely]] return; }
L_001F88C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88D0u);  if (depth < kMaxDepth) unit_0024(c, 49u, depth + 1u); else { c.pc = 0x00190D20u; return; } if (c.pc != 0x001F88D0u) [[unlikely]] return; }
L_001F88D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88D8u);  if (depth < kMaxDepth) unit_0043(c, 25u, depth + 1u); else { c.pc = 0x0020C960u; return; } if (c.pc != 0x001F88D8u) [[unlikely]] return; }
L_001F88D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88E0u);  if (depth < kMaxDepth) unit_0081(c, 163u, depth + 1u); else { c.pc = 0x00306A60u; return; } if (c.pc != 0x001F88E0u) [[unlikely]] return; }
L_001F88E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88E8u);  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x001F88E8u) [[unlikely]] return; }
L_001F88E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88F0u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F88F0u) [[unlikely]] return; }
L_001F88F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F88F8u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F88F8u) [[unlikely]] return; }
L_001F88F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8900u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F8900u) [[unlikely]] return; }
L_001F8900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8908u); set32(c.r[4], 0u + 17u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F8908u) [[unlikely]] return; }
L_001F8908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8910u); set32(c.r[4], 0u + 18u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F8910u) [[unlikely]] return; }
L_001F8910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8918u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F8918u) [[unlikely]] return; }
L_001F8918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8920u);  if (depth < kMaxDepth) unit_001B(c, 45u, depth + 1u); else { c.pc = 0x0016CE40u; return; } if (c.pc != 0x001F8920u) [[unlikely]] return; }
L_001F8920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F892Cu); set32(c.r[4], c.r[2].w[0] - 26864u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F892Cu) [[unlikely]] return; }
L_001F892C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8938u); set32(c.r[4], c.r[2].w[0] - 23424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F8938u) [[unlikely]] return; }
L_001F8938:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8944u); set32(c.r[4], c.r[2].w[0] - 27424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F8944u) [[unlikely]] return; }
L_001F8944:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8950u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F8950u) [[unlikely]] return; }
L_001F8950:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F8960:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8970u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001F8970u) [[unlikely]] return; }
L_001F8970:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8978u);  if (depth < kMaxDepth) unit_0081(c, 5u, depth + 1u); else { c.pc = 0x003040D0u; return; } if (c.pc != 0x001F8978u) [[unlikely]] return; }
L_001F8978:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8980u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001F8980u) [[unlikely]] return; }
L_001F8980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8988u); set32(c.r[4], 0u + 19u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001F8988u) [[unlikely]] return; }
L_001F8988:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8990u);  if (depth < kMaxDepth) unit_001B(c, 45u, depth + 1u); else { c.pc = 0x0016CE40u; return; } if (c.pc != 0x001F8990u) [[unlikely]] return; }
L_001F8990:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F899Cu); set32(c.r[4], c.r[2].w[0] - 26864u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F899Cu) [[unlikely]] return; }
L_001F899C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001B0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89A8u); set32(c.r[4], c.r[2].w[0] - 27424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F89A8u) [[unlikely]] return; }
L_001F89A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89B4u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001F89B4u) [[unlikely]] return; }
L_001F89B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F89C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[4], c.r[2].w[0] + 26144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[2].w[0] - 10768u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F89F8u); st8((c.r[1].w[0] + 26144u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0016(c, 134u, depth + 1u); else { c.pc = 0x0015B550u; return; } if (c.pc != 0x001F89F8u) [[unlikely]] return; }
L_001F89F8:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], ld32((c.r[28].w[0] - 27596u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st8((c.r[1].w[0] + 26145u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 43u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st8((c.r[1].w[0] - 31006u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31392u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31388u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 31392u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00850000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[5], c.r[2].w[0] - 16912u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31616u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31656u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st32((c.r[1].w[0] + 27148u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31612u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31652u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    st32((c.r[1].w[0] + 27124u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00860000u);
    mmi::paddub(c.r[7], c.r[16], c.r[0]);
    st32((c.r[1].w[0] + 27120u), c.r[3].w[0]);
    c.budget -= 32;
L_001F8A78:
    c.f[0] = ld32((c.r[5].w[0] + 48u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 4032u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 52u));
    st32((c.r[7].w[0] + 4036u), c.f[0]);
    c.f[0] = ld32((c.r[5].w[0] + 56u));
    st32((c.r[7].w[0] + 4040u), c.f[0]);
    set32(c.r[5], c.r[5].w[0] + 240u);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8A78u | kUnwind; return; } goto L_001F8A78; } }
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8ABCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 90u, depth + 1u); else { c.pc = 0x00264D10u; return; } if (c.pc != 0x001F8ABCu) [[unlikely]] return; }
L_001F8ABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8AC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x001F8AC4u) [[unlikely]] return; }
L_001F8AC4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44720000u);
    st32((c.r[16].w[0] + 40u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 36u), 0u);
    st32((c.r[16].w[0] + 88u), 0u);
    st32((c.r[16].w[0] + 84u), 0u);
    st32((c.r[16].w[0] + 80u), 0u);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8AF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.f[0] = ld32((c.r[1].w[0] - 31640u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26484u)));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31632u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.f[0] = ld32((c.r[1].w[0] - 31600u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31592u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.f[0] = ld32((c.r[1].w[0] - 31636u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    st32((c.r[1].w[0] - 31628u), c.f[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.f[0] = ld32((c.r[1].w[0] - 31596u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st32((c.r[1].w[0] - 31588u), c.f[0]);  if (t) { goto L_001F8B78; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B60u); st8((c.r[28].w[0] - 26484u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004F(c, 308u, depth + 1u); else { c.pc = 0x0023F1A0u; return; } if (c.pc != 0x001F8B60u) [[unlikely]] return; }
L_001F8B60:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B6Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 308u, depth + 1u); else { c.pc = 0x0023F1A0u; return; } if (c.pc != 0x001F8B6Cu) [[unlikely]] return; }
L_001F8B6C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F8B78u) [[unlikely]] return; }
L_001F8B78:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 26483u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001F8BB4; } }
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8B98u); st8((c.r[28].w[0] - 26483u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_004F(c, 308u, depth + 1u); else { c.pc = 0x0023F1A0u; return; } if (c.pc != 0x001F8B98u) [[unlikely]] return; }
L_001F8B98:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_004F(c, 308u, depth + 1u); else { c.pc = 0x0023F1A0u; return; } if (c.pc != 0x001F8BA4u) [[unlikely]] return; }
L_001F8BA4:
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F8BB0u) [[unlikely]] return; }
L_001F8BB0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F8BB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BBCu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x001F8BBCu) [[unlikely]] return; }
L_001F8BBC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8BC4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 133u, depth + 1u); else { c.pc = 0x00265F60u; return; } if (c.pc != 0x001F8BC4u) [[unlikely]] return; }
L_001F8BC4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[2], 0u + 4u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_001F8CCC; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);  if (t) { goto L_001F8C9C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);  if (t) { goto L_001F8C6C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);  if (t) { goto L_001F8C3C; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_001F8C0C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001F8CC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_001F8C0C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x001F8C18u) [[unlikely]] return; }
L_001F8C18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8CC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C38u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F8C38u) [[unlikely]] return; }
L_001F8C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x430C0000u);
    c.budget -= 1;
L_001F8C3C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x001F8C48u) [[unlikely]] return; }
L_001F8C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8CC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C68u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F8C68u) [[unlikely]] return; }
L_001F8C68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.budget -= 1;
L_001F8C6C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C78u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x001F8C78u) [[unlikely]] return; }
L_001F8C78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8CC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8C98u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F8C98u) [[unlikely]] return; }
L_001F8C98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44110000u);
    c.budget -= 1;
L_001F8C9C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x001F8CA8u) [[unlikely]] return; }
L_001F8CA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F8CC8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 5u)));
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CC8u); st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 365u, depth + 1u); else { c.pc = 0x00197E70u; return; } if (c.pc != 0x001F8CC8u) [[unlikely]] return; }
L_001F8CC8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_001F8CCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8CD4u);  if (depth < kMaxDepth) unit_003E(c, 112u, depth + 1u); else { c.pc = 0x001F8D70u; return; } if (c.pc != 0x001F8CD4u) [[unlikely]] return; }
L_001F8CD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F8CF0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[16], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[16], c.r[0]);
    mmi::paddub(c.r[19], c.r[0], c.r[0]);
    c.budget -= 11;
L_001F8D1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D24u); set32(c.r[4], c.r[18].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x001F8D24u) [[unlikely]] return; }
L_001F8D24:
    set32(c.r[2], ld32((c.r[16].w[0] + 184u)));
    set32(c.r[2], c.r[2].w[0] + c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D34u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000F(c, 40u, depth + 1u); else { c.pc = 0x0013CDF0u; return; } if (c.pc != 0x001F8D34u) [[unlikely]] return; }
L_001F8D34:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[3].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 64u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F8D1Cu | kUnwind; return; } goto L_001F8D1C; } }
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F8D70:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[4], c.r[0]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], c.r[19].w[0] + 1984u);
    set32(c.r[17], c.r[19].w[0] + 4032u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8D9Cu); set32(c.r[18], c.r[19].w[0] + 4544u);  if (depth < kMaxDepth) unit_000E(c, 320u, depth + 1u); else { c.pc = 0x0013BA10u; return; } if (c.pc != 0x001F8D9Cu) [[unlikely]] return; }
L_001F8D9C:
    c.f[5] = ld32((c.r[19].w[0] + 32u));
    c.f[4] = ld32((c.r[17].w[0]));
    c.f[3] = ld32((c.r[19].w[0] + 36u));
    c.f[2] = ld32((c.r[17].w[0] + 4u));
    c.f[1] = ld32((c.r[19].w[0] + 40u));
    c.f[0] = ld32((c.r[17].w[0] + 8u));
    c.f[12] = fp::add(c.f[5], c.f[4]);
    c.f[13] = fp::add(c.f[3], c.f[2]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8DC4u); c.f[14] = fp::add(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8DC4u) [[unlikely]] return; }
L_001F8DC4:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 88u)));
    c.r[4].d[0] = 0ull | 65535ull;
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8DE0u); c.r[4].d[0] = c.r[2].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8DE0u) [[unlikely]] return; }
L_001F8DE0:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 84u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8DF8u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8DF8u) [[unlikely]] return; }
L_001F8DF8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    set32(c.r[3], ld32((c.r[19].w[0] + 80u)));
    set32(c.r[18], c.r[18].w[0] + 4u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E10u); c.r[4].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8E10u) [[unlikely]] return; }
L_001F8E10:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E1Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8E1Cu) [[unlikely]] return; }
L_001F8E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E24u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F8E24u) [[unlikely]] return; }
L_001F8E24:
    c.f[13] = ld32((c.r[17].w[0] + 20u));
    c.f[14] = ld32((c.r[17].w[0] + 24u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E34u); c.f[12] = ld32((c.r[17].w[0] + 16u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8E34u) [[unlikely]] return; }
L_001F8E34:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E40u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8E40u) [[unlikely]] return; }
L_001F8E40:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E4Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8E4Cu) [[unlikely]] return; }
L_001F8E4C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E58u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8E58u) [[unlikely]] return; }
L_001F8E58:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E64u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8E64u) [[unlikely]] return; }
L_001F8E64:
    c.f[13] = ld32((c.r[17].w[0] + 36u));
    c.f[14] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E74u); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8E74u) [[unlikely]] return; }
L_001F8E74:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E80u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8E80u) [[unlikely]] return; }
L_001F8E80:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E8Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8E8Cu) [[unlikely]] return; }
L_001F8E8C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8E98u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8E98u) [[unlikely]] return; }
L_001F8E98:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EA4u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8EA4u) [[unlikely]] return; }
L_001F8EA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F8EACu) [[unlikely]] return; }
L_001F8EAC:
    c.f[13] = ld32((c.r[17].w[0] + 52u));
    c.f[14] = ld32((c.r[17].w[0] + 56u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EBCu); c.f[12] = ld32((c.r[17].w[0] + 48u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8EBCu) [[unlikely]] return; }
L_001F8EBC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EC8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8EC8u) [[unlikely]] return; }
L_001F8EC8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8ED4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8ED4u) [[unlikely]] return; }
L_001F8ED4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EE0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8EE0u) [[unlikely]] return; }
L_001F8EE0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EECu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8EECu) [[unlikely]] return; }
L_001F8EEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8EF4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F8EF4u) [[unlikely]] return; }
L_001F8EF4:
    c.f[13] = ld32((c.r[17].w[0] + 68u));
    c.f[14] = ld32((c.r[17].w[0] + 72u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F04u); c.f[12] = ld32((c.r[17].w[0] + 64u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8F04u) [[unlikely]] return; }
L_001F8F04:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F10u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8F10u) [[unlikely]] return; }
L_001F8F10:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F1Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8F1Cu) [[unlikely]] return; }
L_001F8F1C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F28u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8F28u) [[unlikely]] return; }
L_001F8F28:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F34u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8F34u) [[unlikely]] return; }
L_001F8F34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F3Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F8F3Cu) [[unlikely]] return; }
L_001F8F3C:
    c.f[13] = ld32((c.r[17].w[0] + 84u));
    c.f[14] = ld32((c.r[17].w[0] + 88u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F4Cu); c.f[12] = ld32((c.r[17].w[0] + 80u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8F4Cu) [[unlikely]] return; }
L_001F8F4C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F58u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8F58u) [[unlikely]] return; }
L_001F8F58:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F64u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8F64u) [[unlikely]] return; }
L_001F8F64:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F70u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8F70u) [[unlikely]] return; }
L_001F8F70:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F7Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8F7Cu) [[unlikely]] return; }
L_001F8F7C:
    c.f[13] = ld32((c.r[17].w[0] + 100u));
    c.f[14] = ld32((c.r[17].w[0] + 104u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F8Cu); c.f[12] = ld32((c.r[17].w[0] + 96u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8F8Cu) [[unlikely]] return; }
L_001F8F8C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8F98u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8F98u) [[unlikely]] return; }
L_001F8F98:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FA4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8FA4u) [[unlikely]] return; }
L_001F8FA4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FB0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8FB0u) [[unlikely]] return; }
L_001F8FB0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FBCu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8FBCu) [[unlikely]] return; }
L_001F8FBC:
    c.f[13] = ld32((c.r[17].w[0] + 116u));
    c.f[14] = ld32((c.r[17].w[0] + 120u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FCCu); c.f[12] = ld32((c.r[17].w[0] + 112u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F8FCCu) [[unlikely]] return; }
L_001F8FCC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FD8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F8FD8u) [[unlikely]] return; }
L_001F8FD8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FE4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F8FE4u) [[unlikely]] return; }
L_001F8FE4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FF0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F8FF0u) [[unlikely]] return; }
L_001F8FF0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F8FFCu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F8FFCu) [[unlikely]] return; }
L_001F8FFC:
    c.f[13] = ld32((c.r[17].w[0] + 132u));
    c.f[14] = ld32((c.r[17].w[0] + 136u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F900Cu); c.f[12] = ld32((c.r[17].w[0] + 128u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F900Cu) [[unlikely]] return; }
L_001F900C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9018u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9018u) [[unlikely]] return; }
L_001F9018:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9024u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9024u) [[unlikely]] return; }
L_001F9024:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9030u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9030u) [[unlikely]] return; }
L_001F9030:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F903Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F903Cu) [[unlikely]] return; }
L_001F903C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9044u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F9044u) [[unlikely]] return; }
L_001F9044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F904Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F904Cu) [[unlikely]] return; }
L_001F904C:
    c.f[13] = ld32((c.r[17].w[0] + 148u));
    c.f[14] = ld32((c.r[17].w[0] + 152u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F905Cu); c.f[12] = ld32((c.r[17].w[0] + 144u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F905Cu) [[unlikely]] return; }
L_001F905C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9068u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9068u) [[unlikely]] return; }
L_001F9068:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9074u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9074u) [[unlikely]] return; }
L_001F9074:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9080u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9080u) [[unlikely]] return; }
L_001F9080:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F908Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F908Cu) [[unlikely]] return; }
L_001F908C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9094u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F9094u) [[unlikely]] return; }
L_001F9094:
    c.f[13] = ld32((c.r[17].w[0] + 164u));
    c.f[14] = ld32((c.r[17].w[0] + 168u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90A4u); c.f[12] = ld32((c.r[17].w[0] + 160u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F90A4u) [[unlikely]] return; }
L_001F90A4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90B0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F90B0u) [[unlikely]] return; }
L_001F90B0:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90BCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F90BCu) [[unlikely]] return; }
L_001F90BC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90C8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F90C8u) [[unlikely]] return; }
L_001F90C8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90D4u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F90D4u) [[unlikely]] return; }
L_001F90D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F90DCu) [[unlikely]] return; }
L_001F90DC:
    c.f[13] = ld32((c.r[17].w[0] + 180u));
    c.f[14] = ld32((c.r[17].w[0] + 184u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90ECu); c.f[12] = ld32((c.r[17].w[0] + 176u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F90ECu) [[unlikely]] return; }
L_001F90EC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F90F8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F90F8u) [[unlikely]] return; }
L_001F90F8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9104u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9104u) [[unlikely]] return; }
L_001F9104:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9110u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9110u) [[unlikely]] return; }
L_001F9110:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F911Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F911Cu) [[unlikely]] return; }
L_001F911C:
    c.f[13] = ld32((c.r[17].w[0] + 196u));
    c.f[14] = ld32((c.r[17].w[0] + 200u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F912Cu); c.f[12] = ld32((c.r[17].w[0] + 192u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F912Cu) [[unlikely]] return; }
L_001F912C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9138u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9138u) [[unlikely]] return; }
L_001F9138:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9144u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9144u) [[unlikely]] return; }
L_001F9144:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9150u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9150u) [[unlikely]] return; }
L_001F9150:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F915Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F915Cu) [[unlikely]] return; }
L_001F915C:
    c.f[13] = ld32((c.r[17].w[0] + 212u));
    c.f[14] = ld32((c.r[17].w[0] + 216u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F916Cu); c.f[12] = ld32((c.r[17].w[0] + 208u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F916Cu) [[unlikely]] return; }
L_001F916C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9178u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9178u) [[unlikely]] return; }
L_001F9178:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9184u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9184u) [[unlikely]] return; }
L_001F9184:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9190u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9190u) [[unlikely]] return; }
L_001F9190:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F919Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F919Cu) [[unlikely]] return; }
L_001F919C:
    c.f[13] = ld32((c.r[17].w[0] + 228u));
    c.f[14] = ld32((c.r[17].w[0] + 232u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91ACu); c.f[12] = ld32((c.r[17].w[0] + 224u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F91ACu) [[unlikely]] return; }
L_001F91AC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91B8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F91B8u) [[unlikely]] return; }
L_001F91B8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91C4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F91C4u) [[unlikely]] return; }
L_001F91C4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91D0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F91D0u) [[unlikely]] return; }
L_001F91D0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91DCu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F91DCu) [[unlikely]] return; }
L_001F91DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F91E4u) [[unlikely]] return; }
L_001F91E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F91ECu) [[unlikely]] return; }
L_001F91EC:
    c.f[13] = ld32((c.r[17].w[0] + 244u));
    c.f[14] = ld32((c.r[17].w[0] + 248u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F91FCu); c.f[12] = ld32((c.r[17].w[0] + 240u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F91FCu) [[unlikely]] return; }
L_001F91FC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9208u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9208u) [[unlikely]] return; }
L_001F9208:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9214u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9214u) [[unlikely]] return; }
L_001F9214:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9220u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9220u) [[unlikely]] return; }
L_001F9220:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F922Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F922Cu) [[unlikely]] return; }
L_001F922C:
    c.f[13] = ld32((c.r[17].w[0] + 260u));
    c.f[14] = ld32((c.r[17].w[0] + 264u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F923Cu); c.f[12] = ld32((c.r[17].w[0] + 256u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F923Cu) [[unlikely]] return; }
L_001F923C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9248u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9248u) [[unlikely]] return; }
L_001F9248:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9254u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9254u) [[unlikely]] return; }
L_001F9254:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9260u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9260u) [[unlikely]] return; }
L_001F9260:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F926Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F926Cu) [[unlikely]] return; }
L_001F926C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9274u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F9274u) [[unlikely]] return; }
L_001F9274:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F927Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F927Cu) [[unlikely]] return; }
L_001F927C:
    c.f[13] = ld32((c.r[17].w[0] + 276u));
    c.f[14] = ld32((c.r[17].w[0] + 280u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F928Cu); c.f[12] = ld32((c.r[17].w[0] + 272u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F928Cu) [[unlikely]] return; }
L_001F928C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9298u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9298u) [[unlikely]] return; }
L_001F9298:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92A4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F92A4u) [[unlikely]] return; }
L_001F92A4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92B0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F92B0u) [[unlikely]] return; }
L_001F92B0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92BCu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F92BCu) [[unlikely]] return; }
L_001F92BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F92C4u) [[unlikely]] return; }
L_001F92C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F92CCu) [[unlikely]] return; }
L_001F92CC:
    c.f[13] = ld32((c.r[17].w[0] + 292u));
    c.f[14] = ld32((c.r[17].w[0] + 296u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92DCu); c.f[12] = ld32((c.r[17].w[0] + 288u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F92DCu) [[unlikely]] return; }
L_001F92DC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92E8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F92E8u) [[unlikely]] return; }
L_001F92E8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F92F4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F92F4u) [[unlikely]] return; }
L_001F92F4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9300u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9300u) [[unlikely]] return; }
L_001F9300:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F930Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F930Cu) [[unlikely]] return; }
L_001F930C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9314u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F9314u) [[unlikely]] return; }
L_001F9314:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F931Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F931Cu) [[unlikely]] return; }
L_001F931C:
    c.f[13] = ld32((c.r[17].w[0] + 308u));
    c.f[14] = ld32((c.r[17].w[0] + 312u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F932Cu); c.f[12] = ld32((c.r[17].w[0] + 304u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F932Cu) [[unlikely]] return; }
L_001F932C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9338u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9338u) [[unlikely]] return; }
L_001F9338:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9344u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9344u) [[unlikely]] return; }
L_001F9344:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9350u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9350u) [[unlikely]] return; }
L_001F9350:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F935Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F935Cu) [[unlikely]] return; }
L_001F935C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9364u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F9364u) [[unlikely]] return; }
L_001F9364:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F936Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F936Cu) [[unlikely]] return; }
L_001F936C:
    c.f[13] = ld32((c.r[17].w[0] + 324u));
    c.f[14] = ld32((c.r[17].w[0] + 328u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F937Cu); c.f[12] = ld32((c.r[17].w[0] + 320u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F937Cu) [[unlikely]] return; }
L_001F937C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9388u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9388u) [[unlikely]] return; }
L_001F9388:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9394u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9394u) [[unlikely]] return; }
L_001F9394:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93A0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F93A0u) [[unlikely]] return; }
L_001F93A0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93ACu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F93ACu) [[unlikely]] return; }
L_001F93AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F93B4u) [[unlikely]] return; }
L_001F93B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93BCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F93BCu) [[unlikely]] return; }
L_001F93BC:
    c.f[13] = ld32((c.r[17].w[0] + 340u));
    c.f[14] = ld32((c.r[17].w[0] + 344u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93CCu); c.f[12] = ld32((c.r[17].w[0] + 336u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F93CCu) [[unlikely]] return; }
L_001F93CC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93D8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F93D8u) [[unlikely]] return; }
L_001F93D8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93E4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F93E4u) [[unlikely]] return; }
L_001F93E4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F93F0u) [[unlikely]] return; }
L_001F93F0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F93FCu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F93FCu) [[unlikely]] return; }
L_001F93FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9404u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F9404u) [[unlikely]] return; }
L_001F9404:
    c.f[13] = ld32((c.r[17].w[0] + 356u));
    c.f[14] = ld32((c.r[17].w[0] + 360u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9414u); c.f[12] = ld32((c.r[17].w[0] + 352u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F9414u) [[unlikely]] return; }
L_001F9414:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9420u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9420u) [[unlikely]] return; }
L_001F9420:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F942Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F942Cu) [[unlikely]] return; }
L_001F942C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9438u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9438u) [[unlikely]] return; }
L_001F9438:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9444u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F9444u) [[unlikely]] return; }
L_001F9444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F944Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F944Cu) [[unlikely]] return; }
L_001F944C:
    c.f[13] = ld32((c.r[17].w[0] + 372u));
    c.f[14] = ld32((c.r[17].w[0] + 376u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F945Cu); c.f[12] = ld32((c.r[17].w[0] + 368u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F945Cu) [[unlikely]] return; }
L_001F945C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9468u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9468u) [[unlikely]] return; }
L_001F9468:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9474u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F9474u) [[unlikely]] return; }
L_001F9474:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9480u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9480u) [[unlikely]] return; }
L_001F9480:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F948Cu); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F948Cu) [[unlikely]] return; }
L_001F948C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9494u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F9494u) [[unlikely]] return; }
L_001F9494:
    c.f[13] = ld32((c.r[17].w[0] + 388u));
    c.f[14] = ld32((c.r[17].w[0] + 392u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94A4u); c.f[12] = ld32((c.r[17].w[0] + 384u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F94A4u) [[unlikely]] return; }
L_001F94A4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94B0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F94B0u) [[unlikely]] return; }
L_001F94B0:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94BCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F94BCu) [[unlikely]] return; }
L_001F94BC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94C8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F94C8u) [[unlikely]] return; }
L_001F94C8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94D4u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F94D4u) [[unlikely]] return; }
L_001F94D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94DCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F94DCu) [[unlikely]] return; }
L_001F94DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94E4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F94E4u) [[unlikely]] return; }
L_001F94E4:
    c.f[13] = ld32((c.r[17].w[0] + 404u));
    c.f[14] = ld32((c.r[17].w[0] + 408u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F94F4u); c.f[12] = ld32((c.r[17].w[0] + 400u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F94F4u) [[unlikely]] return; }
L_001F94F4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9500u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9500u) [[unlikely]] return; }
L_001F9500:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F950Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F950Cu) [[unlikely]] return; }
L_001F950C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9518u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9518u) [[unlikely]] return; }
L_001F9518:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9524u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F9524u) [[unlikely]] return; }
L_001F9524:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F952Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F952Cu) [[unlikely]] return; }
L_001F952C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9534u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F9534u) [[unlikely]] return; }
L_001F9534:
    c.f[13] = ld32((c.r[17].w[0] + 420u));
    c.f[14] = ld32((c.r[17].w[0] + 424u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9544u); c.f[12] = ld32((c.r[17].w[0] + 416u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F9544u) [[unlikely]] return; }
L_001F9544:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9550u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9550u) [[unlikely]] return; }
L_001F9550:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F955Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F955Cu) [[unlikely]] return; }
L_001F955C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9568u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9568u) [[unlikely]] return; }
L_001F9568:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9574u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F9574u) [[unlikely]] return; }
L_001F9574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F957Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F957Cu) [[unlikely]] return; }
L_001F957C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9584u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F9584u) [[unlikely]] return; }
L_001F9584:
    c.f[13] = ld32((c.r[17].w[0] + 436u));
    c.f[14] = ld32((c.r[17].w[0] + 440u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9594u); c.f[12] = ld32((c.r[17].w[0] + 432u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F9594u) [[unlikely]] return; }
L_001F9594:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95A0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F95A0u) [[unlikely]] return; }
L_001F95A0:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95ACu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F95ACu) [[unlikely]] return; }
L_001F95AC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95B8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F95B8u) [[unlikely]] return; }
L_001F95B8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95C4u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F95C4u) [[unlikely]] return; }
L_001F95C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F95CCu) [[unlikely]] return; }
L_001F95CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95D4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F95D4u) [[unlikely]] return; }
L_001F95D4:
    c.f[13] = ld32((c.r[17].w[0] + 452u));
    c.f[14] = ld32((c.r[17].w[0] + 456u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95E4u); c.f[12] = ld32((c.r[17].w[0] + 448u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F95E4u) [[unlikely]] return; }
L_001F95E4:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95F0u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F95F0u) [[unlikely]] return; }
L_001F95F0:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F95FCu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F95FCu) [[unlikely]] return; }
L_001F95FC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9608u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9608u) [[unlikely]] return; }
L_001F9608:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9614u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F9614u) [[unlikely]] return; }
L_001F9614:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F961Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F961Cu) [[unlikely]] return; }
L_001F961C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9624u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F9624u) [[unlikely]] return; }
L_001F9624:
    c.f[13] = ld32((c.r[17].w[0] + 468u));
    c.f[14] = ld32((c.r[17].w[0] + 472u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9634u); c.f[12] = ld32((c.r[17].w[0] + 464u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F9634u) [[unlikely]] return; }
L_001F9634:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9640u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9640u) [[unlikely]] return; }
L_001F9640:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F964Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F964Cu) [[unlikely]] return; }
L_001F964C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9658u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F9658u) [[unlikely]] return; }
L_001F9658:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9664u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F9664u) [[unlikely]] return; }
L_001F9664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F966Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F966Cu) [[unlikely]] return; }
L_001F966C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9674u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 324u, depth + 1u); else { c.pc = 0x0013BC50u; return; } if (c.pc != 0x001F9674u) [[unlikely]] return; }
L_001F9674:
    c.f[13] = ld32((c.r[17].w[0] + 484u));
    c.f[14] = ld32((c.r[17].w[0] + 488u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9684u); c.f[12] = ld32((c.r[17].w[0] + 480u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F9684u) [[unlikely]] return; }
L_001F9684:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9690u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F9690u) [[unlikely]] return; }
L_001F9690:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F969Cu); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F969Cu) [[unlikely]] return; }
L_001F969C:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96A8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F96A8u) [[unlikely]] return; }
L_001F96A8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96B4u); set32(c.r[16], c.r[4].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F96B4u) [[unlikely]] return; }
L_001F96B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96BCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 323u, depth + 1u); else { c.pc = 0x0013BBA0u; return; } if (c.pc != 0x001F96BCu) [[unlikely]] return; }
L_001F96BC:
    c.f[13] = ld32((c.r[17].w[0] + 500u));
    c.f[14] = ld32((c.r[17].w[0] + 504u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96CCu); c.f[12] = ld32((c.r[17].w[0] + 496u));  if (depth < kMaxDepth) unit_000F(c, 13u, depth + 1u); else { c.pc = 0x0013C5F0u; return; } if (c.pc != 0x001F96CCu) [[unlikely]] return; }
L_001F96CC:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96D8u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 10u, depth + 1u); else { c.pc = 0x0013C4F0u; return; } if (c.pc != 0x001F96D8u) [[unlikely]] return; }
L_001F96D8:
    c.r[4].d[0] = ld16((c.r[18].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96E4u); set32(c.r[18], c.r[18].w[0] + 4u);  if (depth < kMaxDepth) unit_000F(c, 7u, depth + 1u); else { c.pc = 0x0013C3F0u; return; } if (c.pc != 0x001F96E4u) [[unlikely]] return; }
L_001F96E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96ECu); c.r[4].d[0] = ld16((c.r[18].w[0]));  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x001F96ECu) [[unlikely]] return; }
L_001F96EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F96F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 326u, depth + 1u); else { c.pc = 0x0013BDE0u; return; } if (c.pc != 0x001F96F4u) [[unlikely]] return; }
L_001F96F4:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001F9710:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19460u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9728u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_001B(c, 175u, depth + 1u); else { c.pc = 0x0016F030u; return; } if (c.pc != 0x001F9728u) [[unlikely]] return; }
L_001F9728:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19468u)));
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F973Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 178u, depth + 1u); else { c.pc = 0x0016F0C0u; return; } if (c.pc != 0x001F973Cu) [[unlikely]] return; }
L_001F973C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], ld32((c.r[1].w[0] - 19464u)));
    set32(c.r[5], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9750u); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 178u, depth + 1u); else { c.pc = 0x0016F0C0u; return; } if (c.pc != 0x001F9750u) [[unlikely]] return; }
L_001F9750:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001F9760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9790u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001F9790u) [[unlikely]] return; }
L_001F9790:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F97D8; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 20u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[18].w[0]));
    set32(c.r[3], c.r[3].w[0] - 26640u);
    st8((c.r[2].w[0] + 10u), static_cast<std::uint8_t>(c.r[17].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 136u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 132u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 128u), c.r[3].w[0]);
    st8((c.r[2].w[0] + 324u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 16;
L_001F97D8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001F97F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_001F9830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9814u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 324u)));  if (depth < kMaxDepth) unit_0029(c, 272u, depth + 1u); else { c.pc = 0x001A71A0u; return; } if (c.pc != 0x001F9814u) [[unlikely]] return; }
L_001F9814:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001F9830; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[16].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 6u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_001F9830:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27840u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001F9850u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001F9850u) [[unlikely]] return; }
L_001F9850:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001F9860:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27808u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9880:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[5], c.r[3].w[0] - 23552u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28032u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 28u), c.r[3].w[0]);  c.pc = t; return; }
L_001F98C0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F98D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F98E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001F98F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27792u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9910:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[8].sd[0] = static_cast<std::int32_t>(0x41800000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x432A0000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x43E00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42240000u);
    set32(c.r[9], c.r[9].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[9].w[0]));
    st32((c.r[4].w[0] + 112u), 0u);
    st32((c.r[4].w[0] + 116u), 0u);
    st32((c.r[4].w[0] + 32u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 144u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 132u), c.r[3].w[0]);
    set32(c.r[3], 0u + 5u);
    st32((c.r[4].w[0] + 104u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 22944u);
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9978; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F9978:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9980:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001F9A94; } }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001F9A20; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001F99AC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001F9B08; } }
L_001F99AC:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 112u), c.f[0]);  if (t) { goto L_001F99E8; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F99E8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F9A10; } }
    set32(c.r[3], 0u + 5u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 112u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9B04; } }
L_001F9A10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F9B04; } }
L_001F9A20:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_001F9A5C; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F9A5C:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001F9A84; } }
    set32(c.r[3], 0u + 5u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9B04; } }
L_001F9A84:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001F9B04; } }
L_001F9A94:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    set32(c.r[3], 0u + 1u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = fp::sub(c.f[2], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 14;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 104u), c.f[0]);  if (t) { goto L_001F9AD0; } }
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 1;
L_001F9AD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001F9AF8; } }
    set32(c.r[3], 0u + 8u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[4].w[0] + 104u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9B04; } }
L_001F9AF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_001F9B04:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F9B08:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9B10:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.f[3] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[3]));
    c.budget -= 17;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[4].w[0] + 116u), c.f[0]);  if (t) { goto L_001F9B68; } }
    st32((c.r[4].w[0] + 116u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001F9B7C; } }
L_001F9B68:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001F9B7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9B90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001F9BA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27776u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9BC0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 22800u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] - 4u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 10u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9BF0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9C00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9C10:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001F9C20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27760u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9C40:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[6], c.r[3].w[0] - 22432u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0xC34C0000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42D40000u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    set32(c.r[3], 0u + 15u);
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9C80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9CF0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001F9CB8; } }
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_001F9CB8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34C0000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 14;
L_001F9CF0:
    set32(c.r[5], ld32((c.r[4].w[0] + 28u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].d[0] = ld16((c.r[5].w[0]));
    st16((c.r[4].w[0] + 336u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9D10:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < 20ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001F9D44; } }
    set32(c.r[3], 0u + 20u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001F9D44:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0xC34C0000u);
    c.f[1] = c.r[3].w[0];
    c.f[3] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41400000u);
    c.f[3] = fp::cvt_s_w(c.f[3]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    set32(c.r[3], 0u + 2u);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9D90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001F9DA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27744u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9DC0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[6], c.r[3].w[0] - 22000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] - 28848u);
    set32(c.r[3], c.r[7].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 168u), c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 28844u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 24;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001F9E28; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001F9E28:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001F9E30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[1].d[0] == 0ull) { set32(c.r[3], 0u + 2u);  goto L_001F9EE4; }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00570000u);
    set32(c.r[5], c.r[5].w[0] + 24688u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9E5C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.f[0] = ld32((c.r[1].w[0] - 28808u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 298u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 294u)));
    c.f[3] = c.r[5].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 32u), c.f[0]);  if (t) { goto L_001F9EE0; } }
L_001F9EA0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[3].w[0];
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.f[0] = ld32((c.r[1].w[0] - 28800u));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 292u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 288u)));
    c.f[3] = c.r[5].w[0];
    c.f[2] = c.r[3].w[0];
    c.f[3] = fp::cvt_s_w(c.f[3]);
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 2u, c.f[3], c.f[2]);
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.budget -= 16;
L_001F9EE0:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001F9EE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9EF0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001F9F00:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001F9F10:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27728u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001F9F30:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[2].w[0] - 21760u);
    set32(c.r[2], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 80u), 0u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[4].w[0] + 116u), c.r[5].w[0]);
    set32(c.r[7], c.r[4].w[0] + 320u);
    set32(c.r[8], c.r[2].w[0] - 27712u);
    set32(c.r[9], c.r[28].w[0] - 29720u);
    st32((c.r[4].w[0] + 112u), c.r[5].w[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 20;
L_001F9F80:
    c.f[3] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 3ll ? 1ull : 0ull;
    st32((c.r[7].w[0] + 16u), c.f[3]);
    st32((c.r[7].w[0] + 20u), c.f[2]);
    st32((c.r[7].w[0] + 24u), c.f[1]);
    st32((c.r[7].w[0] + 28u), c.f[0]);
    c.r[4].d[0] = ld16((c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 16u);
    st16((c.r[7].w[0] + 42u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[7].w[0] + 36u), c.r[5].w[0]);
    st32((c.r[7].w[0] + 32u), c.r[5].w[0]);
    st8((c.r[7].w[0] + 44u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], c.r[7].w[0] + 32u);
    c.budget -= 19;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001F9F80u | kUnwind; return; } goto L_001F9F80; } }
    c.budget -= 2;
    { mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198610u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 40u, depth); }
L_001F9FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 80u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 2184u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[4].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA008u); set32(c.r[4], ld32((c.r[4].w[0] + 80u)));  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x001FA008u) [[unlikely]] return; }
L_001FA008:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3E990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA01Cu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x001FA01Cu) [[unlikely]] return; }
L_001FA01C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FD30000u);
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.r[4].d[0] = c.r[4].d[0] << 16;
    c.r[4].d[0] = c.r[4].d[0] | 13107ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA03Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001FA03Cu) [[unlikely]] return; }
L_001FA03C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[4].d[0] = c.r[4].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA04Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 14u, depth + 1u); else { c.pc = 0x0011CB00u; return; } if (c.pc != 0x001FA04Cu) [[unlikely]] return; }
L_001FA04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA054u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 61u, depth + 1u); else { c.pc = 0x0011D390u; return; } if (c.pc != 0x001FA054u) [[unlikely]] return; }
L_001FA054:
    st32((c.r[16].w[0] + 116u), c.f[0]);
    st32((c.r[16].w[0] + 112u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_001FA0AC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001FA098; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001FA098:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.r[4].d[0] = c.r[3].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
L_001FA0AC:
    st8((c.r[16].w[0] + 396u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], 0u + 2u);
    st8((c.r[16].w[0] + 428u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FA0D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FA0E0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001FA0F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27664u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FA110:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[5], c.r[3].w[0] - 21424u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FA140:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001FA164; } }
    set32(c.r[3], 0u + 16u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FA164:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 8ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FA17C; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FA17C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FA190:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FA1A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001FA1B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27648u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FA1D0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[5], c.r[3].w[0] - 21120u);
    c.r[10].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 168u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 128u), c.r[10].w[0]);
    st32((c.r[4].w[0] + 136u), 0u);
    set32(c.r[6], c.r[3].w[0] - 27552u);
    st32((c.r[4].w[0] + 132u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[9], c.r[3].w[0] - 27568u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] - 27552u);
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[4] = c.r[3].w[0];
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[8], c.r[3].w[0] - 28864u);
    st32((c.r[4].w[0] + 112u), c.f[0]);
    st32((c.r[4].w[0] + 120u), c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[7], c.r[3].w[0] - 27624u);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] - 27632u);
    set32(c.r[3], c.r[10].w[0] << 2);
    set32(c.r[9], c.r[9].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[9].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[3].w[0] - 27628u);
    fpu_div(c, 0u, c.f[0], c.f[4]);
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0] + 64u), c.f[0]);
    c.f[3] = ld32((c.r[8].w[0]));
    c.f[2] = ld32((c.r[8].w[0] + 4u));
    c.f[1] = ld32((c.r[8].w[0] + 8u));
    c.f[0] = ld32((c.r[8].w[0] + 12u));
    st32((c.r[4].w[0] + 32u), c.f[3]);
    st32((c.r[4].w[0] + 36u), c.f[2]);
    st32((c.r[4].w[0] + 40u), c.f[1]);
    st32((c.r[4].w[0] + 44u), c.f[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[8], c.r[8].w[0] << 4);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.f[0] = ld32((c.r[7].w[0]));
    st32((c.r[4].w[0] + 40u), c.f[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[7], c.r[7].w[0] << 4);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    c.f[0] = ld32((c.r[6].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 48u), c.f[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[6], c.r[6].w[0] << 4);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    c.f[0] = ld32((c.r[5].w[0]));
    fpu_div(c, 0u, c.f[0], c.f[4]);
    st32((c.r[4].w[0] + 52u), c.f[0]);
    c.budget -= 72;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FA2F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_001FA374; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001FA310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FA3BC; } }
L_001FA310:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { set32(c.r[3], c.r[5].w[0] + 1u);  goto L_001FA360; }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[4].w[0] + 32u));
    c.f[0] = ld32((c.r[4].w[0] + 48u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 32u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 36u));
    c.f[0] = ld32((c.r[4].w[0] + 52u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 36u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 112u));
    c.f[0] = ld32((c.r[4].w[0] + 64u));
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 116u), c.f[0]);
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 112u), c.f[0]);  if (t) { goto L_001FA3BC; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001FA360:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 8u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001FA3BC; } }
L_001FA374:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FA3BC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_001FA3B0; } }
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 166u)));
    set32(c.r[3], 0u + 8u);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_001FA3B0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].d[0] & 4ull;
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 2));
    c.budget -= 3;
L_001FA3BC:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001FA3CC; } }
    set32(c.r[3], 0u + 2u);
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FA3CC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FA3E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FA3F0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001FA400:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 9264u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[7], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[3].d[0] = c.r[2].d[0] | 32896ull;
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    st32((c.r[1].w[0] - 28992u), 0u);
    st32((c.r[29].w[0] + 116u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 28992u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 16708u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[7].w[0]);
    set32(c.r[3], c.r[29].w[0] + 120u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 116u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 24u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), 0u);
    set32(c.r[2], 0u + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 60;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA4F0u); mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA4F0u) [[unlikely]] return; }
L_001FA4F0:
    set32(c.r[3], 0u + 186u);
    set32(c.r[18], c.r[29].w[0] + 100u);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; set32(c.r[17], ld32((c.r[20].w[0] + 28u)));  if (t) { goto L_001FA628; } }
L_001FA508:
    set32(c.r[3], 0u + 12289u);
    c.r[7].d[0] = c.r[6].d[0] & 65535ull;
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 12288u);  if (t) { goto L_001FA54C; } }
    set32(c.r[3], ld32((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27936u);
    set32(c.r[3], c.r[3].w[0] + 12u);
    st32((c.r[18].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 10u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA540u); c.f[12] = ld32((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA540u) [[unlikely]] return; }
L_001FA540:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.r[2].w[0]);  if (t) { goto L_001FA628; } }
    set32(c.r[3], 0u + 12288u);
    c.budget -= 1;
L_001FA54C:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == c.r[3].d[0];  if (t) { goto L_001FA618; } }
    set32(c.r[2], 0u + 11u);
    mmi::div(c, 0, c.r[7].w[0], c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x2E8B0000u);
    c.r[6].d[0] = c.r[3].d[0] | 41705ull;
    set32(c.r[8], c.r[7].w[0] >> 31);
    set32(c.r[5], 0u + 24u);
    set32(c.r[3], c.r[29].w[0] + 126u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[19].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[29].w[0] + 124u);
    mmi::mult(c, 0, c.r[6].w[0], c.r[7].w[0]);
    set32(c.r[6], c.r[19].w[0] << 1);
    set32(c.r[6], c.r[6].w[0] + c.r[19].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    c.r[7].d[0] = c.hi.d[0];
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[6].w[0]));
    st16((c.r[29].w[0] + 120u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[6].d[0] = c.r[19].d[0] ^ 10ull;
    set32(c.r[7], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[7].w[0]) >> 1));
    c.r[6].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[8], c.r[5].w[0] - c.r[6].w[0]);
    set32(c.r[5], c.r[7].w[0] << 1);
    set32(c.r[5], c.r[5].w[0] + c.r[7].w[0]);
    set32(c.r[5], c.r[5].w[0] << 3);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[29].w[0] + 122u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[5].d[0] = ld16((c.r[2].w[0]));
    c.r[6].d[0] = c.r[8].d[0] & 65535ull;
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[2].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA5ECu); st32((c.r[1].w[0] - 28976u), c.r[8].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FA5ECu) [[unlikely]] return; }
L_001FA5EC:
    c.r[3].d[0] = c.r[19].d[0] ^ 10ull;
    c.r[6].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    set32(c.r[3], c.r[6].w[0] << 1);
    set32(c.r[6], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[7], c.r[6].w[0] << 1);
    set32(c.r[6], 0u + 22u);
    set32(c.r[6], c.r[6].w[0] - c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 96u), c.r[3].w[0]);  if (t) { goto L_001FA628; } }
L_001FA618:
    set32(c.r[3], ld32((c.r[29].w[0] + 96u)));
    set32(c.r[3], c.r[3].w[0] + 22u);
    st32((c.r[29].w[0] + 96u), c.r[3].w[0]);
    c.budget -= 4;
L_001FA628:
    c.r[6].d[0] = ld16((c.r[17].w[0]));
    c.r[3].d[0] = 0ull | 65535ull;
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != c.r[3].d[0]; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA508u | kUnwind; return; } goto L_001FA508; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FA660:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA678u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA678u) [[unlikely]] return; }
L_001FA678:
    st16((c.r[29].w[0] + 32u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA684u); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA684u) [[unlikely]] return; }
L_001FA684:
    st16((c.r[29].w[0] + 34u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA690u); c.f[12] = ld32((c.r[16].w[0] + 128u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA690u) [[unlikely]] return; }
L_001FA690:
    st16((c.r[29].w[0] + 36u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA69Cu); c.f[12] = ld32((c.r[16].w[0] + 144u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA69Cu) [[unlikely]] return; }
L_001FA69C:
    st16((c.r[29].w[0] + 38u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA6A8u); c.f[12] = ld32((c.r[16].w[0] + 132u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA6A8u) [[unlikely]] return; }
L_001FA6A8:
    st16((c.r[29].w[0] + 40u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    set32(c.r[7], 0u + 3u);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    set32(c.r[8], 0u + 12u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);
    st32((c.r[29].w[0] + 52u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA6DCu); st32((c.r[29].w[0] + 56u), c.f[0]);  if (depth < kMaxDepth) unit_0037(c, 153u, depth + 1u); else { c.pc = 0x001DEB90u; return; } if (c.pc != 0x001FA6DCu) [[unlikely]] return; }
L_001FA6DC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FA6F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 16708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28992u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[2].w[0] - 27536u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 14u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    set32(c.r[2], 0u + 7u);
    c.budget -= 41;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 256u);  if (t) { goto L_001FA7A4; } }
    set32(c.r[2], 0u + 212u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 216u);  if (t) { goto L_001FA7A8; } }
    set32(c.r[2], 0u + 256u);
    c.budget -= 1;
L_001FA7A4:
    set32(c.r[5], 0u + 128u);
    c.budget -= 1;
L_001FA7A8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28992u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], ld32((c.r[1].w[0] - 28976u)));
    set32(c.r[2], 0u + 173u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], ld32((c.r[1].w[0] - 28972u)));
    set32(c.r[2], c.r[2].w[0] + 12u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA7FCu); st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FA7FCu) [[unlikely]] return; }
L_001FA7FC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    st32((c.r[29].w[0] + 44u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st16((c.r[16].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 224u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28992u), c.r[2].w[0]);
    set32(c.r[2], 0u + 416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    set32(c.r[2], 0u + 185u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA848u); st32((c.r[1].w[0] - 28988u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 200u, depth + 1u); else { c.pc = 0x00173140u; return; } if (c.pc != 0x001FA848u) [[unlikely]] return; }
L_001FA848:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001FA860:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[2].w[0] - 9248u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[3]);
    set32(c.r[6], c.r[29].w[0] + 112u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    st128((c.r[6].w[0]) & ~15u, c.r[3]);
    set32(c.r[3], ld32((c.r[1].w[0] - 16708u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28992u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[6].w[0]);
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 43;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA90Cu); mmi::paddub(c.r[21], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FA90Cu) [[unlikely]] return; }
L_001FA90C:
    st32((c.r[29].w[0] + 112u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[2].w[0] - 27312u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[19], c.r[2].w[0] - 27472u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[20], c.r[2].w[0] - 27392u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 8;
L_001FA92C:
    c.r[3].d[0] = ld16((c.r[21].w[0] + 336u));
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001FA984; }
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[1].w[0] - 28992u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA97Cu); st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FA97Cu) [[unlikely]] return; }
L_001FA97C:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001FA984:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FA92Cu | kUnwind; return; } goto L_001FA92C; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 69u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 27408u);
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 27328u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[1].w[0] - 28992u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FA9ECu); st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FA9ECu) [[unlikely]] return; }
L_001FA9EC:
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001FAA10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9232u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[7], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 28992u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[7].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29712u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28992u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[7], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[6], c.r[29].w[0] + 60u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 60u), c.r[2].w[0]);
    set32(c.r[2], 0u + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), 0u);
    set32(c.r[2], 0u + 30u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);
    c.f[12] = ld32((c.r[4].w[0] + 32u));
    c.budget -= 49;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAAD4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FAAD4u) [[unlikely]] return; }
L_001FAAD4:
    st32((c.r[29].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAAE0u); c.f[12] = ld32((c.r[16].w[0] + 36u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FAAE0u) [[unlikely]] return; }
L_001FAAE0:
    st32((c.r[29].w[0] + 36u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAAF0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FAAF0u) [[unlikely]] return; }
L_001FAAF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FAB00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB18u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FAB18u) [[unlikely]] return; }
L_001FAB18:
    c.f[0] = ld32((c.r[16].w[0] + 112u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[4], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[2].w[0] - 27296u);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 116u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB38u); st32((c.r[29].w[0] + 52u), c.f[0]);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001FAB38u) [[unlikely]] return; }
L_001FAB38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[4], c.r[2].w[0] + 28592u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAB50u); set32(c.r[6], c.r[2].w[0] - 27280u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001FAB50u) [[unlikely]] return; }
L_001FAB50:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 396u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FAC38; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] - 9216u);
    ld128((c.r[2].w[0]) & ~15u, c.r[4]);
    set32(c.r[5], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[7], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 28992u);
    st128((c.r[5].w[0]) & ~15u, c.r[4]);
    st32((c.r[1].w[0] - 20396u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 120u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29696u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[8], ld32((c.r[1].w[0] - 16720u)));
    set32(c.r[6], 0u + 15u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29694u)));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29692u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[7].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28992u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    set32(c.r[3], c.r[28].w[0] - 29704u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 29690u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);
    set32(c.r[3], c.r[29].w[0] + 124u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80300000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[3].d[0] = c.r[3].d[0] | 29312ull;
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAC28u); st32((c.r[29].w[0] + 120u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FAC28u) [[unlikely]] return; }
L_001FAC28:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAC38u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_003E(c, 407u, depth + 1u); else { c.pc = 0x001FAE10u; return; } if (c.pc != 0x001FAC38u) [[unlikely]] return; }
L_001FAC38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001FAC50:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 28992u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 108u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80190000u);
    c.r[2].d[0] = c.r[2].d[0] | 6528ull;
    st32((c.r[29].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 15u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[19], c.r[2].w[0] - 27248u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[18], c.r[28].w[0] - 29688u);
    set32(c.r[20], c.r[2].w[0] - 27264u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 36;
L_001FACE0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 16736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    st32((c.r[1].w[0] - 28992u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 2u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28988u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 4u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28976u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] + 6u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st32((c.r[1].w[0] - 28972u), c.r[2].w[0]);
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD38u); st32((c.r[16].w[0] + 48u), c.r[20].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FAD38u) [[unlikely]] return; }
L_001FAD38:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[18], c.r[18].w[0] + 2u);
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FACE0u | kUnwind; return; } goto L_001FACE0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAD5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_003E(c, 407u, depth + 1u); else { c.pc = 0x001FAE10u; return; } if (c.pc != 0x001FAD5Cu) [[unlikely]] return; }
L_001FAD5C:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001FAD80:
    set32(c.r[29], c.r[29].w[0] - 160u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 27008u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[5]);
    ld128((c.r[2].w[0] + 32u) & ~15u, c.r[3]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[7], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    ld128((c.r[2].w[0] + 48u) & ~15u, c.r[2]);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st128((c.r[7].w[0] + 16u) & ~15u, c.r[5]);
    st128((c.r[7].w[0] + 32u) & ~15u, c.r[3]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADC4u); st128((c.r[7].w[0] + 48u) & ~15u, c.r[2]);  if (depth < kMaxDepth) unit_0000(c, 227u, depth + 1u); else { c.pc = 0x00102728u; return; } if (c.pc != 0x001FADC4u) [[unlikely]] return; }
L_001FADC4:
    set32(c.r[5], c.r[16].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADD0u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0000(c, 221u, depth + 1u); else { c.pc = 0x001026B0u; return; } if (c.pc != 0x001FADD0u) [[unlikely]] return; }
L_001FADD0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[6], c.r[16].w[0] + 112u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADE0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000D(c, 122u, depth + 1u); else { c.pc = 0x00135810u; return; } if (c.pc != 0x001FADE0u) [[unlikely]] return; }
L_001FADE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[29].w[0] + 96u);
    set32(c.r[4], c.r[2].w[0] - 27040u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FADF4u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_001B(c, 136u, depth + 1u); else { c.pc = 0x0016E520u; return; } if (c.pc != 0x001FADF4u) [[unlikely]] return; }
L_001FADF4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001FAE10:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] - 9200u);
    ld128((c.r[2].w[0]) & ~15u, c.r[6]);
    set32(c.r[7], c.r[29].w[0] + 128u);
    set32(c.r[20], c.r[5].w[0] << 2);
    set32(c.r[16], c.r[5].w[0] << 3);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 28992u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    st32((c.r[4].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], c.r[29].w[0] + 156u);
    st32((c.r[4].w[0] + 24u), c.r[7].w[0]);
    st32((c.r[4].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 152u);
    st32((c.r[4].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 29672u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    set32(c.r[17], c.r[29].w[0] + 132u);
    mmi::paddub(c.r[21], c.r[4], c.r[0]);
    mmi::paddub(c.r[22], c.r[5], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26832u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 152u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26848u);
    st32((c.r[1].w[0] - 28988u), 0u);
    set32(c.r[18], c.r[2].w[0] + c.r[16].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26846u);
    st32((c.r[29].w[0] + 156u), c.r[3].w[0]);
    st32((c.r[1].w[0] - 28992u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[19], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    c.budget -= 51;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAEDCu); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001FAEDCu) [[unlikely]] return; }
L_001FAEDC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 26844u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF00u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001FAF00u) [[unlikely]] return; }
L_001FAF00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26828u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    st32((c.r[29].w[0] + 156u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    st32((c.r[29].w[0] + 128u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF30u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001FAF30u) [[unlikely]] return; }
L_001FAF30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[2].w[0] - 26842u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 128u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAF54u); st32((c.r[29].w[0] + 128u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001FAF54u) [[unlikely]] return; }
L_001FAF54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26944u);
    st32((c.r[21].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[2], 0u + 8u);
    st16((c.r[21].w[0] + 62u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26912u);
    set32(c.r[3], c.r[22].w[0] << 5);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 28992u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 12;
L_001FAF84:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[6].w[0]), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2u)));
    st32((c.r[6].w[0] + 4u), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FAF84u | kUnwind; return; } goto L_001FAF84; } }
    set32(c.r[2], c.r[28].w[0] - 29680u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    mmi::paddub(c.r[4], c.r[21], c.r[0]);
    set32(c.r[2], c.r[28].w[0] - 29678u);
    set32(c.r[2], c.r[2].w[0] + c.r[20].w[0]);
    st32((c.r[29].w[0] + 128u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FAFD0u); st32((c.r[17].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FAFD0u) [[unlikely]] return; }
L_001FAFD0:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_001FB000:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 5;
L_001FB014:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB020u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001FB020u) [[unlikely]] return; }
L_001FB020:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001FB05C; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] - 20224u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[16].w[0]));
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 13;
L_001FB05C:
    c.r[3].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FB014u | kUnwind; return; } goto L_001FB014; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FB080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st16((c.r[28].w[0] - 25288u), static_cast<std::uint16_t>(0u));
    st16((c.r[28].w[0] - 25292u), static_cast<std::uint16_t>(0u));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 4u);
    c.budget -= 7;
L_001FB09C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB0A8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 276u, depth + 1u); else { c.pc = 0x003037F0u; return; } if (c.pc != 0x001FB0A8u) [[unlikely]] return; }
L_001FB0A8:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001FB0E4; }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[5], 0u + 20u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[3], c.r[16].w[0] + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00200000u);
    set32(c.r[3], c.r[3].w[0] - 20224u);
    st32((c.r[2].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 13;
L_001FB0E4:
    c.r[3].d[0] = c.r[16].sd[0] < 3ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001FB09Cu | kUnwind; return; } goto L_001FB09C; } }
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001FB100:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 1;
L_001FB104:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    c.budget -= 1;
L_001FB108:
    set32(c.r[2], c.r[2].w[0] - 26784u);
    c.budget -= 1;
L_001FB10C:
    set32(c.r[3], c.r[3].w[0] << 2);
    c.budget -= 1;
L_001FB110:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 1;
L_001FB114:
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 1;
L_001FB118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FB120:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[3], c.r[3].w[0] - 26816u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 168u), c.r[3].w[0]);  c.pc = t; return; }
L_001FB150:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x001F8000u < 16384u) { entry = entries_003E[(t - 0x001F8000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001FB170:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FB180:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0080(c, 283u, depth); }
L_001FB190:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_001FB204; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FB1C8; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001FB1C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001FB208; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001FB1C0:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), 0u);
    c.budget -= 2;
L_001FB1C8:
    c.f[1] = ld32((c.r[6].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[6].w[0]), c.f[0]);  if (t) { goto L_001FB204; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[6].w[0]), c.r[5].w[0]);
    c.budget -= 4;
L_001FB204:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001FB208:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FB210:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 320u);  if (t) { goto L_001FB2EC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FB2AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FB264; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001FB24C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001FB2F0; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001FB24C:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u - 640u);
    st32((c.r[6].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], 0u + 10u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001FB2EC; } }
L_001FB264:
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001FB2A4; }
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 20u);
    st32((c.r[6].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_001FB2EC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 240u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001FB2EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001FB2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 52u), c.r[3].w[0]);  if (t) { goto L_001FB2EC; } }
L_001FB2AC:
    set32(c.r[3], ld32((c.r[6].w[0] + 52u)));
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] - 1u);  goto L_001FB2E8; }
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    set32(c.r[3], c.r[3].w[0] + 20u);
    st32((c.r[6].w[0] + 48u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[6].w[0] + 48u)));
    c.r[3].d[0] = c.r[3].sd[0] < 640ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FB2EC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FB2EC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 1;
L_001FB2E8:
    st32((c.r[6].w[0] + 52u), c.r[3].w[0]);
    c.budget -= 1;
L_001FB2EC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001FB2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FB300:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[7], c.r[4].w[0] + 320u);  if (t) { goto L_001FB3CC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FB388; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_001FB348; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 1u);  if (t) { goto L_001FB33C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_001FB3D0; } }
    set32(c.r[3], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001FB33C:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[7].w[0]), 0u);
    st32((c.r[7].w[0] + 4u), 0u);
    c.budget -= 3;
L_001FB348:
    c.f[1] = ld32((c.r[7].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CCC0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[5].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0]), c.f[0]);  if (t) { goto L_001FB3CC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[7].w[0]), c.r[5].w[0]);  if (t) { goto L_001FB3CC; } }
L_001FB388:
    c.f[1] = ld32((c.r[7].w[0] + 4u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 52429ull;
    c.f[0] = c.r[3].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[2] = c.r[6].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 11;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[7].w[0] + 4u), c.f[0]);  if (t) { goto L_001FB3CC; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st32((c.r[7].w[0] + 4u), c.r[6].w[0]);
    st16((c.r[28].w[0] - 25288u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001FB3CC:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001FB3D0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_001FB3E0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[16], c.r[3].w[0] + 25312u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25288u)));
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[17], c.r[18].w[0] + 320u);  if (t) { goto L_001FB7D0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[7], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[7].d[0]) { set32(c.r[3], 0u + 2u);  goto L_001FB7CC; }
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[6].d[0];  if (t) { goto L_001FB640; } }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[3].w[0] + 1u);  goto L_001FB43C; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB7C8; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_001FB43C:
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[18].w[0] + 112u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 28u), 0u);
    st32((c.r[17].w[0] + 32u), 0u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.r[2].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_001FB470; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FB49C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 1;
L_001FB470:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_001FB488; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FB49C; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_001FB488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FB498; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (t) { goto L_001FB49C; } }
L_001FB498:
    st16((c.r[17].w[0] + 44u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.budget -= 1;
L_001FB49C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    c.r[2].d[0] = c.r[3].sd[0] < 1000ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;  if (t) { goto L_001FB4BC; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FB4F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 100ll ? 1ull : 0ull;
    c.budget -= 1;
L_001FB4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;  if (t) { goto L_001FB4D4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FB4F0; } }
    c.r[2].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 1;
L_001FB4D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FB4EC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FB4F0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FB4EC:
    st16((c.r[17].w[0] + 46u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001FB4F0:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    set32(c.r[2], c.r[6].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FB514; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    st32((c.r[17].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_001FB558; } }
L_001FB514:
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 12u), c.f[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.f[0] = c.r[3].w[0];
    c.f[2] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 16u), c.f[0]);
    c.budget -= 17;
L_001FB558:
    c.f[0] = ld32((c.r[17].w[0] + 12u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[1] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[2] = c.r[2].w[0];
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB578u); c.f[12] = fp::add(c.f[2], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FB578u) [[unlikely]] return; }
L_001FB578:
    st16((c.r[28].w[0] - 25280u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C80000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB5A0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FB5A0u) [[unlikely]] return; }
L_001FB5A0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25280u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; st16((c.r[28].w[0] - 25284u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001FB5CC; } }
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 20u), c.f[0]);
    c.budget -= 8;
L_001FB5CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25284u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001FB5F8; } }
    c.f[0] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 24u), c.f[0]);
    c.budget -= 8;
L_001FB5F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FB61C; } }
    set32(c.r[3], 0u + 50u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_001FB634; } }
L_001FB61C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25280u)));
    set32(c.r[3], 0u + 100u);
    st16((c.r[17].w[0] + 36u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st16((c.r[17].w[0] + 38u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_001FB634:
    st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(0u));  if (t) { goto L_001FB7C8; } }
L_001FB640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB648u); c.f[12] = ld32((c.r[17].w[0] + 28u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FB648u) [[unlikely]] return; }
L_001FB648:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FB674; } }
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 28u), c.f[0]);  if (t) { goto L_001FB684; } }
L_001FB674:
    c.f[1] = ld32((c.r[17].w[0] + 20u));
    c.f[0] = ld32((c.r[17].w[0] + 28u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.budget -= 4;
L_001FB684:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB68Cu); c.f[12] = ld32((c.r[17].w[0] + 32u));  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x001FB68Cu) [[unlikely]] return; }
L_001FB68C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FB6B8; } }
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 32u), c.f[0]);  if (t) { goto L_001FB6C8; } }
L_001FB6B8:
    c.f[1] = ld32((c.r[17].w[0] + 24u));
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    c.budget -= 4;
L_001FB6C8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FB6EC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 40u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FB6EC; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 40u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FB6EC:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 38u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001FB710; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 42u)));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FB710; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 42u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_001FB710:
    c.f[0] = ld32((c.r[18].w[0] + 116u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[18].w[0] + 116u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 12u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_001FB748; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 116u), c.f[1]);
    c.budget -= 2;
L_001FB748:
    c.f[1] = ld32((c.r[18].w[0] + 120u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[0] = c.r[3].w[0];
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[18].w[0] + 120u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 16u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[3], 0u + 2u);  if (t) { goto L_001FB784; } }
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[18].w[0] + 120u), c.f[1]);
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
L_001FB784:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_001FB7C8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 5u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[18].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 336u)));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 28u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 338u)));
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    st32((c.r[17].w[0] + 32u), c.f[0]);
    st16((c.r[28].w[0] - 25292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 15;
L_001FB7C8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001FB7CC:
    st8((c.r[18].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001FB7D0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001FB7F0:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25292u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] + 320u);  if (t) { goto L_001FB95C; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    if (c.r[6].d[0] == c.r[5].d[0]) { set32(c.r[3], 0u + 2u);  goto L_001FB958; }
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001FB920; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001FB88C; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_001FB860; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 1u);  if (t) { goto L_001FB844; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001FB954; } }
    set32(c.r[5], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001FB844:
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st16((c.r[3].w[0] + 56u), static_cast<std::uint16_t>(0u));
    st32((c.r[3].w[0]), 0u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[3].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[3].w[0] + 8u), 0u);
    c.budget -= 7;
L_001FB860:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[3].d[0] = c.r[3].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001FB954; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001FB954; } }
L_001FB88C:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[1].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001FB8A4; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 2;
L_001FB8A4:
    c.f[1] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0]), c.f[0]);  if (t) { goto L_001FB8D8; } }
    st32((c.r[3].w[0]), c.r[5].w[0]);
    c.budget -= 1;
L_001FB8D8:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.r[5].d[0] = c.r[5].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_001FB954; } }
    c.f[0] = ld32((c.r[3].w[0]));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[1]) == fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_001FB954; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 56u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_001FB954; } }
L_001FB920:
    c.f[1] = ld32((c.r[3].w[0] + 8u));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3D4C0000u);
    c.r[5].d[0] = c.r[5].d[0] | 52429ull;
    c.f[0] = c.r[5].w[0];
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.f[2] = c.r[5].w[0];
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_001FB954; } }
    st32((c.r[3].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 1;
L_001FB954:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_001FB958:
    st8((c.r[4].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_001FB95C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001FB970:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26272u)));
    set32(c.r[16], c.r[4].w[0] + 320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], 0u + 3u);
    st32((c.r[1].w[0] - 20364u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[4].w[0]);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26736u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26672u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 32;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FB9F0u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FB9F0u) [[unlikely]] return; }
L_001FB9F0:
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26656u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 26592u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBA34u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x001FBA34u) [[unlikely]] return; }
L_001FBA34:
    set32(c.r[3], ld32((c.r[28].w[0] - 26272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], 0u + 6u);
    set32(c.r[8], c.r[29].w[0] + 70u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st16((c.r[29].w[0] + 68u), static_cast<std::uint16_t>(0u));
    st16((c.r[8].w[0]), static_cast<std::uint16_t>(0u));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 68u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[6], 0u + 192u);
    set32(c.r[3], 0u + 16u);
    set32(c.r[2], c.r[7].w[0] + 256u);
    st16((c.r[29].w[0] + 72u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[8].w[0])));
    set32(c.r[9], c.r[29].w[0] + 36u);
    set32(c.r[2], c.r[2].w[0] + 32u);
    st32((c.r[29].w[0] + 32u), c.r[6].w[0]);
    st16((c.r[29].w[0] + 74u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[9].w[0]), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[2], c.r[2].w[0] + 256u);
    st32((c.r[29].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[9].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0]));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAB0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FBAB0u) [[unlikely]] return; }
L_001FBAB0:
    st8((c.r[29].w[0] + 76u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAC8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FBAC8u) [[unlikely]] return; }
L_001FBAC8:
    st8((c.r[29].w[0] + 77u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAE0u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FBAE0u) [[unlikely]] return; }
L_001FBAE0:
    st8((c.r[29].w[0] + 78u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBAF8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 107u, depth + 1u); else { c.pc = 0x0011DE88u; return; } if (c.pc != 0x001FBAF8u) [[unlikely]] return; }
L_001FBAF8:
    st8((c.r[29].w[0] + 79u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 76u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 68u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB2Cu); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FBB2Cu) [[unlikely]] return; }
L_001FBB2C:
    c.f[12] = ld32((c.r[16].w[0]));
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBB40u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0037(c, 147u, depth + 1u); else { c.pc = 0x001DE890u; return; } if (c.pc != 0x001FBB40u) [[unlikely]] return; }
L_001FBB40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_001FBB50:
    set32(c.r[29], c.r[29].w[0] - 368u);
    st128((c.r[29].w[0] + 144u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 128u) & ~15u, c.r[30]);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[23]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[22]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    set32(c.r[2], c.r[4].w[0] + 320u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st32((c.r[29].w[0] + 160u), c.r[2].w[0]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 224u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 224u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 176u), 0u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[29].w[0] + 304u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65300ull;
    st32((c.r[29].w[0] + 328u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 344u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[2], c.r[2].w[0] - 25488u);
    st32((c.r[29].w[0] + 208u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[2].w[0] + 25312u);
    c.budget -= 34;
L_001FBBD8:
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.r[2].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001FBBF4; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[2].w[0] + 48u)));  if (t) { goto L_001FBC00; } }
L_001FBBF4:
    set32(c.r[2], ld32((c.r[29].w[0] + 160u)));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    set32(c.r[2], c.r[2].w[0] - 640u);
    c.budget -= 3;
L_001FBC00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26272u)));
    st32((c.r[29].w[0] + 304u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 308u), 0u);
    set32(c.r[2], 0u + 5u);
    st32((c.r[1].w[0] - 20364u), c.r[3].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    st32((c.r[29].w[0] + 312u), 0u);
    set32(c.r[18], c.r[29].w[0] + 362u);
    set32(c.r[30], c.r[29].w[0] + 366u);
    c.r[4].d[0] = ld16((c.r[2].w[0]));
    set32(c.r[3], 0u + 28u);
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 208u)));
    c.r[2].d[0] = ld16((c.r[2].w[0] + 2u));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[4], c.r[2].w[0] + 48u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[2], c.r[2].w[0] + 48u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 176u)));
    c.budget -= 31;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[29].w[0] + 320u), c.r[3].w[0]);  if (t) { goto L_001FBC90; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001FBC90; } }
    set32(c.r[2], c.r[2].w[0] - 4u);
    st32((c.r[29].w[0] + 272u), c.r[2].w[0]);
    c.budget -= 2;
L_001FBC90:
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    set32(c.r[19], c.r[29].w[0] + 324u);
    set32(c.r[23], c.r[29].w[0] + 336u);
    set32(c.r[22], c.r[29].w[0] + 340u);
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    set32(c.r[2], ld32((c.r[29].w[0] + 272u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[29].w[0] + 240u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    set32(c.r[2], c.r[2].w[0] + 49u);
    st32((c.r[29].w[0] + 256u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[29].w[0] + 320u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 25504u);
    set32(c.r[2], c.r[3].w[0] + 48u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[19].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[7].w[0] + 24u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 34;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD18u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FBD18u) [[unlikely]] return; }
L_001FBD18:
    set32(c.r[2], 0u + 352u);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 128u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    set32(c.r[7], 0u + 72u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[6], c.r[2].w[0] + 57u);
    set32(c.r[3], c.r[3].w[0] + 40u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[8].w[0] + 32u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[7].w[0]);
    st32((c.r[19].w[0]), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 40u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 16u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBD94u); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FBD94u) [[unlikely]] return; }
L_001FBD94:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    set32(c.r[3], 0u + 44u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], 0u + 80u);
    if (c.r[5].d[0] != 0) c.r[4].d[0] = c.r[3].d[0];
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 240u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[3].w[0] - 25500u);
    set32(c.r[8], 0u + 99u);
    set32(c.r[7], c.r[2].w[0] + 51u);
    set32(c.r[4], c.r[4].w[0] + 44u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[9].w[0] + 48u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[29].w[0] + 320u), c.r[8].w[0]);
    st32((c.r[19].w[0]), c.r[7].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[2], c.r[2].w[0] + 44u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    st32((c.r[1].w[0] - 20380u), c.r[6].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 38;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001FBE2Cu); st32((c.r[1].w[0] - 20368u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x001FBE2Cu) [[unlikely]] return; }
L_001FBE2C:
    set32(c.r[20], 0u + 138u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[21], c.r[0], c.r[0]);
    c.budget -= 3;
L_001FBE38:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001FBE70; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x68DB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 35757ull;
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 12));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FBF68; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_001FBE70:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001FBEBC; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 10000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10620000u);
    c.r[2].d[0] = c.r[2].d[0] | 19923ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FBF68; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_001FBEBC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_001FBF08; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 1000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x51EB0000u);
    c.r[2].d[0] = c.r[2].d[0] | 34079ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 5));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FBF68; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_001FBF08:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_001FBF50; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[3], 0u + 100u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x66660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26215ull;
    mmi::div(c, 0, c.r[4].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] >> 31);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 2));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);  if (t) { goto L_001FBF68; } }
L_001FBF50:
    set32(c.r[3], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[2], 0u + 10u);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 6;
L_001FBF68:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] << 1);  if (t) { goto L_001FBF8C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != 0ull;  if (t) { goto L_001FBF88; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[2].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  [[clang::musttail]] return unit_003F(c, 3u, depth); }
    c.budget -= 1;
L_001FBF88:
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 1;
L_001FBF8C:
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    st16((c.r[29].w[0] + 360u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 32u);
    st16((c.r[18].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 360u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00490000u);
    set32(c.r[6], c.r[2].w[0] - 25504u);
    set32(c.r[2], c.r[29].w[0] + 364u);
    set32(c.r[4], c.r[4].w[0] + 24u);
    st16((c.r[2].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[29].w[0] + 320u);
    set32(c.r[2], c.r[7].w[0] + 24u);
    st16((c.r[30].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[29].w[0] + 256u)));
    st32((c.r[29].w[0] + 320u), c.r[20].w[0]);
    set32(c.r[3], c.r[29].w[0] + 360u);
    set32(c.r[21], 0u + 1u);
    st32((c.r[19].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0] + 320u)));
    set32(c.r[2], c.r[2].w[0] + 24u);
    st32((c.r[23].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[19].w[0])));
    set32(c.r[2], c.r[2].w[0] + 12u);
    st32((c.r[22].w[0]), c.r[2].w[0]);
    c.budget -= 29;
    [[clang::musttail]] return unit_003F(c, 1u, depth);
}

}
