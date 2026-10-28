#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0097[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0,
    14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0,
    52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72,
    0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0,
    83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99,
    0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0,
    0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0,
    0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0,
    209, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228,
    0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313,
    0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0,
    0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0,
    0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0,
    0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0,
    471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0,
    0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0097(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0035C000;
    case 2u: goto L_0035C020;
    case 3u: goto L_0035C02C;
    case 4u: goto L_0035C034;
    case 5u: goto L_0035C03C;
    case 6u: goto L_0035C044;
    case 7u: goto L_0035C07C;
    case 8u: goto L_0035C088;
    case 9u: goto L_0035C090;
    case 10u: goto L_0035C0D0;
    case 11u: goto L_0035C0E4;
    case 12u: goto L_0035C0F0;
    case 13u: goto L_0035C0F8;
    case 14u: goto L_0035C100;
    case 15u: goto L_0035C10C;
    case 16u: goto L_0035C184;
    case 17u: goto L_0035C1AC;
    case 18u: goto L_0035C1FC;
    case 19u: goto L_0035C224;
    case 20u: goto L_0035C230;
    case 21u: goto L_0035C240;
    case 22u: goto L_0035C284;
    case 23u: goto L_0035C298;
    case 24u: goto L_0035C2A4;
    case 25u: goto L_0035C2B8;
    case 26u: goto L_0035C358;
    case 27u: goto L_0035C378;
    case 28u: goto L_0035C38C;
    case 29u: goto L_0035C394;
    case 30u: goto L_0035C3B0;
    case 31u: goto L_0035C3C4;
    case 32u: goto L_0035C3CC;
    case 33u: goto L_0035C400;
    case 34u: goto L_0035C438;
    case 35u: goto L_0035C46C;
    case 36u: goto L_0035C480;
    case 37u: goto L_0035C4B0;
    case 38u: goto L_0035C518;
    case 39u: goto L_0035C554;
    case 40u: goto L_0035C55C;
    case 41u: goto L_0035C570;
    case 42u: goto L_0035C57C;
    case 43u: goto L_0035C5B8;
    case 44u: goto L_0035C5C0;
    case 45u: goto L_0035C5D4;
    case 46u: goto L_0035C638;
    case 47u: goto L_0035C640;
    case 48u: goto L_0035C650;
    case 49u: goto L_0035C658;
    case 50u: goto L_0035C668;
    case 51u: goto L_0035C670;
    case 52u: goto L_0035C680;
    case 53u: goto L_0035C688;
    case 54u: goto L_0035C698;
    case 55u: goto L_0035C6A0;
    case 56u: goto L_0035C6C4;
    case 57u: goto L_0035C6D8;
    case 58u: goto L_0035C6F0;
    case 59u: goto L_0035C73C;
    case 60u: goto L_0035C744;
    case 61u: goto L_0035C758;
    case 62u: goto L_0035C810;
    case 63u: goto L_0035C828;
    case 64u: goto L_0035C830;
    case 65u: goto L_0035C840;
    case 66u: goto L_0035C848;
    case 67u: goto L_0035C858;
    case 68u: goto L_0035C880;
    case 69u: goto L_0035C8B8;
    case 70u: goto L_0035C8E0;
    case 71u: goto L_0035C8F4;
    case 72u: goto L_0035C8FC;
    case 73u: goto L_0035C90C;
    case 74u: goto L_0035C914;
    case 75u: goto L_0035C91C;
    case 76u: goto L_0035C924;
    case 77u: goto L_0035C92C;
    case 78u: goto L_0035C93C;
    case 79u: goto L_0035C94C;
    case 80u: goto L_0035C954;
    case 81u: goto L_0035C95C;
    case 82u: goto L_0035C96C;
    case 83u: goto L_0035C980;
    case 84u: goto L_0035C988;
    case 85u: goto L_0035C9A0;
    case 86u: goto L_0035C9B0;
    case 87u: goto L_0035C9D4;
    case 88u: goto L_0035C9E4;
    case 89u: goto L_0035C9EC;
    case 90u: goto L_0035CA00;
    case 91u: goto L_0035CA10;
    case 92u: goto L_0035CA20;
    case 93u: goto L_0035CA34;
    case 94u: goto L_0035CA40;
    case 95u: goto L_0035CA50;
    case 96u: goto L_0035CA5C;
    case 97u: goto L_0035CA64;
    case 98u: goto L_0035CA74;
    case 99u: goto L_0035CA7C;
    case 100u: goto L_0035CA84;
    case 101u: goto L_0035CA8C;
    case 102u: goto L_0035CA9C;
    case 103u: goto L_0035CAA4;
    case 104u: goto L_0035CAAC;
    case 105u: goto L_0035CABC;
    case 106u: goto L_0035CAC4;
    case 107u: goto L_0035CAE4;
    case 108u: goto L_0035CAF4;
    case 109u: goto L_0035CB20;
    case 110u: goto L_0035CB30;
    case 111u: goto L_0035CB64;
    case 112u: goto L_0035CB84;
    case 113u: goto L_0035CB8C;
    case 114u: goto L_0035CBC0;
    case 115u: goto L_0035CBD0;
    case 116u: goto L_0035CBD8;
    case 117u: goto L_0035CBEC;
    case 118u: goto L_0035CBF4;
    case 119u: goto L_0035CC34;
    case 120u: goto L_0035CC6C;
    case 121u: goto L_0035CC88;
    case 122u: goto L_0035CC90;
    case 123u: goto L_0035CCC0;
    case 124u: goto L_0035CCD0;
    case 125u: goto L_0035CD38;
    case 126u: goto L_0035CD94;
    case 127u: goto L_0035CD9C;
    case 128u: goto L_0035CDBC;
    case 129u: goto L_0035CDD0;
    case 130u: goto L_0035CDF8;
    case 131u: goto L_0035CE50;
    case 132u: goto L_0035CE90;
    case 133u: goto L_0035CEC0;
    case 134u: goto L_0035CED8;
    case 135u: goto L_0035CEF4;
    case 136u: goto L_0035CF00;
    case 137u: goto L_0035CF10;
    case 138u: goto L_0035CF40;
    case 139u: goto L_0035CF60;
    case 140u: goto L_0035CF70;
    case 141u: goto L_0035CFA0;
    case 142u: goto L_0035CFA8;
    case 143u: goto L_0035CFC0;
    case 144u: goto L_0035CFD0;
    case 145u: goto L_0035D02C;
    case 146u: goto L_0035D03C;
    case 147u: goto L_0035D04C;
    case 148u: goto L_0035D060;
    case 149u: goto L_0035D090;
    case 150u: goto L_0035D0AC;
    case 151u: goto L_0035D0F8;
    case 152u: goto L_0035D108;
    case 153u: goto L_0035D118;
    case 154u: goto L_0035D128;
    case 155u: goto L_0035D138;
    case 156u: goto L_0035D150;
    case 157u: goto L_0035D190;
    case 158u: goto L_0035D1A0;
    case 159u: goto L_0035D1D0;
    case 160u: goto L_0035D234;
    case 161u: goto L_0035D274;
    case 162u: goto L_0035D284;
    case 163u: goto L_0035D298;
    case 164u: goto L_0035D2BC;
    case 165u: goto L_0035D300;
    case 166u: goto L_0035D374;
    case 167u: goto L_0035D3B0;
    case 168u: goto L_0035D3C4;
    case 169u: goto L_0035D448;
    case 170u: goto L_0035D45C;
    case 171u: goto L_0035D48C;
    case 172u: goto L_0035D4C4;
    case 173u: goto L_0035D4D0;
    case 174u: goto L_0035D514;
    case 175u: goto L_0035D544;
    case 176u: goto L_0035D558;
    case 177u: goto L_0035D58C;
    case 178u: goto L_0035D5B0;
    case 179u: goto L_0035D600;
    case 180u: goto L_0035D610;
    case 181u: goto L_0035D620;
    case 182u: goto L_0035D694;
    case 183u: goto L_0035D69C;
    case 184u: goto L_0035D6A4;
    case 185u: goto L_0035D6AC;
    case 186u: goto L_0035D6C4;
    case 187u: goto L_0035D6CC;
    case 188u: goto L_0035D6E4;
    case 189u: goto L_0035D6EC;
    case 190u: goto L_0035D704;
    case 191u: goto L_0035D70C;
    case 192u: goto L_0035D714;
    case 193u: goto L_0035D71C;
    case 194u: goto L_0035D734;
    case 195u: goto L_0035D73C;
    case 196u: goto L_0035D744;
    case 197u: goto L_0035D760;
    case 198u: goto L_0035D7E0;
    case 199u: goto L_0035D820;
    case 200u: goto L_0035D82C;
    case 201u: goto L_0035D850;
    case 202u: goto L_0035D864;
    case 203u: goto L_0035D870;
    case 204u: goto L_0035D880;
    case 205u: goto L_0035D890;
    case 206u: goto L_0035D8A0;
    case 207u: goto L_0035D8E0;
    case 208u: goto L_0035D8F0;
    case 209u: goto L_0035D900;
    case 210u: goto L_0035D914;
    case 211u: goto L_0035D920;
    case 212u: goto L_0035D9B0;
    case 213u: goto L_0035D9F8;
    case 214u: goto L_0035DA0C;
    case 215u: goto L_0035DA34;
    case 216u: goto L_0035DA44;
    case 217u: goto L_0035DA7C;
    case 218u: goto L_0035DA90;
    case 219u: goto L_0035DAA0;
    case 220u: goto L_0035DAD0;
    case 221u: goto L_0035DAE0;
    case 222u: goto L_0035DAF0;
    case 223u: goto L_0035DB24;
    case 224u: goto L_0035DB38;
    case 225u: goto L_0035DB50;
    case 226u: goto L_0035DBB8;
    case 227u: goto L_0035DBF4;
    case 228u: goto L_0035DBFC;
    case 229u: goto L_0035DC04;
    case 230u: goto L_0035DC68;
    case 231u: goto L_0035DCB4;
    case 232u: goto L_0035DCC4;
    case 233u: goto L_0035DCE8;
    case 234u: goto L_0035DCF8;
    case 235u: goto L_0035DD1C;
    case 236u: goto L_0035DD2C;
    case 237u: goto L_0035DD50;
    case 238u: goto L_0035DD60;
    case 239u: goto L_0035DD88;
    case 240u: goto L_0035DDA8;
    case 241u: goto L_0035DE38;
    case 242u: goto L_0035DE64;
    case 243u: goto L_0035DEA0;
    case 244u: goto L_0035DED0;
    case 245u: goto L_0035DEE4;
    case 246u: goto L_0035DEF0;
    case 247u: goto L_0035DF00;
    case 248u: goto L_0035DF40;
    case 249u: goto L_0035DF58;
    case 250u: goto L_0035DF6C;
    case 251u: goto L_0035DF78;
    case 252u: goto L_0035DF90;
    case 253u: goto L_0035DFA0;
    case 254u: goto L_0035DFB0;
    case 255u: goto L_0035DFBC;
    case 256u: goto L_0035DFE8;
    case 257u: goto L_0035E004;
    case 258u: goto L_0035E02C;
    case 259u: goto L_0035E040;
    case 260u: goto L_0035E050;
    case 261u: goto L_0035E100;
    case 262u: goto L_0035E160;
    case 263u: goto L_0035E178;
    case 264u: goto L_0035E19C;
    case 265u: goto L_0035E1B0;
    case 266u: goto L_0035E1BC;
    case 267u: goto L_0035E1C4;
    case 268u: goto L_0035E1CC;
    case 269u: goto L_0035E1E0;
    case 270u: goto L_0035E1F0;
    case 271u: goto L_0035E200;
    case 272u: goto L_0035E234;
    case 273u: goto L_0035E244;
    case 274u: goto L_0035E24C;
    case 275u: goto L_0035E260;
    case 276u: goto L_0035E26C;
    case 277u: goto L_0035E2EC;
    case 278u: goto L_0035E300;
    case 279u: goto L_0035E348;
    case 280u: goto L_0035E35C;
    case 281u: goto L_0035E384;
    case 282u: goto L_0035E394;
    case 283u: goto L_0035E3A8;
    case 284u: goto L_0035E3BC;
    case 285u: goto L_0035E3D0;
    case 286u: goto L_0035E440;
    case 287u: goto L_0035E448;
    case 288u: goto L_0035E480;
    case 289u: goto L_0035E494;
    case 290u: goto L_0035E4BC;
    case 291u: goto L_0035E50C;
    case 292u: goto L_0035E520;
    case 293u: goto L_0035E530;
    case 294u: goto L_0035E5E0;
    case 295u: goto L_0035E5E8;
    case 296u: goto L_0035E600;
    case 297u: goto L_0035E610;
    case 298u: goto L_0035E620;
    case 299u: goto L_0035E648;
    case 300u: goto L_0035E65C;
    case 301u: goto L_0035E688;
    case 302u: goto L_0035E6C0;
    case 303u: goto L_0035E6D0;
    case 304u: goto L_0035E71C;
    case 305u: goto L_0035E72C;
    case 306u: goto L_0035E73C;
    case 307u: goto L_0035E750;
    case 308u: goto L_0035E788;
    case 309u: goto L_0035E7C4;
    case 310u: goto L_0035E7F0;
    case 311u: goto L_0035E804;
    case 312u: goto L_0035E874;
    case 313u: goto L_0035E87C;
    case 314u: goto L_0035E884;
    case 315u: goto L_0035E88C;
    case 316u: goto L_0035E894;
    case 317u: goto L_0035E89C;
    case 318u: goto L_0035E8B0;
    case 319u: goto L_0035E8C0;
    case 320u: goto L_0035E8D0;
    case 321u: goto L_0035E908;
    case 322u: goto L_0035E918;
    case 323u: goto L_0035E928;
    case 324u: goto L_0035E930;
    case 325u: goto L_0035E940;
    case 326u: goto L_0035E948;
    case 327u: goto L_0035E958;
    case 328u: goto L_0035E968;
    case 329u: goto L_0035E978;
    case 330u: goto L_0035E9A4;
    case 331u: goto L_0035E9B8;
    case 332u: goto L_0035E9E4;
    case 333u: goto L_0035EA10;
    case 334u: goto L_0035EA1C;
    case 335u: goto L_0035EA30;
    case 336u: goto L_0035EA6C;
    case 337u: goto L_0035EA90;
    case 338u: goto L_0035EAA0;
    case 339u: goto L_0035EAA8;
    case 340u: goto L_0035EAC0;
    case 341u: goto L_0035EAD0;
    case 342u: goto L_0035EB10;
    case 343u: goto L_0035EB20;
    case 344u: goto L_0035EB30;
    case 345u: goto L_0035EB38;
    case 346u: goto L_0035EB4C;
    case 347u: goto L_0035EBF8;
    case 348u: goto L_0035EC10;
    case 349u: goto L_0035EC20;
    case 350u: goto L_0035EC54;
    case 351u: goto L_0035EC60;
    case 352u: goto L_0035EC88;
    case 353u: goto L_0035EC9C;
    case 354u: goto L_0035ECB0;
    case 355u: goto L_0035ECC0;
    case 356u: goto L_0035ECF4;
    case 357u: goto L_0035ED0C;
    case 358u: goto L_0035ED20;
    case 359u: goto L_0035ED5C;
    case 360u: goto L_0035ED74;
    case 361u: goto L_0035ED8C;
    case 362u: goto L_0035ED94;
    case 363u: goto L_0035EDEC;
    case 364u: goto L_0035EDF4;
    case 365u: goto L_0035EE28;
    case 366u: goto L_0035EE38;
    case 367u: goto L_0035EE5C;
    case 368u: goto L_0035EE6C;
    case 369u: goto L_0035EE94;
    case 370u: goto L_0035EEB8;
    case 371u: goto L_0035EF54;
    case 372u: goto L_0035EF74;
    case 373u: goto L_0035EF7C;
    case 374u: goto L_0035EFB0;
    case 375u: goto L_0035F000;
    case 376u: goto L_0035F010;
    case 377u: goto L_0035F020;
    case 378u: goto L_0035F030;
    case 379u: goto L_0035F070;
    case 380u: goto L_0035F080;
    case 381u: goto L_0035F090;
    case 382u: goto L_0035F098;
    case 383u: goto L_0035F0AC;
    case 384u: goto L_0035F0B8;
    case 385u: goto L_0035F0CC;
    case 386u: goto L_0035F110;
    case 387u: goto L_0035F124;
    case 388u: goto L_0035F164;
    case 389u: goto L_0035F178;
    case 390u: goto L_0035F190;
    case 391u: goto L_0035F1A4;
    case 392u: goto L_0035F1E4;
    case 393u: goto L_0035F1F4;
    case 394u: goto L_0035F204;
    case 395u: goto L_0035F20C;
    case 396u: goto L_0035F220;
    case 397u: goto L_0035F2BC;
    case 398u: goto L_0035F2D4;
    case 399u: goto L_0035F308;
    case 400u: goto L_0035F310;
    case 401u: goto L_0035F318;
    case 402u: goto L_0035F320;
    case 403u: goto L_0035F328;
    case 404u: goto L_0035F330;
    case 405u: goto L_0035F338;
    case 406u: goto L_0035F344;
    case 407u: goto L_0035F354;
    case 408u: goto L_0035F370;
    case 409u: goto L_0035F380;
    case 410u: goto L_0035F3C0;
    case 411u: goto L_0035F3D0;
    case 412u: goto L_0035F3E0;
    case 413u: goto L_0035F3F0;
    case 414u: goto L_0035F404;
    case 415u: goto L_0035F418;
    case 416u: goto L_0035F430;
    case 417u: goto L_0035F478;
    case 418u: goto L_0035F48C;
    case 419u: goto L_0035F4E4;
    case 420u: goto L_0035F4F4;
    case 421u: goto L_0035F504;
    case 422u: goto L_0035F514;
    case 423u: goto L_0035F528;
    case 424u: goto L_0035F538;
    case 425u: goto L_0035F548;
    case 426u: goto L_0035F55C;
    case 427u: goto L_0035F56C;
    case 428u: goto L_0035F584;
    case 429u: goto L_0035F598;
    case 430u: goto L_0035F5AC;
    case 431u: goto L_0035F5C0;
    case 432u: goto L_0035F5D0;
    case 433u: goto L_0035F62C;
    case 434u: goto L_0035F640;
    case 435u: goto L_0035F650;
    case 436u: goto L_0035F660;
    case 437u: goto L_0035F6AC;
    case 438u: goto L_0035F6BC;
    case 439u: goto L_0035F6CC;
    case 440u: goto L_0035F6DC;
    case 441u: goto L_0035F6E4;
    case 442u: goto L_0035F6F8;
    case 443u: goto L_0035F724;
    case 444u: goto L_0035F784;
    case 445u: goto L_0035F790;
    case 446u: goto L_0035F7DC;
    case 447u: goto L_0035F7EC;
    case 448u: goto L_0035F7FC;
    case 449u: goto L_0035F810;
    case 450u: goto L_0035F880;
    case 451u: goto L_0035F888;
    case 452u: goto L_0035F8C0;
    case 453u: goto L_0035F8D4;
    case 454u: goto L_0035F8FC;
    case 455u: goto L_0035F94C;
    case 456u: goto L_0035F960;
    case 457u: goto L_0035F970;
    case 458u: goto L_0035FA28;
    case 459u: goto L_0035FA30;
    case 460u: goto L_0035FA40;
    case 461u: goto L_0035FA50;
    case 462u: goto L_0035FAB0;
    case 463u: goto L_0035FAC0;
    case 464u: goto L_0035FB2C;
    case 465u: goto L_0035FB40;
    case 466u: goto L_0035FB50;
    case 467u: goto L_0035FB84;
    case 468u: goto L_0035FB94;
    case 469u: goto L_0035FBE0;
    case 470u: goto L_0035FBF0;
    case 471u: goto L_0035FC00;
    case 472u: goto L_0035FC28;
    case 473u: goto L_0035FC3C;
    case 474u: goto L_0035FC44;
    case 475u: goto L_0035FC54;
    case 476u: goto L_0035FC70;
    case 477u: goto L_0035FC78;
    case 478u: goto L_0035FC9C;
    case 479u: goto L_0035FCD0;
    case 480u: goto L_0035FCE4;
    case 481u: goto L_0035FD08;
    case 482u: goto L_0035FD20;
    case 483u: goto L_0035FD30;
    case 484u: goto L_0035FD70;
    case 485u: goto L_0035FD88;
    case 486u: goto L_0035FD98;
    case 487u: goto L_0035FE00;
    case 488u: goto L_0035FE08;
    case 489u: goto L_0035FE1C;
    case 490u: goto L_0035FE30;
    case 491u: goto L_0035FE50;
    case 492u: goto L_0035FE8C;
    case 493u: goto L_0035FED4;
    case 494u: goto L_0035FEE0;
    case 495u: goto L_0035FF18;
    case 496u: goto L_0035FF20;
    case 497u: goto L_0035FF28;
    case 498u: goto L_0035FF30;
    case 499u: goto L_0035FF38;
    case 500u: goto L_0035FF50;
    case 501u: goto L_0035FF70;
    case 502u: goto L_0035FFB0;
    case 503u: goto L_0035FFC0;
    case 504u: goto L_0035FFD0;
    default: bad_entry(c, 0x0035C000u); return;
    }
