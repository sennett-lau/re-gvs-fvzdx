#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_000A[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0,
    8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0,
    0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0,
    60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71,
    0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87,
    0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0,
    104, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 0, 130, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0,
    142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0,
    180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0,
    230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 0,
    0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0,
    0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277, 0, 0,
    0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0,
    297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0,
    0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 388,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0,
    423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0,
    0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0,
    0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478,
    0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0,
    0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 503, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0,
    0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0,
    0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 517, 0, 0, 0, 0, 0, 0, 0,
    0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0,
    530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_000A(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00128000;
    case 2u: goto L_00128040;
    case 3u: goto L_00128058;
    case 4u: goto L_00128060;
    case 5u: goto L_00128068;
    case 6u: goto L_00128070;
    case 7u: goto L_00128078;
    case 8u: goto L_00128080;
    case 9u: goto L_00128088;
    case 10u: goto L_00128098;
    case 11u: goto L_001280D4;
    case 12u: goto L_00128108;
    case 13u: goto L_00128128;
    case 14u: goto L_00128134;
    case 15u: goto L_00128160;
    case 16u: goto L_001281CC;
    case 17u: goto L_001281F8;
    case 18u: goto L_00128210;
    case 19u: goto L_00128228;
    case 20u: goto L_00128240;
    case 21u: goto L_0012825C;
    case 22u: goto L_00128288;
    case 23u: goto L_0012829C;
    case 24u: goto L_001282B4;
    case 25u: goto L_001282CC;
    case 26u: goto L_00128308;
    case 27u: goto L_00128310;
    case 28u: goto L_0012833C;
    case 29u: goto L_00128344;
    case 30u: goto L_00128368;
    case 31u: goto L_00128384;
    case 32u: goto L_00128394;
    case 33u: goto L_001283A8;
    case 34u: goto L_001283B8;
    case 35u: goto L_001283C8;
    case 36u: goto L_001283D4;
    case 37u: goto L_001283F0;
    case 38u: goto L_00128410;
    case 39u: goto L_00128418;
    case 40u: goto L_00128424;
    case 41u: goto L_00128434;
    case 42u: goto L_0012843C;
    case 43u: goto L_00128444;
    case 44u: goto L_00128454;
    case 45u: goto L_00128470;
    case 46u: goto L_00128478;
    case 47u: goto L_001284A0;
    case 48u: goto L_001284A8;
    case 49u: goto L_001284B4;
    case 50u: goto L_001284C4;
    case 51u: goto L_001284EC;
    case 52u: goto L_00128510;
    case 53u: goto L_0012853C;
    case 54u: goto L_00128584;
    case 55u: goto L_001285C0;
    case 56u: goto L_001285D0;
    case 57u: goto L_001285FC;
    case 58u: goto L_00128640;
    case 59u: goto L_00128674;
    case 60u: goto L_00128680;
    case 61u: goto L_0012868C;
    case 62u: goto L_001286B4;
    case 63u: goto L_001286D4;
    case 64u: goto L_001286F0;
    case 65u: goto L_00128708;
    case 66u: goto L_00128714;
    case 67u: goto L_00128728;
    case 68u: goto L_00128734;
    case 69u: goto L_00128740;
    case 70u: goto L_00128760;
    case 71u: goto L_0012877C;
    case 72u: goto L_00128794;
    case 73u: goto L_001287C8;
    case 74u: goto L_001287E8;
    case 75u: goto L_00128804;
    case 76u: goto L_00128840;
    case 77u: goto L_00128850;
    case 78u: goto L_00128868;
    case 79u: goto L_001288C4;
    case 80u: goto L_001288D4;
    case 81u: goto L_00128910;
    case 82u: goto L_00128968;
    case 83u: goto L_0012898C;
    case 84u: goto L_001289A0;
    case 85u: goto L_001289C0;
    case 86u: goto L_001289D8;
    case 87u: goto L_001289FC;
    case 88u: goto L_00128A1C;
    case 89u: goto L_00128A54;
    case 90u: goto L_00128A6C;
    case 91u: goto L_00128A8C;
    case 92u: goto L_00128AA4;
    case 93u: goto L_00128ABC;
    case 94u: goto L_00128AD4;
    case 95u: goto L_00128AF4;
    case 96u: goto L_00128B0C;
    case 97u: goto L_00128B24;
    case 98u: goto L_00128B3C;
    case 99u: goto L_00128B44;
    case 100u: goto L_00128B4C;
    case 101u: goto L_00128B54;
    case 102u: goto L_00128B5C;
    case 103u: goto L_00128B78;
    case 104u: goto L_00128B80;
    case 105u: goto L_00128B8C;
    case 106u: goto L_00128B98;
    case 107u: goto L_00128BA4;
    case 108u: goto L_00128BD0;
    case 109u: goto L_00128C00;
    case 110u: goto L_00128C14;
    case 111u: goto L_00128C34;
    case 112u: goto L_00128C3C;
    case 113u: goto L_00128C44;
    case 114u: goto L_00128C4C;
    case 115u: goto L_00128C5C;
    case 116u: goto L_00128C68;
    case 117u: goto L_00128CC8;
    case 118u: goto L_00128CF8;
    case 119u: goto L_00128D1C;
    case 120u: goto L_00128D58;
    case 121u: goto L_00128D6C;
    case 122u: goto L_00128D74;
    case 123u: goto L_00128D84;
    case 124u: goto L_00128D90;
    case 125u: goto L_00128D9C;
    case 126u: goto L_00128DB0;
    case 127u: goto L_00128DD0;
    case 128u: goto L_00128DD8;
    case 129u: goto L_00128DE4;
    case 130u: goto L_00128DF0;
    case 131u: goto L_00128DFC;
    case 132u: goto L_00128E10;
    case 133u: goto L_00128E18;
    case 134u: goto L_00128E24;
    case 135u: goto L_00128E30;
    case 136u: goto L_00128E3C;
    case 137u: goto L_00128E48;
    case 138u: goto L_00128E54;
    case 139u: goto L_00128E60;
    case 140u: goto L_00128E6C;
    case 141u: goto L_00128E78;
    case 142u: goto L_00128E80;
    case 143u: goto L_00128E94;
    case 144u: goto L_00128EA0;
    case 145u: goto L_00128EB0;
    case 146u: goto L_00128EBC;
    case 147u: goto L_00128EC8;
    case 148u: goto L_00128EF0;
    case 149u: goto L_00128F20;
    case 150u: goto L_00128F2C;
    case 151u: goto L_00128F4C;
    case 152u: goto L_00128F60;
    case 153u: goto L_00128F90;
    case 154u: goto L_00128FB4;
    case 155u: goto L_00128FCC;
    case 156u: goto L_00128FE8;
    case 157u: goto L_00129010;
    case 158u: goto L_00129020;
    case 159u: goto L_00129038;
    case 160u: goto L_00129068;
    case 161u: goto L_00129080;
    case 162u: goto L_0012908C;
    case 163u: goto L_001290A8;
    case 164u: goto L_001290B8;
    case 165u: goto L_001290E0;
    case 166u: goto L_001290FC;
    case 167u: goto L_00129120;
    case 168u: goto L_00129138;
    case 169u: goto L_00129144;
    case 170u: goto L_0012915C;
    case 171u: goto L_00129178;
    case 172u: goto L_00129180;
    case 173u: goto L_0012919C;
    case 174u: goto L_001291A8;
    case 175u: goto L_001291B4;
    case 176u: goto L_001291BC;
    case 177u: goto L_001291D0;
    case 178u: goto L_001291E4;
    case 179u: goto L_001291F8;
    case 180u: goto L_00129200;
    case 181u: goto L_00129210;
    case 182u: goto L_00129234;
    case 183u: goto L_0012923C;
    case 184u: goto L_00129248;
    case 185u: goto L_00129260;
    case 186u: goto L_00129298;
    case 187u: goto L_001292A8;
    case 188u: goto L_00129310;
    case 189u: goto L_00129348;
    case 190u: goto L_00129370;
    case 191u: goto L_00129400;
    case 192u: goto L_0012941C;
    case 193u: goto L_0012943C;
    case 194u: goto L_00129444;
    case 195u: goto L_00129468;
    case 196u: goto L_00129484;
    case 197u: goto L_001294A8;
    case 198u: goto L_001294CC;
    case 199u: goto L_001294F0;
    case 200u: goto L_001294F8;
    case 201u: goto L_00129520;
    case 202u: goto L_00129538;
    case 203u: goto L_00129550;
    case 204u: goto L_00129568;
    case 205u: goto L_00129580;
    case 206u: goto L_00129598;
    case 207u: goto L_001295B0;
    case 208u: goto L_001295D8;
    case 209u: goto L_00129620;
    case 210u: goto L_0012963C;
    case 211u: goto L_00129648;
    case 212u: goto L_00129658;
    case 213u: goto L_00129670;
    case 214u: goto L_00129688;
    case 215u: goto L_001296A8;
    case 216u: goto L_001296B0;
    case 217u: goto L_001296B8;
    case 218u: goto L_001296E8;
    case 219u: goto L_00129718;
    case 220u: goto L_00129738;
    case 221u: goto L_00129750;
    case 222u: goto L_00129768;
    case 223u: goto L_00129770;
    case 224u: goto L_00129780;
    case 225u: goto L_001297DC;
    case 226u: goto L_00129804;
    case 227u: goto L_0012982C;
    case 228u: goto L_00129848;
    case 229u: goto L_00129870;
    case 230u: goto L_00129880;
    case 231u: goto L_001298A8;
    case 232u: goto L_001298C8;
    case 233u: goto L_001298D8;
    case 234u: goto L_001298F0;
    case 235u: goto L_00129928;
    case 236u: goto L_00129958;
    case 237u: goto L_00129984;
    case 238u: goto L_001299A8;
    case 239u: goto L_001299F8;
    case 240u: goto L_00129A14;
    case 241u: goto L_00129A50;
    case 242u: goto L_00129A7C;
    case 243u: goto L_00129AA8;
    case 244u: goto L_00129AF0;
    case 245u: goto L_00129B20;
    case 246u: goto L_00129B30;
    case 247u: goto L_00129B58;
    case 248u: goto L_00129B60;
    case 249u: goto L_00129B6C;
    case 250u: goto L_00129B90;
    case 251u: goto L_00129BD8;
    case 252u: goto L_00129BE8;
    case 253u: goto L_00129C08;
    case 254u: goto L_00129C30;
    case 255u: goto L_00129C48;
    case 256u: goto L_00129C58;
    case 257u: goto L_00129CA0;
    case 258u: goto L_00129CB4;
    case 259u: goto L_00129CC8;
    case 260u: goto L_00129D00;
    case 261u: goto L_00129D54;
    case 262u: goto L_00129D70;
    case 263u: goto L_00129D80;
    case 264u: goto L_00129D94;
    case 265u: goto L_00129DD0;
    case 266u: goto L_00129E0C;
    case 267u: goto L_00129E20;
    case 268u: goto L_00129E2C;
    case 269u: goto L_00129E3C;
    case 270u: goto L_00129E90;
    case 271u: goto L_00129EC0;
    case 272u: goto L_00129ED0;
    case 273u: goto L_00129F10;
    case 274u: goto L_00129F20;
    case 275u: goto L_00129F54;
    case 276u: goto L_00129F6C;
    case 277u: goto L_00129F74;
    case 278u: goto L_00129F88;
    case 279u: goto L_00129F90;
    case 280u: goto L_00129FAC;
    case 281u: goto L_00129FD0;
    case 282u: goto L_0012A01C;
    case 283u: goto L_0012A038;
    case 284u: goto L_0012A040;
    case 285u: goto L_0012A05C;
    case 286u: goto L_0012A06C;
    case 287u: goto L_0012A08C;
    case 288u: goto L_0012A0A4;
    case 289u: goto L_0012A0B4;
    case 290u: goto L_0012A0C4;
    case 291u: goto L_0012A0F0;
    case 292u: goto L_0012A110;
    case 293u: goto L_0012A148;
    case 294u: goto L_0012A158;
    case 295u: goto L_0012A190;
    case 296u: goto L_0012A1F0;
    case 297u: goto L_0012A200;
    case 298u: goto L_0012A240;
    case 299u: goto L_0012A2A0;
    case 300u: goto L_0012A2C8;
    case 301u: goto L_0012A318;
    case 302u: goto L_0012A35C;
    case 303u: goto L_0012A388;
    case 304u: goto L_0012A3A4;
    case 305u: goto L_0012A3C4;
    case 306u: goto L_0012A3D8;
    case 307u: goto L_0012A3F0;
    case 308u: goto L_0012A40C;
    case 309u: goto L_0012A42C;
    case 310u: goto L_0012A440;
    case 311u: goto L_0012A458;
    case 312u: goto L_0012A474;
    case 313u: goto L_0012A494;
    case 314u: goto L_0012A4A8;
    case 315u: goto L_0012A4C0;
    case 316u: goto L_0012A4E0;
    case 317u: goto L_0012A500;
    case 318u: goto L_0012A510;
    case 319u: goto L_0012A528;
    case 320u: goto L_0012A570;
    case 321u: goto L_0012A580;
    case 322u: goto L_0012A5A0;
    case 323u: goto L_0012A5C0;
    case 324u: goto L_0012A5E0;
    case 325u: goto L_0012A600;
    case 326u: goto L_0012A620;
    case 327u: goto L_0012A630;
    case 328u: goto L_0012A63C;
    case 329u: goto L_0012A648;
    case 330u: goto L_0012A680;
    case 331u: goto L_0012A6A4;
    case 332u: goto L_0012A6BC;
    case 333u: goto L_0012A6D4;
    case 334u: goto L_0012A6E4;
    case 335u: goto L_0012A6F8;
    case 336u: goto L_0012A738;
    case 337u: goto L_0012A75C;
    case 338u: goto L_0012A774;
    case 339u: goto L_0012A790;
    case 340u: goto L_0012A7A0;
    case 341u: goto L_0012A7B8;
    case 342u: goto L_0012A7F4;
    case 343u: goto L_0012A810;
    case 344u: goto L_0012A820;
    case 345u: goto L_0012A828;
    case 346u: goto L_0012A840;
    case 347u: goto L_0012A848;
    case 348u: goto L_0012A850;
    case 349u: goto L_0012A868;
    case 350u: goto L_0012A878;
    case 351u: goto L_0012A880;
    case 352u: goto L_0012A8A0;
    case 353u: goto L_0012A8D8;
    case 354u: goto L_0012A8F8;
    case 355u: goto L_0012A918;
    case 356u: goto L_0012A928;
    case 357u: goto L_0012A940;
    case 358u: goto L_0012A988;
    case 359u: goto L_0012A998;
    case 360u: goto L_0012A9B8;
    case 361u: goto L_0012A9D8;
    case 362u: goto L_0012A9E8;
    case 363u: goto L_0012AA00;
    case 364u: goto L_0012AA38;
    case 365u: goto L_0012AA5C;
    case 366u: goto L_0012AA74;
    case 367u: goto L_0012AA8C;
    case 368u: goto L_0012AA9C;
    case 369u: goto L_0012AAB0;
    case 370u: goto L_0012AAD8;
    case 371u: goto L_0012AAFC;
    case 372u: goto L_0012AB14;
    case 373u: goto L_0012AB2C;
    case 374u: goto L_0012AB3C;
    case 375u: goto L_0012AB50;
    case 376u: goto L_0012AB84;
    case 377u: goto L_0012AB98;
    case 378u: goto L_0012ABA8;
    case 379u: goto L_0012ABBC;
    case 380u: goto L_0012ABEC;
    case 381u: goto L_0012AC10;
    case 382u: goto L_0012AC58;
    case 383u: goto L_0012AC94;
    case 384u: goto L_0012ACA8;
    case 385u: goto L_0012ACC0;
    case 386u: goto L_0012ACD4;
    case 387u: goto L_0012ACDC;
    case 388u: goto L_0012ACFC;
    case 389u: goto L_0012AD28;
    case 390u: goto L_0012AD40;
    case 391u: goto L_0012AD60;
    case 392u: goto L_0012AD70;
    case 393u: goto L_0012AD80;
    case 394u: goto L_0012ADB8;
    case 395u: goto L_0012ADDC;
    case 396u: goto L_0012ADF4;
    case 397u: goto L_0012AE0C;
    case 398u: goto L_0012AE1C;
    case 399u: goto L_0012AE30;
    case 400u: goto L_0012AE3C;
    case 401u: goto L_0012AE68;
    case 402u: goto L_0012AE8C;
    case 403u: goto L_0012AEA4;
    case 404u: goto L_0012AEBC;
    case 405u: goto L_0012AECC;
    case 406u: goto L_0012AEE0;
    case 407u: goto L_0012AF18;
    case 408u: goto L_0012AF3C;
    case 409u: goto L_0012AF54;
    case 410u: goto L_0012AF6C;
    case 411u: goto L_0012AF7C;
    case 412u: goto L_0012AF90;
    case 413u: goto L_0012AFA8;
    case 414u: goto L_0012AFD0;
    case 415u: goto L_0012B020;
    case 416u: goto L_0012B048;
    case 417u: goto L_0012B068;
    case 418u: goto L_0012B088;
    case 419u: goto L_0012B098;
    case 420u: goto L_0012B0B0;
    case 421u: goto L_0012B0D0;
    case 422u: goto L_0012B0F0;
    case 423u: goto L_0012B100;
    case 424u: goto L_0012B118;
    case 425u: goto L_0012B13C;
    case 426u: goto L_0012B158;
    case 427u: goto L_0012B168;
    case 428u: goto L_0012B180;
    case 429u: goto L_0012B194;
    case 430u: goto L_0012B1B4;
    case 431u: goto L_0012B1D8;
    case 432u: goto L_0012B204;
    case 433u: goto L_0012B220;
    case 434u: goto L_0012B23C;
    case 435u: goto L_0012B24C;
    case 436u: goto L_0012B264;
    case 437u: goto L_0012B278;
    case 438u: goto L_0012B29C;
    case 439u: goto L_0012B2C0;
    case 440u: goto L_0012B2E4;
    case 441u: goto L_0012B300;
    case 442u: goto L_0012B310;
    case 443u: goto L_0012B328;
    case 444u: goto L_0012B33C;
    case 445u: goto L_0012B35C;
    case 446u: goto L_0012B380;
    case 447u: goto L_0012B3AC;
    case 448u: goto L_0012B3C8;
    case 449u: goto L_0012B3D8;
    case 450u: goto L_0012B3F0;
    case 451u: goto L_0012B404;
    case 452u: goto L_0012B428;
    case 453u: goto L_0012B450;
    case 454u: goto L_0012B460;
    case 455u: goto L_0012B484;
    case 456u: goto L_0012B4A0;
    case 457u: goto L_0012B4C8;
    case 458u: goto L_0012B4D4;
    case 459u: goto L_0012B4F4;
    case 460u: goto L_0012B538;
    case 461u: goto L_0012B548;
    case 462u: goto L_0012B558;
    case 463u: goto L_0012B578;
    case 464u: goto L_0012B5D0;
    case 465u: goto L_0012B628;
    case 466u: goto L_0012B63C;
    case 467u: goto L_0012B678;
    case 468u: goto L_0012B6C0;
    case 469u: goto L_0012B6D0;
    case 470u: goto L_0012B6D8;
    case 471u: goto L_0012B700;
    case 472u: goto L_0012B708;
    case 473u: goto L_0012B750;
    case 474u: goto L_0012B768;
    case 475u: goto L_0012B784;
    case 476u: goto L_0012B7B8;
    case 477u: goto L_0012B7E4;
    case 478u: goto L_0012B7FC;
    case 479u: goto L_0012B818;
    case 480u: goto L_0012B84C;
    case 481u: goto L_0012B870;
    case 482u: goto L_0012B880;
    case 483u: goto L_0012B898;
    case 484u: goto L_0012B8B8;
    case 485u: goto L_0012B8E4;
    case 486u: goto L_0012B950;
    case 487u: goto L_0012B990;
    case 488u: goto L_0012B9CC;
    case 489u: goto L_0012B9F0;
    case 490u: goto L_0012BA28;
    case 491u: goto L_0012BA64;
    case 492u: goto L_0012BAA8;
    case 493u: goto L_0012BAB8;
    case 494u: goto L_0012BAF8;
    case 495u: goto L_0012BB10;
    case 496u: goto L_0012BB28;
    case 497u: goto L_0012BB48;
    case 498u: goto L_0012BB58;
    case 499u: goto L_0012BB68;
    case 500u: goto L_0012BBA8;
    case 501u: goto L_0012BBC8;
    case 502u: goto L_0012BBE8;
    case 503u: goto L_0012BC14;
    case 504u: goto L_0012BC18;
    case 505u: goto L_0012BC60;
    case 506u: goto L_0012BC84;
    case 507u: goto L_0012BCC4;
    case 508u: goto L_0012BCDC;
    case 509u: goto L_0012BCF4;
    case 510u: goto L_0012BD0C;
    case 511u: goto L_0012BD28;
    case 512u: goto L_0012BD40;
    case 513u: goto L_0012BD78;
    case 514u: goto L_0012BD90;
    case 515u: goto L_0012BDC4;
    case 516u: goto L_0012BDDC;
    case 517u: goto L_0012BDE0;
    case 518u: goto L_0012BE04;
    case 519u: goto L_0012BE38;
    case 520u: goto L_0012BE3C;
    case 521u: goto L_0012BE4C;
    case 522u: goto L_0012BE64;
    case 523u: goto L_0012BE7C;
    case 524u: goto L_0012BEC8;
    case 525u: goto L_0012BEF0;
    case 526u: goto L_0012BF04;
    case 527u: goto L_0012BF28;
    case 528u: goto L_0012BF40;
    case 529u: goto L_0012BF60;
    case 530u: goto L_0012BF80;
    case 531u: goto L_0012BF90;
    case 532u: goto L_0012BFB0;
    case 533u: goto L_0012BFD0;
    default: bad_entry(c, 0x00128000u); return;
    }
