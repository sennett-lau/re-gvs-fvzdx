#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_008E[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0,
    40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0,
    0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0,
    0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0,
    0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0,
    130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0,
    0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0,
    0, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0,
    215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0,
    221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0,
    262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 273,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0,
    0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305,
    0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0,
    315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 0,
    324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0,
    0, 348, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0,
    394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398,
    0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0,
    0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419,
    0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0,
    0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0,
    445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0,
    455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477,
    0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0,
    0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0,
    520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0,
};

void unit_008E(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00338000;
    case 2u: goto L_00338040;
    case 3u: goto L_00338074;
    case 4u: goto L_00338094;
    case 5u: goto L_003380EC;
    case 6u: goto L_003380F8;
    case 7u: goto L_00338110;
    case 8u: goto L_0033812C;
    case 9u: goto L_00338138;
    case 10u: goto L_00338160;
    case 11u: goto L_00338180;
    case 12u: goto L_003381D0;
    case 13u: goto L_0033820C;
    case 14u: goto L_0033822C;
    case 15u: goto L_0033829C;
    case 16u: goto L_003382B8;
    case 17u: goto L_003382C0;
    case 18u: goto L_003382D8;
    case 19u: goto L_0033832C;
    case 20u: goto L_00338360;
    case 21u: goto L_00338390;
    case 22u: goto L_003383B4;
    case 23u: goto L_003383C0;
    case 24u: goto L_003383C8;
    case 25u: goto L_003383E4;
    case 26u: goto L_003383EC;
    case 27u: goto L_00338400;
    case 28u: goto L_00338420;
    case 29u: goto L_00338428;
    case 30u: goto L_00338444;
    case 31u: goto L_0033844C;
    case 32u: goto L_00338464;
    case 33u: goto L_00338488;
    case 34u: goto L_003384C0;
    case 35u: goto L_003384E0;
    case 36u: goto L_00338500;
    case 37u: goto L_00338520;
    case 38u: goto L_00338554;
    case 39u: goto L_00338574;
    case 40u: goto L_00338580;
    case 41u: goto L_00338594;
    case 42u: goto L_003385B4;
    case 43u: goto L_003385D4;
    case 44u: goto L_003385F0;
    case 45u: goto L_00338624;
    case 46u: goto L_00338660;
    case 47u: goto L_00338674;
    case 48u: goto L_00338694;
    case 49u: goto L_003386B0;
    case 50u: goto L_003386E0;
    case 51u: goto L_003386F4;
    case 52u: goto L_00338714;
    case 53u: goto L_00338728;
    case 54u: goto L_00338734;
    case 55u: goto L_00338740;
    case 56u: goto L_0033874C;
    case 57u: goto L_00338758;
    case 58u: goto L_00338774;
    case 59u: goto L_003387A0;
    case 60u: goto L_003387B0;
    case 61u: goto L_003387CC;
    case 62u: goto L_003387D4;
    case 63u: goto L_003387E8;
    case 64u: goto L_003387F4;
    case 65u: goto L_00338804;
    case 66u: goto L_00338820;
    case 67u: goto L_00338834;
    case 68u: goto L_00338850;
    case 69u: goto L_00338868;
    case 70u: goto L_00338880;
    case 71u: goto L_003388A0;
    case 72u: goto L_003388D4;
    case 73u: goto L_003388F4;
    case 74u: goto L_00338900;
    case 75u: goto L_00338914;
    case 76u: goto L_00338934;
    case 77u: goto L_00338954;
    case 78u: goto L_00338970;
    case 79u: goto L_003389A4;
    case 80u: goto L_003389E0;
    case 81u: goto L_003389F4;
    case 82u: goto L_00338A14;
    case 83u: goto L_00338A30;
    case 84u: goto L_00338A60;
    case 85u: goto L_00338A74;
    case 86u: goto L_00338A94;
    case 87u: goto L_00338AA8;
    case 88u: goto L_00338AB4;
    case 89u: goto L_00338AC0;
    case 90u: goto L_00338ACC;
    case 91u: goto L_00338AD8;
    case 92u: goto L_00338AF4;
    case 93u: goto L_00338B20;
    case 94u: goto L_00338B30;
    case 95u: goto L_00338B4C;
    case 96u: goto L_00338B54;
    case 97u: goto L_00338B68;
    case 98u: goto L_00338B74;
    case 99u: goto L_00338B84;
    case 100u: goto L_00338BA0;
    case 101u: goto L_00338BB4;
    case 102u: goto L_00338BD0;
    case 103u: goto L_00338BE8;
    case 104u: goto L_00338C00;
    case 105u: goto L_00338C18;
    case 106u: goto L_00338C5C;
    case 107u: goto L_00338C70;
    case 108u: goto L_00338C8C;
    case 109u: goto L_00338CDC;
    case 110u: goto L_00338D00;
    case 111u: goto L_00338D10;
    case 112u: goto L_00338D2C;
    case 113u: goto L_00338D34;
    case 114u: goto L_00338D54;
    case 115u: goto L_00338D5C;
    case 116u: goto L_00338D7C;
    case 117u: goto L_00338D98;
    case 118u: goto L_00338DCC;
    case 119u: goto L_00338E00;
    case 120u: goto L_00338E1C;
    case 121u: goto L_00338E24;
    case 122u: goto L_00338E44;
    case 123u: goto L_00338E60;
    case 124u: goto L_00338E90;
    case 125u: goto L_00338EAC;
    case 126u: goto L_00338EB4;
    case 127u: goto L_00338ED4;
    case 128u: goto L_00338EE8;
    case 129u: goto L_00338EF4;
    case 130u: goto L_00338F00;
    case 131u: goto L_00338F0C;
    case 132u: goto L_00338F18;
    case 133u: goto L_00338F34;
    case 134u: goto L_00338F60;
    case 135u: goto L_00338F70;
    case 136u: goto L_00338F84;
    case 137u: goto L_00338F8C;
    case 138u: goto L_00338F94;
    case 139u: goto L_00338FA8;
    case 140u: goto L_00338FB4;
    case 141u: goto L_00338FC4;
    case 142u: goto L_00338FE0;
    case 143u: goto L_00338FF4;
    case 144u: goto L_00339008;
    case 145u: goto L_00339010;
    case 146u: goto L_00339020;
    case 147u: goto L_00339050;
    case 148u: goto L_00339084;
    case 149u: goto L_00339100;
    case 150u: goto L_00339124;
    case 151u: goto L_00339158;
    case 152u: goto L_00339170;
    case 153u: goto L_00339194;
    case 154u: goto L_003391A0;
    case 155u: goto L_003391D0;
    case 156u: goto L_003391F4;
    case 157u: goto L_00339214;
    case 158u: goto L_0033921C;
    case 159u: goto L_00339260;
    case 160u: goto L_00339278;
    case 161u: goto L_003392C0;
    case 162u: goto L_003392FC;
    case 163u: goto L_00339304;
    case 164u: goto L_0033933C;
    case 165u: goto L_0033940C;
    case 166u: goto L_00339420;
    case 167u: goto L_0033943C;
    case 168u: goto L_00339448;
    case 169u: goto L_0033947C;
    case 170u: goto L_003394A8;
    case 171u: goto L_003394B4;
    case 172u: goto L_003394BC;
    case 173u: goto L_003394D0;
    case 174u: goto L_003394F0;
    case 175u: goto L_00339520;
    case 176u: goto L_00339568;
    case 177u: goto L_003395CC;
    case 178u: goto L_003395E4;
    case 179u: goto L_00339618;
    case 180u: goto L_00339630;
    case 181u: goto L_0033965C;
    case 182u: goto L_00339670;
    case 183u: goto L_0033968C;
    case 184u: goto L_00339698;
    case 185u: goto L_003396A0;
    case 186u: goto L_003396B8;
    case 187u: goto L_003396EC;
    case 188u: goto L_003396F4;
    case 189u: goto L_00339724;
    case 190u: goto L_00339740;
    case 191u: goto L_00339770;
    case 192u: goto L_00339780;
    case 193u: goto L_00339794;
    case 194u: goto L_003397B4;
    case 195u: goto L_003397E4;
    case 196u: goto L_003397F4;
    case 197u: goto L_00339834;
    case 198u: goto L_00339888;
    case 199u: goto L_00339894;
    case 200u: goto L_003398B0;
    case 201u: goto L_003398C4;
    case 202u: goto L_003398D4;
    case 203u: goto L_003398E0;
    case 204u: goto L_00339900;
    case 205u: goto L_00339970;
    case 206u: goto L_00339980;
    case 207u: goto L_003399AC;
    case 208u: goto L_003399D0;
    case 209u: goto L_003399DC;
    case 210u: goto L_003399E4;
    case 211u: goto L_003399F8;
    case 212u: goto L_00339A00;
    case 213u: goto L_00339A18;
    case 214u: goto L_00339A64;
    case 215u: goto L_00339A80;
    case 216u: goto L_00339AAC;
    case 217u: goto L_00339AD0;
    case 218u: goto L_00339ADC;
    case 219u: goto L_00339AE4;
    case 220u: goto L_00339AF8;
    case 221u: goto L_00339B00;
    case 222u: goto L_00339B18;
    case 223u: goto L_00339B64;
    case 224u: goto L_00339B80;
    case 225u: goto L_00339B9C;
    case 226u: goto L_00339BA8;
    case 227u: goto L_00339BB0;
    case 228u: goto L_00339BC4;
    case 229u: goto L_00339BCC;
    case 230u: goto L_00339BE0;
    case 231u: goto L_00339C10;
    case 232u: goto L_00339C58;
    case 233u: goto L_00339CBC;
    case 234u: goto L_00339CD4;
    case 235u: goto L_00339D08;
    case 236u: goto L_00339D20;
    case 237u: goto L_00339D4C;
    case 238u: goto L_00339D60;
    case 239u: goto L_00339D7C;
    case 240u: goto L_00339D88;
    case 241u: goto L_00339D90;
    case 242u: goto L_00339DA8;
    case 243u: goto L_00339DDC;
    case 244u: goto L_00339DE4;
    case 245u: goto L_00339E14;
    case 246u: goto L_00339E2C;
    case 247u: goto L_00339E5C;
    case 248u: goto L_00339E70;
    case 249u: goto L_00339E84;
    case 250u: goto L_00339EA4;
    case 251u: goto L_00339ED4;
    case 252u: goto L_00339EE4;
    case 253u: goto L_00339F24;
    case 254u: goto L_00339F78;
    case 255u: goto L_00339F84;
    case 256u: goto L_00339FA0;
    case 257u: goto L_00339FB4;
    case 258u: goto L_00339FC4;
    case 259u: goto L_00339FD0;
    case 260u: goto L_00339FF0;
    case 261u: goto L_0033A068;
    case 262u: goto L_0033A080;
    case 263u: goto L_0033A0AC;
    case 264u: goto L_0033A0D0;
    case 265u: goto L_0033A0DC;
    case 266u: goto L_0033A0E4;
    case 267u: goto L_0033A120;
    case 268u: goto L_0033A130;
    case 269u: goto L_0033A14C;
    case 270u: goto L_0033A158;
    case 271u: goto L_0033A160;
    case 272u: goto L_0033A174;
    case 273u: goto L_0033A17C;
    case 274u: goto L_0033A190;
    case 275u: goto L_0033A1C0;
    case 276u: goto L_0033A208;
    case 277u: goto L_0033A26C;
    case 278u: goto L_0033A284;
    case 279u: goto L_0033A2B4;
    case 280u: goto L_0033A2CC;
    case 281u: goto L_0033A2F8;
    case 282u: goto L_0033A310;
    case 283u: goto L_0033A32C;
    case 284u: goto L_0033A338;
    case 285u: goto L_0033A340;
    case 286u: goto L_0033A358;
    case 287u: goto L_0033A38C;
    case 288u: goto L_0033A394;
    case 289u: goto L_0033A3C0;
    case 290u: goto L_0033A3D8;
    case 291u: goto L_0033A408;
    case 292u: goto L_0033A420;
    case 293u: goto L_0033A434;
    case 294u: goto L_0033A454;
    case 295u: goto L_0033A484;
    case 296u: goto L_0033A494;
    case 297u: goto L_0033A4D0;
    case 298u: goto L_0033A524;
    case 299u: goto L_0033A530;
    case 300u: goto L_0033A540;
    case 301u: goto L_0033A554;
    case 302u: goto L_0033A564;
    case 303u: goto L_0033A570;
    case 304u: goto L_0033A590;
    case 305u: goto L_0033A5FC;
    case 306u: goto L_0033A610;
    case 307u: goto L_0033A62C;
    case 308u: goto L_0033A638;
    case 309u: goto L_0033A640;
    case 310u: goto L_0033A688;
    case 311u: goto L_0033A6B4;
    case 312u: goto L_0033A6D0;
    case 313u: goto L_0033A6EC;
    case 314u: goto L_0033A6F8;
    case 315u: goto L_0033A700;
    case 316u: goto L_0033A748;
    case 317u: goto L_0033A774;
    case 318u: goto L_0033A790;
    case 319u: goto L_0033A7AC;
    case 320u: goto L_0033A7B8;
    case 321u: goto L_0033A7C0;
    case 322u: goto L_0033A7E4;
    case 323u: goto L_0033A7EC;
    case 324u: goto L_0033A800;
    case 325u: goto L_0033A808;
    case 326u: goto L_0033A820;
    case 327u: goto L_0033A850;
    case 328u: goto L_0033A898;
    case 329u: goto L_0033A8FC;
    case 330u: goto L_0033A938;
    case 331u: goto L_0033A968;
    case 332u: goto L_0033A980;
    case 333u: goto L_0033A99C;
    case 334u: goto L_0033A9A8;
    case 335u: goto L_0033A9B0;
    case 336u: goto L_0033A9F0;
    case 337u: goto L_0033AA04;
    case 338u: goto L_0033AA0C;
    case 339u: goto L_0033AA20;
    case 340u: goto L_0033AA34;
    case 341u: goto L_0033AA54;
    case 342u: goto L_0033AA84;
    case 343u: goto L_0033AAB0;
    case 344u: goto L_0033AAC0;
    case 345u: goto L_0033AADC;
    case 346u: goto L_0033AAE8;
    case 347u: goto L_0033AAF0;
    case 348u: goto L_0033AB04;
    case 349u: goto L_0033AB0C;
    case 350u: goto L_0033AB20;
    case 351u: goto L_0033AB50;
    case 352u: goto L_0033AB98;
    case 353u: goto L_0033ABDC;
    case 354u: goto L_0033ABFC;
    case 355u: goto L_0033AC10;
    case 356u: goto L_0033AC28;
    case 357u: goto L_0033AC48;
    case 358u: goto L_0033ACA0;
    case 359u: goto L_0033ACC0;
    case 360u: goto L_0033ACDC;
    case 361u: goto L_0033ACE8;
    case 362u: goto L_0033AD08;
    case 363u: goto L_0033AD90;
    case 364u: goto L_0033ADA8;
    case 365u: goto L_0033ADB0;
    case 366u: goto L_0033ADD4;
    case 367u: goto L_0033ADDC;
    case 368u: goto L_0033ADF0;
    case 369u: goto L_0033ADF8;
    case 370u: goto L_0033AE20;
    case 371u: goto L_0033AE60;
    case 372u: goto L_0033AE80;
    case 373u: goto L_0033AEA0;
    case 374u: goto L_0033AEC0;
    case 375u: goto L_0033AF50;
    case 376u: goto L_0033AF68;
    case 377u: goto L_0033AF78;
    case 378u: goto L_0033AFA4;
    case 379u: goto L_0033AFC8;
    case 380u: goto L_0033AFE0;
    case 381u: goto L_0033B01C;
    case 382u: goto L_0033B048;
    case 383u: goto L_0033B06C;
    case 384u: goto L_0033B080;
    case 385u: goto L_0033B094;
    case 386u: goto L_0033B0B4;
    case 387u: goto L_0033B0D0;
    case 388u: goto L_0033B0E0;
    case 389u: goto L_0033B0F4;
    case 390u: goto L_0033B13C;
    case 391u: goto L_0033B148;
    case 392u: goto L_0033B164;
    case 393u: goto L_0033B170;
    case 394u: goto L_0033B180;
    case 395u: goto L_0033B194;
    case 396u: goto L_0033B1CC;
    case 397u: goto L_0033B1E8;
    case 398u: goto L_0033B1FC;
    case 399u: goto L_0033B208;
    case 400u: goto L_0033B218;
    case 401u: goto L_0033B230;
    case 402u: goto L_0033B244;
    case 403u: goto L_0033B250;
    case 404u: goto L_0033B284;
    case 405u: goto L_0033B290;
    case 406u: goto L_0033B2A0;
    case 407u: goto L_0033B2F4;
    case 408u: goto L_0033B33C;
    case 409u: goto L_0033B354;
    case 410u: goto L_0033B36C;
    case 411u: goto L_0033B380;
    case 412u: goto L_0033B3A4;
    case 413u: goto L_0033B3B4;
    case 414u: goto L_0033B3BC;
    case 415u: goto L_0033B3D8;
    case 416u: goto L_0033B3F0;
    case 417u: goto L_0033B410;
    case 418u: goto L_0033B464;
    case 419u: goto L_0033B47C;
    case 420u: goto L_0033B494;
    case 421u: goto L_0033B4B0;
    case 422u: goto L_0033B4C0;
    case 423u: goto L_0033B4F8;
    case 424u: goto L_0033B514;
    case 425u: goto L_0033B530;
    case 426u: goto L_0033B544;
    case 427u: goto L_0033B564;
    case 428u: goto L_0033B580;
    case 429u: goto L_0033B590;
    case 430u: goto L_0033B5A4;
    case 431u: goto L_0033B5EC;
    case 432u: goto L_0033B5F8;
    case 433u: goto L_0033B614;
    case 434u: goto L_0033B620;
    case 435u: goto L_0033B630;
    case 436u: goto L_0033B644;
    case 437u: goto L_0033B658;
    case 438u: goto L_0033B66C;
    case 439u: goto L_0033B678;
    case 440u: goto L_0033B688;
    case 441u: goto L_0033B6A0;
    case 442u: goto L_0033B6B4;
    case 443u: goto L_0033B6C0;
    case 444u: goto L_0033B6F4;
    case 445u: goto L_0033B700;
    case 446u: goto L_0033B710;
    case 447u: goto L_0033B748;
    case 448u: goto L_0033B760;
    case 449u: goto L_0033B770;
    case 450u: goto L_0033B790;
    case 451u: goto L_0033B7A8;
    case 452u: goto L_0033B828;
    case 453u: goto L_0033B850;
    case 454u: goto L_0033B868;
    case 455u: goto L_0033B880;
    case 456u: goto L_0033B89C;
    case 457u: goto L_0033B8A8;
    case 458u: goto L_0033B8B0;
    case 459u: goto L_0033B8DC;
    case 460u: goto L_0033B8F4;
    case 461u: goto L_0033B910;
    case 462u: goto L_0033B92C;
    case 463u: goto L_0033B938;
    case 464u: goto L_0033B940;
    case 465u: goto L_0033B970;
    case 466u: goto L_0033B988;
    case 467u: goto L_0033B9A0;
    case 468u: goto L_0033B9BC;
    case 469u: goto L_0033B9C8;
    case 470u: goto L_0033B9D0;
    case 471u: goto L_0033BA1C;
    case 472u: goto L_0033BA28;
    case 473u: goto L_0033BA44;
    case 474u: goto L_0033BA54;
    case 475u: goto L_0033BA68;
    case 476u: goto L_0033BA74;
    case 477u: goto L_0033BA7C;
    case 478u: goto L_0033BA90;
    case 479u: goto L_0033BAA0;
    case 480u: goto L_0033BAB0;
    case 481u: goto L_0033BAC4;
    case 482u: goto L_0033BAD0;
    case 483u: goto L_0033BB04;
    case 484u: goto L_0033BB14;
    case 485u: goto L_0033BB54;
    case 486u: goto L_0033BB70;
    case 487u: goto L_0033BB94;
    case 488u: goto L_0033BBA4;
    case 489u: goto L_0033BBAC;
    case 490u: goto L_0033BBC0;
    case 491u: goto L_0033BBC8;
    case 492u: goto L_0033BBE0;
    case 493u: goto L_0033BC00;
    case 494u: goto L_0033BC20;
    case 495u: goto L_0033BC40;
    case 496u: goto L_0033BCD0;
    case 497u: goto L_0033BCE8;
    case 498u: goto L_0033BCF8;
    case 499u: goto L_0033BD24;
    case 500u: goto L_0033BD48;
    case 501u: goto L_0033BD60;
    case 502u: goto L_0033BD9C;
    case 503u: goto L_0033BDC8;
    case 504u: goto L_0033BDEC;
    case 505u: goto L_0033BE00;
    case 506u: goto L_0033BE14;
    case 507u: goto L_0033BE34;
    case 508u: goto L_0033BE50;
    case 509u: goto L_0033BE60;
    case 510u: goto L_0033BE74;
    case 511u: goto L_0033BEB4;
    case 512u: goto L_0033BEC0;
    case 513u: goto L_0033BEDC;
    case 514u: goto L_0033BEE8;
    case 515u: goto L_0033BEF8;
    case 516u: goto L_0033BF0C;
    case 517u: goto L_0033BF44;
    case 518u: goto L_0033BF60;
    case 519u: goto L_0033BF74;
    case 520u: goto L_0033BF80;
    case 521u: goto L_0033BF90;
    case 522u: goto L_0033BFA0;
    case 523u: goto L_0033BFB4;
    case 524u: goto L_0033BFF8;
    default: bad_entry(c, 0x00338000u); return;
    }