L_0035C000:
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C020u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0035C020u) [[unlikely]] return; }
L_0035C020:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035C228; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035C02C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C034u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035C034u) [[unlikely]] return; }
L_0035C034:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C224; } }
L_0035C03C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C044u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035C044u) [[unlikely]] return; }
L_0035C044:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035C224; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C07Cu); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035C07Cu) [[unlikely]] return; }
L_0035C07C:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C088u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x0035C088u) [[unlikely]] return; }
L_0035C088:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C224; } }
L_0035C090:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25784u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 5u);  if (t) { goto L_0035C0B0; } }
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26000u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035C0C0; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 1;
L_0035C0B0:
    st8((c.r[6].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035C224; } }
L_0035C0C0:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0D0u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035C0D0u) [[unlikely]] return; }
L_0035C0D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035C0E4u) [[unlikely]] return; }
L_0035C0E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C0F0u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036A140u; return; } if (c.pc != 0x0035C0F0u) [[unlikely]] return; }
L_0035C0F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C224; } }
L_0035C0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C100u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035C100u) [[unlikely]] return; }
L_0035C100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C10Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009A(c, 394u, depth + 1u); else { c.pc = 0x0036A140u; return; } if (c.pc != 0x0035C10Cu) [[unlikely]] return; }
L_0035C10C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035C224; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035C224; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035C1B4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C140; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C224; } }
L_0035C140:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 6u);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[1].w[0] - 6568u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[28].w[0] - 26004u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[3].w[0] + 640u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26004u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C184u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035C184u) [[unlikely]] return; }
L_0035C184:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26004u));
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[4], c.r[3].w[0] + 648u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1ACu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0035C1ACu) [[unlikely]] return; }
L_0035C1AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C224; } }
L_0035C1B4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[6], 0u + 6u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[1].w[0] - 6568u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[28].w[0] - 26004u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], c.r[3].w[0] + 640u);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26004u));
    set32(c.r[3], c.r[3].w[0] << 3);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C1FCu); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035C1FCu) [[unlikely]] return; }
L_0035C1FC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].d[0] = ld8((c.r[28].w[0] - 26004u));
    set32(c.r[2], c.r[2].w[0] - 6704u);
    set32(c.r[4], c.r[3].w[0] + 648u);
    set32(c.r[3], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] << 1);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C224u); set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0035C224u) [[unlikely]] return; }
L_0035C224:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035C228:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C230:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C240u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035C240u) [[unlikely]] return; }
L_0035C240:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C3EC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C2AC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C274; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035C3F0; } }
L_0035C274:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C284u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035C284u) [[unlikely]] return; }
L_0035C284:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C298u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035C298u) [[unlikely]] return; }
L_0035C298:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2A4u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009A(c, 429u, depth + 1u); else { c.pc = 0x0036A710u; return; } if (c.pc != 0x0035C2A4u) [[unlikely]] return; }
L_0035C2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C3EC; } }
L_0035C2AC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C2B8u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009A(c, 429u, depth + 1u); else { c.pc = 0x0036A710u; return; } if (c.pc != 0x0035C2B8u) [[unlikely]] return; }
L_0035C2B8:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035C3D4; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C3D4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035C3EC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0035C2EC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C3EC; } }
L_0035C2EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 6u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25784u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0035C39C; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C328; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C328; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C3EC; } }
L_0035C328:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26004u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6640u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C360; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C358u); set32(c.r[4], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035C358u) [[unlikely]] return; }
L_0035C358:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_0035C37C; } }
L_0035C360:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 24312u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C378u); set32(c.r[4], c.r[3].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035C378u) [[unlikely]] return; }
L_0035C378:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_0035C37C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 6608u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C38Cu); set32(c.r[4], c.r[3].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0035C38Cu) [[unlikely]] return; }
L_0035C38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C394u);  if (depth < kMaxDepth) unit_0099(c, 252u, depth + 1u); else { c.pc = 0x003664E0u; return; } if (c.pc != 0x0035C394u) [[unlikely]] return; }
L_0035C394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C3EC; } }
L_0035C39C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[2].w[0] - 24312u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3B0u); set32(c.r[4], c.r[3].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035C3B0u) [[unlikely]] return; }
L_0035C3B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 6608u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3C4u); set32(c.r[4], c.r[3].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0035C3C4u) [[unlikely]] return; }
L_0035C3C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C3CCu);  if (depth < kMaxDepth) unit_0099(c, 252u, depth + 1u); else { c.pc = 0x003664E0u; return; } if (c.pc != 0x0035C3CCu) [[unlikely]] return; }
L_0035C3CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C3EC; } }
L_0035C3D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
L_0035C3EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035C3F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035C400:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5235u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C488; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035C430; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035C4A0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035C430:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C438u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035C438u) [[unlikely]] return; }
L_0035C438:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C49C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 24850u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C458; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035C478; } }
L_0035C458:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C46Cu); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 251u, depth + 1u); else { c.pc = 0x003664C0u; return; } if (c.pc != 0x0035C46Cu) [[unlikely]] return; }
L_0035C46C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C49C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035C478:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C480u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035C480u) [[unlikely]] return; }
L_0035C480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C49C; } }
L_0035C488:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0035C49C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035C4A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C4B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035C5CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C584; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C520; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C4F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035C6DC; } }
L_0035C4F8:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C518u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0035C518u) [[unlikely]] return; }
L_0035C518:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C520:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035C6D8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C554u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035C554u) [[unlikely]] return; }
L_0035C554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C55Cu);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0035C55Cu) [[unlikely]] return; }
L_0035C55C:
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 81u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C570u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0035C570u) [[unlikely]] return; }
L_0035C570:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C57Cu); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x0035C57Cu) [[unlikely]] return; }
L_0035C57C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C584:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035C6D8; } }
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5B8u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 260u, depth + 1u); else { c.pc = 0x00366570u; return; } if (c.pc != 0x0035C5B8u) [[unlikely]] return; }
L_0035C5B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5C0u); set32(c.r[4], 0u + 15u);  if (depth < kMaxDepth) unit_009A(c, 342u, depth + 1u); else { c.pc = 0x00369B30u; return; } if (c.pc != 0x0035C5C0u) [[unlikely]] return; }
L_0035C5C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035C5CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C5D4u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035C5D4u) [[unlikely]] return; }
L_0035C5D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C6D8; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 24856u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C6A8; } }
    set32(c.r[2], 0u + 24864u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C690; } }
    set32(c.r[2], 0u + 24855u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C678; } }
    set32(c.r[2], 0u + 24854u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C660; } }
    set32(c.r[2], 0u + 24853u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C648; } }
    set32(c.r[2], 0u + 24852u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035C630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035C6D0; } }