L_00128000:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.f[0] = ld32((c.r[29].w[0]));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[2] = ld32((c.r[28].w[0] - 32252u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    set32(c.r[3], ld32((c.r[28].w[0] - 32488u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    st32((c.r[17].w[0] + 160u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    c.f[1] = fp::cvt_w_s(c.f[0]);
    st32((c.r[17].w[0] + 156u), c.f[1]);
    c.budget -= 16;
L_00128040:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00128058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 136u), c.r[5].w[0]);  c.pc = t; return; }
L_00128060:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 152u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00128068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 152u)));  c.pc = t; return; }
L_00128070:
    c.budget -= 2;
    { set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00125868u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 262u, depth); }
L_00128078:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 2;
L_00128080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128088u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 259u, depth + 1u); else { c.pc = 0x00125850u; return; } if (c.pc != 0x00128088u) [[unlikely]] return; }
L_00128088:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00128098:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[7].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[16].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001280D4; } }
    c.r[2].d[0] = ld16((c.r[7].w[0]));
    c.r[4].d[0] = 0ull | 32768ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; set32(c.r[2], c.r[29].w[0] + 28u);  if (t) { goto L_001280DC; } }
L_001280D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00128118; } }
L_001280DC:
    set32(c.r[3], c.r[29].w[0] + 32u);
    c.r[4].d[0] = c.r[7].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    set32(c.r[6], c.r[29].w[0] + 16u);
    set32(c.r[7], c.r[29].w[0] + 18u);
    set32(c.r[8], c.r[29].w[0] + 19u);
    set32(c.r[9], c.r[29].w[0] + 20u);
    set32(c.r[10], c.r[29].w[0] + 21u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128108u); set32(c.r[11], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0008(c, 118u, depth + 1u); else { c.pc = 0x00121350u; return; } if (c.pc != 0x00128108u) [[unlikely]] return; }
L_00128108:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 16u)));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001280D4u | kUnwind; return; } goto L_001280D4; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0]), c.r[3].w[0]);
    c.budget -= 2;
L_00128118:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00128128:
    c.r[2].d[0] = c.r[5].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = ld16((c.r[4].w[0]));  goto L_0012813C; }
L_00128134:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012813C:
    c.r[4].d[0] = 0ull | 32769ull;
    set32(c.r[3], c.r[2].w[0] << 8);
    set32(c.r[2], c.r[2].w[0] >> 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; set32(c.r[2], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128134u | kUnwind; return; } goto L_00128134; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[6].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00128160:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    set32(c.r[21], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 11;
    { const bool t = c.r[21].d[0] != 0ull; set32(c.r[17], 0u + 18u);  if (t) { goto L_00128194; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001282E0; } }
L_00128194:
    set32(c.r[2], 0u - 1u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[17].w[0]);
    c.r[17].d[0] = c.lo.d[0];
    c.r[2].d[0] = c.r[2].sd[0] < c.r[6].sd[0] ? 1ull : 0ull;
    set32(c.r[16], c.r[6].w[0] + 31u);
    set32(c.r[3], ld32((c.r[21].w[0])));
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[6].d[0];
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[16], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 5));
    set32(c.r[8], ld32((c.r[3].w[0] + 24u)));
    mmi::mult(c, 0, c.r[16].w[0], c.r[17].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 14;
    { const std::uint32_t t = c.r[8].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001281CCu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001281CCu) [[unlikely]] return; }
L_001281CC:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001281D4u);  goto L_001281D8; }
L_001281D8:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001281F8u); c.r[18].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001281F8u) [[unlikely]] return; }
L_001281F8:
    set32(c.r[19], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128210u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x00128210u) [[unlikely]] return; }
L_00128210:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128228u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128228u) [[unlikely]] return; }
L_00128228:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128240u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128240u) [[unlikely]] return; }
L_00128240:
    set32(c.r[7], ld32((c.r[21].w[0])));
    set32(c.r[6], c.r[16].w[0] - c.r[18].w[0]);
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[7].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012825Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012825Cu) [[unlikely]] return; }
L_0012825C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x00128264u);  goto L_00128268; }
L_00128268:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    mmi::div(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[17].w[0]);
    c.r[20].d[0] = c.lo.d[0];
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128288u); set32(c.r[18], c.r[18].w[0] + c.r[20].w[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00128288u) [[unlikely]] return; }
L_00128288:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[20].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012829Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x0012829Cu) [[unlikely]] return; }
L_0012829C:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001282B4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001282B4u) [[unlikely]] return; }
L_001282B4:
    set32(c.r[3], ld32((c.r[21].w[0])));
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001282CCu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001282CCu) [[unlikely]] return; }
L_001282CC:
    mmi::div(c, 0, c.r[18].w[0], c.r[17].w[0]);
    c.budget -= 3;
    if (c.r[17].d[0] == 0ull) { breakpoint(c, 0x001282D4u);  goto L_001282D8; }
L_001282D8:
    c.r[18].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[18].w[0] << 5);
    c.budget -= 2;
L_001282E0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00128308:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001216B8u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 127u, depth); }
L_00128310:
    set32(c.r[29], c.r[29].w[0] - 112u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32244u)));
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012833Cu); c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x0012833Cu) [[unlikely]] return; }
L_0012833C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128344u);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00121090u; return; } if (c.pc != 0x00128344u) [[unlikely]] return; }
L_00128344:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[17], c.r[2].w[0] - 25904u);
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[7], c.r[29].w[0] + 16u);
    set32(c.r[8], c.r[29].w[0] + 20u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128368u); set32(c.r[9], c.r[29].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 2u, depth + 1u); else { c.pc = 0x00124018u; return; } if (c.pc != 0x00128368u) [[unlikely]] return; }
L_00128368:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[29].w[0] + 16u)));  if (t) { goto L_001283CC; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    set32(c.r[7], ld32((c.r[29].w[0] + 24u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128384u); set32(c.r[8], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0009(c, 321u, depth + 1u); else { c.pc = 0x00125D60u; return; } if (c.pc != 0x00128384u) [[unlikely]] return; }
L_00128384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_001283C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128394u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x001210C0u; return; } if (c.pc != 0x00128394u) [[unlikely]] return; }
L_00128394:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283A8u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0008(c, 166u, depth + 1u); else { c.pc = 0x00121FE0u; return; } if (c.pc != 0x001283A8u) [[unlikely]] return; }
L_001283A8:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283B8u); set32(c.r[4], c.r[4].w[0] + 12360u);  if (depth < kMaxDepth) unit_0008(c, 158u, depth + 1u); else { c.pc = 0x00121E80u; return; } if (c.pc != 0x001283B8u) [[unlikely]] return; }
L_001283B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_001283D8; } }
L_001283C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283C8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 493u, depth + 1u); else { c.pc = 0x00127178u; return; } if (c.pc != 0x001283C8u) [[unlikely]] return; }
L_001283C8:
    st8((c.r[16].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_001283CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001283D4u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x001210C0u; return; } if (c.pc != 0x001283D4u) [[unlikely]] return; }
L_001283D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_001283D8:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001283F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32244u)));
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128410u); c.r[17].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00128410u) [[unlikely]] return; }
L_00128410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128418u);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00121090u; return; } if (c.pc != 0x00128418u) [[unlikely]] return; }
L_00128418:
    set32(c.r[5], ld32((c.r[16].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128424u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 333u, depth + 1u); else { c.pc = 0x00125EB8u; return; } if (c.pc != 0x00128424u) [[unlikely]] return; }
L_00128424:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_0012844C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128434u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x001210C0u; return; } if (c.pc != 0x00128434u) [[unlikely]] return; }
L_00128434:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_0012843C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128444u); set32(c.r[4], c.r[4].w[0] + 12400u);  if (depth < kMaxDepth) unit_0008(c, 158u, depth + 1u); else { c.pc = 0x00121E80u; return; } if (c.pc != 0x00128444u) [[unlikely]] return; }
L_00128444:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_0012845C; } }
L_0012844C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128454u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 493u, depth + 1u); else { c.pc = 0x00127178u; return; } if (c.pc != 0x00128454u) [[unlikely]] return; }
L_00128454:
    st8((c.r[16].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_0012845C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001210C0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 84u, depth); }
L_00128470:
    c.budget -= 2;
    { c.r[6].sd[0] = static_cast<std::int32_t>(0x40000000u);  goto L_00128478; }
L_00128478:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32244u)));
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001284A0u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x001284A0u) [[unlikely]] return; }
L_001284A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001284A8u);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00121090u; return; } if (c.pc != 0x001284A8u) [[unlikely]] return; }
L_001284A8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001284B4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 176u, depth + 1u); else { c.pc = 0x00131290u; return; } if (c.pc != 0x001284B4u) [[unlikely]] return; }
L_001284B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001284E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001284C4u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x001210C0u; return; } if (c.pc != 0x001284C4u) [[unlikely]] return; }
L_001284C4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[4], c.r[4].w[0] + 12440u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121E38u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 154u, depth); }
L_001284E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001284ECu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 488u, depth + 1u); else { c.pc = 0x001270B0u; return; } if (c.pc != 0x001284ECu) [[unlikely]] return; }
L_001284EC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001210C0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 84u, depth); }
L_00128510:
    set32(c.r[29], c.r[29].w[0] - 80u);
    set32(c.r[2], ld32((c.r[28].w[0] - 32244u)));
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012853Cu); c.r[16].d[0] = c.r[6].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x0012853Cu) [[unlikely]] return; }
L_0012853C:
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[4], c.r[3].w[0] << 8);
    set32(c.r[2], c.r[3].w[0] >> 24);
    c.r[4].d[0] = c.r[4].d[0] & c.r[19].d[0];
    c.r[5].d[0] = c.r[5].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[5].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00128624; } }
    c.budget -= 2;
    if (c.r[16].sd[0] < 0) { c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));  goto L_00128628; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128584u);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00121090u; return; } if (c.pc != 0x00128584u) [[unlikely]] return; }
L_00128584:
    set32(c.r[2], c.r[16].w[0] << 3);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    set32(c.r[6], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    set32(c.r[2], c.r[3].w[0] << 8);
    set32(c.r[4], c.r[3].w[0] >> 24);
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.r[6].d[0] = c.r[6].d[0] & 65280ull;
    set32(c.r[3], c.r[3].w[0] << 24);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] | c.r[6].d[0];
    c.r[4].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001285C0u); set32(c.r[4], c.r[17].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_000C(c, 176u, depth + 1u); else { c.pc = 0x00131290u; return; } if (c.pc != 0x001285C0u) [[unlikely]] return; }