L_00338000:
    c.f[1] = c.r[2].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[4].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 1216u), c.r[3].w[0]);
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[6], 0u + 11u);
    set32(c.r[7], 0u + 4u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    c.budget -= 15;
    { st32((c.r[4].w[0] + 108u), c.f[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x002CCB50u | kUnwind; return; } [[clang::musttail]] return unit_0073(c, 41u, depth); }
L_00338040:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00338074; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338074u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00338074u) [[unlikely]] return; }
L_00338074:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338094u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00338094u) [[unlikely]] return; }
L_00338094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003380B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003380F0; } }
L_003380B8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380ECu); st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003380ECu) [[unlikely]] return; }
L_003380EC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003380F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003380F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003380F8u) [[unlikely]] return; }
L_003380F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033812Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033812Cu) [[unlikely]] return; }
L_0033812C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338138u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00338138u) [[unlikely]] return; }
L_00338138:
    c.f[1] = ld32((c.r[16].w[0] + 7796u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[2].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338160; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338160u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00338160u) [[unlikely]] return; }
L_00338160:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x422C0000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338180u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00338180u) [[unlikely]] return; }
L_00338180:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_003381A8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003381C0; } }
L_003381A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.budget -= 6;
L_003381C0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003381D0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00338220; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B80000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033820Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0033820Cu) [[unlikely]] return; }
L_0033820C:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00338220:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033822Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033822Cu) [[unlikely]] return; }
L_0033822C:
    c.r[3].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00338244; } }
    st32((c.r[17].w[0] + 108u), 0u);
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 1216u), 0u);
    c.budget -= 3;