L_0035C630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C638u);  if (depth < kMaxDepth) unit_0099(c, 267u, depth + 1u); else { c.pc = 0x003665E0u; return; } if (c.pc != 0x0035C638u) [[unlikely]] return; }
L_0035C638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C640u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C640u) [[unlikely]] return; }
L_0035C640:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C650u);  if (depth < kMaxDepth) unit_0099(c, 273u, depth + 1u); else { c.pc = 0x00366640u; return; } if (c.pc != 0x0035C650u) [[unlikely]] return; }
L_0035C650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C658u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C658u) [[unlikely]] return; }
L_0035C658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C668u);  if (depth < kMaxDepth) unit_0099(c, 279u, depth + 1u); else { c.pc = 0x003666A0u; return; } if (c.pc != 0x0035C668u) [[unlikely]] return; }
L_0035C668:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C670u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C670u) [[unlikely]] return; }
L_0035C670:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C678:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C680u);  if (depth < kMaxDepth) unit_0099(c, 285u, depth + 1u); else { c.pc = 0x00366700u; return; } if (c.pc != 0x0035C680u) [[unlikely]] return; }
L_0035C680:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C688u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C688u) [[unlikely]] return; }
L_0035C688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C698u);  if (depth < kMaxDepth) unit_0099(c, 291u, depth + 1u); else { c.pc = 0x00366760u; return; } if (c.pc != 0x0035C698u) [[unlikely]] return; }
L_0035C698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6A0u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C6A0u) [[unlikely]] return; }
L_0035C6A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
L_0035C6A8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6C4u); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C6C4u) [[unlikely]] return; }
L_0035C6C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035C6D8; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035C6D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C6D8u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035C6D8u) [[unlikely]] return; }
L_0035C6D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035C6DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035C6F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CAEC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035C750; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035C72C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035CB10; } }
L_0035C72C:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C73Cu); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 197u, depth + 1u); else { c.pc = 0x00368FE0u; return; } if (c.pc != 0x0035C73Cu) [[unlikely]] return; }
L_0035C73C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C744u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C744u) [[unlikely]] return; }
L_0035C744:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035C750:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C758u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035C758u) [[unlikely]] return; }
L_0035C758:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CB0C; } }
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[3], 0u + 24905u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CAB4; } }
    set32(c.r[3], 0u + 26705u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CA94; } }
    set32(c.r[3], 0u + 24901u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CA6C; } }
    set32(c.r[3], 0u + 24900u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035CA48; } }
    set32(c.r[3], 0u + 26724u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].sd[0] = static_cast<std::int32_t>(0x00B50000u);  goto L_0035C9F8; }
    set32(c.r[3], 0u + 26725u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C9DC; } }
    set32(c.r[3], 0u + 26723u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035C9B8; } }
    set32(c.r[2], 0u + 26722u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C9A8; } }
    set32(c.r[2], 0u + 26721u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C964; } }
    set32(c.r[2], 0u + 26640u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C934; } }
    set32(c.r[2], 0u + 24898u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C904; } }
    set32(c.r[2], 0u + 26626u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C850; } }
    set32(c.r[2], 0u + 26625u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_0035C808; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035CADC; } }
L_0035C808:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C810u);  if (depth < kMaxDepth) unit_009A(c, 192u, depth + 1u); else { c.pc = 0x00368F40u; return; } if (c.pc != 0x0035C810u) [[unlikely]] return; }
L_0035C810:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26008u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C838; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C828u); st8((c.r[28].w[0] - 26012u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 202u, depth + 1u); else { c.pc = 0x00369030u; return; } if (c.pc != 0x0035C828u) [[unlikely]] return; }
L_0035C828:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C830u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C830u) [[unlikely]] return; }
L_0035C830:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C838:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C840u);  if (depth < kMaxDepth) unit_0099(c, 426u, depth + 1u); else { c.pc = 0x00367180u; return; } if (c.pc != 0x0035C840u) [[unlikely]] return; }
L_0035C840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C848u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C848u) [[unlikely]] return; }
L_0035C848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C858u);  if (depth < kMaxDepth) unit_009A(c, 196u, depth + 1u); else { c.pc = 0x00368FB0u; return; } if (c.pc != 0x0035C858u) [[unlikely]] return; }
L_0035C858:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26012u));
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26008u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 26012u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26012u));
    c.r[1].d[0] = c.r[4].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035C888; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C880u);  if (depth < kMaxDepth) unit_009A(c, 202u, depth + 1u); else { c.pc = 0x00369030u; return; } if (c.pc != 0x0035C880u) [[unlikely]] return; }
L_0035C880:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 6512u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C8EC; } }
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[2].w[0] << 6);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 6960u);
    set32(c.r[4], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8B8u); set32(c.r[5], c.r[2].w[0] - 5744u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0035C8B8u) [[unlikely]] return; }
L_0035C8B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[2].w[0] - 10032u);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26008u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 6512u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8E0u); set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x0035C8E0u) [[unlikely]] return; }
L_0035C8E0:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 26008u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[28].w[0] - 26008u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035C8EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8F4u);  if (depth < kMaxDepth) unit_0099(c, 426u, depth + 1u); else { c.pc = 0x00367180u; return; } if (c.pc != 0x0035C8F4u) [[unlikely]] return; }
L_0035C8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C8FCu);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C8FCu) [[unlikely]] return; }
L_0035C8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C904:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C90Cu);  if (depth < kMaxDepth) unit_0099(c, 408u, depth + 1u); else { c.pc = 0x00366FD0u; return; } if (c.pc != 0x0035C90Cu) [[unlikely]] return; }
L_0035C90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C914u); set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));  if (depth < kMaxDepth) unit_0038(c, 217u, depth + 1u); else { c.pc = 0x001E2730u; return; } if (c.pc != 0x0035C914u) [[unlikely]] return; }
L_0035C914:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C91Cu);  if (depth < kMaxDepth) unit_0099(c, 431u, depth + 1u); else { c.pc = 0x003671D0u; return; } if (c.pc != 0x0035C91Cu) [[unlikely]] return; }
L_0035C91C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C924u);  if (depth < kMaxDepth) unit_009A(c, 289u, depth + 1u); else { c.pc = 0x00369740u; return; } if (c.pc != 0x0035C924u) [[unlikely]] return; }
L_0035C924:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C92Cu);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C92Cu) [[unlikely]] return; }
L_0035C92C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C934:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C93Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035C93Cu) [[unlikely]] return; }
L_0035C93C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035C94C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C94Cu);  if (depth < kMaxDepth) unit_009A(c, 265u, depth + 1u); else { c.pc = 0x00369500u; return; } if (c.pc != 0x0035C94Cu) [[unlikely]] return; }
L_0035C94C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C954u);  if (depth < kMaxDepth) unit_009A(c, 221u, depth + 1u); else { c.pc = 0x003691B0u; return; } if (c.pc != 0x0035C954u) [[unlikely]] return; }
L_0035C954:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C95Cu);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C95Cu) [[unlikely]] return; }
L_0035C95C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C964:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C96Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035C96Cu) [[unlikely]] return; }
L_0035C96C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035C990; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C980u); st8((c.r[28].w[0] - 26036u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 437u, depth + 1u); else { c.pc = 0x00367230u; return; } if (c.pc != 0x0035C980u) [[unlikely]] return; }
L_0035C980:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C988u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035C988u) [[unlikely]] return; }
L_0035C988:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C990:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9A0u); st32((c.r[2].w[0] + 8112u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_009A(c, 208u, depth + 1u); else { c.pc = 0x003690A0u; return; } if (c.pc != 0x0035C9A0u) [[unlikely]] return; }
L_0035C9A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9B0u);  if (depth < kMaxDepth) unit_009A(c, 209u, depth + 1u); else { c.pc = 0x003690C0u; return; } if (c.pc != 0x0035C9B0u) [[unlikely]] return; }
L_0035C9B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C9B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 8120u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8193ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035CB0C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9D4u);  if (depth < kMaxDepth) unit_009A(c, 213u, depth + 1u); else { c.pc = 0x00369110u; return; } if (c.pc != 0x0035C9D4u) [[unlikely]] return; }
L_0035C9D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035C9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9E4u);  if (depth < kMaxDepth) unit_009A(c, 217u, depth + 1u); else { c.pc = 0x00369170u; return; } if (c.pc != 0x0035C9E4u) [[unlikely]] return; }
L_0035C9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035C9ECu);  if (depth < kMaxDepth) unit_009A(c, 229u, depth + 1u); else { c.pc = 0x00369240u; return; } if (c.pc != 0x0035C9ECu) [[unlikely]] return; }
L_0035C9EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00B50000u);
    c.budget -= 1;
L_0035C9F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA00u);  if (depth < kMaxDepth) unit_009E(c, 59u, depth + 1u); else { c.pc = 0x00378600u; return; } if (c.pc != 0x0035CA00u) [[unlikely]] return; }
L_0035CA00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035CA18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA10u);  if (depth < kMaxDepth) unit_009A(c, 221u, depth + 1u); else { c.pc = 0x003691B0u; return; } if (c.pc != 0x0035CA10u) [[unlikely]] return; }
L_0035CA10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035CA18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA20u);  if (depth < kMaxDepth) unit_000E(c, 172u, depth + 1u); else { c.pc = 0x0013A690u; return; } if (c.pc != 0x0035CA20u) [[unlikely]] return; }
L_0035CA20:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[4], c.r[2].w[0] + 5193u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA34u); set32(c.r[5], c.r[2].w[0] + 5209u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0035CA34u) [[unlikely]] return; }
L_0035CA34:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA40u); st8((c.r[28].w[0] - 26036u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 437u, depth + 1u); else { c.pc = 0x00367230u; return; } if (c.pc != 0x0035CA40u) [[unlikely]] return; }
L_0035CA40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035CA48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA50u);  if (depth < kMaxDepth) unit_0099(c, 409u, depth + 1u); else { c.pc = 0x00366FF0u; return; } if (c.pc != 0x0035CA50u) [[unlikely]] return; }
L_0035CA50:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA5Cu); st8((c.r[28].w[0] - 26036u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 443u, depth + 1u); else { c.pc = 0x003672A0u; return; } if (c.pc != 0x0035CA5Cu) [[unlikely]] return; }
L_0035CA5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA64u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035CA64u) [[unlikely]] return; }
L_0035CA64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035CA6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA74u);  if (depth < kMaxDepth) unit_0099(c, 413u, depth + 1u); else { c.pc = 0x00367060u; return; } if (c.pc != 0x0035CA74u) [[unlikely]] return; }
L_0035CA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA7Cu);  if (depth < kMaxDepth) unit_0099(c, 449u, depth + 1u); else { c.pc = 0x00367310u; return; } if (c.pc != 0x0035CA7Cu) [[unlikely]] return; }
L_0035CA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA84u);  if (depth < kMaxDepth) unit_009A(c, 246u, depth + 1u); else { c.pc = 0x003693A0u; return; } if (c.pc != 0x0035CA84u) [[unlikely]] return; }
L_0035CA84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA8Cu);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035CA8Cu) [[unlikely]] return; }
L_0035CA8C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035CA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CA9Cu);  if (depth < kMaxDepth) unit_009A(c, 237u, depth + 1u); else { c.pc = 0x003692C0u; return; } if (c.pc != 0x0035CA9Cu) [[unlikely]] return; }
L_0035CA9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAA4u);  if (depth < kMaxDepth) unit_0099(c, 205u, depth + 1u); else { c.pc = 0x00366150u; return; } if (c.pc != 0x0035CAA4u) [[unlikely]] return; }
L_0035CAA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAACu);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035CAACu) [[unlikely]] return; }
L_0035CAAC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035CAB4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CABCu);  if (depth < kMaxDepth) unit_0099(c, 213u, depth + 1u); else { c.pc = 0x003661F0u; return; } if (c.pc != 0x0035CABCu) [[unlikely]] return; }
L_0035CABC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAC4u);  if (depth < kMaxDepth) unit_009A(c, 345u, depth + 1u); else { c.pc = 0x00369C00u; return; } if (c.pc != 0x0035CAC4u) [[unlikely]] return; }
L_0035CAC4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035CB0C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035CADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAE4u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035CAE4u) [[unlikely]] return; }
L_0035CAE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CB0C; } }
L_0035CAEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CAF4u);  if (depth < kMaxDepth) unit_009A(c, 346u, depth + 1u); else { c.pc = 0x00369C50u; return; } if (c.pc != 0x0035CAF4u) [[unlikely]] return; }
L_0035CAF4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0035CB0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035CB10:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035CB20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB30u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035CB30u) [[unlikely]] return; }
L_0035CB30:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.r[1].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035CCA8; } }
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] - 24304u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035CB64:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CB84u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0035CB84u) [[unlikely]] return; }
L_0035CB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035CCAC; } }
L_0035CB8C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0035CCA8; } }
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035CCA8; } }
L_0035CBC0:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBD0u); st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035CBD0u) [[unlikely]] return; }
L_0035CBD0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBD8u);  if (depth < kMaxDepth) unit_009A(c, 356u, depth + 1u); else { c.pc = 0x00369D60u; return; } if (c.pc != 0x0035CBD8u) [[unlikely]] return; }
L_0035CBD8:
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CBECu); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x0035CBECu) [[unlikely]] return; }
L_0035CBEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CCA8; } }
L_0035CBF4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0035CCA8; } }
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[4], 0u + 300u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0035CCA8; } }
L_0035CC34:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_0035CC74; } }
    c.r[1].d[0] = c.r[3].sd[0] < 240ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035CCA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC6Cu); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035CC6Cu) [[unlikely]] return; }