L_001285C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001285F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001285D0u);  if (depth < kMaxDepth) unit_0008(c, 84u, depth + 1u); else { c.pc = 0x001210C0u; return; } if (c.pc != 0x001285D0u) [[unlikely]] return; }
L_001285D0:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 12488u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00121E38u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 154u, depth); }
L_001285F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001285FCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 488u, depth + 1u); else { c.pc = 0x001270B0u; return; } if (c.pc != 0x001285FCu) [[unlikely]] return; }
L_001285FC:
    set32(c.r[2], 0u + 2u);
    st8((c.r[18].w[0] + 152u), static_cast<std::uint8_t>(0u));
    st8((c.r[18].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 80u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001210C0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 84u, depth); }
L_00128624:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00128628:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00128640:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[16], ld32((c.r[18].w[0] + 20u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128674u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 290u, depth + 1u); else { c.pc = 0x001259F8u; return; } if (c.pc != 0x00128674u) [[unlikely]] return; }
L_00128674:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128680u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 292u, depth + 1u); else { c.pc = 0x00125A18u; return; } if (c.pc != 0x00128680u) [[unlikely]] return; }
L_00128680:
    c.r[21].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012868Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 294u, depth + 1u); else { c.pc = 0x00125A38u; return; } if (c.pc != 0x0012868Cu) [[unlikely]] return; }
L_0012868C:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_001286BC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 108u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  goto L_001286BC; }
    set32(c.r[4], ld32((c.r[18].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001286B4u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0009(c, 264u, depth + 1u); else { c.pc = 0x00125888u; return; } if (c.pc != 0x001286B4u) [[unlikely]] return; }
L_001286B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001287A4; } }
L_001286BC:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], ld32((c.r[18].w[0] + 80u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001286D4u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001286D4u) [[unlikely]] return; }
L_001286D4:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[3], ld32((c.r[18].w[0] + 80u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_001286F0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001286F0u); set32(c.r[4], c.r[4].w[0] + 12536u);  if (depth < kMaxDepth) unit_0008(c, 154u, depth + 1u); else { c.pc = 0x00121E38u; return; } if (c.pc != 0x001286F0u) [[unlikely]] return; }
L_001286F0:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128708u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128708u) [[unlikely]] return; }
L_00128708:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128714u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 266u, depth + 1u); else { c.pc = 0x00125898u; return; } if (c.pc != 0x00128714u) [[unlikely]] return; }
L_00128714:
    set32(c.r[2], c.r[20].w[0] - c.r[19].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128728u); st32((c.r[18].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 264u, depth + 1u); else { c.pc = 0x00125888u; return; } if (c.pc != 0x00128728u) [[unlikely]] return; }
L_00128728:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128734u); c.r[5].d[0] = c.r[21].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 268u, depth + 1u); else { c.pc = 0x001258A8u; return; } if (c.pc != 0x00128734u) [[unlikely]] return; }
L_00128734:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128740u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 260u, depth + 1u); else { c.pc = 0x00125858u; return; } if (c.pc != 0x00128740u) [[unlikely]] return; }
L_00128740:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[2], ld32((c.r[18].w[0] + 76u)));  goto L_00128798; }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128760u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128760u) [[unlikely]] return; }
L_00128760:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[6].d[0] = c.r[21].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012877Cu); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012877Cu) [[unlikely]] return; }
L_0012877C:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128794u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128794u) [[unlikely]] return; }
L_00128794:
    set32(c.r[2], ld32((c.r[18].w[0] + 76u)));
    c.budget -= 1;
L_00128798:
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[18].w[0] + 76u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 3;
L_001287A4:
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001287C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001287E8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 292u, depth + 1u); else { c.pc = 0x00125A18u; return; } if (c.pc != 0x001287E8u) [[unlikely]] return; }
L_001287E8:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 108u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00128824; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128804u); set32(c.r[5], 0u - 1u);  if (depth < kMaxDepth) unit_0009(c, 264u, depth + 1u); else { c.pc = 0x00125888u; return; } if (c.pc != 0x00128804u) [[unlikely]] return; }
L_00128804:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[5].d[0] = c.r[5].d[0] | 65535ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00126138u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 357u, depth); }
L_00128824:
    set32(c.r[5], c.r[3].w[0] + 2047u);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[5].d[0] = c.r[3].d[0];
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 11));
    c.budget -= 7;
L_00128840:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00125FE0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 345u, depth); }
L_00128850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128868u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x001258F8u; return; } if (c.pc != 0x00128868u) [[unlikely]] return; }
L_00128868:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 66u)));  if (t) { goto L_001288AC; } }
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_00128898; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[6].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 164u, depth); }
L_00128898:
    c.r[5].d[0] = 0ull + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 164u, depth); }
L_001288AC:
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_001288CC; } }
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001288C4u); set32(c.r[6], 0u - 15u);  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00124DA0u; return; } if (c.pc != 0x001288C4u) [[unlikely]] return; }
L_001288C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));  if (t) { goto L_001288D8; } }
L_001288CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001288D4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 164u, depth + 1u); else { c.pc = 0x00124DA0u; return; } if (c.pc != 0x001288D4u) [[unlikely]] return; }
L_001288D4:
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 68u)));
    c.budget -= 1;
L_001288D8:
    set32(c.r[2], 0u - 128u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] != c.r[2].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (t) { goto L_001288FC; } }
    set32(c.r[5], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[6], 0u + 15u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 164u, depth); }
L_001288FC:
    set32(c.r[5], 0u + 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00124DA0u | kUnwind; return; } [[clang::musttail]] return unit_0009(c, 164u, depth); }
L_00128910:
    set32(c.r[29], c.r[29].w[0] - 208u);
    st64((c.r[29].w[0] + 160u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 192u), c.r[31].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[21].w[0] + 152u)));
    set32(c.r[20], ld32((c.r[21].w[0] + 4u)));
    c.budget -= 14;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], ld32((c.r[21].w[0] + 20u)));  if (t) { goto L_00128BA4; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128968u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128968u) [[unlikely]] return; }
L_00128968:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    c.budget -= 9;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012898Cu); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012898Cu) [[unlikely]] return; }
L_0012898C:
    set32(c.r[16], c.r[29].w[0] + 64u);
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289A0u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0008(c, 126u, depth + 1u); else { c.pc = 0x00121658u; return; } if (c.pc != 0x001289A0u) [[unlikely]] return; }
L_001289A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_001289E0; } }
    st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001289C0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001289C0u) [[unlikely]] return; }
L_001289C0:
    set32(c.r[7], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[7].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001289D8u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001289D8u) [[unlikely]] return; }
L_001289D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));  if (t) { goto L_00128BA8; } }
L_001289E0:
    c.r[18].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 64u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[29].w[0])));
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[4].w[0] + c.r[18].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001289FCu); set32(c.r[5], c.r[5].w[0] - c.r[18].w[0]);  if (depth < kMaxDepth) unit_0008(c, 116u, depth + 1u); else { c.pc = 0x001212D8u; return; } if (c.pc != 0x001289FCu) [[unlikely]] return; }
L_001289FC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[4], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_00128A10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], 0u - 1u);  if (t) { goto L_00128A20; } }
L_00128A10:
    set32(c.r[6], c.r[29].w[0] + 66u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A1Cu); set32(c.r[5], ld32((c.r[29].w[0] + 36u)));  if (depth < kMaxDepth) unit_0008(c, 116u, depth + 1u); else { c.pc = 0x001212D8u; return; } if (c.pc != 0x00128A1Cu) [[unlikely]] return; }
L_00128A1C:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00128A20:
    c.r[2].d[0] = ld16((c.r[29].w[0] + 64u));
    c.r[22].sd[0] = static_cast<std::int16_t>(ld16((c.r[29].w[0] + 66u)));
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 16);
    c.budget -= 6;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[18], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));  if (t) { goto L_00128A74; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00128ADC; } }
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A54u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128A54u) [[unlikely]] return; }
L_00128A54:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A6Cu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128A6Cu) [[unlikely]] return; }
L_00128A6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00128BA4; } }
L_00128A74:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128A8Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128A8Cu) [[unlikely]] return; }
L_00128A8C:
    set32(c.r[16], c.r[29].w[0] + 16u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128AA4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x00128AA4u) [[unlikely]] return; }
L_00128AA4:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128ABCu); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128ABCu) [[unlikely]] return; }
L_00128ABC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128AD4u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128AD4u) [[unlikely]] return; }
L_00128AD4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00128B3C; } }
L_00128ADC:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128AF4u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128AF4u) [[unlikely]] return; }
L_00128AF4:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[5].d[0] = c.r[22].d[0] + 0ull;
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B0Cu); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x00128B0Cu) [[unlikely]] return; }
L_00128B0C:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B24u); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128B24u) [[unlikely]] return; }
L_00128B24:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B3Cu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00128B3Cu) [[unlikely]] return; }
L_00128B3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B44u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00125130u; return; } if (c.pc != 0x00128B44u) [[unlikely]] return; }
L_00128B44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 204u, depth + 1u); else { c.pc = 0x00125100u; return; } if (c.pc != 0x00128B4Cu) [[unlikely]] return; }
L_00128B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B54u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 254u, depth + 1u); else { c.pc = 0x001257B8u; return; } if (c.pc != 0x00128B54u) [[unlikely]] return; }
L_00128B54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B5Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x00128B5Cu) [[unlikely]] return; }
L_00128B5C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[5], ld32((c.r[21].w[0] + 72u)));  goto L_00128B70; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[21].w[0] + 152u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00128BA4; } }
L_00128B70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B78u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x001250F8u; return; } if (c.pc != 0x00128B78u) [[unlikely]] return; }
L_00128B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B80u); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 282u, depth + 1u); else { c.pc = 0x00125978u; return; } if (c.pc != 0x00128B80u) [[unlikely]] return; }
L_00128B80:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B8Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 264u, depth + 1u); else { c.pc = 0x00125888u; return; } if (c.pc != 0x00128B8Cu) [[unlikely]] return; }
L_00128B8C:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128B98u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 268u, depth + 1u); else { c.pc = 0x001258A8u; return; } if (c.pc != 0x00128B98u) [[unlikely]] return; }
L_00128B98:
    c.r[4].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128BA4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 266u, depth + 1u); else { c.pc = 0x00125898u; return; } if (c.pc != 0x00128BA4u) [[unlikely]] return; }
L_00128BA4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 192u));
    c.budget -= 1;
L_00128BA8:
    c.r[22].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 208u);  c.pc = t; return; }
L_00128BD0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], 0u + 2048u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C00u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x00128C00u) [[unlikely]] return; }
L_00128C00:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00128ED0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C14u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x001258F8u; return; } if (c.pc != 0x00128C14u) [[unlikely]] return; }
L_00128C14:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[20].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00128C54; } }
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C34u); set32(c.r[7], 0u + 16u);  if (depth < kMaxDepth) unit_0008(c, 166u, depth + 1u); else { c.pc = 0x00121FE0u; return; } if (c.pc != 0x00128C34u) [[unlikely]] return; }
L_00128C34:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_00128C3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C44u); set32(c.r[4], c.r[4].w[0] + 12584u);  if (depth < kMaxDepth) unit_0008(c, 158u, depth + 1u); else { c.pc = 0x00121E80u; return; } if (c.pc != 0x00128C44u) [[unlikely]] return; }
L_00128C44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C4Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00128C4Cu) [[unlikely]] return; }
L_00128C4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00128ED0; } }
L_00128C54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C5Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 272u, depth + 1u); else { c.pc = 0x001258D8u; return; } if (c.pc != 0x00128C5Cu) [[unlikely]] return; }
L_00128C5C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128C68u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 286u, depth + 1u); else { c.pc = 0x001259B8u; return; } if (c.pc != 0x00128C68u) [[unlikely]] return; }
L_00128C68:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[20].sd[0] <= 0) { set32(c.r[3], ld32((c.r[17].w[0] + 56u)));  goto L_00128C98; }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    mmi::div(c, 0, c.r[19].w[0], c.r[2].w[0]);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00128C80u);  goto L_00128C84; }
L_00128C84:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (t) { goto L_00128CC0; } }
L_00128C98:
    mmi::div(c, 0, c.r[19].w[0], c.r[3].w[0]);
    c.budget -= 3;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x00128CA0u);  goto L_00128CA4; }
L_00128CA4:
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] >> 31);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 1));
    st32((c.r[17].w[0] + 72u), c.r[2].w[0]);
    c.budget -= 7;
L_00128CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CC8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 278u, depth + 1u); else { c.pc = 0x00125938u; return; } if (c.pc != 0x00128CC8u) [[unlikely]] return; }
L_00128CC8:
    set32(c.r[3], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { breakpoint(c, 0x00128CD4u);  goto L_00128CD8; }
L_00128CD8:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128CF8u); st32((c.r[17].w[0] + 72u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0009(c, 203u, depth + 1u); else { c.pc = 0x001250F8u; return; } if (c.pc != 0x00128CF8u) [[unlikely]] return; }
L_00128CF8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_00128DB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00128D14; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 80u), 0u);  if (t) { goto L_00128D6C; } }
L_00128D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D1Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 296u, depth + 1u); else { c.pc = 0x00125A58u; return; } if (c.pc != 0x00128D1Cu) [[unlikely]] return; }
L_00128D1C:
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    c.budget -= 3;
    if (c.r[16].d[0] == 0ull) { breakpoint(c, 0x00128D24u);  goto L_00128D28; }
L_00128D28:
    set32(c.r[2], c.r[2].w[0] + 2047u);
    c.r[3].d[0] = c.hi.d[0];
    mmi::div(c, 0, c.r[2].w[0], c.r[16].w[0]);
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::div(c, 0, c.r[3].w[0], c.r[16].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.hi.d[0];
    st32((c.r[17].w[0] + 80u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D58u); st32((c.r[17].w[0] + 140u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 357u, depth + 1u); else { c.pc = 0x00126138u; return; } if (c.pc != 0x00128D58u) [[unlikely]] return; }
L_00128D58:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], c.r[5].w[0] - 30776u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D6Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 356u, depth + 1u); else { c.pc = 0x00126128u; return; } if (c.pc != 0x00128D6Cu) [[unlikely]] return; }
L_00128D6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D74u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 294u, depth + 1u); else { c.pc = 0x00125A38u; return; } if (c.pc != 0x00128D74u) [[unlikely]] return; }
L_00128D74:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D84u); st32((c.r[17].w[0] + 144u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 264u, depth + 1u); else { c.pc = 0x00125888u; return; } if (c.pc != 0x00128D84u) [[unlikely]] return; }
L_00128D84:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D90u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 268u, depth + 1u); else { c.pc = 0x001258A8u; return; } if (c.pc != 0x00128D90u) [[unlikely]] return; }
L_00128D90:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128D9Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 266u, depth + 1u); else { c.pc = 0x00125898u; return; } if (c.pc != 0x00128D9Cu) [[unlikely]] return; }
L_00128D9C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 31168u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DB0u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 263u, depth + 1u); else { c.pc = 0x00125878u; return; } if (c.pc != 0x00128DB0u) [[unlikely]] return; }
L_00128DB0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00128E10; } }
L_00128DB8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00128DD0; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DD0u); c.r[5].d[0] = c.r[5].d[0] | 65535ull;  if (depth < kMaxDepth) unit_0009(c, 357u, depth + 1u); else { c.pc = 0x00126138u; return; } if (c.pc != 0x00128DD0u) [[unlikely]] return; }
L_00128DD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DD8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 282u, depth + 1u); else { c.pc = 0x00125978u; return; } if (c.pc != 0x00128DD8u) [[unlikely]] return; }
L_00128DD8:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DE4u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 264u, depth + 1u); else { c.pc = 0x00125888u; return; } if (c.pc != 0x00128DE4u) [[unlikely]] return; }
L_00128DE4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DF0u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 268u, depth + 1u); else { c.pc = 0x001258A8u; return; } if (c.pc != 0x00128DF0u) [[unlikely]] return; }
L_00128DF0:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128DFCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 266u, depth + 1u); else { c.pc = 0x00125898u; return; } if (c.pc != 0x00128DFCu) [[unlikely]] return; }
L_00128DFC:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], c.r[5].w[0] - 30448u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E10u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 263u, depth + 1u); else { c.pc = 0x00125878u; return; } if (c.pc != 0x00128E10u) [[unlikely]] return; }
L_00128E10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E18u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 272u, depth + 1u); else { c.pc = 0x001258D8u; return; } if (c.pc != 0x00128E18u) [[unlikely]] return; }
L_00128E18:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E24u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x001258F8u; return; } if (c.pc != 0x00128E24u) [[unlikely]] return; }
L_00128E24:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E30u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 282u, depth + 1u); else { c.pc = 0x00125978u; return; } if (c.pc != 0x00128E30u) [[unlikely]] return; }
L_00128E30:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E3Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 276u, depth + 1u); else { c.pc = 0x00125918u; return; } if (c.pc != 0x00128E3Cu) [[unlikely]] return; }
L_00128E3C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E48u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 165u, depth + 1u); else { c.pc = 0x00124DA8u; return; } if (c.pc != 0x00128E48u) [[unlikely]] return; }
L_00128E48:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E54u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 162u, depth + 1u); else { c.pc = 0x00124D90u; return; } if (c.pc != 0x00128E54u) [[unlikely]] return; }
L_00128E54:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E60u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 161u, depth + 1u); else { c.pc = 0x00124D88u; return; } if (c.pc != 0x00128E60u) [[unlikely]] return; }
L_00128E60:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E6Cu); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 179u, depth + 1u); else { c.pc = 0x00124E60u; return; } if (c.pc != 0x00128E6Cu) [[unlikely]] return; }
L_00128E6C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E78u); c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 64u)));  if (depth < kMaxDepth) unit_0009(c, 163u, depth + 1u); else { c.pc = 0x00124D98u; return; } if (c.pc != 0x00128E78u) [[unlikely]] return; }
L_00128E78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E80u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 77u, depth + 1u); else { c.pc = 0x00128850u; return; } if (c.pc != 0x00128E80u) [[unlikely]] return; }
L_00128E80:
    set32(c.r[4], ld32((c.r[17].w[0] + 116u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_00128E98; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128E94u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 150u, depth + 1u); else { c.pc = 0x0011E520u; return; } if (c.pc != 0x00128E94u) [[unlikely]] return; }
L_00128E94:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00128E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EA0u); set32(c.r[16], 0u + 2u);  if (depth < kMaxDepth) unit_0009(c, 270u, depth + 1u); else { c.pc = 0x001258B8u; return; } if (c.pc != 0x00128EA0u) [[unlikely]] return; }
L_00128EA0:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[16].d[0]) { set32(c.r[4], ld32((c.r[17].w[0] + 12u)));  goto L_00128EC0; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EB0u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 301u, depth + 1u); else { c.pc = 0x00125AA0u; return; } if (c.pc != 0x00128EB0u) [[unlikely]] return; }
L_00128EB0:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EBCu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 181u, depth + 1u); else { c.pc = 0x00124E70u; return; } if (c.pc != 0x00128EBCu) [[unlikely]] return; }
L_00128EBC:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 1;
L_00128EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128EC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x00124CE8u; return; } if (c.pc != 0x00128EC8u) [[unlikely]] return; }
L_00128EC8:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 2;
L_00128ED0:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00128EF0:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    set32(c.r[18], ld32((c.r[17].w[0] + 12u)));
    set32(c.r[20], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F20u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 152u, depth + 1u); else { c.pc = 0x00124D00u; return; } if (c.pc != 0x00128F20u) [[unlikely]] return; }