L_00338244:
    c.f[1] = ld32((c.r[17].w[0] + 7796u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00338294; } }
    c.f[1] = ld32((c.r[17].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_00338290; } }
    c.f[0] = ld32((c.r[17].w[0] + 7780u));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1216u), c.f[0]);  if (t) { goto L_00338374; } }
L_00338290:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00338294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033829Cu);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033829Cu) [[unlikely]] return; }
L_0033829C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);  if (t) { goto L_003382CC; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382B8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003382B8u) [[unlikely]] return; }
L_003382B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003382C0u) [[unlikely]] return; }
L_003382C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00338378; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41B00000u);
    c.budget -= 1;
L_003382CC:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003382D8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x003382D8u) [[unlikely]] return; }
L_003382D8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338374; } }
    c.r[3].d[0] = ld8((c.r[17].w[0] + 575u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0xBD970000u);  if (t) { goto L_0033836C; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338334; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[17].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 12u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033832Cu); st32((c.r[17].w[0] + 108u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033832Cu) [[unlikely]] return; }
L_0033832C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338374; } }
L_00338334:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 13u);
    set32(c.r[2], c.r[2].w[0] + 2u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[17].w[0] + 108u), 0u);
    set32(c.r[7], 0u + 3u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338360u); st32((c.r[17].w[0] + 104u), 0u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00338360u) [[unlikely]] return; }
L_00338360:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338374; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD970000u);
    c.budget -= 1;
L_0033836C:
    c.r[3].d[0] = c.r[3].d[0] | 46118ull;
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 2;
L_00338374:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338378:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00338390:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003383B4u) [[unlikely]] return; }
L_003383B4:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383C0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003383C0u) [[unlikely]] return; }
L_003383C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383C8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003383C8u) [[unlikely]] return; }
L_003383C8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003383EC; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383E4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003383E4u) [[unlikely]] return; }
L_003383E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003383ECu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003383ECu) [[unlikely]] return; }
L_003383EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00338400:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338420u); set32(c.r[5], c.r[17].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00338420u) [[unlikely]] return; }
L_00338420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338428u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00338428u) [[unlikely]] return; }
L_00338428:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);  if (t) { goto L_00338458; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 3u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338444u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00338444u) [[unlikely]] return; }
L_00338444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033844Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033844Cu) [[unlikely]] return; }
L_0033844C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_003384B0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    c.budget -= 1;
L_00338458:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338464u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00338464u) [[unlikely]] return; }
L_00338464:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);  if (t) { goto L_0033847C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF850000u);
    c.r[2].d[0] = c.r[2].d[0] | 7864ull;
    st32((c.r[17].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41D00000u);
    c.budget -= 4;
L_0033847C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338488u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00338488u) [[unlikely]] return; }
L_00338488:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003384AC; } }
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42000000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.budget -= 7;
L_003384AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003384B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003384C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5832u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003384E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5848u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00338500:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00338520:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_00338560; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338554u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00338554u) [[unlikely]] return; }
L_00338554:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00338578; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_00338560:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338574u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00338574u) [[unlikely]] return; }
L_00338574:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338578:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00338580:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338594u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338594u) [[unlikely]] return; }
L_00338594:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00338618; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003385BC; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003385B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003385B4u) [[unlikely]] return; }
L_003385B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338650; } }
L_003385BC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003385D4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003385D4u) [[unlikely]] return; }
L_003385D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003385F0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003385F0u) [[unlikely]] return; }
L_003385F0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033860C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0033864C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0033860C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0033864C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00338618:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338624u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00338624u) [[unlikely]] return; }
L_00338624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033864C; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_0033864C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338650:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338660:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338674u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338674u) [[unlikely]] return; }
L_00338674:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003386D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338694u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338694u) [[unlikely]] return; }
L_00338694:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003386B0u) [[unlikely]] return; }
L_003386B0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_003386CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003386D0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_003386CC:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_003386D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003386E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003386F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003386F4u) [[unlikely]] return; }
L_003386F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_003387E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338714u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00338714u) [[unlikely]] return; }
L_00338714:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003387B8; } }
    set32(c.r[5], 0u + 29u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338728u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00338728u) [[unlikely]] return; }