L_0035CC6C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035CCA8; } }
L_0035CC74:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035CCA8; } }
L_0035CC88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CC90u);  if (depth < kMaxDepth) unit_0099(c, 421u, depth + 1u); else { c.pc = 0x00367130u; return; } if (c.pc != 0x0035CC90u) [[unlikely]] return; }
L_0035CC90:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_0035CCA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035CCAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CCC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CCD0u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035CCD0u) [[unlikely]] return; }
L_0035CCD0:
    set32(c.r[7], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 4u);
    c.r[5].d[0] = ld8((c.r[7].w[0] + 5235u));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[4].d[0]; set32(c.r[3], c.r[7].w[0] + 5235u);  if (t) { goto L_0035CE88; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[6].d[0];  if (t) { goto L_0035CE58; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0035CE0C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0035CD40; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035CD18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035CF04; } }
L_0035CD18:
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD38u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0035CD38u) [[unlikely]] return; }
L_0035CD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CF00; } }
L_0035CD40:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0035CF00; } }
    c.r[5].d[0] = ld8((c.r[7].w[0] + 666u));
    c.r[1].d[0] = c.r[5].sd[0] < 15ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_0035CE04; } }
    c.r[4].d[0] = ld8((c.r[7].w[0] + 5320u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0035CE00; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25784u));
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[6].d[0];  if (t) { goto L_0035CE00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD94u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035CD94u) [[unlikely]] return; }
L_0035CD94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CD9Cu);  if (depth < kMaxDepth) unit_009D(c, 283u, depth + 1u); else { c.pc = 0x00376BE0u; return; } if (c.pc != 0x0035CD9Cu) [[unlikely]] return; }
L_0035CD9C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[2].w[0] + 666u));
    c.r[2].d[0] = ld8((c.r[2].w[0] + 5320u));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0035CDC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDBCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 487u, depth + 1u); else { c.pc = 0x0036AFE0u; return; } if (c.pc != 0x0035CDBCu) [[unlikely]] return; }
L_0035CDBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_0035CDD4; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0035CDC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDD0u);  if (depth < kMaxDepth) unit_009A(c, 487u, depth + 1u); else { c.pc = 0x0036AFE0u; return; } if (c.pc != 0x0035CDD0u) [[unlikely]] return; }
L_0035CDD0:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_0035CDD4:
    set32(c.r[2], 0u + 300u);
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5235u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CDF8u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x0035CDF8u) [[unlikely]] return; }
L_0035CDF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CF00; } }
L_0035CE00:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_0035CE04:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035CF00; } }
L_0035CE0C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] >= 0;  if (t) { goto L_0035CF00; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[5], 0u + 20u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE50u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_009E(c, 30u, depth + 1u); else { c.pc = 0x00378410u; return; } if (c.pc != 0x0035CE50u) [[unlikely]] return; }
L_0035CE50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035CF00; } }
L_0035CE58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[4], c.r[4].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[4].d[0] << 48;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 9;
    { const bool t = c.r[4].sd[0] > 0;  if (t) { goto L_0035CF00; } }
    c.r[2].d[0] = ld8((c.r[3].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0035CE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CE90u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035CE90u) [[unlikely]] return; }
L_0035CE90:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 3u);
    st8((c.r[28].w[0] - 25784u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 666u));
    st8((c.r[3].w[0] + 5320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25872u)));
    c.budget -= 8;
    if (c.r[4].d[0] == 0ull) { set32(c.r[4], 0u + 16u);  goto L_0035CED0; }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = ld16((c.r[2].w[0] + 8158u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEC0u); c.r[5].d[0] = ld16((c.r[2].w[0] + 8160u));  if (depth < kMaxDepth) unit_009A(c, 560u, depth + 1u); else { c.pc = 0x0036BC00u; return; } if (c.pc != 0x0035CEC0u) [[unlikely]] return; }
L_0035CEC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25880u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st32((c.r[28].w[0] - 25880u), c.r[2].w[0]);
    set32(c.r[4], 0u + 16u);
    c.budget -= 4;
L_0035CED0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CED8u); st8((c.r[28].w[0] - 24964u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 27u, depth + 1u); else { c.pc = 0x003783E0u; return; } if (c.pc != 0x0035CED8u) [[unlikely]] return; }
L_0035CED8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24880u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24884u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CEF4u); st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0097(c, 197u, depth + 1u); else { c.pc = 0x0035D760u; return; } if (c.pc != 0x0035CEF4u) [[unlikely]] return; }
L_0035CEF4:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF00u); c.r[4].sd[0] = static_cast<std::int32_t>(0xFF000000u);  if (depth < kMaxDepth) unit_009E(c, 29u, depth + 1u); else { c.pc = 0x00378400u; return; } if (c.pc != 0x0035CF00u) [[unlikely]] return; }
L_0035CF00:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035CF04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CF10:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0098(c, 386u, depth); }
L_0035CF40:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0098(c, 371u, depth); }
L_0035CF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CF70u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035CF70u) [[unlikely]] return; }
L_0035CF70:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5240u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFA0u); st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009B(c, 92u, depth + 1u); else { c.pc = 0x0036CF20u; return; } if (c.pc != 0x0035CFA0u) [[unlikely]] return; }
L_0035CFA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFA8u);  if (depth < kMaxDepth) unit_009B(c, 340u, depth + 1u); else { c.pc = 0x0036F070u; return; } if (c.pc != 0x0035CFA8u) [[unlikely]] return; }
L_0035CFA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035CFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035CFD0u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035CFD0u) [[unlikely]] return; }
L_0035CFD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5232u));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D044; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D034; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D024; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035D050; } }
L_0035D024:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D02Cu);  if (depth < kMaxDepth) unit_0097(c, 262u, depth + 1u); else { c.pc = 0x0035E160u; return; } if (c.pc != 0x0035D02Cu) [[unlikely]] return; }
L_0035D02C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D04C; } }
L_0035D034:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D03Cu);  if (depth < kMaxDepth) unit_0097(c, 310u, depth + 1u); else { c.pc = 0x0035E7F0u; return; } if (c.pc != 0x0035D03Cu) [[unlikely]] return; }
L_0035D03C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D04C; } }
L_0035D044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D04Cu);  if (depth < kMaxDepth) unit_0097(c, 494u, depth + 1u); else { c.pc = 0x0035FEE0u; return; } if (c.pc != 0x0035D04Cu) [[unlikely]] return; }
L_0035D04C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035D050:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D060:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  [[clang::musttail]] return unit_0098(c, 397u, depth); }
L_0035D090:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[5], 0u + 42u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035D0ACu) [[unlikely]] return; }
L_0035D0AC:
    set32(c.r[3], 0u + 4u);
    c.r[4].d[0] = c.r[16].d[0] & 255ull;
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D130; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D120; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D110; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D100; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D0F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0035D13C; } }
L_0035D0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D0F8u);  if (depth < kMaxDepth) unit_0097(c, 143u, depth + 1u); else { c.pc = 0x0035CFC0u; return; } if (c.pc != 0x0035D0F8u) [[unlikely]] return; }
L_0035D0F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D138; } }
L_0035D100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D108u);  if (depth < kMaxDepth) unit_0097(c, 139u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035D108u) [[unlikely]] return; }
L_0035D108:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D138; } }
L_0035D110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D118u);  if (depth < kMaxDepth) unit_0097(c, 148u, depth + 1u); else { c.pc = 0x0035D060u; return; } if (c.pc != 0x0035D118u) [[unlikely]] return; }
L_0035D118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D138; } }
L_0035D120:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D128u);  if (depth < kMaxDepth) unit_0097(c, 137u, depth + 1u); else { c.pc = 0x0035CF10u; return; } if (c.pc != 0x0035D128u) [[unlikely]] return; }
L_0035D128:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D138; } }
L_0035D130:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D138u);  if (depth < kMaxDepth) unit_0097(c, 138u, depth + 1u); else { c.pc = 0x0035CF40u; return; } if (c.pc != 0x0035D138u) [[unlikely]] return; }
L_0035D138:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035D13C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035D150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + 5228u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5228u));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D198; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D180; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035D1C4; } }
L_0035D180:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D190u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 503u, depth + 1u); else { c.pc = 0x003678A0u; return; } if (c.pc != 0x0035D190u) [[unlikely]] return; }
L_0035D190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D1C0; } }
L_0035D198:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D1A0u);  if (depth < kMaxDepth) unit_0097(c, 197u, depth + 1u); else { c.pc = 0x0035D760u; return; } if (c.pc != 0x0035D1A0u) [[unlikely]] return; }
L_0035D1A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5248u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5247u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
L_0035D1C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035D1C4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D1D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 5228u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[6].w[0] + 5228u);  if (t) { goto L_0035D2C4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { c.r[4].d[0] = 0ull | 32768ull;  goto L_0035D26C; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035D23C; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D214; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035D2F0; } }
L_0035D214:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D234u); st16((c.r[2].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0035D234u) [[unlikely]] return; }
L_0035D234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D2EC; } }
L_0035D23C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 5230u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5230u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035D2EC; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035D2EC; } }
    c.r[4].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_0035D26C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D274u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D274u) [[unlikely]] return; }
L_0035D274:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_0035D290; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D284u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D284u) [[unlikely]] return; }
L_0035D284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D2EC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 1;
L_0035D290:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D298u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035D298u) [[unlikely]] return; }
L_0035D298:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 16u);
    set32(c.r[4], 0u + 31u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5228u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5228u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D2BCu); st16((c.r[2].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035D2BCu) [[unlikely]] return; }
L_0035D2BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D2EC; } }
L_0035D2C4:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 5230u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[6].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5230u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035D2EC; } }
    st8((c.r[4].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    c.budget -= 3;
L_0035D2EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035D2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D300:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5228u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 5228u);  if (t) { goto L_0035D494; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 32u);  goto L_0035D3A8; }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[5].d[0];  if (t) { goto L_0035D374; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D344; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035D4C8; } }
L_0035D344:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 32u);
    set32(c.r[4], 0u + 33u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5229u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D374u); set32(c.r[5], c.r[2].w[0] + 5229u);  if (depth < kMaxDepth) unit_0094(c, 201u, depth + 1u); else { c.pc = 0x00352570u; return; } if (c.pc != 0x0035D374u) [[unlikely]] return; }
L_0035D374:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5230u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5230u)));
    c.budget -= 8;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035D4C4; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5228u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035D4C4; } }
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0035D3A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3B0u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D3B0u) [[unlikely]] return; }
L_0035D3B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0035D440; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D3C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035D3C4u) [[unlikely]] return; }
L_0035D3C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5511u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5229u));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035D420; } }
    set32(c.r[3], 0u + 9u);
    st8((c.r[5].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 16;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035D4C4; } }
L_0035D420:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5228u));
    set32(c.r[4], 0u + 16u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5228u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 5230u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0035D4C4; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0035D440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D448u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D448u) [[unlikely]] return; }
L_0035D448:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D478; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D45Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035D45Cu) [[unlikely]] return; }
L_0035D45C:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5228u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5228u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 5230u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035D4C4; } }
L_0035D478:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D48Cu); set32(c.r[4], c.r[2].w[0] + 5229u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0035D48Cu) [[unlikely]] return; }
L_0035D48C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D4C4; } }
L_0035D494:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 5230u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 5230u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5230u)));
    c.budget -= 7;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035D4C4; } }
    st8((c.r[4].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 33u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D4C4u); st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035D4C4u) [[unlikely]] return; }
L_0035D4C4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035D4C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D4D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18784u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5232u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 12;
    { const bool t = c.r[16].d[0] != 0ull;  if (t) { goto L_0035D508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0035D598; } }
L_0035D508:
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5233u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D514u); set32(c.r[4], 0u + 128u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D514u) [[unlikely]] return; }
L_0035D514:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 16u);  if (t) { goto L_0035D550; } }
    set32(c.r[2], c.r[17].w[0] - 1u);
    c.r[17].d[0] = c.r[2].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[17].sd[0] >= 0; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0035D53C; } }
    c.r[17].d[0] = c.r[16].d[0] << 56;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 3;
L_0035D53C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D544u);  if (depth < kMaxDepth) unit_0097(c, 149u, depth + 1u); else { c.pc = 0x0035D090u; return; } if (c.pc != 0x0035D544u) [[unlikely]] return; }
L_0035D544:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D598; } }
    set32(c.r[4], 0u + 16u);
    c.budget -= 1;