L_00128F20:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F2Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 154u, depth + 1u); else { c.pc = 0x00124D20u; return; } if (c.pc != 0x00128F2Cu) [[unlikely]] return; }
L_00128F2C:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    c.r[16].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[16].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_00128F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F4Cu); c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 278u, depth + 1u); else { c.pc = 0x00125938u; return; } if (c.pc != 0x00128F4Cu) [[unlikely]] return; }
L_00128F4C:
    c.r[2].d[0] = c.r[2].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));  goto L_00128F70; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F60u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x00128F60u) [[unlikely]] return; }
L_00128F60:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00128FAC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 112u)));
    c.budget -= 1;
L_00128F70:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00128FA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 114u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_00128FA0; } }
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128F90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0009(c, 150u, depth + 1u); else { c.pc = 0x00124CF0u; return; } if (c.pc != 0x00128F90u) [[unlikely]] return; }
L_00128F90:
    set32(c.r[2], ld32((c.r[28].w[0] - 32488u)));
    st32((c.r[17].w[0] + 156u), 0u);
    st32((c.r[17].w[0] + 160u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
L_00128FA0:
    st8((c.r[17].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00128FA8:
    st8((c.r[17].w[0] + 113u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00128FAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FB4u); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x00128FB4u) [[unlikely]] return; }
L_00128FB4:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_00129048; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00128FCCu); c.r[18].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 560u, depth + 1u); else { c.pc = 0x00127968u; return; } if (c.pc != 0x00128FCCu) [[unlikely]] return; }
L_00128FCC:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[17].w[0] + 72u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[19].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 5;
    { const bool t = c.r[19].sd[0] <= 0; set32(c.r[20], c.r[2].w[0] << 1);  if (t) { goto L_00129044; } }
    set32(c.r[17], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[18].w[0] << 2);
    c.budget -= 2;
L_00128FE8:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[6].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[16], ld32((c.r[2].w[0])));
    c.r[7].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129010u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129010u) [[unlikely]] return; }
L_00129010:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129020u); set32(c.r[6], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00129020u) [[unlikely]] return; }
L_00129020:
    set32(c.r[3], ld32((c.r[16].w[0])));
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129038u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129038u) [[unlikely]] return; }
L_00129038:
    c.r[3].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], c.r[18].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00128FE8u | kUnwind; return; } goto L_00128FE8; } }
L_00129044:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_00129048:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00129068:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
L_00129080:
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012908Cu); set32(c.r[4], ld32((c.r[19].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x0012908Cu) [[unlikely]] return; }
L_0012908C:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00129108; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 4u)));
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290A8u); set32(c.r[16], c.r[19].w[0] + 24u);  if (depth < kMaxDepth) unit_0009(c, 274u, depth + 1u); else { c.pc = 0x001258F8u; return; } if (c.pc != 0x001290A8u) [[unlikely]] return; }
L_001290A8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 32240u), c.r[18].w[0]);  if (t) { goto L_001290C0; } }
    c.budget -= 1;
L_001290B8:
    set32(c.r[16], c.r[16].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001290C0:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001290E8; } }
    set32(c.r[4], ld32((c.r[16].w[0])));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001290E0u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001290E0u) [[unlikely]] return; }
L_001290E0:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; st32((c.r[28].w[0] - 32236u), c.r[2].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001290B8u | kUnwind; return; } goto L_001290B8; } }
L_001290E8:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[18].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_00129108; } }
    set32(c.r[4], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001290FCu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x00124CE8u; return; } if (c.pc != 0x001290FCu) [[unlikely]] return; }
L_001290FC:
    set32(c.r[2], 0u + 4u);
    st8((c.r[19].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 3;
L_00129108:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00129120:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129138u); set32(c.r[4], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0009(c, 152u, depth + 1u); else { c.pc = 0x00124D00u; return; } if (c.pc != 0x00129138u) [[unlikely]] return; }
L_00129138:
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129144u); st32((c.r[28].w[0] - 32232u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0009(c, 152u, depth + 1u); else { c.pc = 0x00124D00u; return; } if (c.pc != 0x00129144u) [[unlikely]] return; }
L_00129144:
    c.r[2].d[0] = c.r[2].sd[0] < 513ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00129168; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012915Cu); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 150u, depth + 1u); else { c.pc = 0x00124CF0u; return; } if (c.pc != 0x0012915Cu) [[unlikely]] return; }
L_0012915C:
    set32(c.r[2], 0u + 5u);
    st8((c.r[16].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
L_00129168:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00129178:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129180:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012919Cu); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0008(c, 82u, depth + 1u); else { c.pc = 0x00121090u; return; } if (c.pc != 0x0012919Cu) [[unlikely]] return; }
L_0012919C:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291A8u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 149u, depth + 1u); else { c.pc = 0x00124CE8u; return; } if (c.pc != 0x001291A8u) [[unlikely]] return; }
L_001291A8:
    set32(c.r[4], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291B4u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 150u, depth + 1u); else { c.pc = 0x00124CF0u; return; } if (c.pc != 0x001291B4u) [[unlikely]] return; }
L_001291B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291BCu); set32(c.r[4], ld32((c.r[17].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 206u, depth + 1u); else { c.pc = 0x00125130u; return; } if (c.pc != 0x001291BCu) [[unlikely]] return; }
L_001291BC:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));  goto L_001291E8; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001291D0u);  if (depth < kMaxDepth) unit_0009(c, 352u, depth + 1u); else { c.pc = 0x001260C8u; return; } if (c.pc != 0x001291D0u) [[unlikely]] return; }
L_001291D0:
    set32(c.r[4], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001291E4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001291E4u) [[unlikely]] return; }
L_001291E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.budget -= 1;
L_001291E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_00129220; } }
    set32(c.r[18], c.r[17].w[0] + 24u);
    set32(c.r[2], c.r[16].w[0] << 2);
    c.budget -= 2;
L_001291F8:
    set32(c.r[2], c.r[18].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[2].w[0])));
    c.budget -= 2;
L_00129200:
    set32(c.r[5], ld32((c.r[4].w[0])));
    set32(c.r[3], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129210u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129210u) [[unlikely]] return; }
L_00129210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 3u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] << 2);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001291F8u | kUnwind; return; } goto L_001291F8; } }
L_00129220:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { c.r[4].d[0] = c.r[17].d[0] + 0ull;  goto L_00129240; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129234u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0009(c, 345u, depth + 1u); else { c.pc = 0x00125FE0u; return; } if (c.pc != 0x00129234u) [[unlikely]] return; }
L_00129234:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012923Cu); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0009(c, 350u, depth + 1u); else { c.pc = 0x00126068u; return; } if (c.pc != 0x0012923Cu) [[unlikely]] return; }
L_0012923C:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00129240:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129248u); set32(c.r[5], ld32((c.r[4].w[0] + 20u)));  if (depth < kMaxDepth) unit_0009(c, 488u, depth + 1u); else { c.pc = 0x001270B0u; return; } if (c.pc != 0x00129248u) [[unlikely]] return; }
L_00129248:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001210C0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 84u, depth); }
L_00129260:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 9;
    if (c.r[17].d[0] != c.r[2].d[0]) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_00129324; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_00129324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129298u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x00129298u) [[unlikely]] return; }
L_00129298:
    c.budget -= 2;
    if (c.r[2].d[0] == c.r[17].d[0]) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_00129324; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001292A8u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 259u, depth + 1u); else { c.pc = 0x00125850u; return; } if (c.pc != 0x001292A8u) [[unlikely]] return; }
L_001292A8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[16].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] != c.r[6].d[0]) { st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));  goto L_001292E8; }
    c.r[4].d[0] = ld16((c.r[16].w[0] + 104u));
    set32(c.r[5], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    set32(c.r[3], c.r[4].w[0] << 16);
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001292E8; } }
    set32(c.r[2], 0u - 2u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001292E8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[16].w[0] + 100u), c.r[6].w[0]);  if (t) { goto L_00129324; } }
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    set32(c.r[2], c.r[3].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00129314; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129310u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00129310u) [[unlikely]] return; }
L_00129310:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 1;
L_00129314:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[17].w[0] - 1u);  if (t) { goto L_00129328; } }
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 104u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00129324:
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_00129328:
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_00129430; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 114u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_00129430; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129348u); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  if (depth < kMaxDepth) unit_0009(c, 200u, depth + 1u); else { c.pc = 0x001250D8u; return; } if (c.pc != 0x00129348u) [[unlikely]] return; }
L_00129348:
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));  goto L_00129430; }
    set32(c.r[4], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00129378; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 36u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129370u); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129370u) [[unlikely]] return; }
L_00129370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;  if (t) { goto L_0012937C; } }
L_00129378:
    c.r[2].d[0] = c.r[2].sd[0] < 64ll ? 1ull : 0ull;
    c.budget -= 1;
L_0012937C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 3u);  if (t) { goto L_0012942C; } }
    c.r[2].d[0] = ld16((c.r[16].w[0] + 106u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[3].d[0]; st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001293BC; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[3], c.r[2].w[0] << 16);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 16));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001293E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_001293E0; } }
L_001293BC:
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    set32(c.r[4], 0u + 20u);
    set32(c.r[2], c.r[2].w[0] << 16);
    mmi::mult(c, 0, c.r[3].w[0], c.r[4].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 16));
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001293E0; } }
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 1;
L_001293E0:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00129430; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 109u)));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_00129408; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129400u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00129400u) [[unlikely]] return; }
L_00129400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_00129420; } }
L_00129408:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00129420; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012941Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 172u, depth + 1u); else { c.pc = 0x00129180u; return; } if (c.pc != 0x0012941Cu) [[unlikely]] return; }
L_0012941C:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 1;
L_00129420:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_00129434; }
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_0012942C:
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));
    c.budget -= 1;
L_00129430:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_00129434:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00129498; } }
L_0012943C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129444u);  if (depth < kMaxDepth) unit_0009(c, 344u, depth + 1u); else { c.pc = 0x00125FD8u; return; } if (c.pc != 0x00129444u) [[unlikely]] return; }
L_00129444:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00129498; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 109u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_00129470; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129468u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0009(c, 523u, depth + 1u); else { c.pc = 0x00127418u; return; } if (c.pc != 0x00129468u) [[unlikely]] return; }
L_00129468:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));  if (t) { goto L_00129488; } }
L_00129470:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[2].d[0];  if (t) { goto L_00129488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129484u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 172u, depth + 1u); else { c.pc = 0x00129180u; return; } if (c.pc != 0x00129484u) [[unlikely]] return; }
L_00129484:
    c.r[3].d[0] = ld8((c.r[16].w[0] + 109u));
    c.budget -= 1;
L_00129488:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00129498; } }
    st16((c.r[16].w[0] + 106u), static_cast<std::uint16_t>(0u));
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_00129498:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001294A8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001294E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001294CCu);  if (depth < kMaxDepth) unit_0009(c, 344u, depth + 1u); else { c.pc = 0x00125FD8u; return; } if (c.pc != 0x001294CCu) [[unlikely]] return; }
L_001294CC:
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_001294E0; } }
    set32(c.r[2], 0u - 1u);
    st16((c.r[16].w[0] + 96u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001294E0:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001294F0:
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x001294A8u | kUnwind; return; } goto L_001294A8; }
L_001294F8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00129528; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129520u);  if (depth < kMaxDepth) unit_000A(c, 160u, depth + 1u); else { c.pc = 0x00129068u; return; } if (c.pc != 0x00129520u) [[unlikely]] return; }
L_00129520:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00129584; } }
L_00129528:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_00129540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129538u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 108u, depth + 1u); else { c.pc = 0x00128BD0u; return; } if (c.pc != 0x00129538u) [[unlikely]] return; }
L_00129538:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00129584; } }
L_00129540:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 4u);  if (t) { goto L_00129558; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129550u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 148u, depth + 1u); else { c.pc = 0x00128EF0u; return; } if (c.pc != 0x00129550u) [[unlikely]] return; }
L_00129550:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00129584; } }
L_00129558:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 5u);  if (t) { goto L_00129570; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129568u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 167u, depth + 1u); else { c.pc = 0x00129120u; return; } if (c.pc != 0x00129568u) [[unlikely]] return; }
L_00129568:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00129584; } }
L_00129570:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00129584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129580u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 171u, depth + 1u); else { c.pc = 0x00129178u; return; } if (c.pc != 0x00129580u) [[unlikely]] return; }
L_00129580:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00129584:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001294A8u | kUnwind; return; } goto L_001294A8; }
L_00129598:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16640u);
    c.budget -= 5;
    { set32(c.r[6], 0u + 416u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_001295B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[2], ld32((c.r[4].w[0] - 16640u)));
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_001295F0; } }
    set32(c.r[3], c.r[4].w[0] - 16640u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_001295D8:
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 52u);  if (t) { goto L_001295F0; } }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001295D8u | kUnwind; return; } goto L_001295D8; }
L_001295F0:
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[16], 0u + 52u);  if (t) { goto L_00129604; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012965C; } }
L_00129604:
    set32(c.r[2], c.r[4].w[0] - 16640u);
    mmi::mult(c, 0, c.r[17].w[0], c.r[16].w[0]);
    c.r[16].d[0] = c.lo.d[0];
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[6], 0u + 52u);
    set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129620u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00129620u) [[unlikely]] return; }
L_00129620:
    set32(c.r[2], 0u + 1u);
    set32(c.r[7], c.r[16].w[0] + 50u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    set32(c.r[4], 0u + 500u);
    st32((c.r[16].w[0] + 4u), c.r[17].w[0]);
    c.r[5].d[0] = 0ull | 44100ull;
    st32((c.r[16].w[0] + 8u), 0u);
    c.budget -= 7;
L_0012963C:
    set32(c.r[6], c.r[16].w[0] + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129648u); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0008(c, 85u, depth + 1u); else { c.pc = 0x001210E0u; return; } if (c.pc != 0x00129648u) [[unlikely]] return; }