L_00338728:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338734u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00338734u) [[unlikely]] return; }
L_00338734:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338740u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00338740u) [[unlikely]] return; }
L_00338740:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033874Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0033874Cu) [[unlikely]] return; }
L_0033874C:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338758u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338758u) [[unlikely]] return; }
L_00338758:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338774u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00338774u) [[unlikely]] return; }
L_00338774:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00338790; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338794; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00338790:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00338794:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x003387A0u) [[unlikely]] return; }
L_003387A0:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387B0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x003387B0u) [[unlikely]] return; }
L_003387B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338808; } }
L_003387B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387CCu); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x003387CCu) [[unlikely]] return; }
L_003387CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x003387D4u) [[unlikely]] return; }
L_003387D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338804; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_003387E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387E8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x003387E8u) [[unlikely]] return; }
L_003387E8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003387F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x003387F4u) [[unlikely]] return; }
L_003387F4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338804u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00338804u) [[unlikely]] return; }
L_00338804:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338808:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338820:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338834u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338834u) [[unlikely]] return; }
L_00338834:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_0033885C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338850u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00338850u) [[unlikely]] return; }
L_00338850:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033886C; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0033885C:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338868u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x00338868u) [[unlikely]] return; }
L_00338868:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033886C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338880:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003388A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_003388E0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388D4u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003388D4u) [[unlikely]] return; }
L_003388D4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_003388F8; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_003388E0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 9u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003388F4u); st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x003388F4u) [[unlikely]] return; }
L_003388F4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_003388F8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00338900:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338914u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338914u) [[unlikely]] return; }
L_00338914:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00338998; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033893C; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338934u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00338934u) [[unlikely]] return; }
L_00338934:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_003389D0; } }
L_0033893C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338954u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338954u) [[unlikely]] return; }
L_00338954:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338970u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00338970u) [[unlikely]] return; }
L_00338970:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_0033898C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003389CC; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_0033898C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003389CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00338998:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x003389A4u) [[unlikely]] return; }
L_003389A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003389CC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_003389CC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003389D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003389E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003389F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x003389F4u) [[unlikely]] return; }
L_003389F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338A50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A14u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338A14u) [[unlikely]] return; }
L_00338A14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00338A30u) [[unlikely]] return; }
L_00338A30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338A4C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338A50; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00338A4C:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00338A50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338A60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338A74u) [[unlikely]] return; }
L_00338A74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00338B60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338A94u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00338A94u) [[unlikely]] return; }
L_00338A94:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338B38; } }
    set32(c.r[5], 0u + 29u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00338AA8u) [[unlikely]] return; }
L_00338AA8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00338AB4u) [[unlikely]] return; }
L_00338AB4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00338AC0u) [[unlikely]] return; }
L_00338AC0:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338ACCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00338ACCu) [[unlikely]] return; }
L_00338ACC:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AD8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338AD8u) [[unlikely]] return; }
L_00338AD8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338AF4u); set32(c.r[6], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x00338AF4u) [[unlikely]] return; }
L_00338AF4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00338B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338B14; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00338B10:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00338B14:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00338B20u) [[unlikely]] return; }
L_00338B20:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B30u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00338B30u) [[unlikely]] return; }
L_00338B30:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338B88; } }
L_00338B38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B4Cu); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00338B4Cu) [[unlikely]] return; }
L_00338B4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00338B54u) [[unlikely]] return; }
L_00338B54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338B84; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00338B60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B68u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338B68u) [[unlikely]] return; }
L_00338B68:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00338B74u) [[unlikely]] return; }
L_00338B74:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338B84u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00338B84u) [[unlikely]] return; }
L_00338B84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338B88:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338BB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338BB4u) [[unlikely]] return; }
L_00338BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { goto L_00338BDC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338BD0u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x00338BD0u) [[unlikely]] return; }
L_00338BD0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338BEC; } }
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_00338BDC:
    set32(c.r[6], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338BE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x00338BE8u) [[unlikely]] return; }
L_00338BE8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338BEC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338C00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C18u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00338C18u) [[unlikely]] return; }
L_00338C18:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00338C3C; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    c.budget -= 2;
L_00338C3C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5936u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00338C5Cu) [[unlikely]] return; }
L_00338C5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338C70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338C8Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00338C8Cu) [[unlikely]] return; }
L_00338C8C:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], 0u + 2u);  if (t) { goto L_00338CE8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338CDCu); st8((c.r[16].w[0] + 803u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00338CDCu) [[unlikely]] return; }
L_00338CDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338D04; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 1;
L_00338CE8:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00338D00u) [[unlikely]] return; }
L_00338D00:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338D04:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338D10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D2Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00338D2Cu) [[unlikely]] return; }
L_00338D2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D34u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00338D34u) [[unlikely]] return; }
L_00338D34:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_00338DC0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00338D64; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D54u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00338D54u) [[unlikely]] return; }
L_00338D54:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00338D5Cu) [[unlikely]] return; }
L_00338D5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338DF4; } }
L_00338D64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D7Cu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338D7Cu) [[unlikely]] return; }
L_00338D7C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338D98u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00338D98u) [[unlikely]] return; }
L_00338D98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338DB4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338DF0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00338DB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00338DF0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_00338DC0:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338DCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 74u, depth + 1u); else { c.pc = 0x002D0760u; return; } if (c.pc != 0x00338DCCu) [[unlikely]] return; }
L_00338DCC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338DF0; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[16].w[0] + 748u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 758u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[16].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 7;
L_00338DF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338DF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338E00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E1Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00338E1Cu) [[unlikely]] return; }
L_00338E1C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E24u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00338E24u) [[unlikely]] return; }
L_00338E24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00338E80; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u - 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E44u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338E44u) [[unlikely]] return; }
L_00338E44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338E60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00338E60u) [[unlikely]] return; }
L_00338E60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00338E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338E80; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 1;
L_00338E7C:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_00338E80:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338E90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338EACu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00338EACu) [[unlikely]] return; }
L_00338EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338EB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00338EB4u) [[unlikely]] return; }
L_00338EB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 4u);  if (t) { goto L_00338FA0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338ED4u); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00338ED4u) [[unlikely]] return; }
L_00338ED4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 16u);  if (t) { goto L_00338F7C; } }
    set32(c.r[5], 0u + 29u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338EE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0048(c, 63u, depth + 1u); else { c.pc = 0x00220ED0u; return; } if (c.pc != 0x00338EE8u) [[unlikely]] return; }
L_00338EE8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338EF4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00338EF4u) [[unlikely]] return; }
L_00338EF4:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F00u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00338F00u) [[unlikely]] return; }
L_00338F00:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F0Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00338F0Cu) [[unlikely]] return; }
L_00338F0C:
    set32(c.r[5], 0u - 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338F18u) [[unlikely]] return; }
L_00338F18:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F34u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00338F34u) [[unlikely]] return; }
L_00338F34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_00338F50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00338F54; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00338F50:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_00338F54:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F60u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00338F60u) [[unlikely]] return; }
L_00338F60:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F70u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00338F70u) [[unlikely]] return; }
L_00338F70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00338FC8; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 1;
L_00338F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00338F84u) [[unlikely]] return; }
L_00338F84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F8Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00338F8Cu) [[unlikely]] return; }
L_00338F8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338F94u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00338F94u) [[unlikely]] return; }
L_00338F94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00338FC4; } }
    set32(c.r[5], 0u - 4u);
    c.budget -= 1;
L_00338FA0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338FA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x00338FA8u) [[unlikely]] return; }
L_00338FA8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338FB4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x00338FB4u) [[unlikely]] return; }
L_00338FB4:
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338FC4u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x00338FC4u) [[unlikely]] return; }
L_00338FC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00338FC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00338FE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00338FF4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x00338FF4u) [[unlikely]] return; }
L_00338FF4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339010; } }
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339008u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00339008u) [[unlikely]] return; }
L_00339008:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339010u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00339010u) [[unlikely]] return; }
L_00339010:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339020:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 5968u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 7u);
    st8((c.r[4].w[0] + 575u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339084u); st8((c.r[4].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00339084u) [[unlikely]] return; }
L_00339084:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003390A8; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 2;
L_003390A8:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], 0u + 1u);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[17].w[0] + 108u), c.f[0]);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0] + 8u), 0u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 758u)));
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 7u);  if (t) { goto L_0033910C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[7], c.r[5], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339100u); st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339100u) [[unlikely]] return; }
L_00339100:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0033915C; } }
    set32(c.r[2], 0u + 7u);
    c.budget -= 1;
L_0033910C:
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339124u); st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00339124u) [[unlikely]] return; }
L_00339124:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], 0u + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 8052u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], 0u + 42u);
    st8((c.r[17].w[0] + 8053u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[6], 0u + 16u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339158u); st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339158u) [[unlikely]] return; }
L_00339158:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033915C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00339170:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339194u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00339194u) [[unlikely]] return; }
L_00339194:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003391A0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x003391A0u) [[unlikely]] return; }
L_003391A0:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_003391C8; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
L_003391C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003391D0u);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003391D0u) [[unlikely]] return; }
L_003391D0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);  if (t) { goto L_0033926C; } }
    set32(c.r[2], 0u + 7u);
    st8((c.r[17].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[17].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], c.r[17].w[0] + 1424u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003391F4u); st8((c.r[17].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003391F4u) [[unlikely]] return; }
L_003391F4:
    set32(c.r[2], ld32((c.r[17].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00339224; } }
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], 0u + 9u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339214u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00339214u) [[unlikely]] return; }
L_00339214:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033921Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033921Cu) [[unlikely]] return; }
L_0033921C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_003392B0; } }
L_00339224:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    set32(c.r[3], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[7], 0u + 4u);
    set32(c.r[2], 0u + 42u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 8052u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 8053u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 16u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339260u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339260u) [[unlikely]] return; }
L_00339260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003392AC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.budget -= 1;
L_0033926C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339278u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00339278u) [[unlikely]] return; }
L_00339278:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003392AC; } }
    set32(c.r[3], 0u + 1u);
    st8((c.r[17].w[0] + 748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 758u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 803u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[17].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFFEF0000u);
    c.r[4].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[3], 0u + 10u);
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    st32((c.r[17].w[0] + 1260u), c.r[4].w[0]);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 11;
L_003392AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_003392B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003392C0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7780u));
    c.f[0] = ld32((c.r[5].w[0] + 16u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[5].w[0] + 16u), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_003392FC; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003392FCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003392FCu) [[unlikely]] return; }