L_0035D550:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D558u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D558u) [[unlikely]] return; }
L_0035D558:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0035D598; } }
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[17].d[0] = c.r[3].d[0] << 56;
    c.r[2].d[0] = c.r[16].d[0] & 255ull;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < c.r[17].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[17].d[0] & 255ull;  if (t) { goto L_0035D584; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[4].d[0] = c.r[17].d[0] & 255ull;
    c.budget -= 2;
L_0035D584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D58Cu);  if (depth < kMaxDepth) unit_0097(c, 149u, depth + 1u); else { c.pc = 0x0035D090u; return; } if (c.pc != 0x0035D58Cu) [[unlikely]] return; }
L_0035D58C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D598; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0035D598:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035D5B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5494u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D630; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25320u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D630; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25892u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D630; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5225u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D630; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 5226u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D600u); c.r[4].d[0] = 0ull | 32768ull;  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035D600u) [[unlikely]] return; }
L_0035D600:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D618; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D610u);  if (depth < kMaxDepth) unit_0094(c, 166u, depth + 1u); else { c.pc = 0x00351E90u; return; } if (c.pc != 0x0035D610u) [[unlikely]] return; }
L_0035D610:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_0035D634; } }
L_0035D618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D620u);  if (depth < kMaxDepth) unit_0097(c, 173u, depth + 1u); else { c.pc = 0x0035D4D0u; return; } if (c.pc != 0x0035D620u) [[unlikely]] return; }
L_0035D620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D630; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D754; } }
L_0035D630:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_0035D634:
    set32(c.r[3], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5225u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035D668; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035D660; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D660; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D754; } }
L_0035D660:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5228u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035D754; } }
L_0035D668:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5226u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 5226u);  if (t) { goto L_0035D744; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 24272u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035D694:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D69Cu);  if (depth < kMaxDepth) unit_0097(c, 156u, depth + 1u); else { c.pc = 0x0035D150u; return; } if (c.pc != 0x0035D69Cu) [[unlikely]] return; }
L_0035D69C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D754; } }
L_0035D6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6ACu);  if (depth < kMaxDepth) unit_0097(c, 137u, depth + 1u); else { c.pc = 0x0035CF10u; return; } if (c.pc != 0x0035D6ACu) [[unlikely]] return; }
L_0035D6AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035D754; } }
L_0035D6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6CCu);  if (depth < kMaxDepth) unit_0097(c, 139u, depth + 1u); else { c.pc = 0x0035CF60u; return; } if (c.pc != 0x0035D6CCu) [[unlikely]] return; }
L_0035D6CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035D754; } }
L_0035D6E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D6ECu);  if (depth < kMaxDepth) unit_0097(c, 138u, depth + 1u); else { c.pc = 0x0035CF40u; return; } if (c.pc != 0x0035D6ECu) [[unlikely]] return; }
L_0035D6EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035D754; } }
L_0035D704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D70Cu);  if (depth < kMaxDepth) unit_0097(c, 165u, depth + 1u); else { c.pc = 0x0035D300u; return; } if (c.pc != 0x0035D70Cu) [[unlikely]] return; }
L_0035D70C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D754; } }
L_0035D714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D71Cu);  if (depth < kMaxDepth) unit_0097(c, 148u, depth + 1u); else { c.pc = 0x0035D060u; return; } if (c.pc != 0x0035D71Cu) [[unlikely]] return; }
L_0035D71C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    st16((c.r[3].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035D754; } }
L_0035D734:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D73Cu);  if (depth < kMaxDepth) unit_0097(c, 159u, depth + 1u); else { c.pc = 0x0035D1D0u; return; } if (c.pc != 0x0035D73Cu) [[unlikely]] return; }
L_0035D73C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0035D754; } }
L_0035D744:
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0035D754:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D760:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[7], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43AF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 32768ull;
    c.r[5].sd[0] = static_cast<std::int32_t>(0x431D0000u);
    st8((c.r[6].w[0] + 5232u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5246u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[3].w[0] + 8132u), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[3].w[0] + 8136u), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 8140u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 31;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 4932u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035D7E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[7], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 15040u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[1].w[0] + 24880u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24884u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[6], 0u + 9840u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D820u); st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035D820u) [[unlikely]] return; }
L_0035D820:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 15040u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_0035D82C:
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 332u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 656u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035D82Cu | kUnwind; return; } goto L_0035D82C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D850u);  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035D850u) [[unlikely]] return; }
L_0035D850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D864u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035D864u) [[unlikely]] return; }
L_0035D864:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D870u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 416u, depth + 1u); else { c.pc = 0x00373C30u; return; } if (c.pc != 0x0035D870u) [[unlikely]] return; }
L_0035D870:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035D880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D890u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035D890u) [[unlikely]] return; }
L_0035D890:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035D9A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8A0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035D8A0u) [[unlikely]] return; }
L_0035D8A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035D914; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25092u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D8F8; } }
    set32(c.r[2], 0u + 25094u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D8E8; } }
    set32(c.r[2], 0u + 25093u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035D8D8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035D90C; } }
L_0035D8D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8E0u);  if (depth < kMaxDepth) unit_0099(c, 468u, depth + 1u); else { c.pc = 0x00367500u; return; } if (c.pc != 0x0035D8E0u) [[unlikely]] return; }
L_0035D8E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D914; } }
L_0035D8E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D8F0u);  if (depth < kMaxDepth) unit_0099(c, 471u, depth + 1u); else { c.pc = 0x00367590u; return; } if (c.pc != 0x0035D8F0u) [[unlikely]] return; }
L_0035D8F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D914; } }
L_0035D8F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D900u);  if (depth < kMaxDepth) unit_0099(c, 465u, depth + 1u); else { c.pc = 0x00367470u; return; } if (c.pc != 0x0035D900u) [[unlikely]] return; }
L_0035D900:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035D914; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035D90C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D914u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035D914u) [[unlikely]] return; }
L_0035D914:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D920u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 416u, depth + 1u); else { c.pc = 0x00373C30u; return; } if (c.pc != 0x0035D920u) [[unlikely]] return; }
L_0035D920:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035D9A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 6568u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035D944; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_0035D980; } }
L_0035D944:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5247u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035D9A4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_0035D980:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 6568u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24880u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 9;
L_0035D9A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035D9B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035DA04; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035D9E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035DA80; } }
L_0035D9E0:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035D9F8u); c.r[4].d[0] = ld8((c.r[1].w[0] + 24880u));  if (depth < kMaxDepth) unit_0099(c, 497u, depth + 1u); else { c.pc = 0x00367830u; return; } if (c.pc != 0x0035D9F8u) [[unlikely]] return; }
L_0035D9F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DA7C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035DA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA0Cu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035DA0Cu) [[unlikely]] return; }
L_0035DA0C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DA7C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25095u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DA2C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035DA74; } }
L_0035DA2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA34u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035DA34u) [[unlikely]] return; }
L_0035DA34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DA4C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA44u);  if (depth < kMaxDepth) unit_0097(c, 261u, depth + 1u); else { c.pc = 0x0035E100u; return; } if (c.pc != 0x0035DA44u) [[unlikely]] return; }
L_0035DA44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DA7C; } }
L_0035DA4C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035DA7C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035DA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DA7Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035DA7Cu) [[unlikely]] return; }
L_0035DA7C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035DA80:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DA90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAA0u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035DAA0u) [[unlikely]] return; }
L_0035DAA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    st8((c.r[28].w[0] - 25972u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAD0u); st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 480u, depth + 1u); else { c.pc = 0x00367700u; return; } if (c.pc != 0x0035DAD0u) [[unlikely]] return; }
L_0035DAD0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035DAE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DAF0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035DAF0u) [[unlikely]] return; }
L_0035DAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DB38; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25091u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DB10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035DB30; } }
L_0035DB10:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB24u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 464u, depth + 1u); else { c.pc = 0x00367450u; return; } if (c.pc != 0x0035DB24u) [[unlikely]] return; }
L_0035DB24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035DB3C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035DB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DB38u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035DB38u) [[unlikely]] return; }
L_0035DB38:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035DB3C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035DB50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[6], c.r[4].w[0] + 5235u);  if (t) { goto L_0035DE1C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_0035DC60; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DBDC; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035DB98; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DE2C; } }
L_0035DB98:
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] + 15040u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0035DBB8:
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[4].sd[0] < 30ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 328u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DBB8u | kUnwind; return; } goto L_0035DBB8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));
    c.budget -= 2;
L_0035DBDC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBF4u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0099(c, 485u, depth + 1u); else { c.pc = 0x00367750u; return; } if (c.pc != 0x0035DBF4u) [[unlikely]] return; }
L_0035DBF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DBFCu); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0099(c, 491u, depth + 1u); else { c.pc = 0x003677C0u; return; } if (c.pc != 0x0035DBFCu) [[unlikely]] return; }
L_0035DBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC04u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0099(c, 516u, depth + 1u); else { c.pc = 0x00367980u; return; } if (c.pc != 0x0035DC04u) [[unlikely]] return; }
L_0035DC04:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    set32(c.r[4], c.r[16].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 24882u));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].d[0] = c.r[2].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);  if (t) { goto L_0035DC40; } }
    c.r[1].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035DE2C; } }
L_0035DC40:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035DE2C; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_0035DC60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DC68u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035DC68u) [[unlikely]] return; }
L_0035DC68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035DE2C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 25098u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DD48; } }
    set32(c.r[2], 0u + 25092u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DD14; } }
    set32(c.r[2], 0u + 25094u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DCE0; } }
    set32(c.r[2], 0u + 25093u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035DCAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_0035DD80; } }
L_0035DCAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCB4u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035DCB4u) [[unlikely]] return; }
L_0035DCB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DCCC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCC4u);  if (depth < kMaxDepth) unit_0099(c, 468u, depth + 1u); else { c.pc = 0x00367500u; return; } if (c.pc != 0x0035DCC4u) [[unlikely]] return; }
L_0035DCC4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DD88; } }
L_0035DCCC:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035DE90; } }
L_0035DCE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCE8u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035DCE8u) [[unlikely]] return; }
L_0035DCE8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD00; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DCF8u);  if (depth < kMaxDepth) unit_0099(c, 471u, depth + 1u); else { c.pc = 0x00367590u; return; } if (c.pc != 0x0035DCF8u) [[unlikely]] return; }
L_0035DCF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DD88; } }
L_0035DD00:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035DE90; } }
L_0035DD14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD1Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035DD1Cu) [[unlikely]] return; }
L_0035DD1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD2Cu);  if (depth < kMaxDepth) unit_0099(c, 465u, depth + 1u); else { c.pc = 0x00367470u; return; } if (c.pc != 0x0035DD2Cu) [[unlikely]] return; }
L_0035DD2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DD88; } }
L_0035DD34:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035DE90; } }
L_0035DD48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD50u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035DD50u) [[unlikely]] return; }
L_0035DD50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DD68; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD60u);  if (depth < kMaxDepth) unit_0099(c, 477u, depth + 1u); else { c.pc = 0x00367670u; return; } if (c.pc != 0x0035DD60u) [[unlikely]] return; }
L_0035DD60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035DD88; } }
L_0035DD68:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035DE90; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_0035DD80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DD88u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035DD88u) [[unlikely]] return; }
L_0035DD88:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    c.r[6].d[0] = ld16((c.r[1].w[0] + 24882u));
    set32(c.r[7], 0u + 1u);
    st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 15040u);
    c.budget -= 8;
L_0035DDA8:
    c.r[1].d[0] = c.r[6].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035DE00; } }
    set32(c.r[2], c.r[5].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] - 322u));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035DDE4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0035DE00; } }
L_0035DDE4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25976u)));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[2].d[0] = c.r[8].sd[0] < 30ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035DDA8u | kUnwind; return; } goto L_0035DDA8; } }
L_0035DE00:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0035DE2C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0035DE2C; } }
L_0035DE1C:
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0035DE2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE38u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 416u, depth + 1u); else { c.pc = 0x00373C30u; return; } if (c.pc != 0x0035DE38u) [[unlikely]] return; }
L_0035DE38:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035DE90; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 6568u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035DE5C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_0035DE70; } }
L_0035DE5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DE64u);  if (depth < kMaxDepth) unit_0097(c, 247u, depth + 1u); else { c.pc = 0x0035DF00u; return; } if (c.pc != 0x0035DE64u) [[unlikely]] return; }
L_0035DE64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0035DE94; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_0035DE70:
    set32(c.r[4], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 6568u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24880u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
L_0035DE90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035DE94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035DEA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[1].w[0] + 24880u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24884u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DED0u); st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035DED0u) [[unlikely]] return; }
L_0035DED0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEE4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035DEE4u) [[unlikely]] return; }
L_0035DEE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DEF0u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009C(c, 416u, depth + 1u); else { c.pc = 0x00373C30u; return; } if (c.pc != 0x0035DEF0u) [[unlikely]] return; }
L_0035DEF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035DF00:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5247u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035DF40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF58u); st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035DF58u) [[unlikely]] return; }
L_0035DF58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF6Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035DF6Cu) [[unlikely]] return; }
L_0035DF6C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DF78u); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009A(c, 491u, depth + 1u); else { c.pc = 0x0036B090u; return; } if (c.pc != 0x0035DF78u) [[unlikely]] return; }
L_0035DF78:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035DF90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFA0u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035DFA0u) [[unlikely]] return; }
L_0035DFA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E02C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFB0u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035DFB0u) [[unlikely]] return; }
L_0035DFB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035DFBCu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_009A(c, 491u, depth + 1u); else { c.pc = 0x0036B090u; return; } if (c.pc != 0x0035DFBCu) [[unlikely]] return; }
L_0035DFBC:
    set32(c.r[3], c.r[2].w[0] + 2u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035E02C; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 24240u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035DFE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035E02C; } }
L_0035E004:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 6u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0035E02C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E040:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E050u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035E050u) [[unlikely]] return; }
L_0035E050:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    c.r[5].d[0] = ld8((c.r[6].w[0] + 5247u));
    c.budget -= 5;
    if (c.r[5].d[0] == c.r[3].d[0]) { set32(c.r[3], 0u + 4u);  goto L_0035E0D8; }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0035E0BC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0035E0A4; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0035E08C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035E0F0; } }
L_0035E08C:
    st8((c.r[6].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035E0EC; } }