L_00129648:
    set32(c.r[4], c.r[16].w[0] + 40u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129658u); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00129658u) [[unlikely]] return; }
L_00129658:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012965C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00129670:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[4].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[7], c.r[2].w[0] + 50u);
    c.budget -= 5;
    { set32(c.r[6], c.r[2].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001210E0u | kUnwind; return; } [[clang::musttail]] return unit_0008(c, 85u, depth); }
L_00129688:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_001296A0; } }
    st32((c.r[2].w[0]), 0u);
    c.budget -= 3;
    { set32(c.r[6], 0u + 52u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_001296A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001296A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 8u), c.r[5].w[0]);  c.pc = t; return; }
L_001296B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 12u)));  c.pc = t; return; }
L_001296B8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_001296DC; } }
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    st32((c.r[4].w[0] + 32u), c.r[7].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 36u), 0u);  c.pc = t; return; }
L_001296DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001296E8:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00129710; } }
    st32((c.r[4].w[0] + 36u), c.r[8].w[0]);
    st32((c.r[4].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[4].w[0] + 24u), c.r[5].w[0]);
    st32((c.r[4].w[0] + 28u), c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 32u), c.r[7].w[0]);  c.pc = t; return; }
L_00129710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00129718:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0012972C; } }
    st32((c.r[4].w[0] + 16u), 0u);
    st32((c.r[4].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_0012972C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129738:
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[2].w[0] + 40u);
    st32((c.r[2].w[0] + 12u), 0u);
    c.budget -= 6;
    { set32(c.r[6], 0u + 8u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_00129750:
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    if (c.r[2].d[0] == c.r[3].d[0]) { st32((c.r[4].w[0] + 12u), 0u);  goto L_00129760; }
L_00129760:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00129768:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0] + 16u)));  c.pc = t; return; }
L_00129770:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32228u), c.r[2].w[0]);  c.pc = t; return; }
L_00129780:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_001297B0; } }
    set32(c.r[3], 0u + 2u);
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_001297B0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00129838; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[4], ld32((c.r[16].w[0] + 24u)));  if (t) { goto L_001297E4; } }
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    c.r[8].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001297DCu); c.r[9].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));  if (depth < kMaxDepth) unit_0008(c, 128u, depth + 1u); else { c.pc = 0x001216C0u; return; } if (c.pc != 0x001297DCu) [[unlikely]] return; }
L_001297DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 16u), c.r[2].w[0]);  if (t) { goto L_0012982C; } }
L_001297E4:
    set32(c.r[7], c.r[16].w[0] + 40u);
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[9], c.r[16].w[0] + 44u);
    set32(c.r[6], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    c.r[10].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 48u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129804u); c.r[11].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 50u)));  if (depth < kMaxDepth) unit_0008(c, 146u, depth + 1u); else { c.pc = 0x00121D80u; return; } if (c.pc != 0x00129804u) [[unlikely]] return; }
L_00129804:
    set32(c.r[3], c.r[2].w[0] >> 31);
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_00129830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012982Cu);  if (depth < kMaxDepth) unit_000A(c, 223u, depth + 1u); else { c.pc = 0x00129770u; return; } if (c.pc != 0x0012982Cu) [[unlikely]] return; }
L_0012982C:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_00129830:
    st32((c.r[16].w[0] + 12u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 2;
L_00129838:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00129848:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[16], c.r[2].w[0] - 16640u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[17], c.r[16].w[0] + 416u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 10;
L_00129870:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[16], c.r[16].w[0] + 52u);  goto L_00129884; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129880u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 224u, depth + 1u); else { c.pc = 0x00129780u; return; } if (c.pc != 0x00129880u) [[unlikely]] return; }
L_00129880:
    set32(c.r[16], c.r[16].w[0] + 52u);
    c.budget -= 1;
L_00129884:
    c.r[2].d[0] = c.r[16].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129870u | kUnwind; return; } goto L_00129870; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001298A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16220u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001298C8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001298C8u); set32(c.r[4], ld32((c.r[2].w[0] - 16216u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001298C8u) [[unlikely]] return; }
L_001298C8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001298D8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[6].d[0] = 0ull + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 5;
    { set32(c.r[4], c.r[4].w[0] - 16216u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298A8u | kUnwind; return; } goto L_001298A8; }
L_001298F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] - 16212u)));
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], ld32((c.r[2].w[0] - 16224u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[2], ld32((c.r[16].w[0] - 16212u)));  if (t) { goto L_0012998C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 25648u);
    set32(c.r[3], 0u + 39u);
    c.budget -= 4;
L_00129928:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[3], c.r[3].w[0] - 1u);
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], c.r[2].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129928u | kUnwind; return; } goto L_00129928; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 25328u);
    set32(c.r[2], c.r[2].w[0] + 500u);
    c.budget -= 5;
L_00129958:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], c.r[3].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129958u | kUnwind; return; } goto L_00129958; } }
    set32(c.r[4], c.r[17].w[0] - 24816u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129984u); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00129984u) [[unlikely]] return; }
L_00129984:
    st8((c.r[17].w[0] - 24816u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[16].w[0] - 16212u)));
    c.budget -= 2;
L_0012998C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    st32((c.r[16].w[0] - 16212u), c.r[2].w[0]);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001299A8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16212u)));
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[3].w[0] - 16212u), c.r[2].w[0]);  if (t) { goto L_00129A80; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[17].d[0] = 0ull + 0ull;
    set32(c.r[20], c.r[2].w[0] - 25648u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[21], c.r[20].w[0] + 4u);
    c.r[18].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 6;
L_001299F8:
    set32(c.r[2], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[19], c.r[17].w[0] << 3);  if (t) { goto L_00129A1C; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.r[16].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129A14u); set32(c.r[4], ld32((c.r[18].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129A14u) [[unlikely]] return; }
L_00129A14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);  if (t) { goto L_00129A24; } }
L_00129A1C:
    set32(c.r[16], c.r[20].w[0] + 4u);
    set32(c.r[2], c.r[19].w[0] + c.r[16].w[0]);
    c.budget -= 2;
L_00129A24:
    st32((c.r[18].w[0]), 0u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[2].d[0] = c.r[17].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 8u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001299F8u | kUnwind; return; } goto L_001299F8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[17], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] - 25328u);
    set32(c.r[2], c.r[2].w[0] + 500u);
    c.budget -= 5;
L_00129A50:
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[17], c.r[17].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 16u);
    c.budget -= 7;
    { const bool t = c.r[17].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129A50u | kUnwind; return; } goto L_00129A50; } }
    set32(c.r[4], c.r[22].w[0] - 24816u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129A7Cu); set32(c.r[6], 0u + 9u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00129A7Cu) [[unlikely]] return; }
L_00129A7C:
    st8((c.r[22].w[0] - 24816u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00129A80:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00129AA8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0] - 16224u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00129AD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 12696u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_00129AD0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00129AE8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 12736u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_00129AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129AF0u);  if (depth < kMaxDepth) unit_000A(c, 246u, depth + 1u); else { c.pc = 0x00129B30u; return; } if (c.pc != 0x00129AF0u) [[unlikely]] return; }
L_00129AF0:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[2].w[0] + 4u)));  goto L_00129B0C; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 12776u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_00129B0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00129B20; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00130000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B20u); set32(c.r[4], c.r[4].w[0] - 26456u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129B20u) [[unlikely]] return; }
L_00129B20:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00129B30:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B58u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_000A(c, 257u, depth + 1u); else { c.pc = 0x00129CA0u; return; } if (c.pc != 0x00129B58u) [[unlikely]] return; }
L_00129B58:
    c.budget -= 2;
    { const std::uint32_t t = c.r[16].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B60u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00129B60u) [[unlikely]] return; }
L_00129B60:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129B6Cu); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x00129B6Cu) [[unlikely]] return; }
L_00129B6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[19].d[0] + 0ull;  if (t) { goto L_00129BEC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[3], c.r[4].w[0] - 25328u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 32u);  if (t) { goto L_00129BAC; } }
    set32(c.r[3], c.r[3].w[0] + 4u);
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 2;
L_00129B90:
    c.r[2].d[0] = c.r[17].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[3].w[0] + 16u);  if (t) { goto L_00129BA8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129B90u | kUnwind; return; } goto L_00129B90; }
L_00129BA8:
    set32(c.r[2], 0u + 32u);
    c.budget -= 1;
L_00129BAC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[4].w[0] - 25328u);  if (t) { goto L_00129BBC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00129BEC; } }
L_00129BBC:
    set32(c.r[16], c.r[17].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] + 4u);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[16], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129BD8u); st32((c.r[2].w[0]), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00129BD8u) [[unlikely]] return; }
L_00129BD8:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129BE8u); set32(c.r[6], c.r[2].w[0] + 1u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00129BE8u) [[unlikely]] return; }
L_00129BE8:
    c.r[2].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 1;
L_00129BEC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00129C08:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C30u); c.r[19].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00129C30u) [[unlikely]] return; }
L_00129C30:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 25324u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 4u);
    c.budget -= 6;
L_00129C48:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129C58u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x00129C58u) [[unlikely]] return; }
L_00129C58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 1u);  if (t) { goto L_00129C68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[16].w[0])));  if (t) { goto L_00129C7C; } }
L_00129C68:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[19].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129C48u | kUnwind; return; } goto L_00129C48; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129C7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00129CA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129CB4u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00129CB4u) [[unlikely]] return; }
L_00129CB4:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00129CF0; } }
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 2;
L_00129CC8:
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[2], c.r[3].w[0] - 97u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(26ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] - 32u);  if (t) { goto L_00129CE0; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00129CE0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129CC8u | kUnwind; return; } goto L_00129CC8; } }
L_00129CF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00129D00:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 10;
    { const bool t = c.r[18].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00129D64; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    set32(c.r[4], c.r[4].w[0] + 12816u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 112u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_00129D54:
    set32(c.r[2], c.r[21].w[0] - 4u);
    set32(c.r[2], c.r[19].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00129DA8; } }
L_00129D64:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129D70u); c.r[17].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00129D70u) [[unlikely]] return; }
L_00129D70:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[16], c.r[2].w[0] - 25324u);
    c.r[21].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
L_00129D80:
    set32(c.r[19], c.r[17].w[0] << 4);
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129D94u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x00129D94u) [[unlikely]] return; }
L_00129D94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129D54u | kUnwind; return; } goto L_00129D54; } }
    c.r[2].d[0] = c.r[17].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129D80u | kUnwind; return; } goto L_00129D80; } }
L_00129DA8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00129DD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[17].d[0]);  if (t) { goto L_00129E04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 12856u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_00129E04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129E0Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00129E0Cu) [[unlikely]] return; }
L_00129E0C:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_00129E74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129E20u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 257u, depth + 1u); else { c.pc = 0x00129CA0u; return; } if (c.pc != 0x00129E20u) [[unlikely]] return; }
L_00129E20:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129E2Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 270u, depth + 1u); else { c.pc = 0x00129E90u; return; } if (c.pc != 0x00129E2Cu) [[unlikely]] return; }
L_00129E2C:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00129E5C; } }
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00129E3C:
    set32(c.r[6], c.r[17].w[0] + 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] - 24816u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116C60u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 230u, depth); }
L_00129E5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    set32(c.r[4], c.r[4].w[0] + 12896u);
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_00129E74:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[2].w[0] - 24816u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00129E90:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], c.r[2].w[0] - 25324u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 12;
L_00129EC0:
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129ED0u); c.r[6].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x00129ED0u) [[unlikely]] return; }
L_00129ED0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_00129EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00129EF0; } }
L_00129EE0:
    c.r[2].d[0] = c.r[16].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00129EC0u | kUnwind; return; } goto L_00129EC0; } }
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00129EF0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00129F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] - 24816u);  c.pc = t; return; }
L_00129F20:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_00129F60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F54u);  if (depth < kMaxDepth) unit_000A(c, 299u, depth + 1u); else { c.pc = 0x0012A2A0u; return; } if (c.pc != 0x00129F54u) [[unlikely]] return; }
L_00129F54:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00129FB0; } }
L_00129F60:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F6Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 456u, depth + 1u); else { c.pc = 0x0012B4A0u; return; } if (c.pc != 0x00129F6Cu) [[unlikely]] return; }
L_00129F6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F74u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x00129F74u) [[unlikely]] return; }
L_00129F74:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00129FB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 299u, depth + 1u); else { c.pc = 0x0012A2A0u; return; } if (c.pc != 0x00129F88u) [[unlikely]] return; }
L_00129F88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129F90u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x00129F90u) [[unlikely]] return; }
L_00129F90:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00129FA4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00129FB0; } }
L_00129FA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00129FACu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00129FACu) [[unlikely]] return; }
L_00129FAC:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00129FB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00129FD0:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st64((c.r[29].w[0] + 672u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 656u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 688u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 640u), c.r[18].d[0]);
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0] + 608u), c.r[16].d[0]);  if (t) { goto L_0012A008; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 12936u);  if (t) { goto L_0012A0BC; } }
L_0012A008:
    set32(c.r[18], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A01Cu); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012A01Cu) [[unlikely]] return; }
L_0012A01C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012A030; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 12936u);  if (t) { goto L_0012A0BC; } }
L_0012A030:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A038u);  if (depth < kMaxDepth) unit_000A(c, 291u, depth + 1u); else { c.pc = 0x0012A0F0u; return; } if (c.pc != 0x0012A038u) [[unlikely]] return; }
L_0012A038:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012A050; } }
    goto L_0012A044;
L_0012A040:
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0012A044:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 12968u);  if (t) { goto L_0012A0BC; } }
L_0012A050:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A05Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012A05Cu) [[unlikely]] return; }
L_0012A05C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0]), c.r[2].w[0]);  if (t) { goto L_0012A078; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A06Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A148u; return; } if (c.pc != 0x0012A06Cu) [[unlikely]] return; }
L_0012A06C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13040u);  if (t) { goto L_0012A0BC; } }
L_0012A078:
    set32(c.r[2], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { c.r[4].d[0] = c.r[18].d[0] + 0ull;  goto L_0012A098; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A08Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A148u; return; } if (c.pc != 0x0012A08Cu) [[unlikely]] return; }
L_0012A08C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13072u);  if (t) { goto L_0012A0BC; } }
L_0012A098:
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A0A4u); c.r[6].d[0] = c.r[20].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A0A4u) [[unlikely]] return; }
L_0012A0A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012A0CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A0B4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 293u, depth + 1u); else { c.pc = 0x0012A148u; return; } if (c.pc != 0x0012A0B4u) [[unlikely]] return; }
L_0012A0B4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 13096u);
    c.budget -= 2;
L_0012A0BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A0C4u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A0C4u) [[unlikely]] return; }
L_0012A0C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A0D0; } }
L_0012A0CC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A0D0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 656u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_0012A0F0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], c.r[5].w[0] - 25648u);
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012A128; } }
    set32(c.r[4], c.r[4].w[0] + 4u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 3;
L_0012A110:
    c.r[2].d[0] = c.r[3].sd[0] < 40ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 8u);  if (t) { goto L_0012A128; } }
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A110u | kUnwind; return; } goto L_0012A110; }
L_0012A128:
    set32(c.r[2], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[3], c.r[3].w[0] << 3);  if (t) { goto L_0012A13C; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_0012A13C:
    set32(c.r[2], c.r[5].w[0] - 25648u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_0012A148:
    st32((c.r[4].w[0]), 0u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4u), 0u);  c.pc = t; return; }
L_0012A158:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_0012A28C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], 0u + 58u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_0012A1C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0012A1E0; } }
    set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0012A190:
    c.r[4].d[0] = ld8((c.r[4].w[0]));
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.r[2].d[0] = c.r[7].sd[0] < 297ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0012A1D0; } }
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[2], 0u + 58u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  goto L_0012A1D8; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A190u | kUnwind; return; } goto L_0012A190; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));  if (t) { goto L_0012A1D8; } }
L_0012A1C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0012A1D4; } }
L_0012A1D0:
    set32(c.r[4], c.r[6].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_0012A1D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 1;
L_0012A1D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);  if (t) { goto L_0012A208; } }
L_0012A1E0:
    set32(c.r[2], c.r[16].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A1F0u); st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012A1F0u) [[unlikely]] return; }