L_003392FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339304u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339304u) [[unlikely]] return; }
L_00339304:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[17].w[0] + 1424u);  if (t) { goto L_00339334; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 7813u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339330; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st16((c.r[17].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00339330:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 1;
L_00339334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033933Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033933Cu) [[unlikely]] return; }
L_0033933C:
    c.r[4].d[0] = ld8((c.r[17].w[0] + 578u));
    c.r[3].d[0] = c.r[4].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00339390; } }
    c.r[3].d[0] = c.r[4].d[0] & 64ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00339390; } }
    c.f[3] = ld32((c.r[17].w[0] + 1472u));
    c.f[2] = ld32((c.r[17].w[0] + 1476u));
    c.f[1] = ld32((c.r[17].w[0] + 1480u));
    c.f[0] = ld32((c.r[17].w[0] + 1484u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3FB30000u);
    c.r[4].d[0] = c.r[3].d[0] | 13107ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD330000u);
    c.r[3].d[0] = c.r[3].d[0] | 13107ull;
    st32((c.r[17].w[0] + 1424u), c.f[3]);
    st32((c.r[17].w[0] + 1428u), c.f[2]);
    st32((c.r[17].w[0] + 1432u), c.f[1]);
    st32((c.r[17].w[0] + 1436u), c.f[0]);
    st32((c.r[17].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[17].w[0] + 108u), c.r[3].w[0]);
    c.budget -= 14;
L_00339390:
    c.f[1] = ld32((c.r[16].w[0] + 16u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 8;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033940C; } }
    set32(c.r[3], ld32((c.r[17].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003393DC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43340000u);
    c.f[0] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_0033940C; } }
L_003393DC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld8((c.r[17].w[0] + 579u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] & 251ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033940Cu); st8((c.r[17].w[0] + 579u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033940Cu) [[unlikely]] return; }
L_0033940C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00339420:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033943Cu); mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033943Cu) [[unlikely]] return; }
L_0033943C:
    set32(c.r[5], c.r[17].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339448u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00339448u) [[unlikely]] return; }
L_00339448:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);  if (t) { goto L_00339470; } }
    st32((c.r[17].w[0] + 104u), 0u);
    st32((c.r[17].w[0] + 108u), 0u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41300000u);
    c.budget -= 3;
L_00339470:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033947Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0033947Cu) [[unlikely]] return; }
L_0033947C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003394BC; } }
    set32(c.r[2], 0u + 8u);
    st8((c.r[17].w[0] + 8053u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 6u);
    st8((c.r[17].w[0] + 8052u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 5u);
    set32(c.r[5], c.r[17].w[0] + 1424u);
    st8((c.r[16].w[0] + 13u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394A8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003394A8u) [[unlikely]] return; }
L_003394A8:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394B4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003394B4u) [[unlikely]] return; }
L_003394B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003394BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003394BCu) [[unlikely]] return; }
L_003394BC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003394D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6160u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003394F0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6192u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339520:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339568u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339568u) [[unlikely]] return; }
L_00339568:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_003395D8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_003395B4; } }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_003395B4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003395CCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x003395CCu) [[unlikely]] return; }
L_003395CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00339660; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_003395D8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003395E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003395E4u) [[unlikely]] return; }
L_003395E4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0033963C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339618u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00339618u) [[unlikely]] return; }
L_00339618:
    set32(c.r[5], 0u + 2u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339630u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339630u) [[unlikely]] return; }
L_00339630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033965C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0033963C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033965Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033965Cu) [[unlikely]] return; }
L_0033965C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00339660:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033968Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033968Cu) [[unlikely]] return; }
L_0033968C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339698u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339698u) [[unlikely]] return; }
L_00339698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396A0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003396A0u) [[unlikely]] return; }
L_003396A0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003396B8u) [[unlikely]] return; }
L_003396B8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00339748; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00339700; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_003396E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00339774; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_003396E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003396ECu) [[unlikely]] return; }
L_003396EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003396F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x003396F4u) [[unlikely]] return; }
L_003396F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339770; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00339700:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339724u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00339724u) [[unlikely]] return; }
L_00339724:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40400000u);
    set32(c.r[5], 0u + 2u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339740u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339740u) [[unlikely]] return; }
L_00339740:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339770; } }
L_00339748:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339770u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339770u) [[unlikely]] return; }
L_00339770:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00339774:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339780:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339794u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339794u) [[unlikely]] return; }
L_00339794:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397B4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003397B4u) [[unlikely]] return; }
L_003397B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_003397DC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033988C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_003397DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x003397E4u) [[unlikely]] return; }
L_003397E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003397F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x003397F4u) [[unlikely]] return; }
L_003397F4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033983C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339834u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339834u) [[unlikely]] return; }
L_00339834:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339888; } }
L_0033983C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339888u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339888u) [[unlikely]] return; }
L_00339888:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033988C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339894u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339894u) [[unlikely]] return; }
L_00339894:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003398B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003398C4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003398C4u) [[unlikely]] return; }
L_003398C4:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003398D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003398D4u) [[unlikely]] return; }
L_003398D4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003398E0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003398E0u) [[unlikely]] return; }
L_003398E0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339900u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00339900u) [[unlikely]] return; }
L_00339900:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00339928; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00339970; } }
L_00339928:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    set32(c.r[5], 0u + 2u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339970u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339970u) [[unlikely]] return; }
L_00339970:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339980:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x003399ACu) [[unlikely]] return; }
L_003399AC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399D0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x003399D0u) [[unlikely]] return; }
L_003399D0:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x003399DCu) [[unlikely]] return; }
L_003399DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x003399E4u) [[unlikely]] return; }
L_003399E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);  if (t) { goto L_00339A0C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003399F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x003399F8u) [[unlikely]] return; }
L_003399F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00339A00u) [[unlikely]] return; }
L_00339A00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00339A68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41880000u);
    c.budget -= 1;
L_00339A0C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00339A18u) [[unlikely]] return; }
L_00339A18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339A64; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00339A64; } }
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339A64u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339A64u) [[unlikely]] return; }
L_00339A64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00339A68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x00339AACu) [[unlikely]] return; }
L_00339AAC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AD0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00339AD0u) [[unlikely]] return; }
L_00339AD0:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339ADCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339ADCu) [[unlikely]] return; }
L_00339ADC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339AE4u) [[unlikely]] return; }
L_00339AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);  if (t) { goto L_00339B0C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339AF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00339AF8u) [[unlikely]] return; }
L_00339AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00339B00u) [[unlikely]] return; }
L_00339B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00339B68; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A80000u);
    c.budget -= 1;
L_00339B0C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B18u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x00339B18u) [[unlikely]] return; }
L_00339B18:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339B64; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00339B64; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B64u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339B64u) [[unlikely]] return; }
L_00339B64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00339B68:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339B80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339B9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00339B9Cu) [[unlikely]] return; }
L_00339B9C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339BA8u) [[unlikely]] return; }
L_00339BA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339BB0u) [[unlikely]] return; }
L_00339BB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339BCC; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00339BC4u) [[unlikely]] return; }
L_00339BC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339BCCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00339BCCu) [[unlikely]] return; }
L_00339BCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339BE0:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6224u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00339C10:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339C58u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339C58u) [[unlikely]] return; }
L_00339C58:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_00339CC8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00339CA4; } }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_00339CA4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339CBCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339CBCu) [[unlikely]] return; }
L_00339CBC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00339D50; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_00339CC8:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339CD4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00339CD4u) [[unlikely]] return; }
L_00339CD4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_00339D2C; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D08u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00339D08u) [[unlikely]] return; }
L_00339D08:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D20u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339D20u) [[unlikely]] return; }
L_00339D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339D4C; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_00339D2C:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339D4Cu) [[unlikely]] return; }
L_00339D4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00339D50:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339D60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D7Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00339D7Cu) [[unlikely]] return; }
L_00339D7C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D88u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339D88u) [[unlikely]] return; }
L_00339D88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339D90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339D90u) [[unlikely]] return; }
L_00339D90:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00339E5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339DA8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00339DA8u) [[unlikely]] return; }
L_00339DA8:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_00339E34; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_00339DF0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00339DD4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00339E60; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00339DD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339DDCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x00339DDCu) [[unlikely]] return; }
L_00339DDC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339DE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x00339DE4u) [[unlikely]] return; }
L_00339DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339E5C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_00339DF0:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E14u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00339E14u) [[unlikely]] return; }
L_00339E14:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E2Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339E2Cu) [[unlikely]] return; }
L_00339E2C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339E5C; } }
L_00339E34:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E5Cu); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339E5Cu) [[unlikely]] return; }
L_00339E5C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00339E60:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339E70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339E84u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339E84u) [[unlikely]] return; }
L_00339E84:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339EA4u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00339EA4u) [[unlikely]] return; }
L_00339EA4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00339ECC; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_00339F7C; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00339ECC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339ED4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x00339ED4u) [[unlikely]] return; }
L_00339ED4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339EE4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00339EE4u) [[unlikely]] return; }
L_00339EE4:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00339F2C; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F24u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339F24u) [[unlikely]] return; }
L_00339F24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00339F78; } }
L_00339F2C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F78u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x00339F78u) [[unlikely]] return; }
L_00339F78:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_00339F7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339F84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339F84u) [[unlikely]] return; }
L_00339F84:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00339FA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x00339FB4u) [[unlikely]] return; }
L_00339FB4:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00339FC4u) [[unlikely]] return; }
L_00339FC4:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x00339FD0u) [[unlikely]] return; }
L_00339FD0:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00339FF0u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x00339FF0u) [[unlikely]] return; }
L_00339FF0:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033A018; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033A068; } }
L_0033A018:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x40A00000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[5].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[4].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 11u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A068u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A068u) [[unlikely]] return; }
L_0033A068:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A080:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[12] = c.r[2].w[0];
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = c.r[2].w[0];
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 191u, depth + 1u); else { c.pc = 0x002DE200u; return; } if (c.pc != 0x0033A0ACu) [[unlikely]] return; }
L_0033A0AC:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0D0u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A0D0u) [[unlikely]] return; }
L_0033A0D0:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A0DCu) [[unlikely]] return; }
L_0033A0DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A0E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A0E4u) [[unlikely]] return; }
L_0033A0E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A120; } }
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    set32(c.r[6], 0u + 12u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A120u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A120u) [[unlikely]] return; }
L_0033A120:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A14Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A14Cu) [[unlikely]] return; }
L_0033A14C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A158u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A158u) [[unlikely]] return; }
L_0033A158:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A160u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A160u) [[unlikely]] return; }
L_0033A160:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A17C; } }
    set32(c.r[5], 0u + 12u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A174u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033A174u) [[unlikely]] return; }