L_0035E0A4:
    st8((c.r[6].w[0] + 5233u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035E0EC; } }
L_0035E0BC:
    st8((c.r[6].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035E0EC; } }
    set32(c.r[3], 0u + 4u);
    c.budget -= 1;
L_0035E0D8:
    st8((c.r[6].w[0] + 5233u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0035E0EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035E0F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E100:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5248u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035E160:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E178u); st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035E178u) [[unlikely]] return; }
L_0035E178:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24884u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 14384u);
    set32(c.r[6], 0u + 656u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E19Cu); st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035E19Cu) [[unlikely]] return; }
L_0035E19C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6576u);
    set32(c.r[6], 0u + 52u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1B0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035E1B0u) [[unlikely]] return; }
L_0035E1B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1BCu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_00A4(c, 126u, depth + 1u); else { c.pc = 0x003933F0u; return; } if (c.pc != 0x0035E1BCu) [[unlikely]] return; }
L_0035E1BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1C4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 525u, depth + 1u); else { c.pc = 0x00367A50u; return; } if (c.pc != 0x0035E1C4u) [[unlikely]] return; }
L_0035E1C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1CCu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 525u, depth + 1u); else { c.pc = 0x00367A50u; return; } if (c.pc != 0x0035E1CCu) [[unlikely]] return; }
L_0035E1CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E1E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E1F0u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035E1F0u) [[unlikely]] return; }
L_0035E1F0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E2EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E200u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035E200u) [[unlikely]] return; }
L_0035E200:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E260; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25351u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E23C; } }
    set32(c.r[2], 0u + 25347u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E22C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035E258; } }
L_0035E22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E234u);  if (depth < kMaxDepth) unit_0099(c, 522u, depth + 1u); else { c.pc = 0x003679F0u; return; } if (c.pc != 0x0035E234u) [[unlikely]] return; }
L_0035E234:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E260; } }
L_0035E23C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E244u);  if (depth < kMaxDepth) unit_0099(c, 474u, depth + 1u); else { c.pc = 0x00367620u; return; } if (c.pc != 0x0035E244u) [[unlikely]] return; }
L_0035E244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E24Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 293u, depth + 1u); else { c.pc = 0x0035E530u; return; } if (c.pc != 0x0035E24Cu) [[unlikely]] return; }
L_0035E24C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035E2F0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035E258:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E260u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035E260u) [[unlikely]] return; }
L_0035E260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E26Cu); set32(c.r[4], c.r[2].w[0] - 6576u);  if (depth < kMaxDepth) unit_00A4(c, 126u, depth + 1u); else { c.pc = 0x003933F0u; return; } if (c.pc != 0x0035E26Cu) [[unlikely]] return; }
L_0035E26C:
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0035E2E4; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035E2EC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0035E298; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E2EC; } }
L_0035E298:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    c.r[5].d[0] = ld8((c.r[1].w[0] - 6568u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].d[0] = c.r[5].d[0] << 56;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24884u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5248u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0035E2EC; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0035E2E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E2ECu);  if (depth < kMaxDepth) unit_0097(c, 293u, depth + 1u); else { c.pc = 0x0035E530u; return; } if (c.pc != 0x0035E2ECu) [[unlikely]] return; }
L_0035E2EC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035E2F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E300:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035E354; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035E330; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035E3C0; } }
L_0035E330:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E348u); c.r[4].d[0] = ld8((c.r[1].w[0] + 24884u));  if (depth < kMaxDepth) unit_0099(c, 531u, depth + 1u); else { c.pc = 0x00367AC0u; return; } if (c.pc != 0x0035E348u) [[unlikely]] return; }
L_0035E348:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3BC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035E354:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E35Cu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035E35Cu) [[unlikely]] return; }
L_0035E35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E3BC; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25349u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E37C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035E3B4; } }
L_0035E37C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E384u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035E384u) [[unlikely]] return; }
L_0035E384:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0035E3A0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E394u);  if (depth < kMaxDepth) unit_0097(c, 307u, depth + 1u); else { c.pc = 0x0035E750u; return; } if (c.pc != 0x0035E394u) [[unlikely]] return; }
L_0035E394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3BC; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0035E3A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3A8u);  if (depth < kMaxDepth) unit_0097(c, 303u, depth + 1u); else { c.pc = 0x0035E6D0u; return; } if (c.pc != 0x0035E3A8u) [[unlikely]] return; }
L_0035E3A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E3BC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035E3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E3BCu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035E3BCu) [[unlikely]] return; }
L_0035E3BC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035E3C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E3D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035E48C; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035E46C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035E440; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035E418; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035E524; } }
L_0035E418:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 92u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 28384u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E440u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0035E440u) [[unlikely]] return; }
L_0035E440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E448u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035E448u) [[unlikely]] return; }
L_0035E448:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0035E520; } }
L_0035E46C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E480u); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 537u, depth + 1u); else { c.pc = 0x00367B30u; return; } if (c.pc != 0x0035E480u) [[unlikely]] return; }
L_0035E480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E520; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035E48C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E494u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035E494u) [[unlikely]] return; }
L_0035E494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E520; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25350u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E4B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035E518; } }
L_0035E4B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E4BCu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035E4BCu) [[unlikely]] return; }
L_0035E4BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E4EC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035E520; } }
L_0035E4EC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 20u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E50Cu); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035E50Cu) [[unlikely]] return; }
L_0035E50C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E520; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035E518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E520u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035E520u) [[unlikely]] return; }
L_0035E520:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035E524:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E530:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035E568; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035E58C; } }
L_0035E568:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
L_0035E58C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5E0u); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035E5E0u) [[unlikely]] return; }
L_0035E5E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E5E8u);  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x0035E5E8u) [[unlikely]] return; }
L_0035E5E8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E600:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E610u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035E610u) [[unlikely]] return; }
L_0035E610:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035E6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E620u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035E620u) [[unlikely]] return; }
L_0035E620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E65C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25347u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E640; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035E654; } }
L_0035E640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E648u);  if (depth < kMaxDepth) unit_0099(c, 522u, depth + 1u); else { c.pc = 0x003679F0u; return; } if (c.pc != 0x0035E648u) [[unlikely]] return; }
L_0035E648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));  if (t) { goto L_0035E660; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035E654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E65Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035E65Cu) [[unlikely]] return; }
L_0035E65C:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    c.budget -= 1;
L_0035E660:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035E690; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035E6C0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E688u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035E688u) [[unlikely]] return; }
L_0035E688:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E6C0; } }
L_0035E690:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5244u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E6C0u); st8((c.r[2].w[0] + 5245u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035E6C0u) [[unlikely]] return; }
L_0035E6C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035E6D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 4u);
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5244u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035E724; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E71Cu);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0035E71Cu) [[unlikely]] return; }
L_0035E71C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035E740; } }
L_0035E724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E72Cu);  if (depth < kMaxDepth) unit_0099(c, 143u, depth + 1u); else { c.pc = 0x003659F0u; return; } if (c.pc != 0x0035E72Cu) [[unlikely]] return; }
L_0035E72C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E73Cu); set32(c.r[5], c.r[2].w[0] + 28384u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0035E73Cu) [[unlikely]] return; }
L_0035E73C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035E740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E750:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E788u); st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 67u, depth + 1u); else { c.pc = 0x00358C90u; return; } if (c.pc != 0x0035E788u) [[unlikely]] return; }
L_0035E788:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 2016u);
    set32(c.r[6], 0u + 16400u);
    st8((c.r[3].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E7C4u); st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035E7C4u) [[unlikely]] return; }
L_0035E7C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 8148u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 8142u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 8144u), static_cast<std::uint16_t>(0u));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E7F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E804u); c.r[4].d[0] = ld8((c.r[1].w[0] + 24884u));  if (depth < kMaxDepth) unit_0099(c, 525u, depth + 1u); else { c.pc = 0x00367A50u; return; } if (c.pc != 0x0035E804u) [[unlikely]] return; }
L_0035E804:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5240u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5241u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5242u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5244u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 8146u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 8147u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 28;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E874u); st8((c.r[2].w[0] + 8151u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035E874u) [[unlikely]] return; }
L_0035E874:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E87Cu);  if (depth < kMaxDepth) unit_009A(c, 573u, depth + 1u); else { c.pc = 0x0036BDB0u; return; } if (c.pc != 0x0035E87Cu) [[unlikely]] return; }
L_0035E87C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E884u); st16((c.r[28].w[0] - 25960u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x0035E884u) [[unlikely]] return; }
L_0035E884:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E88Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x0035E88Cu) [[unlikely]] return; }
L_0035E88C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E894u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009A(c, 7u, depth + 1u); else { c.pc = 0x00368060u; return; } if (c.pc != 0x0035E894u) [[unlikely]] return; }
L_0035E894:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E89Cu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009A(c, 7u, depth + 1u); else { c.pc = 0x00368060u; return; } if (c.pc != 0x0035E89Cu) [[unlikely]] return; }
L_0035E89C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035E8B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8C0u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035E8C0u) [[unlikely]] return; }
L_0035E8C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035EAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E8D0u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035E8D0u) [[unlikely]] return; }
L_0035E8D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E940; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25612u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25602u);  if (t) { goto L_0035E920; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 25604u);  if (t) { goto L_0035E910; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035E900; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035E938; } }
L_0035E900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E908u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035E908u) [[unlikely]] return; }
L_0035E908:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E940; } }
L_0035E910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E918u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035E918u) [[unlikely]] return; }
L_0035E918:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035E940; } }
L_0035E920:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E928u);  if (depth < kMaxDepth) unit_0099(c, 551u, depth + 1u); else { c.pc = 0x00367CC0u; return; } if (c.pc != 0x0035E928u) [[unlikely]] return; }
L_0035E928:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E930u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x0035E930u) [[unlikely]] return; }
L_0035E930:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035EAAC; } }
L_0035E938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E940u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035E940u) [[unlikely]] return; }
L_0035E940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E948u);  if (depth < kMaxDepth) unit_0099(c, 53u, depth + 1u); else { c.pc = 0x003648C0u; return; } if (c.pc != 0x0035E948u) [[unlikely]] return; }
L_0035E948:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E958u);  if (depth < kMaxDepth) unit_0097(c, 178u, depth + 1u); else { c.pc = 0x0035D5B0u; return; } if (c.pc != 0x0035E958u) [[unlikely]] return; }
L_0035E958:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E968u);  if (depth < kMaxDepth) unit_0099(c, 51u, depth + 1u); else { c.pc = 0x00364870u; return; } if (c.pc != 0x0035E968u) [[unlikely]] return; }
L_0035E968:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 8192u);  if (t) { goto L_0035EAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E978u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035E978u) [[unlikely]] return; }
L_0035E978:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4096u);  if (t) { goto L_0035E9B0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5240u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0035EA14; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5241u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0035EA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9A4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035E9A4u) [[unlikely]] return; }
L_0035E9A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5241u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035EA10; } }
L_0035E9B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9B8u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035E9B8u) [[unlikely]] return; }
L_0035E9B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035E9F4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5240u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EA10; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5241u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 43u);  if (t) { goto L_0035EA10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035E9E4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035E9E4u) [[unlikely]] return; }
L_0035E9E4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5241u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035EA10; } }
L_0035E9F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5241u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[3].w[0] + 5240u);  if (t) { goto L_0035EA10; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA10u); set32(c.r[6], 0u + 3u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0035EA10u) [[unlikely]] return; }
L_0035EA10:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0035EA14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA1Cu);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035EA1Cu) [[unlikely]] return; }
L_0035EA1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0035EA88; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA30u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035EA30u) [[unlikely]] return; }
L_0035EA30:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[4].w[0] + 5243u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5241u));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_0035EA78; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5240u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035EA74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA6Cu);  if (depth < kMaxDepth) unit_0097(c, 490u, depth + 1u); else { c.pc = 0x0035FE30u; return; } if (c.pc != 0x0035EA6Cu) [[unlikely]] return; }
L_0035EA6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EAA8; } }
L_0035EA74:
    set32(c.r[3], 0u + 2u);
    c.budget -= 1;
L_0035EA78:
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035EAA8; } }
L_0035EA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EA90u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035EA90u) [[unlikely]] return; }
L_0035EA90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 54u);  if (t) { goto L_0035EAA8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAA0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035EAA0u) [[unlikely]] return; }
L_0035EAA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAA8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x0035EAA8u) [[unlikely]] return; }
L_0035EAA8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035EAAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EAD0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035EAD0u) [[unlikely]] return; }
L_0035EAD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035EB4C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25612u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EB28; } }
    set32(c.r[2], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EB18; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EB08; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035EB44; } }
L_0035EB08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB10u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035EB10u) [[unlikely]] return; }
L_0035EB10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EB4C; } }
L_0035EB18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB20u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035EB20u) [[unlikely]] return; }
L_0035EB20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EB4C; } }
L_0035EB28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB30u);  if (depth < kMaxDepth) unit_0099(c, 551u, depth + 1u); else { c.pc = 0x00367CC0u; return; } if (c.pc != 0x0035EB30u) [[unlikely]] return; }
L_0035EB30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB38u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x0035EB38u) [[unlikely]] return; }
L_0035EB38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035EBFC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035EB44:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EB4Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035EB4Cu) [[unlikely]] return; }
L_0035EB4C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035EBF8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[4].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[4].d[0] = ld8((c.r[5].w[0] + 5240u));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035EBD0; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035EB9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EBF8; } }
L_0035EB9C:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[4], 0u + 5u);  if (t) { goto L_0035EBC0; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035EBF8; } }
    set32(c.r[4], 0u + 5u);
    c.budget -= 1;