L_0012A1F0:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A200u); c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0012A200u) [[unlikely]] return; }
L_0012A200:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012A28C; } }
L_0012A208:
    set32(c.r[3], 0u + 2u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[7].d[0] != c.r[3].d[0]; st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012A220; } }
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(0u));
    c.r[7].d[0] = 0ull + 0ull;
    c.budget -= 2;
L_0012A220:
    c.r[2].d[0] = c.r[7].sd[0] < 297ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012A268; } }
    set32(c.r[3], c.r[6].w[0] + c.r[7].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] + 0ull;  if (t) { goto L_0012A268; } }
    set32(c.r[3], c.r[5].w[0] - c.r[7].w[0]);
    c.budget -= 1;
L_0012A240:
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[4].d[0] = c.r[5].sd[0] < 297ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0012A268; } }
    set32(c.r[2], c.r[6].w[0] + c.r[5].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[5].w[0] - c.r[7].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A240u | kUnwind; return; } goto L_0012A240; } }
L_0012A268:
    set32(c.r[2], c.r[5].w[0] - c.r[7].w[0]);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 48u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00129CA0u | kUnwind; return; } goto L_00129CA0; }
L_0012A28C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012A2A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], c.r[16].w[0] - 24816u);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A2C8u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012A2C8u) [[unlikely]] return; }
L_0012A2C8:
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] - 24816u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { st8((c.r[17].w[0]), static_cast<std::uint8_t>(0u));  goto L_0012A2FC; }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116C60u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 230u, depth); }
L_0012A2FC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012A318:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_0012A344; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13120u);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_0012A344:
    set32(c.r[2], ld32((c.r[16].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 20u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012A370; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A35Cu); set32(c.r[4], ld32((c.r[16].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A35Cu) [[unlikely]] return; }
L_0012A35C:
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A148u | kUnwind; return; } goto L_0012A148; }
L_0012A370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13152u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_0012A388:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012A3AC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3A4u); set32(c.r[4], c.r[4].w[0] + 13176u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A3A4u) [[unlikely]] return; }
L_0012A3A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A3DC; } }
L_0012A3AC:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A3CC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3C4u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A3C4u) [[unlikely]] return; }
L_0012A3C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A3D8; } }
L_0012A3CC:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A3D8u); set32(c.r[4], c.r[4].w[0] + 13208u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A3D8u) [[unlikely]] return; }
L_0012A3D8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A3DC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A3F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012A414; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A40Cu); set32(c.r[4], c.r[4].w[0] + 13232u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A40Cu) [[unlikely]] return; }
L_0012A40C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A444; } }
L_0012A414:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 24u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A434; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A42Cu); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A42Cu) [[unlikely]] return; }
L_0012A42C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A440; } }
L_0012A434:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A440u); set32(c.r[4], c.r[4].w[0] + 13264u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A440u) [[unlikely]] return; }
L_0012A440:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A444:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A458:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012A47C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A474u); set32(c.r[4], c.r[4].w[0] + 13288u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A474u) [[unlikely]] return; }
L_0012A474:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A4AC; } }
L_0012A47C:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 32u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A49C; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A494u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A494u) [[unlikely]] return; }
L_0012A494:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A4A8; } }
L_0012A49C:
    c.r[16].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4A8u); set32(c.r[4], c.r[4].w[0] + 13320u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A4A8u) [[unlikely]] return; }
L_0012A4A8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A4AC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A4E8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A4E0u); set32(c.r[4], c.r[4].w[0] + 13344u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A4E0u) [[unlikely]] return; }
L_0012A4E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A514; } }
L_0012A4E8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 36u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A508; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A500u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A500u) [[unlikely]] return; }
L_0012A500:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A510; } }
L_0012A508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A510u); set32(c.r[4], c.r[4].w[0] + 13376u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A510u) [[unlikely]] return; }
L_0012A510:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A514:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A528:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012A548; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13400u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_0012A548:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 40u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012A568; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 13432u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_0012A568:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A570u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A570u) [[unlikely]] return; }
L_0012A570:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012A580:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], 0u + 31u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 25328u);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 8;
L_0012A5A0:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 16u);  if (t) { goto L_0012A5C0; } }
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012A5C0; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A5C0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A5C0u) [[unlikely]] return; }
L_0012A5C0:
    c.budget -= 2;
    if (c.r[17].sd[0] >= 0) { set32(c.r[2], ld32((c.r[16].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A5A0u | kUnwind; return; } goto L_0012A5A0; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012A5E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[16], 0u + 3u);  if (t) { goto L_0012A608; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A600u); set32(c.r[4], c.r[4].w[0] + 13464u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A600u) [[unlikely]] return; }
L_0012A600:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012A634; } }
L_0012A608:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 44u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A628; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A620u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A620u) [[unlikely]] return; }
L_0012A620:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A630; } }
L_0012A628:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A630u); set32(c.r[4], c.r[4].w[0] + 13496u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A630u) [[unlikely]] return; }
L_0012A630:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A634:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 2;
L_0012A63C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A648:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[17].d[0]);  if (t) { goto L_0012A66C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13528u);  if (t) { goto L_0012A6CC; } }
L_0012A66C:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A680u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012A680u) [[unlikely]] return; }
L_0012A680:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012A698; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13528u);  if (t) { goto L_0012A6CC; } }
L_0012A698:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6A4u); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012A6A4u) [[unlikely]] return; }
L_0012A6A4:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 8u)));  goto L_0012A6C0; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6BCu); set32(c.r[4], c.r[4].w[0] + 13608u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A6BCu) [[unlikely]] return; }
L_0012A6BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_0012A6C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012A6DC; } }
    set32(c.r[4], c.r[4].w[0] + 13648u);
    c.budget -= 1;
L_0012A6CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6D4u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A6D4u) [[unlikely]] return; }
L_0012A6D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A6E4; } }
L_0012A6DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A6E4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A6E4u) [[unlikely]] return; }
L_0012A6E4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0012A6F8:
    set32(c.r[29], c.r[29].w[0] - 672u);
    st64((c.r[29].w[0] + 640u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 656u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[17].d[0]);  if (t) { goto L_0012A724; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13680u);  if (t) { goto L_0012A788; } }
L_0012A724:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A738u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012A738u) [[unlikely]] return; }
L_0012A738:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012A750; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 13680u);  if (t) { goto L_0012A788; } }
L_0012A750:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A75Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012A75Cu) [[unlikely]] return; }
L_0012A75C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 92u)));  goto L_0012A778; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A774u); set32(c.r[4], c.r[4].w[0] + 13768u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A774u) [[unlikely]] return; }
L_0012A774:
    set32(c.r[2], ld32((c.r[16].w[0] + 92u)));
    c.budget -= 1;
L_0012A778:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012A798; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 13808u);
    c.budget -= 2;
L_0012A788:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A790u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A790u) [[unlikely]] return; }
L_0012A790:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A7A0; } }
L_0012A798:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A7A0u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A7A0u) [[unlikely]] return; }
L_0012A7A0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 656u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 672u);  c.pc = t; return; }
L_0012A7B8:
    set32(c.r[29], c.r[29].w[0] - 400u);
    st64((c.r[29].w[0] + 368u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[16].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 384u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 352u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 336u), c.r[18].d[0]);
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull; st64((c.r[29].w[0] + 320u), c.r[17].d[0]);  if (t) { goto L_0012A7EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0012A808; } }
L_0012A7EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A7F4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 299u, depth + 1u); else { c.pc = 0x0012A2A0u; return; } if (c.pc != 0x0012A7F4u) [[unlikely]] return; }
L_0012A7F4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012A820; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0012A838; } }
L_0012A808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A810u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012A810u) [[unlikely]] return; }
L_0012A810:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A820u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0012A820u) [[unlikely]] return; }
L_0012A820:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A828u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012A828u) [[unlikely]] return; }
L_0012A828:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[19].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0012A858; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 1;
L_0012A838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A840u); set32(c.r[4], c.r[4].w[0] + 13840u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A840u) [[unlikely]] return; }
L_0012A840:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A8B8; } }
L_0012A848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A850u); set32(c.r[4], c.r[4].w[0] + 13880u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A850u) [[unlikely]] return; }
L_0012A850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A8B8; } }
L_0012A858:
    c.r[18].d[0] = 0ull + 0ull;
    set32(c.r[2], c.r[2].w[0] - 25324u);
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[16], c.r[2].w[0] - 4u);
    c.budget -= 4;
L_0012A868:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A878u); c.r[6].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0012A878u) [[unlikely]] return; }
L_0012A878:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0012A8A4; }
L_0012A880:
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A848u | kUnwind; return; } goto L_0012A848; } }
    set32(c.r[2], ld32((c.r[2].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_0012A8A4; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8A0u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A8A0u) [[unlikely]] return; }
L_0012A8A0:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012A8A4:
    set32(c.r[16], c.r[16].w[0] + 16u);
    c.r[2].d[0] = c.r[18].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012A868u | kUnwind; return; } goto L_0012A868; } }
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0012A8B8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 384u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 368u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 352u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 336u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 320u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 304u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 400u);  c.pc = t; return; }
L_0012A8D8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A900; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A8F8u); set32(c.r[4], c.r[4].w[0] + 13912u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A8F8u) [[unlikely]] return; }
L_0012A8F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A92C; } }
L_0012A900:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 48u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A920; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A918u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A918u) [[unlikely]] return; }
L_0012A918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A928; } }
L_0012A920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A928u); set32(c.r[4], c.r[4].w[0] + 13944u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A928u) [[unlikely]] return; }
L_0012A928:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A92C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012A940:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012A960; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 13976u);
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_0012A960:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 52u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012A980; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 14008u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001298D8u | kUnwind; return; } goto L_001298D8; }
L_0012A980:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A988u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A988u) [[unlikely]] return; }
L_0012A988:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012A998:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012A9C0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A9B8u); set32(c.r[4], c.r[4].w[0] + 14040u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A9B8u) [[unlikely]] return; }
L_0012A9B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012A9EC; } }
L_0012A9C0:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012A9E0; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A9D8u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012A9D8u) [[unlikely]] return; }
L_0012A9D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012A9E8; } }
L_0012A9E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012A9E8u); set32(c.r[4], c.r[4].w[0] + 14072u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012A9E8u) [[unlikely]] return; }
L_0012A9E8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012A9EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012AA00:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[17].d[0]);  if (t) { goto L_0012AA24; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14104u);  if (t) { goto L_0012AA84; } }
L_0012AA24:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA38u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012AA38u) [[unlikely]] return; }
L_0012AA38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012AA50; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14104u);  if (t) { goto L_0012AA84; } }
L_0012AA50:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA5Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012AA5Cu) [[unlikely]] return; }
L_0012AA5C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 60u)));  goto L_0012AA78; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA74u); set32(c.r[4], c.r[4].w[0] + 14184u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AA74u) [[unlikely]] return; }
L_0012AA74:
    set32(c.r[2], ld32((c.r[16].w[0] + 60u)));
    c.budget -= 1;
L_0012AA78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012AA94; } }
    set32(c.r[4], c.r[4].w[0] + 14224u);
    c.budget -= 1;
L_0012AA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA8Cu);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AA8Cu) [[unlikely]] return; }
L_0012AA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012AA9C; } }
L_0012AA94:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AA9Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AA9Cu) [[unlikely]] return; }
L_0012AA9C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0012AAB0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 624u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AAD8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012AAD8u) [[unlikely]] return; }
L_0012AAD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012AAF0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14256u);  if (t) { goto L_0012AB24; } }
L_0012AAF0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AAFCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012AAFCu) [[unlikely]] return; }
L_0012AAFC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 64u)));  goto L_0012AB18; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB14u); set32(c.r[4], c.r[4].w[0] + 14336u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AB14u) [[unlikely]] return; }
L_0012AB14:
    set32(c.r[2], ld32((c.r[16].w[0] + 64u)));
    c.budget -= 1;
L_0012AB18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012AB34; } }
    set32(c.r[4], c.r[4].w[0] + 14376u);
    c.budget -= 1;
L_0012AB24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB2Cu);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AB2Cu) [[unlikely]] return; }
L_0012AB2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012AB3C; } }
L_0012AB34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB3Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AB3Cu) [[unlikely]] return; }
L_0012AB3C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0012AB50:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AB84u); st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0012AB84u) [[unlikely]] return; }
L_0012AB84:
    c.r[22].d[0] = c.r[2].d[0] + 0ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[2], c.r[2].w[0] - 25324u);
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[18], c.r[2].w[0] - 4u);
    c.budget -= 5;
L_0012AB98:
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABA8u); c.r[6].d[0] = c.r[22].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x0012ABA8u) [[unlikely]] return; }
L_0012ABA8:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0012AC1C; }
    set32(c.r[16], ld32((c.r[18].w[0])));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABBCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 453u, depth + 1u); else { c.pc = 0x0012B450u; return; } if (c.pc != 0x0012ABBCu) [[unlikely]] return; }
L_0012ABBC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0012ABF4; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[20], c.r[20].w[0] + 1u);  goto L_0012AC1C; }
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0012AC18; } }
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    set32(c.r[5], 0u + 4u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ABECu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012ABECu) [[unlikely]] return; }
L_0012ABEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012AC2C; } }
L_0012ABF4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { goto L_0012AC1C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 68u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 16u);  if (t) { goto L_0012AC20; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AC10u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AC10u) [[unlikely]] return; }
L_0012AC10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[21].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012AC2C; } }
L_0012AC18:
    set32(c.r[20], c.r[20].w[0] + 1u);
    c.budget -= 1;
L_0012AC1C:
    set32(c.r[18], c.r[18].w[0] + 16u);
    c.budget -= 1;
L_0012AC20:
    c.r[2].d[0] = c.r[20].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012AB98u | kUnwind; return; } goto L_0012AB98; } }
L_0012AC2C:
    c.r[2].d[0] = c.r[21].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0012AC58:
    set32(c.r[29], c.r[29].w[0] - 704u);
    st64((c.r[29].w[0] + 656u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 624u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[16], c.r[29].w[0] + 304u);
    st64((c.r[29].w[0] + 672u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 688u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AC94u); c.r[6].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012AC94u) [[unlikely]] return; }
L_0012AC94:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[20].d[0] = 0ull + 0ull;  if (t) { goto L_0012ACC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACA8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 299u, depth + 1u); else { c.pc = 0x0012A2A0u; return; } if (c.pc != 0x0012ACA8u) [[unlikely]] return; }
L_0012ACA8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012ACCC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACC0u); set32(c.r[4], c.r[4].w[0] + 14296u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012ACC0u) [[unlikely]] return; }
L_0012ACC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012AD04; } }
L_0012ACC8:
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012ACCC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACD4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 456u, depth + 1u); else { c.pc = 0x0012B4A0u; return; } if (c.pc != 0x0012ACD4u) [[unlikely]] return; }
L_0012ACD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACDCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012ACDCu) [[unlikely]] return; }
L_0012ACDC:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = c.r[20].d[0] + 0ull;  goto L_0012AD04; }
    set32(c.r[2], ld32((c.r[2].w[0] + 72u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0012AD00; } }
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ACFCu); c.r[6].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012ACFCu) [[unlikely]] return; }
L_0012ACFC:
    c.r[20].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012AD00:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_0012AD04:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 688u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 672u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 656u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 704u);  c.pc = t; return; }
L_0012AD28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012AD48; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD40u); set32(c.r[4], c.r[4].w[0] + 14408u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AD40u) [[unlikely]] return; }
L_0012AD40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012AD74; } }
L_0012AD48:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 76u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012AD68; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD60u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AD60u) [[unlikely]] return; }
L_0012AD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012AD78; } }
L_0012AD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AD70u); set32(c.r[4], c.r[4].w[0] + 14448u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AD70u) [[unlikely]] return; }
L_0012AD70:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012AD74:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012AD78:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012AD80:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 96u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 112u), c.r[17].d[0]);  if (t) { goto L_0012ADA4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14488u);  if (t) { goto L_0012AE04; } }
L_0012ADA4:
    set32(c.r[17], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADB8u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012ADB8u) [[unlikely]] return; }
L_0012ADB8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012ADD0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14488u);  if (t) { goto L_0012AE04; } }
L_0012ADD0:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADDCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012ADDCu) [[unlikely]] return; }
L_0012ADDC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 80u)));  goto L_0012ADF8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012ADF4u); set32(c.r[4], c.r[4].w[0] + 14568u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012ADF4u) [[unlikely]] return; }
L_0012ADF4:
    set32(c.r[2], ld32((c.r[16].w[0] + 80u)));
    c.budget -= 1;