L_0033A174:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A17Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033A17Cu) [[unlikely]] return; }
L_0033A17C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A190:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033A1C0:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A208u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A208u) [[unlikely]] return; }
L_0033A208:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);  if (t) { goto L_0033A278; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033A254; } }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_0033A254:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A26Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A26Cu) [[unlikely]] return; }
L_0033A26C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033A2FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.budget -= 1;
L_0033A278:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A284u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0033A284u) [[unlikely]] return; }
L_0033A284:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 2u);  if (t) { goto L_0033A2D8; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A2B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033A2B4u) [[unlikely]] return; }
L_0033A2B4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A2CCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A2CCu) [[unlikely]] return; }
L_0033A2CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A2F8; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 1;
L_0033A2D8:
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A2F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A2F8u) [[unlikely]] return; }
L_0033A2F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033A2FC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A310:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A32Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A32Cu) [[unlikely]] return; }
L_0033A32C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A338u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A338u) [[unlikely]] return; }
L_0033A338:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A340u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A340u) [[unlikely]] return; }
L_0033A340:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A408; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A358u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0033A358u) [[unlikely]] return; }
L_0033A358:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0033A3E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 4u);  goto L_0033A3A0; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0033A384; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033A40C; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0033A384:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A38Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033A38Cu) [[unlikely]] return; }
L_0033A38C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A394u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033A394u) [[unlikely]] return; }
L_0033A394:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A408; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 1;
L_0033A3A0:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A3C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033A3C0u) [[unlikely]] return; }
L_0033A3C0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A3D8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A3D8u) [[unlikely]] return; }
L_0033A3D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A408; } }
L_0033A3E0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A408u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A408u) [[unlikely]] return; }
L_0033A408:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033A40C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A420:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A434u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A434u) [[unlikely]] return; }
L_0033A434:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A454u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A454u) [[unlikely]] return; }
L_0033A454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033A47C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033A528; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033A47C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A484u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033A484u) [[unlikely]] return; }
L_0033A484:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A494u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0033A494u) [[unlikely]] return; }
L_0033A494:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0033A4D8; } }
    set32(c.r[2], 0u + 4u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A4D0u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A4D0u) [[unlikely]] return; }
L_0033A4D0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A524; } }
L_0033A4D8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[6], 0u + 1u);
    c.f[12] = 0u;
    set32(c.r[2], 0u + 7u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 1164u));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st32((c.r[16].w[0] + 1216u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 1156u));
    st32((c.r[16].w[0] + 104u), c.f[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A524u); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A524u) [[unlikely]] return; }
L_0033A524:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033A528:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A530u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A530u) [[unlikely]] return; }
L_0033A530:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A554u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A554u) [[unlikely]] return; }
L_0033A554:
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A564u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A564u) [[unlikely]] return; }
L_0033A564:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A570u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A570u) [[unlikely]] return; }
L_0033A570:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41900000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A590u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0033A590u) [[unlikely]] return; }
L_0033A590:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033A5B8; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033A5FC; } }
L_0033A5B8:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[2], 0u + 7u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 104u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[3].w[0]);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A5FCu); st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A5FCu) [[unlikely]] return; }
L_0033A5FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A62Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A62Cu) [[unlikely]] return; }
L_0033A62C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A638u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A638u) [[unlikely]] return; }
L_0033A638:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A640u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A640u) [[unlikely]] return; }
L_0033A640:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A6B4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0033A694; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 6u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A688u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A688u) [[unlikely]] return; }
L_0033A688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033A6B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0033A694:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 8u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6B4u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A6B4u) [[unlikely]] return; }
L_0033A6B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033A6B8:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A6D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A6ECu) [[unlikely]] return; }
L_0033A6EC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A6F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A6F8u) [[unlikely]] return; }
L_0033A6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A700u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A700u) [[unlikely]] return; }
L_0033A700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A774; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[5], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[5].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0033A754; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 7u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A748u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A748u) [[unlikely]] return; }
L_0033A748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033A778; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0033A754:
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    c.f[12] = 0u;
    set32(c.r[6], 0u + 9u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A774u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A774u) [[unlikely]] return; }
L_0033A774:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033A778:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A7ACu) [[unlikely]] return; }
L_0033A7AC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A7B8u) [[unlikely]] return; }
L_0033A7B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A7C0u) [[unlikely]] return; }
L_0033A7C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033A808; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 732u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 8u);  if (t) { goto L_0033A7F8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7E4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033A7E4u) [[unlikely]] return; }
L_0033A7E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A7ECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033A7ECu) [[unlikely]] return; }
L_0033A7EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033A80C; } }
    set32(c.r[5], 0u + 8u);
    c.budget -= 1;
L_0033A7F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A800u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033A800u) [[unlikely]] return; }
L_0033A800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A808u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033A808u) [[unlikely]] return; }
L_0033A808:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033A80C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A820:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6288u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033A850:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A898u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A898u) [[unlikely]] return; }
L_0033A898:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033A904; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[0]) < fp::key(c.f[1]));
    c.budget -= 11;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033A8E4; } }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 4;
L_0033A8E4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A8FCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A8FCu) [[unlikely]] return; }
L_0033A8FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033A96C; } }
L_0033A904:
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033A944; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A938u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033A938u) [[unlikely]] return; }
L_0033A938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033A950; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0033A944:
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    c.budget -= 3;
L_0033A950:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 13u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A968u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A968u) [[unlikely]] return; }
L_0033A968:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033A96C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033A980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A99Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033A99Cu) [[unlikely]] return; }
L_0033A99C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A9A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033A9A8u) [[unlikely]] return; }
L_0033A9A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A9B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033A9B0u) [[unlikely]] return; }
L_0033A9B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AA0C; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 1520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_0033A9FC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 13u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033A9F0u); st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033A9F0u) [[unlikely]] return; }
L_0033A9F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033AA10; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_0033A9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033AA04u) [[unlikely]] return; }
L_0033AA04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033AA0Cu) [[unlikely]] return; }
L_0033AA0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033AA10:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AA20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA34u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033AA34u) [[unlikely]] return; }
L_0033AA34:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA54u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033AA54u) [[unlikely]] return; }
L_0033AA54:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033AA7C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], c.r[16].w[0] + 1424u);  if (t) { goto L_0033AAA8; } }
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 1;
L_0033AA7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AA84u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033AA84u) [[unlikely]] return; }
L_0033AA84:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBD000000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), c.r[2].w[0]);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 9;
L_0033AAA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AAB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033AAB0u) [[unlikely]] return; }
L_0033AAB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AAC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], 0u + 3u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AADCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033AADCu) [[unlikely]] return; }
L_0033AADC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AAE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033AAE8u) [[unlikely]] return; }
L_0033AAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AAF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033AAF0u) [[unlikely]] return; }
L_0033AAF0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AB0C; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB04u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033AB04u) [[unlikely]] return; }
L_0033AB04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB0Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033AB0Cu) [[unlikely]] return; }
L_0033AB0C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AB20:
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6304u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033AB50:
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
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AB98u); st32((c.r[4].w[0] + 108u), c.f[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033AB98u) [[unlikely]] return; }
L_0033AB98:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033ABE4; } }
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 14u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABDCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033ABDCu) [[unlikely]] return; }
L_0033ABDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033AC00; } }
L_0033ABE4:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 10u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ABFCu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033ABFCu) [[unlikely]] return; }
L_0033ABFC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033AC00:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AC10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC28u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033AC28u) [[unlikely]] return; }
L_0033AC28:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    set32(c.r[5], 0u + 2u);
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AC48u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033AC48u) [[unlikely]] return; }
L_0033AC48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033AC6C; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033ACB0; } }
L_0033AC6C:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[5].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[6], c.r[6].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st32((c.r[16].w[0] + 1216u), c.r[5].w[0]);
    st32((c.r[16].w[0] + 104u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 108u), 0u);
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACA0u); st8((c.r[16].w[0] + 779u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0092(c, 316u, depth + 1u); else { c.pc = 0x0034B820u; return; } if (c.pc != 0x0033ACA0u) [[unlikely]] return; }
L_0033ACA0:
    set32(c.r[3], 0u + 7u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_0033ACB0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033ACC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 3u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACDCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033ACDCu) [[unlikely]] return; }
L_0033ACDC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ACE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033ACE8u) [[unlikely]] return; }
L_0033ACE8:
    c.f[1] = ld32((c.r[16].w[0] + 7780u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AD08u); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (depth < kMaxDepth) unit_0093(c, 59u, depth + 1u); else { c.pc = 0x0034CDC0u; return; } if (c.pc != 0x0033AD08u) [[unlikely]] return; }