L_0035EBC0:
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0035EBF8; } }
L_0035EBD0:
    c.r[3].d[0] = ld8((c.r[5].w[0] + 8148u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035EBF0; } }
    set32(c.r[3], 0u + 3u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035EBF8; } }
L_0035EBF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EBF8u);  if (depth < kMaxDepth) unit_0097(c, 431u, depth + 1u); else { c.pc = 0x0035F5C0u; return; } if (c.pc != 0x0035EBF8u) [[unlikely]] return; }
L_0035EBF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035EBFC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035EC10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC20u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035EC20u) [[unlikely]] return; }
L_0035EC20:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 2016u);
    set32(c.r[6], 0u + 16400u);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC54u); st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0035EC54u) [[unlikely]] return; }
L_0035EC54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 2016u);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    c.budget -= 3;
L_0035EC60:
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], c.r[3].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0] + 328u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[3].sd[0] < 50ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 656u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EC60u | kUnwind; return; } goto L_0035EC60; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC88u);  if (depth < kMaxDepth) unit_0099(c, 555u, depth + 1u); else { c.pc = 0x00367D30u; return; } if (c.pc != 0x0035EC88u) [[unlikely]] return; }
L_0035EC88:
    set32(c.r[2], 0u + 32u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], 0u + 132u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EC9Cu); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0035EC9Cu) [[unlikely]] return; }
L_0035EC9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035ECB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECC0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035ECC0u) [[unlikely]] return; }
L_0035ECC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035ED0C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25601u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035ECE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035ED04; } }
L_0035ECE0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ECF4u); st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 542u, depth + 1u); else { c.pc = 0x00367B80u; return; } if (c.pc != 0x0035ECF4u) [[unlikely]] return; }
L_0035ECF4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25972u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035ED0C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035ED04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED0Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035ED0Cu) [[unlikely]] return; }
L_0035ED0C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035ED20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[6].w[0] + 5235u));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 5235u);  if (t) { goto L_0035F000; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 24208u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035ED5C:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(0u));
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0035ED74:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED8Cu); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0099(c, 566u, depth + 1u); else { c.pc = 0x00367DF0u; return; } if (c.pc != 0x0035ED8Cu) [[unlikely]] return; }
L_0035ED8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035ED94u); c.r[4].d[0] = c.r[16].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0099(c, 560u, depth + 1u); else { c.pc = 0x00367D80u; return; } if (c.pc != 0x0035ED94u) [[unlikely]] return; }
L_0035ED94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    set32(c.r[5], c.r[16].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[3].d[0] = ld16((c.r[1].w[0] + 24890u));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.r[1].d[0] = c.r[3].sd[0] < c.r[5].sd[0] ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);  if (t) { goto L_0035EDD0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035F000; } }
L_0035EDD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035F000; } }
L_0035EDEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EDF4u); set32(c.r[4], c.r[29].w[0] + 46u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035EDF4u) [[unlikely]] return; }
L_0035EDF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F000; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 25602u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EE54; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035EE20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_0035EE8C; } }
L_0035EE20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE28u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035EE28u) [[unlikely]] return; }
L_0035EE28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EE40; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE38u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035EE38u) [[unlikely]] return; }
L_0035EE38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EE94; } }
L_0035EE40:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035F000; } }
L_0035EE54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE5Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035EE5Cu) [[unlikely]] return; }
L_0035EE5C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035EE74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE6Cu);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035EE6Cu) [[unlikely]] return; }
L_0035EE6C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035EE94; } }
L_0035EE74:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035F000; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_0035EE8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EE94u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035EE94u) [[unlikely]] return; }
L_0035EE94:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    c.r[8].d[0] = ld16((c.r[1].w[0] + 24890u));
    set32(c.r[9], 0u + 1u);
    st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[6], c.r[3].w[0] - 2016u);
    set32(c.r[5], 0u + 6u);
    c.budget -= 9;
L_0035EEB8:
    c.r[1].d[0] = c.r[8].sd[0] < c.r[7].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0035EF10; } }
    set32(c.r[3], c.r[7].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] - 322u));
    c.r[3].d[0] = c.r[3].d[0] & 6ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0035EEF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0035EF10; } }
L_0035EEF4:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25976u)));
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.r[3].d[0] = c.r[10].sd[0] < 10ll ? 1ull : 0ull;
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[28].w[0] - 25976u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0035EEB8u | kUnwind; return; } goto L_0035EEB8; } }
L_0035EF10:
    c.budget -= 2;
    { const bool t = c.r[9].d[0] == 0ull;  if (t) { goto L_0035F000; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    set32(c.r[3], c.r[3].w[0] + 10u);
    st8((c.r[28].w[0] - 25972u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25972u)));
    c.r[1].d[0] = c.r[8].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0035EF48; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5235u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035F000; } }
L_0035EF48:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F000; } }
L_0035EF54:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], 0u + 12u);
    set32(c.r[4], 0u + 132u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035EF74u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035EF74u) [[unlikely]] return; }
L_0035EF74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0035F004; } }
L_0035EF7C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035F000; } }
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035F000; } }
L_0035EFB0:
    set32(c.r[4], 0u + 1u);
    st8((c.r[6].w[0] + 8148u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5240u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035EFF8; } }
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 8147u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 8149u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8150u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F000; } }
L_0035EFF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F000u);  if (depth < kMaxDepth) unit_0097(c, 431u, depth + 1u); else { c.pc = 0x0035F5C0u; return; } if (c.pc != 0x0035F000u) [[unlikely]] return; }
L_0035F000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F004:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035F010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F020u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035F020u) [[unlikely]] return; }
L_0035F020:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F178; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F030u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035F030u) [[unlikely]] return; }
L_0035F030:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 32u);  if (t) { goto L_0035F0B0; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25612u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F088; } }
    set32(c.r[2], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F078; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F068; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035F0A4; } }
L_0035F068:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F070u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035F070u) [[unlikely]] return; }
L_0035F070:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F0AC; } }
L_0035F078:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F080u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035F080u) [[unlikely]] return; }
L_0035F080:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F0AC; } }
L_0035F088:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F090u);  if (depth < kMaxDepth) unit_0099(c, 551u, depth + 1u); else { c.pc = 0x00367CC0u; return; } if (c.pc != 0x0035F090u) [[unlikely]] return; }
L_0035F090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F098u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x0035F098u) [[unlikely]] return; }
L_0035F098:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F17C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F0A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0ACu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035F0ACu) [[unlikely]] return; }
L_0035F0AC:
    set32(c.r[4], 0u + 32u);
    c.budget -= 1;
L_0035F0B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0B8u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035F0B8u) [[unlikely]] return; }
L_0035F0B8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0035F108; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F0CCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035F0CCu) [[unlikely]] return; }
L_0035F0CC:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st8((c.r[5].w[0] + 5243u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 7u);
    st8((c.r[5].w[0] + 5244u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F178; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0035F108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F110u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035F110u) [[unlikely]] return; }
L_0035F110:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F144; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F124u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035F124u) [[unlikely]] return; }
L_0035F124:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8147u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F178; } }
L_0035F144:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 24890u));
    set32(c.r[7], 0u + 10u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    set32(c.r[4], c.r[2].w[0] + 8149u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F164u); set32(c.r[5], c.r[2].w[0] + 8150u);  if (depth < kMaxDepth) unit_009E(c, 10u, depth + 1u); else { c.pc = 0x003780F0u; return; } if (c.pc != 0x0035F164u) [[unlikely]] return; }
L_0035F164:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F178u); set32(c.r[4], c.r[2].w[0] + 5240u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0035F178u) [[unlikely]] return; }
L_0035F178:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F17C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F190:
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[4], c.r[29].w[0] + 46u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1A4u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035F1A4u) [[unlikely]] return; }
L_0035F1A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F220; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 25612u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F1FC; } }
    set32(c.r[2], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F1EC; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F1DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 46u);  if (t) { goto L_0035F218; } }
L_0035F1DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1E4u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035F1E4u) [[unlikely]] return; }
L_0035F1E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F220; } }
L_0035F1EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F1F4u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035F1F4u) [[unlikely]] return; }
L_0035F1F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F220; } }
L_0035F1FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F204u);  if (depth < kMaxDepth) unit_0099(c, 551u, depth + 1u); else { c.pc = 0x00367CC0u; return; } if (c.pc != 0x0035F204u) [[unlikely]] return; }
L_0035F204:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F20Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x0035F20Cu) [[unlikely]] return; }
L_0035F20C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0035F358; } }
    set32(c.r[4], c.r[29].w[0] + 46u);
    c.budget -= 1;
L_0035F218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F220u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035F220u) [[unlikely]] return; }
L_0035F220:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035F354; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5244u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5240u));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F34C; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8149u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 2012u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 8150u)));
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 15;
    if (c.r[1].d[0] == 0ull) { set32(c.r[4], 0u + 144u);  goto L_0035F33C; }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] - 24176u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0035C000u < 16384u) { entry = entries_0097[(t - 0x0035C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0035F2BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] - 2016u);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[16].d[0] = ld16((c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F2D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 572u, depth + 1u); else { c.pc = 0x00367E60u; return; } if (c.pc != 0x0035F2D4u) [[unlikely]] return; }
L_0035F2D4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5237u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F354; } }
L_0035F308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F310u); set32(c.r[4], 0u + 138u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F310u) [[unlikely]] return; }
L_0035F310:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F354; } }
L_0035F318:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F320u); set32(c.r[4], 0u + 140u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F320u) [[unlikely]] return; }
L_0035F320:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F354; } }
L_0035F328:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F330u); set32(c.r[4], 0u + 141u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F330u) [[unlikely]] return; }
L_0035F330:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F354; } }
L_0035F338:
    set32(c.r[4], 0u + 144u);
    c.budget -= 1;
L_0035F33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F344u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F344u) [[unlikely]] return; }
L_0035F344:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F354; } }
L_0035F34C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F354u);  if (depth < kMaxDepth) unit_0097(c, 431u, depth + 1u); else { c.pc = 0x0035F5C0u; return; } if (c.pc != 0x0035F354u) [[unlikely]] return; }
L_0035F354:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F358:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0035F370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F380u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035F380u) [[unlikely]] return; }
L_0035F380:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F418; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25606u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F3D8; } }
    set32(c.r[2], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F3C8; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F3B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035F410; } }
L_0035F3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3C0u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035F3C0u) [[unlikely]] return; }
L_0035F3C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F41C; } }
L_0035F3C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3D0u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035F3D0u) [[unlikely]] return; }
L_0035F3D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F418; } }
L_0035F3D8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3E0u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035F3E0u) [[unlikely]] return; }
L_0035F3E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0035F3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F3F0u);  if (depth < kMaxDepth) unit_0097(c, 491u, depth + 1u); else { c.pc = 0x0035FE50u; return; } if (c.pc != 0x0035F3F0u) [[unlikely]] return; }
L_0035F3F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F418; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0035F3FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F404u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F404u) [[unlikely]] return; }
L_0035F404:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F418; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F410:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F418u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035F418u) [[unlikely]] return; }
L_0035F418:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F41C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F430:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035F484; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035F460; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F5B0; } }
L_0035F460:
    c.r[2].d[0] = ld8((c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F478u); c.r[4].d[0] = ld8((c.r[1].w[0] + 24888u));  if (depth < kMaxDepth) unit_0099(c, 579u, depth + 1u); else { c.pc = 0x00367EE0u; return; } if (c.pc != 0x0035F478u) [[unlikely]] return; }
L_0035F478:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F484:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F48Cu);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035F48Cu) [[unlikely]] return; }
L_0035F48C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F5AC; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26124u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F564; } }
    set32(c.r[2], 0u + 26121u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F530; } }
    set32(c.r[2], 0u + 25607u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F4FC; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F4EC; } }
    set32(c.r[2], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F4DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035F5A4; } }
L_0035F4DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4E4u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035F4E4u) [[unlikely]] return; }
L_0035F4E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
L_0035F4EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F4F4u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035F4F4u) [[unlikely]] return; }
L_0035F4F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
L_0035F4FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F504u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035F504u) [[unlikely]] return; }
L_0035F504:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0035F520; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F514u);  if (depth < kMaxDepth) unit_009A(c, 51u, depth + 1u); else { c.pc = 0x00368380u; return; } if (c.pc != 0x0035F514u) [[unlikely]] return; }
L_0035F514:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0035F520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F528u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F528u) [[unlikely]] return; }
L_0035F528:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
L_0035F530:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F538u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035F538u) [[unlikely]] return; }
L_0035F538:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0035F554; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F548u);  if (depth < kMaxDepth) unit_009A(c, 62u, depth + 1u); else { c.pc = 0x00368450u; return; } if (c.pc != 0x0035F548u) [[unlikely]] return; }
L_0035F548:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0035F554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F55Cu);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F55Cu) [[unlikely]] return; }
L_0035F55C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
L_0035F564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F56Cu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035F56Cu) [[unlikely]] return; }
L_0035F56C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 20u);  if (t) { goto L_0035F590; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F584u); st8((c.r[2].w[0] + 8151u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0097(c, 491u, depth + 1u); else { c.pc = 0x0035FE50u; return; } if (c.pc != 0x0035F584u) [[unlikely]] return; }
L_0035F584:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
    set32(c.r[4], 0u + 20u);
    c.budget -= 1;
L_0035F590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F598u);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F598u) [[unlikely]] return; }
L_0035F598:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F5AC; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F5A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5ACu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035F5ACu) [[unlikely]] return; }
L_0035F5AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F5B0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F5C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F5D0u);  if (depth < kMaxDepth) unit_009A(c, 593u, depth + 1u); else { c.pc = 0x0036BF50u; return; } if (c.pc != 0x0035F5D0u) [[unlikely]] return; }
L_0035F5D0:
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 140u);  if (t) { goto L_0035F624; } }
    set32(c.r[3], c.r[2].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], c.r[4].w[0] << 3);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[4].w[0] - 2016u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], 0u + 9u);
    st8((c.r[1].w[0] + 24888u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F62C; } }
    set32(c.r[4], 0u + 140u);
    c.budget -= 1;