L_0012ADF8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012AE14; } }
    set32(c.r[4], c.r[4].w[0] + 14600u);
    c.budget -= 1;
L_0012AE04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE0Cu);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AE0Cu) [[unlikely]] return; }
L_0012AE0C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012AE1C; } }
L_0012AE14:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE1Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AE1Cu) [[unlikely]] return; }
L_0012AE1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012AE30:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.budget -= 3;
L_0012AE3C:
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[17].d[0]);  if (t) { goto L_0012AE54; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14632u);  if (t) { goto L_0012AEB4; } }
L_0012AE54:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE68u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012AE68u) [[unlikely]] return; }
L_0012AE68:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012AE80; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14632u);  if (t) { goto L_0012AEB4; } }
L_0012AE80:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AE8Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012AE8Cu) [[unlikely]] return; }
L_0012AE8C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 84u)));  goto L_0012AEA8; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AEA4u); set32(c.r[4], c.r[4].w[0] + 14712u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AEA4u) [[unlikely]] return; }
L_0012AEA4:
    set32(c.r[2], ld32((c.r[16].w[0] + 84u)));
    c.budget -= 1;
L_0012AEA8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012AEC4; } }
    set32(c.r[4], c.r[4].w[0] + 14752u);
    c.budget -= 1;
L_0012AEB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AEBCu);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AEBCu) [[unlikely]] return; }
L_0012AEBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012AECC; } }
L_0012AEC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AECCu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AECCu) [[unlikely]] return; }
L_0012AECC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0012AEE0:
    set32(c.r[29], c.r[29].w[0] - 656u);
    st64((c.r[29].w[0] + 608u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 640u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[16].d[0] != 0ull; st64((c.r[29].w[0] + 624u), c.r[17].d[0]);  if (t) { goto L_0012AF04; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14784u);  if (t) { goto L_0012AF64; } }
L_0012AF04:
    set32(c.r[17], c.r[29].w[0] + 304u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF18u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 294u, depth + 1u); else { c.pc = 0x0012A158u; return; } if (c.pc != 0x0012AF18u) [[unlikely]] return; }
L_0012AF18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[29].w[0] + 304u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0012AF30; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[4].w[0] + 14784u);  if (t) { goto L_0012AF64; } }
L_0012AF30:
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF3Cu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 274u, depth + 1u); else { c.pc = 0x00129F20u; return; } if (c.pc != 0x0012AF3Cu) [[unlikely]] return; }
L_0012AF3C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[16].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 88u)));  goto L_0012AF58; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF54u); set32(c.r[4], c.r[4].w[0] + 14864u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AF54u) [[unlikely]] return; }
L_0012AF54:
    set32(c.r[2], ld32((c.r[16].w[0] + 88u)));
    c.budget -= 1;
L_0012AF58:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012AF74; } }
    set32(c.r[4], c.r[4].w[0] + 14904u);
    c.budget -= 1;
L_0012AF64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF6Cu);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AF6Cu) [[unlikely]] return; }
L_0012AF6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012AF7C; } }
L_0012AF74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AF7Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012AF7Cu) [[unlikely]] return; }
L_0012AF7C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 640u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 624u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 608u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 656u);  c.pc = t; return; }
L_0012AF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_0012AFB0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012AFA8u); set32(c.r[4], c.r[4].w[0] + 14936u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012AFA8u) [[unlikely]] return; }
L_0012AFA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012B010; } }
L_0012AFB0:
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[4], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[7].w[0] - 25328u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0]; c.r[6].d[0] = 0ull + 0ull;  if (t) { goto L_0012AFF8; } }
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 3;
L_0012AFD0:
    c.r[2].d[0] = c.r[6].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] - 25328u);  if (t) { goto L_0012B004; } }
    set32(c.r[5], c.r[6].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[4].d[0]; set32(c.r[6], c.r[6].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012AFD0u | kUnwind; return; } goto L_0012AFD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], c.r[8].w[0] - 25324u);  if (t) { goto L_0012B00C; } }
L_0012AFF8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[8].sd[0] = static_cast<std::int32_t>(0x00590000u);  if (t) { goto L_0012B008; } }
L_0012B004:
    set32(c.r[5], c.r[6].w[0] << 4);
    c.budget -= 1;
L_0012B008:
    set32(c.r[2], c.r[8].w[0] - 25324u);
    c.budget -= 1;
L_0012B00C:
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.budget -= 1;
L_0012B010:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012B020:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);  if (t) { goto L_0012B038; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[2].w[0] - 16220u), 0u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 16216u), 0u);  c.pc = t; return; }
L_0012B038:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[2].w[0] - 16220u), c.r[4].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] - 16216u), c.r[5].w[0]);  c.pc = t; return; }
L_0012B048:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012B070; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B068u); set32(c.r[4], c.r[4].w[0] + 14968u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B068u) [[unlikely]] return; }
L_0012B068:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012B09C; } }
L_0012B070:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012B090; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B088u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B088u) [[unlikely]] return; }
L_0012B088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012B098; } }
L_0012B090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B098u); set32(c.r[4], c.r[4].w[0] + 15000u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B098u) [[unlikely]] return; }
L_0012B098:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012B09C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012B0B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { goto L_0012B0D8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B0D0u); set32(c.r[4], c.r[4].w[0] + 15032u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B0D0u) [[unlikely]] return; }
L_0012B0D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_0012B104; } }
L_0012B0D8:
    set32(c.r[2], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[2].w[0] + 100u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  goto L_0012B0F8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B0F0u); set32(c.r[4], ld32((c.r[4].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B0F0u) [[unlikely]] return; }
L_0012B0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_0012B100; } }
L_0012B0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B100u); set32(c.r[4], c.r[4].w[0] + 15064u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B100u) [[unlikely]] return; }
L_0012B100:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_0012B104:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012B118:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0012B144; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B13Cu); set32(c.r[4], c.r[4].w[0] + 15096u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B13Cu) [[unlikely]] return; }
L_0012B13C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B1C0; } }
L_0012B144:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0012B160; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B158u); set32(c.r[4], c.r[4].w[0] + 15136u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B158u) [[unlikely]] return; }
L_0012B158:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B1C0; } }
L_0012B160:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B168u);  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012B168u) [[unlikely]] return; }
L_0012B168:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0012B188; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B180u); set32(c.r[4], c.r[4].w[0] + 15184u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B180u) [[unlikely]] return; }
L_0012B180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B1C0; } }
L_0012B188:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B194u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012B194u) [[unlikely]] return; }
L_0012B194:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0]), c.r[17].w[0]);  if (t) { goto L_0012B1BC; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B1B4u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B1B4u) [[unlikely]] return; }
L_0012B1B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0012B1C4; } }
L_0012B1BC:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012B1C0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0012B1C4:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012B1D8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0012B20C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B204u); set32(c.r[4], c.r[4].w[0] + 15224u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B204u) [[unlikely]] return; }
L_0012B204:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B2A8; } }
L_0012B20C:
    c.budget -= 2;
    { const bool t = c.r[18].d[0] != 0ull;  if (t) { goto L_0012B228; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B220u); set32(c.r[4], c.r[4].w[0] + 15264u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B220u) [[unlikely]] return; }
L_0012B220:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B2A8; } }
L_0012B228:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0012B244; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B23Cu); set32(c.r[4], c.r[4].w[0] + 15304u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B23Cu) [[unlikely]] return; }
L_0012B23C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B2A8; } }
L_0012B244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B24Cu);  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012B24Cu) [[unlikely]] return; }
L_0012B24C:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0012B26C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B264u); set32(c.r[4], c.r[4].w[0] + 15344u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B264u) [[unlikely]] return; }
L_0012B264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B2A8; } }
L_0012B26C:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B278u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012B278u) [[unlikely]] return; }
L_0012B278:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0]), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[18].w[0]);  if (t) { goto L_0012B2A4; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 2u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B29Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B29Cu) [[unlikely]] return; }
L_0012B29C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0012B2AC; } }
L_0012B2A4:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012B2A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0012B2AC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012B2C0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0012B2EC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B2E4u); set32(c.r[4], c.r[4].w[0] + 15384u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B2E4u) [[unlikely]] return; }
L_0012B2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B368; } }
L_0012B2EC:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0012B308; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B300u); set32(c.r[4], c.r[4].w[0] + 15424u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B300u) [[unlikely]] return; }
L_0012B300:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B368; } }
L_0012B308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B310u);  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012B310u) [[unlikely]] return; }
L_0012B310:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0012B330; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B328u); set32(c.r[4], c.r[4].w[0] + 15464u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B328u) [[unlikely]] return; }
L_0012B328:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B368; } }
L_0012B330:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B33Cu); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012B33Cu) [[unlikely]] return; }
L_0012B33C:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 4u), c.r[17].w[0]);  if (t) { goto L_0012B364; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 3u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B35Cu); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B35Cu) [[unlikely]] return; }
L_0012B35C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));  if (t) { goto L_0012B36C; } }
L_0012B364:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012B368:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 1;
L_0012B36C:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012B380:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[16].d[0]);  if (t) { goto L_0012B3B4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3ACu); set32(c.r[4], c.r[4].w[0] + 15504u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B3ACu) [[unlikely]] return; }
L_0012B3AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B434; } }
L_0012B3B4:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_0012B3D0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3C8u); set32(c.r[4], c.r[4].w[0] + 15552u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B3C8u) [[unlikely]] return; }
L_0012B3C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B434; } }
L_0012B3D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3D8u);  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012B3D8u) [[unlikely]] return; }
L_0012B3D8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != 0ull; c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (t) { goto L_0012B3F8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B3F0u); set32(c.r[4], c.r[4].w[0] + 15600u);  if (depth < kMaxDepth) unit_000A(c, 233u, depth + 1u); else { c.pc = 0x001298D8u; return; } if (c.pc != 0x0012B3F0u) [[unlikely]] return; }
L_0012B3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_0012B434; } }
L_0012B3F8:
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B404u); set32(c.r[6], 0u + 20u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012B404u) [[unlikely]] return; }
L_0012B404:
    set32(c.r[2], ld32((c.r[16].w[0] + 96u)));
    st32((c.r[29].w[0] + 4u), c.r[17].w[0]);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[29].w[0] + 8u), c.r[18].w[0]);  if (t) { goto L_0012B430; } }
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    set32(c.r[5], 0u + 5u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B428u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B428u) [[unlikely]] return; }
L_0012B428:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));  if (t) { goto L_0012B438; } }
L_0012B430:
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0012B434:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 1;
L_0012B438:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012B450:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B460u);  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012B460u) [[unlikely]] return; }
L_0012B460:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[2].d[0] = 0ull + 0ull;  goto L_0012B490; }
    set32(c.r[2], ld32((c.r[2].w[0] + 96u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012B48C; } }
    set32(c.r[5], 0u + 100u);
    c.r[6].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B484u); c.r[7].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012B484u) [[unlikely]] return; }
L_0012B484:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_0012B494; } }
L_0012B48C:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012B490:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 1;
L_0012B494:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012B4A0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012B4CC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4C8u);  if (depth < kMaxDepth) unit_000A(c, 273u, depth + 1u); else { c.pc = 0x00129F10u; return; } if (c.pc != 0x0012B4C8u) [[unlikely]] return; }
L_0012B4C8:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_0012B4CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4D4u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 453u, depth + 1u); else { c.pc = 0x0012B450u; return; } if (c.pc != 0x0012B4D4u) [[unlikely]] return; }
L_0012B4D4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012B520; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00590000u);
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[16], c.r[16].w[0] - 24800u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B4F4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0012B4F4u) [[unlikely]] return; }
L_0012B4F4:
    c.r[4].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[5], c.r[5].w[0] + 15640u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 11;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x001180C0u | kUnwind; return; } [[clang::musttail]] return unit_0006(c, 7u, depth); }
L_0012B520:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012B538:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B548u);  if (depth < kMaxDepth) unit_000A(c, 253u, depth + 1u); else { c.pc = 0x00129C08u; return; } if (c.pc != 0x0012B548u) [[unlikely]] return; }
L_0012B548:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0012B558:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], ld32((c.r[2].w[0] - 16168u)));
    set32(c.r[4], c.r[4].w[0] - 16208u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 7;
    { set32(c.r[6], 0u + 40u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00116E18u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 239u, depth); }
L_0012B578:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[2], c.r[16].w[0] - 16208u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 15;
    { const bool t = c.r[3].d[0] == 0ull; c.r[18].d[0] = c.r[7].d[0] + 0ull;  if (t) { goto L_0012B5C8; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0012B5C8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].d[0] = 0ull + 0ull;  if (t) { goto L_0012B600; } }
L_0012B5C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B5D0u);  if (depth < kMaxDepth) unit_000A(c, 462u, depth + 1u); else { c.pc = 0x0012B558u; return; } if (c.pc != 0x0012B5D0u) [[unlikely]] return; }
L_0012B5D0:
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[16].w[0] - 16208u);
    st32((c.r[16].w[0] - 16208u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[2].w[0] + 12u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 16u), c.r[17].w[0]);
    lwl(c.r[3], (c.r[18].w[0] + 3u));
    lwr(c.r[3], (c.r[18].w[0]));
    swl(c.r[3], (c.r[2].w[0] + 23u));
    swr(c.r[3], (c.r[2].w[0] + 20u));
    set32(c.r[4], 0u + 1u);
    c.budget -= 12;
L_0012B600:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0012B628:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 5;
L_0012B63C:
    set32(c.r[2], c.r[16].w[0] - 16208u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull; c.r[17].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_0012B670; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 9u);  if (t) { goto L_0012B670; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = 0ull + 0ull;  if (t) { goto L_0012B69C; } }
L_0012B670:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B678u);  if (depth < kMaxDepth) unit_000A(c, 462u, depth + 1u); else { c.pc = 0x0012B558u; return; } if (c.pc != 0x0012B678u) [[unlikely]] return; }
L_0012B678:
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], c.r[16].w[0] - 16208u);
    st32((c.r[16].w[0] - 16208u), c.r[3].w[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[2].w[0] + 32u), c.r[17].w[0]);
    set32(c.r[3], 0u + 1u);
    st32((c.r[2].w[0] + 4u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 24u), c.r[19].w[0]);
    st32((c.r[2].w[0] + 28u), c.r[18].w[0]);
    c.budget -= 9;
L_0012B69C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_0012B6C0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 16204u)));  c.pc = t; return; }
L_0012B6D0:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 2;
L_0012B6D8:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B6D8u | kUnwind; return; } goto L_0012B6D8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012B700:
    c.budget -= 2;
    { c.r[4].d[0] = 0ull + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x0010DCB0u | kUnwind; return; } [[clang::musttail]] return unit_0003(c, 163u, depth); }
L_0012B708:
    set32(c.r[29], c.r[29].w[0] - 128u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[21].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    set32(c.r[21], 0u + 9u);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    c.r[19].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].d[0] = c.r[17].d[0] | 65535ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 18;
L_0012B750:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[20].d[0]; set32(c.r[16], c.r[19].w[0] - 16208u);  if (t) { goto L_0012B790; } }
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B768u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 76u, depth + 1u); else { c.pc = 0x00108810u; return; } if (c.pc != 0x0012B768u) [[unlikely]] return; }
L_0012B768:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0012B77C; } }
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[21].w[0]);  if (t) { goto L_0012B790; } }
L_0012B77C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B784u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_000A(c, 469u, depth + 1u); else { c.pc = 0x0012B6D0u; return; } if (c.pc != 0x0012B784u) [[unlikely]] return; }
L_0012B784:
    c.r[2].d[0] = c.r[17].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012B750u | kUnwind; return; } goto L_0012B750; } }
L_0012B790:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_0012B7B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[3], ld32((c.r[16].w[0] - 16208u)));
    set32(c.r[17], c.r[16].w[0] - 16208u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[31].d[0]);  if (t) { goto L_0012B7E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B7E4u);  if (depth < kMaxDepth) unit_000A(c, 471u, depth + 1u); else { c.pc = 0x0012B700u; return; } if (c.pc != 0x0012B7E4u) [[unlikely]] return; }
L_0012B7E4:
    set32(c.r[3], ld32((c.r[16].w[0] - 16208u)));
    c.budget -= 1;