L_0033AD08:
    c.r[1].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0033AD30; } }
    c.f[1] = ld32((c.r[16].w[0] + 1216u));
    c.f[0] = 0u;
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_0033AD74; } }
L_0033AD30:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 7u);  if (t) { goto L_0033AD68; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    set32(c.r[3], 0u + 7u);
    c.budget -= 8;
L_0033AD68:
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_0033AD74:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AD90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADA8u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033ADA8u) [[unlikely]] return; }
L_0033ADA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033ADB0u) [[unlikely]] return; }
L_0033ADB0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AE00; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[5], 0u + 7u);  if (t) { goto L_0033ADE8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADD4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033ADD4u) [[unlikely]] return; }
L_0033ADD4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADDCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033ADDCu) [[unlikely]] return; }
L_0033ADDC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033AE48; } }
    set32(c.r[5], 0u + 7u);
    c.budget -= 1;
L_0033ADE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADF0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033ADF0u) [[unlikely]] return; }
L_0033ADF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033ADF8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033ADF8u) [[unlikely]] return; }
L_0033ADF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AE44; } }
L_0033AE00:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0033AE44; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x423C0000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AE20u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0033AE20u) [[unlikely]] return; }
L_0033AE20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033AE44; } }
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42040000u);
    c.f[1] = c.r[3].w[0];
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 7;
L_0033AE44:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033AE48:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AE60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033AE80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6352u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033AEA0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6384u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033AEC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0033AF70; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);  goto L_0033AF28; }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0033AF3C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 1;
L_0033AF28:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 5;
L_0033AF3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[2].w[0] + 5984u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF50u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0090(c, 36u, depth + 1u); else { c.pc = 0x003405D0u; return; } if (c.pc != 0x0033AF50u) [[unlikely]] return; }
L_0033AF50:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF68u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033AF68u) [[unlikely]] return; }
L_0033AF68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033AFCC; } }
L_0033AF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AF78u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033AF78u) [[unlikely]] return; }
L_0033AF78:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033AFAC; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[7], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AFA4u); set32(c.r[6], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033AFA4u) [[unlikely]] return; }
L_0033AFA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033AFC8; } }
L_0033AFAC:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033AFC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033AFC8u) [[unlikely]] return; }
L_0033AFC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033AFCC:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033AFE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0033B06C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B06C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B01Cu); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B01Cu) [[unlikely]] return; }
L_0033B01C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033B050; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[7], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B048u); set32(c.r[6], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B048u) [[unlikely]] return; }
L_0033B048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B070; } }
L_0033B050:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B06Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B06Cu) [[unlikely]] return; }
L_0033B06C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B070:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B080:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B094u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B094u) [[unlikely]] return; }
L_0033B094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B0D0; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0B4u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B0B4u) [[unlikely]] return; }
L_0033B0B4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B0D0u) [[unlikely]] return; }
L_0033B0D0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B0E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B0F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B0F4u) [[unlikely]] return; }
L_0033B0F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0033B1F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0033B18C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033B188; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B13Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0033B13Cu) [[unlikely]] return; }
L_0033B13C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B148u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B148u) [[unlikely]] return; }
L_0033B148:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B164u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B164u) [[unlikely]] return; }
L_0033B164:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B170u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033B170u) [[unlikely]] return; }
L_0033B170:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B180u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033B180u) [[unlikely]] return; }
L_0033B180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B21C; } }
L_0033B188:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0033B18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B194u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0033B194u) [[unlikely]] return; }
L_0033B194:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033B1D4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 8u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1CCu); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033B1CCu) [[unlikely]] return; }
L_0033B1CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B218; } }
L_0033B1D4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1E8u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0033B1E8u) [[unlikely]] return; }
L_0033B1E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B218; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0033B1F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B1FCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B1FCu) [[unlikely]] return; }
L_0033B1FC:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B208u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033B208u) [[unlikely]] return; }
L_0033B208:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B218u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033B218u) [[unlikely]] return; }
L_0033B218:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B21C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B244u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B244u) [[unlikely]] return; }
L_0033B244:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B250u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B250u) [[unlikely]] return; }
L_0033B250:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_0033B288; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B284; } }
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = ld32((c.r[16].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B284u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B284u) [[unlikely]] return; }
L_0033B284:
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0033B288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B290u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033B290u) [[unlikely]] return; }
L_0033B290:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B2A0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033B2A0u) [[unlikely]] return; }
L_0033B2A0:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1200u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[0]);  if (t) { goto L_0033B35C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033B2FC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 16u);
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B2F4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B2F4u) [[unlikely]] return; }
L_0033B2F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B370; } }
L_0033B2FC:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0033B314; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_0033B348; } }
L_0033B314:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 16u);
    c.f[12] = 0u;
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B33Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B33Cu) [[unlikely]] return; }
L_0033B33C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B36C; } }
    set32(c.r[5], 0u + 32u);
    c.budget -= 1;
L_0033B348:
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B354u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0033B354u) [[unlikely]] return; }
L_0033B354:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B36C; } }
L_0033B35C:
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B36Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x0033B36Cu) [[unlikely]] return; }
L_0033B36C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B370:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B380:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = ld32((c.r[4].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x0033B3A4u) [[unlikely]] return; }
L_0033B3A4:
    set32(c.r[5], 0u + 255u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x0033B3B4u) [[unlikely]] return; }
L_0033B3B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3BCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B3BCu) [[unlikely]] return; }
L_0033B3BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B3D8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B3D8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0033B3D8u) [[unlikely]] return; }
L_0033B3D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B3F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6416u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033B410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0033B484; } }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], 0u + 7u);
    set32(c.r[2], 0u + 16u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 4u);
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B464u); set32(c.r[5], c.r[2].w[0] + 5984u);  if (depth < kMaxDepth) unit_0090(c, 36u, depth + 1u); else { c.pc = 0x003405D0u; return; } if (c.pc != 0x0033B464u) [[unlikely]] return; }
L_0033B464:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B47Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033B47Cu) [[unlikely]] return; }
L_0033B47C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B4B4; } }
L_0033B484:
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u - 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B494u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B494u) [[unlikely]] return; }
L_0033B494:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B4B0u) [[unlikely]] return; }
L_0033B4B0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B4B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B4C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0033B514; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033B514; } }
    set32(c.r[2], 0u + 3u);
    set32(c.r[5], 0u - 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B4F8u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B4F8u) [[unlikely]] return; }
L_0033B4F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B514u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B514u) [[unlikely]] return; }
L_0033B514:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B530:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B544u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B544u) [[unlikely]] return; }
L_0033B544:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B580; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B564u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B564u) [[unlikely]] return; }
L_0033B564:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B580u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B580u) [[unlikely]] return; }
L_0033B580:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B5A4u) [[unlikely]] return; }
L_0033B5A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0033B664; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0033B63C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033B638; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0033B5ECu) [[unlikely]] return; }
L_0033B5EC:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B5F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B5F8u) [[unlikely]] return; }
L_0033B5F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B614u); set32(c.r[6], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B614u) [[unlikely]] return; }
L_0033B614:
    set32(c.r[5], 0u + 5u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B620u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033B620u) [[unlikely]] return; }
L_0033B620:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B630u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033B630u) [[unlikely]] return; }
L_0033B630:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B68C; } }
L_0033B638:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0033B63C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B644u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0033B644u) [[unlikely]] return; }
L_0033B644:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B658u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0033B658u) [[unlikely]] return; }
L_0033B658:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033B688; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0033B664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B66Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B66Cu) [[unlikely]] return; }
L_0033B66C:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B678u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033B678u) [[unlikely]] return; }
L_0033B678:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B688u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033B688u) [[unlikely]] return; }
L_0033B688:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B68C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B6A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033B6B4u) [[unlikely]] return; }
L_0033B6B4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6C0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033B6C0u) [[unlikely]] return; }
L_0033B6C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[5], 0u + 5u);  if (t) { goto L_0033B6F8; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033B6F4; } }
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = ld32((c.r[16].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B6F4u); set32(c.r[6], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B6F4u) [[unlikely]] return; }
L_0033B6F4:
    set32(c.r[5], 0u + 5u);
    c.budget -= 1;
L_0033B6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B700u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033B700u) [[unlikely]] return; }
L_0033B700:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B710u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033B710u) [[unlikely]] return; }
L_0033B710:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_0033B750; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B748u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0033B748u) [[unlikely]] return; }
L_0033B748:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B764; } }
L_0033B750:
    set32(c.r[5], 0u + 5u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B760u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 105u, depth + 1u); else { c.pc = 0x0034DA70u; return; } if (c.pc != 0x0033B760u) [[unlikely]] return; }
L_0033B760:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B764:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B770:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6448u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033B790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B7A8u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033B7A8u) [[unlikely]] return; }
L_0033B7A8:
    st8((c.r[16].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0033B834; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.f[0] = c.r[2].w[0];
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 11;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);  goto L_0033B7FC; }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0033B810; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 1;
L_0033B7FC:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 5;
L_0033B810:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B828u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033B828u) [[unlikely]] return; }
L_0033B828:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033B86C; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0033B834:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B850u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B850u) [[unlikely]] return; }
L_0033B850:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B868u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0033B868u) [[unlikely]] return; }
L_0033B868:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033B86C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B880:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B89Cu); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033B89Cu) [[unlikely]] return; }
L_0033B89C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8A8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033B8A8u) [[unlikely]] return; }
L_0033B8A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033B8B0u) [[unlikely]] return; }
L_0033B8B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B8F4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8DCu); st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B8DCu) [[unlikely]] return; }
L_0033B8DC:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 17u);
    set32(c.r[7], 0u + 10u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B8F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0033B8F4u) [[unlikely]] return; }