L_0035F624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F62Cu);  if (depth < kMaxDepth) unit_0097(c, 445u, depth + 1u); else { c.pc = 0x0035F790u; return; } if (c.pc != 0x0035F62Cu) [[unlikely]] return; }
L_0035F62C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035F640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F650u);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035F650u) [[unlikely]] return; }
L_0035F650:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F660u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035F660u) [[unlikely]] return; }
L_0035F660:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F6F8; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25612u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F6D4; } }
    set32(c.r[2], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F6C4; } }
    set32(c.r[2], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F6B4; } }
    set32(c.r[2], 0u + 26370u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F6A4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035F6F0; } }
L_0035F6A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6ACu);  if (depth < kMaxDepth) unit_009A(c, 67u, depth + 1u); else { c.pc = 0x003684A0u; return; } if (c.pc != 0x0035F6ACu) [[unlikely]] return; }
L_0035F6AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));  if (t) { goto L_0035F6FC; } }
L_0035F6B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6BCu);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x0035F6BCu) [[unlikely]] return; }
L_0035F6BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F6F8; } }
L_0035F6C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6CCu);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x0035F6CCu) [[unlikely]] return; }
L_0035F6CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F6F8; } }
L_0035F6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6DCu);  if (depth < kMaxDepth) unit_0099(c, 551u, depth + 1u); else { c.pc = 0x00367CC0u; return; } if (c.pc != 0x0035F6DCu) [[unlikely]] return; }
L_0035F6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6E4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0097(c, 457u, depth + 1u); else { c.pc = 0x0035F970u; return; } if (c.pc != 0x0035F6E4u) [[unlikely]] return; }
L_0035F6E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F788; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F6F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F6F8u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035F6F8u) [[unlikely]] return; }
L_0035F6F8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    c.budget -= 1;
L_0035F6FC:
    set32(c.r[3], c.r[4].w[0] + 1u);
    c.r[1].d[0] = c.r[4].sd[0] < 600ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0035F72C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    c.r[3].d[0] = c.r[3].sd[0] < 60ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035F784; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F724u); set32(c.r[4], 0u + 96u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035F724u) [[unlikely]] return; }
L_0035F724:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F784; } }
L_0035F72C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 8147u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 6u);  if (t) { goto L_0035F754; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F760; } }
    set32(c.r[2], 0u + 6u);
    c.budget -= 1;
L_0035F754:
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0035F760:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5244u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F784u); st8((c.r[28].w[0] - 25980u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035F784u) [[unlikely]] return; }
L_0035F784:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F788:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F790:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[6], 0u + 10u);
    set32(c.r[2], 0u + 20u);
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5244u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[5].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    c.budget -= 17;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(0u));  if (t) { goto L_0035F7E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7DCu);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x0035F7DCu) [[unlikely]] return; }
L_0035F7DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F800; } }
L_0035F7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7ECu);  if (depth < kMaxDepth) unit_0099(c, 143u, depth + 1u); else { c.pc = 0x003659F0u; return; } if (c.pc != 0x0035F7ECu) [[unlikely]] return; }
L_0035F7EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F7FCu); set32(c.r[5], c.r[2].w[0] + 28384u);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0035F7FCu) [[unlikely]] return; }
L_0035F7FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035F810:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[6], c.r[4].w[0] + 5235u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 5235u));
    c.budget -= 8;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 30u);  goto L_0035F8CC; }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035F8AC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0035F880; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0035F858; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F964; } }
L_0035F858:
    c.r[5].d[0] = ld8((c.r[6].w[0]));
    set32(c.r[3], 0u + 92u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], 0u + 20u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 28384u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F880u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x0035F880u) [[unlikely]] return; }
L_0035F880:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F888u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035F888u) [[unlikely]] return; }
L_0035F888:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0035F960; } }
L_0035F8AC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5235u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8C0u); st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 585u, depth + 1u); else { c.pc = 0x00367F50u; return; } if (c.pc != 0x0035F8C0u) [[unlikely]] return; }
L_0035F8C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F960; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F8CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8D4u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035F8D4u) [[unlikely]] return; }
L_0035F8D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035F960; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25608u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035F8F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035F958; } }
L_0035F8F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F8FCu);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035F8FCu) [[unlikely]] return; }
L_0035F8FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035F92C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 3u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035F960; } }
L_0035F92C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 20u);
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F94Cu); st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035F94Cu) [[unlikely]] return; }
L_0035F94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035F960; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035F958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035F960u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035F960u) [[unlikely]] return; }
L_0035F960:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035F964:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035F970:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035F9AC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 4u);
    set32(c.r[4], 0u + 11u);
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035F9D4; } }
L_0035F9AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 4u);
    set32(c.r[3], 0u + 11u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
L_0035F9D4:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[4], 0u + 76u);
    st8((c.r[2].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5225u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[2].w[0] + 5226u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5509u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA28u); st8((c.r[2].w[0] + 5508u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0094(c, 215u, depth + 1u); else { c.pc = 0x00352810u; return; } if (c.pc != 0x0035FA28u) [[unlikely]] return; }
L_0035FA28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA30u);  if (depth < kMaxDepth) unit_009E(c, 61u, depth + 1u); else { c.pc = 0x00378660u; return; } if (c.pc != 0x0035FA30u) [[unlikely]] return; }
L_0035FA30:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035FA40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FA50u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035FA50u) [[unlikely]] return; }
L_0035FA50:
    set32(c.r[6], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[4].d[0] = ld8((c.r[6].w[0] + 5234u));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5242u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[4].w[0] + 5243u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035FAB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FAC0u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x0035FAC0u) [[unlikely]] return; }
L_0035FAC0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] - 9384u)));
    c.budget -= 9;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_0035FB2C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 8146u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = ld8((c.r[1].w[0] + 24884u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld16((c.r[3].w[0] + 8140u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB2Cu); st16((c.r[3].w[0] + 8140u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 590u, depth + 1u); else { c.pc = 0x00367FA0u; return; } if (c.pc != 0x0035FB2Cu) [[unlikely]] return; }
L_0035FB2C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035FB40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB50u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035FB50u) [[unlikely]] return; }
L_0035FB50:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FBE0; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25614u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FB8C; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FB7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035FBD8; } }
L_0035FB7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB84u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x0035FB84u) [[unlikely]] return; }
L_0035FB84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035FBE4; } }
L_0035FB8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FB94u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035FB94u) [[unlikely]] return; }
L_0035FB94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FBB0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0035FBE0; } }
L_0035FBB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 8146u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035FBE0; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035FBD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FBE0u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035FBE0u) [[unlikely]] return; }
L_0035FBE0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035FBE4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FBF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC00u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035FC00u) [[unlikely]] return; }
L_0035FC00:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FC3C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 26896u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035FC34; } }
L_0035FC20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC28u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x0035FC28u) [[unlikely]] return; }
L_0035FC28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035FD18; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035FC34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC3Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035FC3Cu) [[unlikely]] return; }
L_0035FC3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC44u);  if (depth < kMaxDepth) unit_0099(c, 53u, depth + 1u); else { c.pc = 0x003648C0u; return; } if (c.pc != 0x0035FC44u) [[unlikely]] return; }
L_0035FC44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FD14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC54u);  if (depth < kMaxDepth) unit_0099(c, 51u, depth + 1u); else { c.pc = 0x00364870u; return; } if (c.pc != 0x0035FC54u) [[unlikely]] return; }
L_0035FC54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FD14; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC70u); set32(c.r[4], c.r[2].w[0] + 5242u);  if (depth < kMaxDepth) unit_009D(c, 305u, depth + 1u); else { c.pc = 0x00377240u; return; } if (c.pc != 0x0035FC70u) [[unlikely]] return; }
L_0035FC70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC78u); set32(c.r[4], 0u + 32u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035FC78u) [[unlikely]] return; }
L_0035FC78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 64u);  if (t) { goto L_0035FCDC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5242u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0035FD14; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FC9Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035FC9Cu) [[unlikely]] return; }
L_0035FC9C:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], 0u + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].d[0] = ld8((c.r[5].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5245u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCD0u); st16((c.r[1].w[0] - 9384u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009A(c, 1u, depth + 1u); else { c.pc = 0x00368000u; return; } if (c.pc != 0x0035FCD0u) [[unlikely]] return; }
L_0035FCD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FD14; } }
    set32(c.r[4], 0u + 64u);
    c.budget -= 1;
L_0035FCDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FCE4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x0035FCE4u) [[unlikely]] return; }
L_0035FCE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FD14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5242u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035FD14; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD08u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x0035FD08u) [[unlikely]] return; }
L_0035FD08:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5242u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_0035FD14:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035FD18:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FD20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD30u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035FD30u) [[unlikely]] return; }
L_0035FD30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0035FE1C; } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[2], 0u + 25614u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FD90; } }
    set32(c.r[2], 0u + 25615u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FD78; } }
    set32(c.r[2], 0u + 26896u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0035FD68; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], c.r[29].w[0] + 30u);  if (t) { goto L_0035FE14; } }
L_0035FD68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD70u);  if (depth < kMaxDepth) unit_0098(c, 186u, depth + 1u); else { c.pc = 0x00361410u; return; } if (c.pc != 0x0035FD70u) [[unlikely]] return; }
L_0035FD70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0035FE20; } }
L_0035FD78:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD88u); st8((c.r[2].w[0] + 8146u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0099(c, 552u, depth + 1u); else { c.pc = 0x00367CE0u; return; } if (c.pc != 0x0035FD88u) [[unlikely]] return; }
L_0035FD88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FE1C; } }
L_0035FD90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FD98u);  if (depth < kMaxDepth) unit_0099(c, 142u, depth + 1u); else { c.pc = 0x003659E0u; return; } if (c.pc != 0x0035FD98u) [[unlikely]] return; }
L_0035FD98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0035FDCC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8146u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035FE1C; } }
L_0035FDCC:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 1u);
    c.r[2].d[0] = ld8((c.r[5].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5245u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE00u); st8((c.r[2].w[0] + 8146u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_009A(c, 7u, depth + 1u); else { c.pc = 0x00368060u; return; } if (c.pc != 0x0035FE00u) [[unlikely]] return; }
L_0035FE00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE08u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_009A(c, 7u, depth + 1u); else { c.pc = 0x00368060u; return; } if (c.pc != 0x0035FE08u) [[unlikely]] return; }
L_0035FE08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0035FE1C; } }
    set32(c.r[4], c.r[29].w[0] + 30u);
    c.budget -= 1;
L_0035FE14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE1Cu);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x0035FE1Cu) [[unlikely]] return; }
L_0035FE1C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0035FE20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0035FE30:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 12u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035FE50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 5u);
    st8((c.r[2].w[0] + 5232u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FE8Cu); st16((c.r[28].w[0] - 25960u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0096(c, 67u, depth + 1u); else { c.pc = 0x00358C90u; return; } if (c.pc != 0x0035FE8Cu) [[unlikely]] return; }
L_0035FE8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4928u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4929u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4930u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4931u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 4932u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 8152u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8151u));
    c.budget -= 16;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035FED4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FED4u);  if (depth < kMaxDepth) unit_009A(c, 28u, depth + 1u); else { c.pc = 0x00368200u; return; } if (c.pc != 0x0035FED4u) [[unlikely]] return; }
L_0035FED4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035FEE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5240u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5243u), static_cast<std::uint8_t>(0u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF18u); st16((c.r[28].w[0] - 25960u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x0035FF18u) [[unlikely]] return; }
L_0035FF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF20u);  if (depth < kMaxDepth) unit_009B(c, 57u, depth + 1u); else { c.pc = 0x0036CAE0u; return; } if (c.pc != 0x0035FF20u) [[unlikely]] return; }
L_0035FF20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF28u);  if (depth < kMaxDepth) unit_009A(c, 551u, depth + 1u); else { c.pc = 0x0036BAE0u; return; } if (c.pc != 0x0035FF28u) [[unlikely]] return; }
L_0035FF28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF30u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009A(c, 565u, depth + 1u); else { c.pc = 0x0036BCF0u; return; } if (c.pc != 0x0035FF30u) [[unlikely]] return; }
L_0035FF30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FF38u);  if (depth < kMaxDepth) unit_009A(c, 40u, depth + 1u); else { c.pc = 0x003682C0u; return; } if (c.pc != 0x0035FF38u) [[unlikely]] return; }
L_0035FF38:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0035FF50:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0035FF70:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 8151u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0035FF94; } }
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0035FFA8; } }
L_0035FF94:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5234u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
L_0035FFA8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0035FFB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFC0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0098(c, 504u, depth + 1u); else { c.pc = 0x00363920u; return; } if (c.pc != 0x0035FFC0u) [[unlikely]] return; }
L_0035FFC0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 23u, depth); } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0035FFD0u); set32(c.r[4], c.r[29].w[0] + 46u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x0035FFD0u) [[unlikely]] return; }
L_0035FFD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { [[clang::musttail]] return unit_0098(c, 13u, depth); } }
    c.r[3].d[0] = ld16((c.r[29].w[0] + 46u));
    set32(c.r[2], 0u + 25861u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0098(c, 9u, depth); } }
    set32(c.r[2], 0u + 25862u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0098(c, 6u, depth); } }
    set32(c.r[2], 0u + 25859u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_0098(c, 3u, depth); } }
    [[clang::musttail]] return unit_0098(c, 1u, depth);
}

}