L_0012B7E8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 3u);  if (t) { goto L_0012B800; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B7FCu);  if (depth < kMaxDepth) unit_000A(c, 472u, depth + 1u); else { c.pc = 0x0012B708u; return; } if (c.pc != 0x0012B7FCu) [[unlikely]] return; }
L_0012B7FC:
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0012B800:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0012B818:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] - 16208u);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[18].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012B854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B84Cu);  if (depth < kMaxDepth) unit_000A(c, 462u, depth + 1u); else { c.pc = 0x0012B558u; return; } if (c.pc != 0x0012B84Cu) [[unlikely]] return; }
L_0012B84C:
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 2;
L_0012B854:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] - 16208u);  if (t) { goto L_0012B89C; } }
    set32(c.r[2], ld32((c.r[17].w[0] - 16208u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[18].d[0]; set32(c.r[3], ld32((c.r[17].w[0] - 16208u)));  if (t) { goto L_0012B884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B870u);  if (depth < kMaxDepth) unit_0003(c, 245u, depth + 1u); else { c.pc = 0x0010E748u; return; } if (c.pc != 0x0012B870u) [[unlikely]] return; }
L_0012B870:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], ld32((c.r[17].w[0] - 16208u)));  if (t) { goto L_0012B884; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B880u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0012B880u) [[unlikely]] return; }
L_0012B880:
    set32(c.r[3], ld32((c.r[17].w[0] - 16208u)));
    c.budget -= 1;
L_0012B884:
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[17].w[0] - 16208u);  if (t) { goto L_0012B89C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B898u);  if (depth < kMaxDepth) unit_000A(c, 476u, depth + 1u); else { c.pc = 0x0012B7B8u; return; } if (c.pc != 0x0012B898u) [[unlikely]] return; }
L_0012B898:
    set32(c.r[2], c.r[17].w[0] - 16208u);
    c.budget -= 1;
L_0012B89C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 4u), 0u);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012B8B8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[2], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[3], c.r[16].w[0] - 16208u);
    set32(c.r[4], ld32((c.r[3].w[0] + 4u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012B944; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B8E4u);  if (depth < kMaxDepth) unit_0003(c, 240u, depth + 1u); else { c.pc = 0x0010E6B0u; return; } if (c.pc != 0x0012B8E4u) [[unlikely]] return; }
L_0012B8E4:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], c.r[5].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(3ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[16].w[0] - 16208u);  if (t) { goto L_0012B920; } }
    set32(c.r[2], 0u + 20u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 16u);  if (t) { goto L_0012B91C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 17u);  if (t) { goto L_0012B91C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 18u);  if (t) { goto L_0012B91C; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_0012B944; } }
L_0012B91C:
    set32(c.r[2], c.r[16].w[0] - 16208u);
    c.budget -= 1;
L_0012B920:
    set32(c.r[3], 0u + 9u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 15696u);
    st32((c.r[2].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[2].w[0] + 36u), c.r[5].w[0]);
    c.budget -= 9;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117F48u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 313u, depth); }
L_0012B944:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0012B950:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[18].w[0] - 16208u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 11;
    { const bool t = c.r[17].d[0] != c.r[2].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0012B9B8; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    set32(c.r[7], c.r[16].w[0] + 20u);
    set32(c.r[5], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B990u); set32(c.r[6], ld32((c.r[16].w[0] + 16u)));  if (depth < kMaxDepth) unit_0003(c, 229u, depth + 1u); else { c.pc = 0x0010E4D0u; return; } if (c.pc != 0x0012B990u) [[unlikely]] return; }
L_0012B990:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; set32(c.r[3], 0u + 9u);  if (t) { goto L_0012B9A4; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[2].w[0]);  if (t) { goto L_0012B9B0; } }
L_0012B9A4:
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 3;
L_0012B9B0:
    set32(c.r[16], c.r[18].w[0] - 16208u);
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_0012B9B8:
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012B9DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012B9CCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0003(c, 163u, depth + 1u); else { c.pc = 0x0010DCB0u; return; } if (c.pc != 0x0012B9CCu) [[unlikely]] return; }
L_0012B9CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012B9DC; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0012B9DC:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012B9F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] - 16208u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 2u);  if (t) { goto L_0012BA4C; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA28u); set32(c.r[6], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0002(c, 35u, depth + 1u); else { c.pc = 0x001082E0u; return; } if (c.pc != 0x0012BA28u) [[unlikely]] return; }
L_0012BA28:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[2], 0u + 2u);  if (t) { goto L_0012BA3C; } }
    set32(c.r[2], 0u + 9u);
    st32((c.r[16].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 2;
L_0012BA3C:
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[16], c.r[17].w[0] - 16208u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 4;
L_0012BA4C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012BA94; } }
    set32(c.r[4], ld32((c.r[16].w[0] + 24u)));
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BA64u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 76u, depth + 1u); else { c.pc = 0x00108810u; return; } if (c.pc != 0x0012BA64u) [[unlikely]] return; }
L_0012BA64:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; set32(c.r[2], ld32((c.r[29].w[0])));  if (t) { goto L_0012BA80; } }
    set32(c.r[3], 0u + 9u);
    set32(c.r[2], 0u - 1u);
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_0012BA90; } }
L_0012BA80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0012BA94; } }
    set32(c.r[2], 0u + 3u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 2;
L_0012BA90:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_0012BA94:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012BAA8:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    set32(c.r[2], ld32((c.r[3].w[0] - 16164u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0012BAB8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u + 1u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] - 16164u)));
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_0012BB2C; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st32((c.r[17].w[0] - 16164u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] - 16208u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; set32(c.r[18], c.r[16].w[0] - 16208u);  if (t) { goto L_0012BB10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BAF8u);  if (depth < kMaxDepth) unit_000A(c, 484u, depth + 1u); else { c.pc = 0x0012B8B8u; return; } if (c.pc != 0x0012BAF8u) [[unlikely]] return; }
L_0012BAF8:
    set32(c.r[3], ld32((c.r[18].w[0] + 4u)));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0012BB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB10u);  if (depth < kMaxDepth) unit_000A(c, 486u, depth + 1u); else { c.pc = 0x0012B950u; return; } if (c.pc != 0x0012BB10u) [[unlikely]] return; }
L_0012BB10:
    set32(c.r[3], ld32((c.r[16].w[0] - 16208u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0012BB28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BB28u);  if (depth < kMaxDepth) unit_000A(c, 489u, depth + 1u); else { c.pc = 0x0012B9F0u; return; } if (c.pc != 0x0012BB28u) [[unlikely]] return; }
L_0012BB28:
    st32((c.r[17].w[0] - 16164u), 0u);
    c.budget -= 1;
L_0012BB2C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0012BB48:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 16208u)));  c.pc = t; return; }
L_0012BB58:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[3].w[0] - 16172u)));  c.pc = t; return; }
L_0012BB68:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[2], 0u + 1u);
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1u)));
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0012BEB0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));  if (t) { goto L_0012BC38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBA8u); set32(c.r[4], ld32((c.r[17].w[0] + 44u)));  if (depth < kMaxDepth) unit_0000(c, 561u, depth + 1u); else { c.pc = 0x00103F40u; return; } if (c.pc != 0x0012BBA8u) [[unlikely]] return; }
L_0012BBA8:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[3].d[0] = ld8((c.r[17].w[0] + 2u));  goto L_0012BC38; }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBC8u); set32(c.r[6], c.r[17].w[0] + 12u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BBC8u) [[unlikely]] return; }
L_0012BBC8:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 12u), 0u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 32u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BBE8u); set32(c.r[6], c.r[17].w[0] + 20u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BBE8u) [[unlikely]] return; }
L_0012BBE8:
    set32(c.r[3], ld32((c.r[17].w[0] + 60u)));
    set32(c.r[2], ld32((c.r[17].w[0] + 16u)));
    st32((c.r[17].w[0] + 20u), 0u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[17].w[0] + 24u), 0u);
    st32((c.r[17].w[0] + 60u), c.r[3].w[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0012BC34; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC14u); set32(c.r[4], c.r[4].w[0] + 15792u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BC14u) [[unlikely]] return; }
L_0012BC14:
    c.budget -= 1;
L_0012BC18:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BC18u | kUnwind; return; } goto L_0012BC18; } }
L_0012BC34:
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0012BC38:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0012BEB0; } }
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    set32(c.r[5], 0u + 1u);
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC60u); c.r[7].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BC60u) [[unlikely]] return; }
L_0012BC60:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[19], c.r[29].w[0] + 32u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.r[6].d[0] = c.r[6].d[0] | 65535ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 24u)));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BC84u); c.r[7].d[0] = c.r[19].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BC84u) [[unlikely]] return; }
L_0012BC84:
    set32(c.r[5], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[16], c.r[29].w[0] + 16u);
    set32(c.r[18], ld32((c.r[29].w[0] + 36u)));
    c.r[7].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[17].w[0] + 56u)));
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.r[6].d[0] = c.r[29].d[0] + 0ull;
    if (c.r[2].d[0] != 0) c.r[18].d[0] = c.r[5].d[0];
    c.budget -= 11;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x0012BCACu);  goto L_0012BCB0; }
L_0012BCB0:
    mmi::div(c, 0, c.r[18].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    mmi::mult(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[18].d[0] = c.lo.d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCC4u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x0012BCC4u) [[unlikely]] return; }
L_0012BCC4:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCDCu); set32(c.r[5], 0u + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BCDCu) [[unlikely]] return; }
L_0012BCDC:
    set32(c.r[16], c.r[29].w[0] + 48u);
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BCF4u); c.r[7].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 290u, depth + 1u); else { c.pc = 0x00132598u; return; } if (c.pc != 0x0012BCF4u) [[unlikely]] return; }
L_0012BCF4:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD0Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BD0Cu) [[unlikely]] return; }
L_0012BD0C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; set32(c.r[5], ld32((c.r[29].w[0] + 4u)));  if (t) { goto L_0012BEAC; } }
    c.r[2].d[0] = c.r[5].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0012BD5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD28u); set32(c.r[4], c.r[4].w[0] + 15824u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BD28u) [[unlikely]] return; }
L_0012BD28:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 15864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD40u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BD40u) [[unlikely]] return; }
L_0012BD40:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BD40u | kUnwind; return; } goto L_0012BD40; } }
L_0012BD5C:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.r[2].d[0] = c.r[4].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 32u)));  if (t) { goto L_0012BDAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD78u); set32(c.r[4], c.r[4].w[0] + 15912u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BD78u) [[unlikely]] return; }
L_0012BD78:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 15864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BD90u); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BD90u) [[unlikely]] return; }
L_0012BD90:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BD90u | kUnwind; return; } goto L_0012BD90; } }
L_0012BDAC:
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] - 1u);  if (t) { goto L_0012BDFC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDC4u); set32(c.r[4], c.r[4].w[0] + 15952u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BDC4u) [[unlikely]] return; }
L_0012BDC4:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[29].w[0])));
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    set32(c.r[4], c.r[4].w[0] + 15864u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BDDCu); set32(c.r[7], ld32((c.r[29].w[0] + 4u)));  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BDDCu) [[unlikely]] return; }
L_0012BDDC:
    c.budget -= 1;
L_0012BDE0:
    c.budget -= 7;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BDE0u | kUnwind; return; } goto L_0012BDE0; } }
L_0012BDFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE04u); set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);  if (depth < kMaxDepth) unit_0001(c, 35u, depth + 1u); else { c.pc = 0x001043F0u; return; } if (c.pc != 0x0012BE04u) [[unlikely]] return; }
L_0012BE04:
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x0FFF0000u);
    set32(c.r[6], ld32((c.r[29].w[0] + 32u)));
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[17].w[0] + 40u), 0u);
    set32(c.r[4], c.r[17].w[0] + 28u);
    st32((c.r[17].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    st32((c.r[17].w[0] + 32u), c.r[6].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE38u); st32((c.r[17].w[0] + 36u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0000(c, 565u, depth + 1u); else { c.pc = 0x00103F60u; return; } if (c.pc != 0x0012BE38u) [[unlikely]] return; }
L_0012BE38:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 44u), c.r[2].w[0]);  if (t) { goto L_0012BE84; } }
    goto L_0012BE40;
L_0012BE3C:
    st32((c.r[17].w[0] + 44u), c.r[2].w[0]);
    c.budget -= 1;
L_0012BE40:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE4Cu); set32(c.r[4], c.r[4].w[0] + 15992u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BE4Cu) [[unlikely]] return; }
L_0012BE4C:
    set32(c.r[4], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE64u); c.r[6].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BE64u) [[unlikely]] return; }
L_0012BE64:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[19].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[3].w[0] + 28u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BE7Cu); c.r[5].d[0] = 0ull + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0012BE7Cu) [[unlikely]] return; }
L_0012BE7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));  if (t) { goto L_0012BEB0; } }
L_0012BE84:
    ldl(c.r[6], (c.r[29].w[0] + 7u));
    ldr(c.r[6], (c.r[29].w[0]));
    sdl(c.r[6], (c.r[17].w[0] + 19u));
    sdr(c.r[6], (c.r[17].w[0] + 12u));
    set32(c.r[2], 0u + 1u);
    ldl(c.r[5], (c.r[29].w[0] + 39u));
    ldr(c.r[5], (c.r[29].w[0] + 32u));
    sdl(c.r[5], (c.r[17].w[0] + 27u));
    sdr(c.r[5], (c.r[17].w[0] + 20u));
    st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 10;
L_0012BEAC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.budget -= 1;
L_0012BEB0:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0012BEC8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[18], 0u + 1u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], 0u + 15u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[16], c.r[2].w[0] - 16160u);
    c.budget -= 10;
L_0012BEF0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    if (c.r[2].d[0] != c.r[18].d[0]) { set32(c.r[17], c.r[17].w[0] - 1u);  goto L_0012BF08; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF04u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_000A(c, 499u, depth + 1u); else { c.pc = 0x0012BB68u; return; } if (c.pc != 0x0012BF04u) [[unlikely]] return; }
L_0012BF04:
    set32(c.r[17], c.r[17].w[0] - 1u);
    c.budget -= 1;
L_0012BF08:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BEF0u | kUnwind; return; } goto L_0012BEF0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_000B(c, 65u, depth); }
L_0012BF28:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[28].w[0] - 32220u)));
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF40u); set32(c.r[4], c.r[4].w[0] + 16032u);  if (depth < kMaxDepth) unit_0005(c, 313u, depth + 1u); else { c.pc = 0x00117F48u; return; } if (c.pc != 0x0012BF40u) [[unlikely]] return; }
L_0012BF40:
    set32(c.r[2], ld32((c.r[28].w[0] - 32220u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[2].w[0] + 1u);  if (t) { goto L_0012BF68; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[4], c.r[4].w[0] - 16160u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BF60u); set32(c.r[6], 0u + 1024u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0012BF60u) [[unlikely]] return; }
L_0012BF60:
    set32(c.r[2], ld32((c.r[28].w[0] - 32220u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0012BF68:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], c.r[4].w[0] + 16056u);
    st32((c.r[28].w[0] - 32220u), c.r[2].w[0]);
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00117F48u | kUnwind; return; } [[clang::musttail]] return unit_0005(c, 313u, depth); }
L_0012BF80:
    set32(c.r[2], ld32((c.r[28].w[0] - 32220u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[28].w[0] - 32220u), c.r[2].w[0]);  c.pc = t; return; }
L_0012BF90:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0012BFB0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_000C(c, 169u, depth + 1u); else { c.pc = 0x001311E0u; return; } if (c.pc != 0x0012BFB0u) [[unlikely]] return; }
L_0012BFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003B0000u);
    c.r[5].d[0] = 0ull + 0ull;
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] - 16160u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[16], c.r[2].w[0] - 16160u);  if (t) { goto L_0012BFF0; } }
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 3;
L_0012BFD0:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 64u);  if (t) { goto L_0012BFF0; } }
    set32(c.r[2], c.r[5].w[0] << 6);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[2].w[0] + c.r[6].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0012BFD0u | kUnwind; return; } goto L_0012BFD0; } }
L_0012BFF0:
    set32(c.r[2], 0u + 16u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != c.r[2].d[0]; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { [[clang::musttail]] return unit_000B(c, 2u, depth); } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = 0ull + 0ull;  if (t) { [[clang::musttail]] return unit_000B(c, 4u, depth); } }
    [[clang::musttail]] return unit_000B(c, 2u, depth);
}

}