L_0033B8F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B910:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B92Cu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033B92Cu) [[unlikely]] return; }
L_0033B92C:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B938u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033B938u) [[unlikely]] return; }
L_0033B938:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B940u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033B940u) [[unlikely]] return; }
L_0033B940:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033B988; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 2u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], 0u + 8u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B970u); st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033B970u) [[unlikely]] return; }
L_0033B970:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 1u);
    set32(c.r[7], 0u + 18u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B988u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 55u, depth + 1u); else { c.pc = 0x002CD460u; return; } if (c.pc != 0x0033B988u) [[unlikely]] return; }
L_0033B988:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033B9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9BCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x0033B9BCu) [[unlikely]] return; }
L_0033B9BC:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9C8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 307u, depth + 1u); else { c.pc = 0x0034B6F0u; return; } if (c.pc != 0x0033B9C8u) [[unlikely]] return; }
L_0033B9C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033B9D0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033B9D0u) [[unlikely]] return; }
L_0033B9D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0033BA88; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1580u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0033BA60; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BA5C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[16].w[0] + 1216u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 320u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA1Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0033BA1Cu) [[unlikely]] return; }
L_0033BA1C:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA28u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BA28u) [[unlikely]] return; }
L_0033BA28:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA44u); set32(c.r[6], c.r[2].w[0] + 5u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BA44u) [[unlikely]] return; }
L_0033BA44:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA54u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033BA54u) [[unlikely]] return; }
L_0033BA54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033BAA4; } }
L_0033BA5C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0033BA60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA68u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0033BA68u) [[unlikely]] return; }
L_0033BA68:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033BA74u) [[unlikely]] return; }
L_0033BA74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA7Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033BA7Cu) [[unlikely]] return; }
L_0033BA7C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BAA0; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0033BA88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BA90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BA90u) [[unlikely]] return; }
L_0033BA90:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAA0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033BAA0u) [[unlikely]] return; }
L_0033BAA0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033BAA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BAB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAC4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033BAC4u) [[unlikely]] return; }
L_0033BAC4:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BAD0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BAD0u) [[unlikely]] return; }
L_0033BAD0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0033BB08; } }
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_0033BB04; } }
    st8((c.r[16].w[0] + 775u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = ld32((c.r[16].w[0] + 7756u));
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB04u); set32(c.r[6], c.r[2].w[0] + 13u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BB04u) [[unlikely]] return; }
L_0033BB04:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0033BB08:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB14u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033BB14u) [[unlikely]] return; }
L_0033BB14:
    c.f[1] = ld32((c.r[16].w[0] + 7740u));
    c.f[0] = ld32((c.r[16].w[0] + 1216u));
    c.f[12] = 0u;
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[12]));
    c.budget -= 8;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1216u), c.f[0]);  if (t) { goto L_0033BB54; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 733u)));
    set32(c.r[7], 0u + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 733u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 758u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB54u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033BB54u) [[unlikely]] return; }
L_0033BB54:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BB70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[13] = ld32((c.r[4].w[0] + 7740u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BB94u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x0033BB94u) [[unlikely]] return; }
L_0033BB94:
    set32(c.r[5], 0u + 255u);
    c.f[12] = c.f[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBA4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 296u, depth + 1u); else { c.pc = 0x002DF670u; return; } if (c.pc != 0x0033BBA4u) [[unlikely]] return; }
L_0033BBA4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 68u, depth + 1u); else { c.pc = 0x002CDCB0u; return; } if (c.pc != 0x0033BBACu) [[unlikely]] return; }
L_0033BBAC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BBC8; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 27u, depth + 1u); else { c.pc = 0x0034C680u; return; } if (c.pc != 0x0033BBC0u) [[unlikely]] return; }
L_0033BBC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BBC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 19u, depth + 1u); else { c.pc = 0x0034C550u; return; } if (c.pc != 0x0033BBC8u) [[unlikely]] return; }
L_0033BBC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BBE0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 728u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6480u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033BC00:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 732u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6496u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033BC20:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[2], c.r[2].w[0] + 6512u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00338000u < 16384u) { entry = entries_008E[(t - 0x00338000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0033BC40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    st8((c.r[4].w[0] + 749u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0033BCF0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F190000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    set32(c.r[3], 0u + 1u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.f[1] = ld32((c.r[16].w[0] + 104u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 13;
    if (!(c.fcr31 & kFpuCondition)) { c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);  goto L_0033BCA8; }
    st32((c.r[16].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBC990000u);
    c.r[2].d[0] = c.r[2].d[0] | 39322ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 108u), c.r[2].w[0]);  if (t) { goto L_0033BCBC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42800000u);
    c.budget -= 1;
L_0033BCA8:
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[16].w[0] + 108u), c.f[0]);
    c.budget -= 5;
L_0033BCBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00510000u);
    set32(c.r[5], c.r[2].w[0] + 5984u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCD0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0090(c, 36u, depth + 1u); else { c.pc = 0x003405D0u; return; } if (c.pc != 0x0033BCD0u) [[unlikely]] return; }
L_0033BCD0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCE8u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033BCE8u) [[unlikely]] return; }
L_0033BCE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033BD4C; } }
L_0033BCF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BCF8u); set32(c.r[5], 0u - 4u);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BCF8u) [[unlikely]] return; }
L_0033BCF8:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BD2C; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[7], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD24u); set32(c.r[6], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BD24u) [[unlikely]] return; }
L_0033BD24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BD48; } }
L_0033BD2C:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD48u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BD48u) [[unlikely]] return; }
L_0033BD48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033BD4C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BD60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 758u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_0033BDEC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0033BDEC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BD9Cu); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BD9Cu) [[unlikely]] return; }
L_0033BD9C:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0033BDD0; } }
    set32(c.r[5], 0u + 3u);
    c.f[12] = 0u;
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[7], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BDC8u); set32(c.r[6], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BDC8u) [[unlikely]] return; }
L_0033BDC8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033BDF0; } }
L_0033BDD0:
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], 0u + 8u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BDECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BDECu) [[unlikely]] return; }
L_0033BDEC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033BDF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BE00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE14u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033BE14u) [[unlikely]] return; }
L_0033BE14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0033BE50; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[5], 0u - 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE34u); st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BE34u) [[unlikely]] return; }
L_0033BE34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[7], 0u + 8u);
    set32(c.r[6], c.r[2].w[0] + 2u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE50u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BE50u) [[unlikely]] return; }
L_0033BE50:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BE60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BE74u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033BE74u) [[unlikely]] return; }
L_0033BE74:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u - 1u);  if (t) { goto L_0033BF6C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1592u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0033BF04; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 322u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0033BF00; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[16].w[0] + 321u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEB4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0033BEB4u) [[unlikely]] return; }
L_0033BEB4:
    set32(c.r[5], 0u - 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEC0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BEC0u) [[unlikely]] return; }
L_0033BEC0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEDCu); set32(c.r[6], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BEDCu) [[unlikely]] return; }
L_0033BEDC:
    set32(c.r[5], 0u + 16u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEE8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033BEE8u) [[unlikely]] return; }
L_0033BEE8:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BEF8u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033BEF8u) [[unlikely]] return; }
L_0033BEF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0033BF94; } }
L_0033BF00:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0033BF04:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF0Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0033BF0Cu) [[unlikely]] return; }
L_0033BF0C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0033BF4C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 8u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF44u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 41u, depth + 1u); else { c.pc = 0x002CCB50u; return; } if (c.pc != 0x0033BF44u) [[unlikely]] return; }
L_0033BF44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF90; } }
L_0033BF4C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 761u)));
    set32(c.r[5], 0u + 16u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF60u); st8((c.r[16].w[0] + 804u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0076(c, 88u, depth + 1u); else { c.pc = 0x002D9390u; return; } if (c.pc != 0x0033BF60u) [[unlikely]] return; }
L_0033BF60:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0033BF90; } }
    set32(c.r[5], 0u - 1u);
    c.budget -= 1;
L_0033BF6C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 81u, depth + 1u); else { c.pc = 0x0034D0E0u; return; } if (c.pc != 0x0033BF74u) [[unlikely]] return; }
L_0033BF74:
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF80u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 101u, depth + 1u); else { c.pc = 0x0034D930u; return; } if (c.pc != 0x0033BF80u) [[unlikely]] return; }
L_0033BF80:
    set32(c.r[6], 0u + 1u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BF90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 61u, depth + 1u); else { c.pc = 0x0034CE70u; return; } if (c.pc != 0x0033BF90u) [[unlikely]] return; }
L_0033BF90:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0033BF94:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0033BFA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BFB4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0073(c, 71u, depth + 1u); else { c.pc = 0x002CDCF0u; return; } if (c.pc != 0x0033BFB4u) [[unlikely]] return; }
L_0033BFB4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 7773u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 5u);  if (t) { [[clang::musttail]] return unit_008F(c, 4u, depth); } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 775u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { [[clang::musttail]] return unit_008F(c, 1u, depth); } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    set32(c.r[7], 0u + 16u);
    c.f[12] = 0u;
    set32(c.r[5], 0u + 3u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0033BFF8u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_0073(c, 49u, depth + 1u); else { c.pc = 0x002CD060u; return; } if (c.pc != 0x0033BFF8u) [[unlikely]] return; }
L_0033BFF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { [[clang::musttail]] return unit_008F(c, 6u, depth); } }
    [[clang::musttail]] return unit_008F(c, 1u, depth);
}

}
