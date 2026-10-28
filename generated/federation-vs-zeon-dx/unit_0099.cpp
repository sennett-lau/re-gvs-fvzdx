#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0099[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159,
    0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0,
    0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0,
    0, 208, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0,
    0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0,
    0, 0, 243, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0,
    0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0,
    0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0,
    309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0,
    0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0,
    0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338,
    0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0,
    0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0,
    0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0,
    367, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0,
    0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0,
    0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0,
    0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0,
    426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0,
    0, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441,
    0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0,
    0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0,
    0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0,
    462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0,
    494, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501,
    0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0,
    0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0,
    516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0,
    534, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0,
    0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0,
    560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0,
    573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0,
    580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 587, 0,
    0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 0,
};

void unit_0099(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00364000;
    case 2u: goto L_00364020;
    case 3u: goto L_00364050;
    case 4u: goto L_00364080;
    case 5u: goto L_003640B0;
    case 6u: goto L_003640E0;
    case 7u: goto L_00364110;
    case 8u: goto L_00364140;
    case 9u: goto L_00364170;
    case 10u: goto L_003641A0;
    case 11u: goto L_003641D0;
    case 12u: goto L_00364200;
    case 13u: goto L_0036422C;
    case 14u: goto L_00364234;
    case 15u: goto L_00364240;
    case 16u: goto L_00364270;
    case 17u: goto L_003642A8;
    case 18u: goto L_003642C0;
    case 19u: goto L_00364360;
    case 20u: goto L_003643A8;
    case 21u: goto L_003643D0;
    case 22u: goto L_003643EC;
    case 23u: goto L_00364424;
    case 24u: goto L_00364448;
    case 25u: goto L_00364460;
    case 26u: goto L_003644B0;
    case 27u: goto L_003644FC;
    case 28u: goto L_00364510;
    case 29u: goto L_00364528;
    case 30u: goto L_00364540;
    case 31u: goto L_0036455C;
    case 32u: goto L_00364570;
    case 33u: goto L_00364580;
    case 34u: goto L_003645A0;
    case 35u: goto L_003645BC;
    case 36u: goto L_00364600;
    case 37u: goto L_00364610;
    case 38u: goto L_00364628;
    case 39u: goto L_00364650;
    case 40u: goto L_00364670;
    case 41u: goto L_003646CC;
    case 42u: goto L_003646DC;
    case 43u: goto L_003646FC;
    case 44u: goto L_00364730;
    case 45u: goto L_00364740;
    case 46u: goto L_003647A0;
    case 47u: goto L_003647C0;
    case 48u: goto L_003647E0;
    case 49u: goto L_00364800;
    case 50u: goto L_00364848;
    case 51u: goto L_00364870;
    case 52u: goto L_00364880;
    case 53u: goto L_003648C0;
    case 54u: goto L_0036491C;
    case 55u: goto L_00364938;
    case 56u: goto L_00364948;
    case 57u: goto L_00364960;
    case 58u: goto L_0036497C;
    case 59u: goto L_0036498C;
    case 60u: goto L_003649B4;
    case 61u: goto L_003649E0;
    case 62u: goto L_003649F4;
    case 63u: goto L_00364A10;
    case 64u: goto L_00364A28;
    case 65u: goto L_00364A50;
    case 66u: goto L_00364A78;
    case 67u: goto L_00364A80;
    case 68u: goto L_00364B14;
    case 69u: goto L_00364B28;
    case 70u: goto L_00364B50;
    case 71u: goto L_00364B6C;
    case 72u: goto L_00364B7C;
    case 73u: goto L_00364BC0;
    case 74u: goto L_00364BD4;
    case 75u: goto L_00364BE8;
    case 76u: goto L_00364BFC;
    case 77u: goto L_00364C10;
    case 78u: goto L_00364C24;
    case 79u: goto L_00364C38;
    case 80u: goto L_00364C80;
    case 81u: goto L_00364C90;
    case 82u: goto L_00364D28;
    case 83u: goto L_00364D6C;
    case 84u: goto L_00364D90;
    case 85u: goto L_00364DB4;
    case 86u: goto L_00364E18;
    case 87u: goto L_00364E20;
    case 88u: goto L_00364E40;
    case 89u: goto L_00364E60;
    case 90u: goto L_00364E7C;
    case 91u: goto L_00364EFC;
    case 92u: goto L_00365070;
    case 93u: goto L_003650A0;
    case 94u: goto L_003650D0;
    case 95u: goto L_00365118;
    case 96u: goto L_00365234;
    case 97u: goto L_00365270;
    case 98u: goto L_003652F4;
    case 99u: goto L_00365308;
    case 100u: goto L_00365374;
    case 101u: goto L_0036537C;
    case 102u: goto L_0036538C;
    case 103u: goto L_003653A8;
    case 104u: goto L_003653B0;
    case 105u: goto L_00365440;
    case 106u: goto L_00365480;
    case 107u: goto L_00365498;
    case 108u: goto L_003654D0;
    case 109u: goto L_003654E8;
    case 110u: goto L_003655A0;
    case 111u: goto L_00365628;
    case 112u: goto L_00365638;
    case 113u: goto L_00365640;
    case 114u: goto L_00365648;
    case 115u: goto L_00365650;
    case 116u: goto L_00365688;
    case 117u: goto L_003656A0;
    case 118u: goto L_003656B0;
    case 119u: goto L_003656C8;
    case 120u: goto L_003656DC;
    case 121u: goto L_003656EC;
    case 122u: goto L_00365708;
    case 123u: goto L_0036571C;
    case 124u: goto L_00365730;
    case 125u: goto L_00365744;
    case 126u: goto L_0036576C;
    case 127u: goto L_00365780;
    case 128u: goto L_003657A0;
    case 129u: goto L_003657B0;
    case 130u: goto L_003657C8;
    case 131u: goto L_003657D0;
    case 132u: goto L_00365800;
    case 133u: goto L_00365870;
    case 134u: goto L_00365880;
    case 135u: goto L_003658A0;
    case 136u: goto L_003658D0;
    case 137u: goto L_00365910;
    case 138u: goto L_00365940;
    case 139u: goto L_00365960;
    case 140u: goto L_00365980;
    case 141u: goto L_003659B8;
    case 142u: goto L_003659E0;
    case 143u: goto L_003659F0;
    case 144u: goto L_00365A10;
    case 145u: goto L_00365A3C;
    case 146u: goto L_00365A4C;
    case 147u: goto L_00365A70;
    case 148u: goto L_00365B08;
    case 149u: goto L_00365B18;
    case 150u: goto L_00365B40;
    case 151u: goto L_00365B50;
    case 152u: goto L_00365B68;
    case 153u: goto L_00365B7C;
    case 154u: goto L_00365B8C;
    case 155u: goto L_00365BA4;
    case 156u: goto L_00365BBC;
    case 157u: goto L_00365BCC;
    case 158u: goto L_00365BE0;
    case 159u: goto L_00365BFC;
    case 160u: goto L_00365C10;
    case 161u: goto L_00365C28;
    case 162u: goto L_00365C3C;
    case 163u: goto L_00365C50;
    case 164u: goto L_00365CE8;
    case 165u: goto L_00365CF8;
    case 166u: goto L_00365D08;
    case 167u: goto L_00365D18;
    case 168u: goto L_00365D28;
    case 169u: goto L_00365D38;
    case 170u: goto L_00365D48;
    case 171u: goto L_00365D58;
    case 172u: goto L_00365D68;
    case 173u: goto L_00365D78;
    case 174u: goto L_00365D90;
    case 175u: goto L_00365DA0;
    case 176u: goto L_00365DB0;
    case 177u: goto L_00365DC0;
    case 178u: goto L_00365DE8;
    case 179u: goto L_00365E40;
    case 180u: goto L_00365E50;
    case 181u: goto L_00365E70;
    case 182u: goto L_00365EA0;
    case 183u: goto L_00365EE0;
    case 184u: goto L_00365F20;
    case 185u: goto L_00365F4C;
    case 186u: goto L_00365F80;
    case 187u: goto L_00365FA8;
    case 188u: goto L_00365FB8;
    case 189u: goto L_00365FD0;
    case 190u: goto L_00365FF0;
    case 191u: goto L_00366000;
    case 192u: goto L_00366010;
    case 193u: goto L_00366044;
    case 194u: goto L_00366064;
    case 195u: goto L_003660B0;
    case 196u: goto L_003660C8;
    case 197u: goto L_003660D8;
    case 198u: goto L_003660E4;
    case 199u: goto L_003660F0;
    case 200u: goto L_00366100;
    case 201u: goto L_00366118;
    case 202u: goto L_00366128;
    case 203u: goto L_00366134;
    case 204u: goto L_00366140;
    case 205u: goto L_00366150;
    case 206u: goto L_00366168;
    case 207u: goto L_00366178;
    case 208u: goto L_00366184;
    case 209u: goto L_00366190;
    case 210u: goto L_003661A0;
    case 211u: goto L_003661C0;
    case 212u: goto L_003661D0;
    case 213u: goto L_003661F0;
    case 214u: goto L_0036620C;
    case 215u: goto L_0036621C;
    case 216u: goto L_0036622C;
    case 217u: goto L_0036623C;
    case 218u: goto L_00366250;
    case 219u: goto L_00366268;
    case 220u: goto L_00366278;
    case 221u: goto L_00366284;
    case 222u: goto L_00366290;
    case 223u: goto L_003662A0;
    case 224u: goto L_003662B8;
    case 225u: goto L_003662C8;
    case 226u: goto L_003662E0;
    case 227u: goto L_003662EC;
    case 228u: goto L_003662F8;
    case 229u: goto L_00366310;
    case 230u: goto L_00366330;
    case 231u: goto L_00366348;
    case 232u: goto L_00366358;
    case 233u: goto L_00366368;
    case 234u: goto L_00366374;
    case 235u: goto L_00366380;
    case 236u: goto L_00366398;
    case 237u: goto L_003663A8;
    case 238u: goto L_003663B4;
    case 239u: goto L_003663C0;
    case 240u: goto L_003663D0;
    case 241u: goto L_003663E8;
    case 242u: goto L_003663F8;
    case 243u: goto L_00366408;
    case 244u: goto L_00366414;
    case 245u: goto L_00366420;
    case 246u: goto L_00366430;
    case 247u: goto L_00366454;
    case 248u: goto L_00366470;
    case 249u: goto L_00366478;
    case 250u: goto L_00366484;
    case 251u: goto L_003664C0;
    case 252u: goto L_003664E0;
    case 253u: goto L_003664F8;
    case 254u: goto L_00366508;
    case 255u: goto L_00366520;
    case 256u: goto L_0036652C;
    case 257u: goto L_00366544;
    case 258u: goto L_00366550;
    case 259u: goto L_0036655C;
    case 260u: goto L_00366570;
    case 261u: goto L_00366588;
    case 262u: goto L_00366598;
    case 263u: goto L_003665A4;
    case 264u: goto L_003665BC;
    case 265u: goto L_003665C8;
    case 266u: goto L_003665D4;
    case 267u: goto L_003665E0;
    case 268u: goto L_003665F8;
    case 269u: goto L_00366608;
    case 270u: goto L_00366618;
    case 271u: goto L_00366624;
    case 272u: goto L_00366630;
    case 273u: goto L_00366640;
    case 274u: goto L_00366658;
    case 275u: goto L_00366668;
    case 276u: goto L_00366678;
    case 277u: goto L_00366684;
    case 278u: goto L_00366690;
    case 279u: goto L_003666A0;
    case 280u: goto L_003666B8;
    case 281u: goto L_003666C8;
    case 282u: goto L_003666D8;
    case 283u: goto L_003666E4;
    case 284u: goto L_003666F0;
    case 285u: goto L_00366700;
    case 286u: goto L_00366718;
    case 287u: goto L_00366728;
    case 288u: goto L_0036673C;
    case 289u: goto L_00366748;
    case 290u: goto L_00366754;
    case 291u: goto L_00366760;
    case 292u: goto L_00366794;
    case 293u: goto L_003667D8;
    case 294u: goto L_003667E8;
    case 295u: goto L_00366800;
    case 296u: goto L_00366810;
    case 297u: goto L_00366824;
    case 298u: goto L_00366838;
    case 299u: goto L_0036684C;
    case 300u: goto L_00366860;
    case 301u: goto L_00366870;
    case 302u: goto L_00366884;
    case 303u: goto L_00366894;
    case 304u: goto L_003668A4;
    case 305u: goto L_003668B4;
    case 306u: goto L_003668C4;
    case 307u: goto L_003668D8;
    case 308u: goto L_003668EC;
    case 309u: goto L_00366900;
    case 310u: goto L_00366914;
    case 311u: goto L_00366928;
    case 312u: goto L_0036693C;
    case 313u: goto L_00366950;
    case 314u: goto L_00366964;
    case 315u: goto L_00366974;
    case 316u: goto L_00366984;
    case 317u: goto L_00366994;
    case 318u: goto L_003669A4;
    case 319u: goto L_003669B4;
    case 320u: goto L_003669C4;
    case 321u: goto L_003669D4;
    case 322u: goto L_003669E4;
    case 323u: goto L_003669F0;
    case 324u: goto L_003669FC;
    case 325u: goto L_00366A20;
    case 326u: goto L_00366A38;
    case 327u: goto L_00366A48;
    case 328u: goto L_00366A54;
    case 329u: goto L_00366A60;
    case 330u: goto L_00366A70;
    case 331u: goto L_00366A84;
    case 332u: goto L_00366AA0;
    case 333u: goto L_00366AB0;
    case 334u: goto L_00366AC0;
    case 335u: goto L_00366ACC;
    case 336u: goto L_00366AE4;
    case 337u: goto L_00366AF0;
    case 338u: goto L_00366AFC;
    case 339u: goto L_00366B10;
    case 340u: goto L_00366B24;
    case 341u: goto L_00366B40;
    case 342u: goto L_00366B50;
    case 343u: goto L_00366B60;
    case 344u: goto L_00366B6C;
    case 345u: goto L_00366B84;
    case 346u: goto L_00366B90;
    case 347u: goto L_00366B9C;
    case 348u: goto L_00366BB0;
    case 349u: goto L_00366BC8;
    case 350u: goto L_00366BD8;
    case 351u: goto L_00366BE4;
    case 352u: goto L_00366BF8;
    case 353u: goto L_00366C04;
    case 354u: goto L_00366C18;
    case 355u: goto L_00366C20;
    case 356u: goto L_00366C38;
    case 357u: goto L_00366C48;
    case 358u: goto L_00366C58;
    case 359u: goto L_00366C64;
    case 360u: goto L_00366C80;
    case 361u: goto L_00366C8C;
    case 362u: goto L_00366C98;
    case 363u: goto L_00366CB0;
    case 364u: goto L_00366CC4;
    case 365u: goto L_00366CE0;
    case 366u: goto L_00366CF0;
    case 367u: goto L_00366D00;
    case 368u: goto L_00366D0C;
    case 369u: goto L_00366D24;
    case 370u: goto L_00366D30;
    case 371u: goto L_00366D3C;
    case 372u: goto L_00366D50;
    case 373u: goto L_00366D68;
    case 374u: goto L_00366D78;
    case 375u: goto L_00366D8C;
    case 376u: goto L_00366D98;
    case 377u: goto L_00366DA4;
    case 378u: goto L_00366DB0;
    case 379u: goto L_00366DC4;
    case 380u: goto L_00366DE0;
    case 381u: goto L_00366DF0;
    case 382u: goto L_00366E00;
    case 383u: goto L_00366E0C;
    case 384u: goto L_00366E24;
    case 385u: goto L_00366E30;
    case 386u: goto L_00366E3C;
    case 387u: goto L_00366E50;
    case 388u: goto L_00366E68;
    case 389u: goto L_00366E78;
    case 390u: goto L_00366E98;
    case 391u: goto L_00366EB0;
    case 392u: goto L_00366EBC;
    case 393u: goto L_00366EC8;
    case 394u: goto L_00366EE0;
    case 395u: goto L_00366EF4;
    case 396u: goto L_00366F10;
    case 397u: goto L_00366F20;
    case 398u: goto L_00366F30;
    case 399u: goto L_00366F3C;
    case 400u: goto L_00366F54;
    case 401u: goto L_00366F60;
    case 402u: goto L_00366F6C;
    case 403u: goto L_00366F80;
    case 404u: goto L_00366F98;
    case 405u: goto L_00366FA8;
    case 406u: goto L_00366FB4;
    case 407u: goto L_00366FC0;
    case 408u: goto L_00366FD0;
    case 409u: goto L_00366FF0;
    case 410u: goto L_00367008;
    case 411u: goto L_00367014;
    case 412u: goto L_00367020;
    case 413u: goto L_00367060;
    case 414u: goto L_00367078;
    case 415u: goto L_00367084;
    case 416u: goto L_00367090;
    case 417u: goto L_0036709C;
    case 418u: goto L_003670A8;
    case 419u: goto L_003670B4;
    case 420u: goto L_003670C0;
    case 421u: goto L_00367130;
    case 422u: goto L_00367148;
    case 423u: goto L_00367158;
    case 424u: goto L_00367164;
    case 425u: goto L_00367170;
    case 426u: goto L_00367180;
    case 427u: goto L_00367198;
    case 428u: goto L_003671A8;
    case 429u: goto L_003671B4;
    case 430u: goto L_003671C0;
    case 431u: goto L_003671D0;
    case 432u: goto L_003671E8;
    case 433u: goto L_003671F8;
    case 434u: goto L_0036720C;
    case 435u: goto L_00367218;
    case 436u: goto L_00367224;
    case 437u: goto L_00367230;
    case 438u: goto L_00367250;
    case 439u: goto L_00367260;
    case 440u: goto L_00367270;
    case 441u: goto L_0036727C;
    case 442u: goto L_00367288;
    case 443u: goto L_003672A0;
    case 444u: goto L_003672C0;
    case 445u: goto L_003672D0;
    case 446u: goto L_003672E0;
    case 447u: goto L_003672EC;
    case 448u: goto L_003672F8;
    case 449u: goto L_00367310;
    case 450u: goto L_00367330;
    case 451u: goto L_00367340;
    case 452u: goto L_00367350;
    case 453u: goto L_00367364;
    case 454u: goto L_00367378;
    case 455u: goto L_0036738C;
    case 456u: goto L_003673A0;
    case 457u: goto L_003673B8;
    case 458u: goto L_003673C8;
    case 459u: goto L_003673D8;
    case 460u: goto L_003673E8;
    case 461u: goto L_003673F4;
    case 462u: goto L_00367400;
    case 463u: goto L_00367410;
    case 464u: goto L_00367450;
    case 465u: goto L_00367470;
    case 466u: goto L_00367488;
    case 467u: goto L_003674BC;
    case 468u: goto L_00367500;
    case 469u: goto L_00367518;
    case 470u: goto L_0036754C;
    case 471u: goto L_00367590;
    case 472u: goto L_003675A8;
    case 473u: goto L_003675DC;
    case 474u: goto L_00367620;
    case 475u: goto L_00367640;
    case 476u: goto L_0036765C;
    case 477u: goto L_00367670;
    case 478u: goto L_00367688;
    case 479u: goto L_003676BC;
    case 480u: goto L_00367700;
    case 481u: goto L_00367718;
    case 482u: goto L_00367728;
    case 483u: goto L_00367734;
    case 484u: goto L_00367740;
    case 485u: goto L_00367750;
    case 486u: goto L_00367770;
    case 487u: goto L_00367780;
    case 488u: goto L_00367790;
    case 489u: goto L_0036779C;
    case 490u: goto L_003677A8;
    case 491u: goto L_003677C0;
    case 492u: goto L_003677E0;
    case 493u: goto L_003677F0;
    case 494u: goto L_00367800;
    case 495u: goto L_0036780C;
    case 496u: goto L_00367818;
    case 497u: goto L_00367830;
    case 498u: goto L_00367850;
    case 499u: goto L_00367860;
    case 500u: goto L_00367870;
    case 501u: goto L_0036787C;
    case 502u: goto L_00367888;
    case 503u: goto L_003678A0;
    case 504u: goto L_003678B8;
    case 505u: goto L_003678C8;
    case 506u: goto L_003678D4;
    case 507u: goto L_003678E0;
    case 508u: goto L_003678F0;
    case 509u: goto L_00367908;
    case 510u: goto L_00367918;
    case 511u: goto L_0036792C;
    case 512u: goto L_00367940;
    case 513u: goto L_00367954;
    case 514u: goto L_00367960;
    case 515u: goto L_0036796C;
    case 516u: goto L_00367980;
    case 517u: goto L_003679A0;
    case 518u: goto L_003679B0;
    case 519u: goto L_003679C0;
    case 520u: goto L_003679CC;
    case 521u: goto L_003679D8;
    case 522u: goto L_003679F0;
    case 523u: goto L_00367A08;
    case 524u: goto L_00367A3C;
    case 525u: goto L_00367A50;
    case 526u: goto L_00367A70;
    case 527u: goto L_00367A80;
    case 528u: goto L_00367A90;
    case 529u: goto L_00367A9C;
    case 530u: goto L_00367AA8;
    case 531u: goto L_00367AC0;
    case 532u: goto L_00367AE0;
    case 533u: goto L_00367AF0;
    case 534u: goto L_00367B00;
    case 535u: goto L_00367B0C;
    case 536u: goto L_00367B18;
    case 537u: goto L_00367B30;
    case 538u: goto L_00367B48;
    case 539u: goto L_00367B58;
    case 540u: goto L_00367B64;
    case 541u: goto L_00367B70;
    case 542u: goto L_00367B80;
    case 543u: goto L_00367BA0;
    case 544u: goto L_00367BB8;
    case 545u: goto L_00367BC4;
    case 546u: goto L_00367C20;
    case 547u: goto L_00367C30;
    case 548u: goto L_00367C48;
    case 549u: goto L_00367C54;
    case 550u: goto L_00367CB0;
    case 551u: goto L_00367CC0;
    case 552u: goto L_00367CE0;
    case 553u: goto L_00367CF8;
    case 554u: goto L_00367D18;
    case 555u: goto L_00367D30;
    case 556u: goto L_00367D48;
    case 557u: goto L_00367D58;
    case 558u: goto L_00367D64;
    case 559u: goto L_00367D70;
    case 560u: goto L_00367D80;
    case 561u: goto L_00367DA0;
    case 562u: goto L_00367DB0;
    case 563u: goto L_00367DC0;
    case 564u: goto L_00367DCC;
    case 565u: goto L_00367DD8;
    case 566u: goto L_00367DF0;
    case 567u: goto L_00367E10;
    case 568u: goto L_00367E20;
    case 569u: goto L_00367E30;
    case 570u: goto L_00367E3C;
    case 571u: goto L_00367E48;
    case 572u: goto L_00367E60;
    case 573u: goto L_00367E80;
    case 574u: goto L_00367E90;
    case 575u: goto L_00367EA0;
    case 576u: goto L_00367EB0;
    case 577u: goto L_00367EBC;
    case 578u: goto L_00367EC8;
    case 579u: goto L_00367EE0;
    case 580u: goto L_00367F00;
    case 581u: goto L_00367F10;
    case 582u: goto L_00367F20;
    case 583u: goto L_00367F2C;
    case 584u: goto L_00367F38;
    case 585u: goto L_00367F50;
    case 586u: goto L_00367F68;
    case 587u: goto L_00367F78;
    case 588u: goto L_00367F84;
    case 589u: goto L_00367F90;
    case 590u: goto L_00367FA0;
    case 591u: goto L_00367FB8;
    case 592u: goto L_00367FC8;
    case 593u: goto L_00367FD8;
    case 594u: goto L_00367FE4;
    case 595u: goto L_00367FF0;
    default: bad_entry(c, 0x00364000u); return;
    }
L_00364000:
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364020:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 18976u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364050:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19008u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5233u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364080:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19032u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003640B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19056u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5233u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003640E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19088u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364110:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19120u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5233u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364140:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19152u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364170:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19232u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5233u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003641A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19264u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_003641D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19312u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5233u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364200:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19344u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0036422Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0036422Cu) [[unlikely]] return; }
L_0036422C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364234u);  if (depth < kMaxDepth) unit_0099(c, 174u, depth + 1u); else { c.pc = 0x00365D90u; return; } if (c.pc != 0x00364234u) [[unlikely]] return; }
L_00364234:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364240:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19376u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5234u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5347u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003642A8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5495u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19400u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x003642A8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x003642A8u) [[unlikely]] return; }
L_003642A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003642C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5249u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003642E4; } }
    set32(c.r[2], ld32((c.r[3].w[0] + 5252u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 5252u), c.r[2].w[0]);
    c.budget -= 3;
L_003642E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 5264u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[5], c.r[4].w[0] + 5264u);  if (t) { goto L_003643F4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] << 48;  if (t) { goto L_003643F8; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5232u));
    set32(c.r[2], 0u + 9u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00364360; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364360; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] - 9440u));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull | 54000ull;  if (t) { goto L_00364340; } }
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25312u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364344; } }
    c.r[2].d[0] = 0ull | 54000ull;
    c.budget -= 1;
L_00364340:
    st32((c.r[4].w[0] + 5260u), c.r[2].w[0]);
    c.budget -= 1;
L_00364344:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 5260u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[3].w[0] + 5260u), c.r[2].w[0]);  if (t) { goto L_00364360; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364360u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00364360u) [[unlikely]] return; }
L_00364360:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 24968u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364424; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 5256u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 5256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_003643C4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 5258u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 7200u);  if (t) { goto L_003643B4; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643A8u); st16((c.r[3].w[0] + 5256u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x003643A8u) [[unlikely]] return; }
L_003643A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));  if (t) { goto L_00364428; } }
    set32(c.r[2], 0u + 7200u);
    c.budget -= 1;
L_003643B4:
    st16((c.r[3].w[0] + 5256u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 5258u), static_cast<std::uint16_t>(0u));  if (t) { goto L_00364424; } }
L_003643C4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643D0u); set32(c.r[4], c.r[2].w[0] + 24816u);  if (depth < kMaxDepth) unit_0096(c, 19u, depth + 1u); else { c.pc = 0x003584D0u; return; } if (c.pc != 0x003643D0u) [[unlikely]] return; }
L_003643D0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 24832u)));
    set32(c.r[2], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00364424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003643ECu); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x003643ECu) [[unlikely]] return; }
L_003643EC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364424; } }
L_003643F4:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.budget -= 1;
L_003643F8:
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0;  if (t) { goto L_00364424; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 3u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00364424; } }
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364424u); st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 25u, depth + 1u); else { c.pc = 0x00364460u; return; } if (c.pc != 0x00364424u) [[unlikely]] return; }
L_00364424:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 1;
L_00364428:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19424u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 5232u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00364448u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00364448u) [[unlikely]] return; }
L_00364448:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364460:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[7], 0u + 9u);
    set32(c.r[6], 0u + 3u);
    set32(c.r[5], 0u - 1u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[28].w[0] - 24968u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 17;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 5264u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_003644B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    set32(c.r[3], 0u + 3u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00364518; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 17u);  goto L_00364508; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], 0u + 42u);  goto L_003644F4; }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_00364528; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0036452C; } }
    set32(c.r[4], 0u + 42u);
    c.budget -= 1;
L_003644F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003644FCu);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x003644FCu) [[unlikely]] return; }
L_003644FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364528; } }
    set32(c.r[4], 0u + 17u);
    c.budget -= 1;
L_00364508:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364510u);  if (depth < kMaxDepth) unit_0094(c, 199u, depth + 1u); else { c.pc = 0x00352520u; return; } if (c.pc != 0x00364510u) [[unlikely]] return; }
L_00364510:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364528; } }
L_00364518:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[5], c.r[2].w[0] - 6512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364528u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0094(c, 207u, depth + 1u); else { c.pc = 0x003526A0u; return; } if (c.pc != 0x00364528u) [[unlikely]] return; }
L_00364528:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0036452C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364540:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 4576u);
    set32(c.r[6], 0u + 960u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036455Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036455Cu) [[unlikely]] return; }
L_0036455C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 5536u);
    set32(c.r[6], 0u + 960u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364570u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00364570u) [[unlikely]] return; }
L_00364570:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364580:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 8;
L_003645A0:
    c.r[2].d[0] = ld8((c.r[17].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_003645D0; }
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003645BCu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0006(c, 52u, depth + 1u); else { c.pc = 0x00118B60u; return; } if (c.pc != 0x003645BCu) [[unlikely]] return; }
L_003645BC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_003645CC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003645E0; } }
L_003645CC:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_003645D0:
    c.r[2].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003645A0u | kUnwind; return; } goto L_003645A0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003645E0:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00364600:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    c.budget -= 4;
L_00364610:
    c.r[2].d[0] = ld8((c.r[6].w[0]));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_00364634; }
    set32(c.r[2], c.r[3].w[0] << 5);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364628u); set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00364628u) [[unlikely]] return; }
L_00364628:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00364644; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00364634:
    c.r[2].d[0] = c.r[3].sd[0] < 30ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 32u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364610u | kUnwind; return; } goto L_00364610; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00364644:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364650:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25728u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036468C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364670u);  if (depth < kMaxDepth) unit_0096(c, 185u, depth + 1u); else { c.pc = 0x0035A520u; return; } if (c.pc != 0x00364670u) [[unlikely]] return; }
L_00364670:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00364684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00364720; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00364684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00364720; } }
L_0036468C:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25808u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00364714; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003646F4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0];  if (t) { goto L_003646D4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_003646C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00364720; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_003646C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646CCu); st8((c.r[28].w[0] - 25808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 44u, depth + 1u); else { c.pc = 0x00364730u; return; } if (c.pc != 0x003646CCu) [[unlikely]] return; }
L_003646CC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0036471C; } }
L_003646D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646DCu);  if (depth < kMaxDepth) unit_0099(c, 45u, depth + 1u); else { c.pc = 0x00364740u; return; } if (c.pc != 0x003646DCu) [[unlikely]] return; }
L_003646DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036471C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036471C; } }
L_003646F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003646FCu);  if (depth < kMaxDepth) unit_0096(c, 185u, depth + 1u); else { c.pc = 0x0035A520u; return; } if (c.pc != 0x003646FCu) [[unlikely]] return; }
L_003646FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0036471C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25808u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25808u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0036471C; } }
L_00364714:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00364720; } }
L_0036471C:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00364720:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364730:
    st8((c.r[28].w[0] - 25768u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 25772u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00364740:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[28].w[0] - 25768u));
    set32(c.r[5], 0u + 1u);
    set32(c.r[2], 0u + 4u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; st8((c.r[28].w[0] - 25812u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00364840; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_00364814; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_003647E8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_003647A8; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 1u);  if (t) { goto L_00364798; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00364858; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 1;
L_00364798:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647A0u); st8((c.r[28].w[0] - 25768u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_009E(c, 22u, depth + 1u); else { c.pc = 0x00378390u; return; } if (c.pc != 0x003647A0u) [[unlikely]] return; }
L_003647A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364854; } }
L_003647A8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25736u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[28].w[0] - 25768u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_003647C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647C0u);  if (depth < kMaxDepth) unit_0099(c, 200u, depth + 1u); else { c.pc = 0x00366100u; return; } if (c.pc != 0x003647C0u) [[unlikely]] return; }
L_003647C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364854; } }
L_003647C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00364854; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003647E0u);  if (depth < kMaxDepth) unit_00A0(c, 169u, depth + 1u); else { c.pc = 0x00381A80u; return; } if (c.pc != 0x003647E0u) [[unlikely]] return; }
L_003647E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364854; } }
L_003647E8:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25736u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0]; st8((c.r[28].w[0] - 25768u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0036480C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364800u); set32(c.r[4], c.r[28].w[0] - 25900u);  if (depth < kMaxDepth) unit_0095(c, 414u, depth + 1u); else { c.pc = 0x00357F60u; return; } if (c.pc != 0x00364800u) [[unlikely]] return; }
L_00364800:
    set32(c.r[2], 0u + 60u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00364854; } }
L_0036480C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[5].w[0]));  if (t) { goto L_00364854; } }
L_00364814:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25788u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[28].w[0] - 25788u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00364854; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[28].w[0] - 25768u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25772u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00364854; } }
L_00364840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364848u);  if (depth < kMaxDepth) unit_0096(c, 145u, depth + 1u); else { c.pc = 0x00359C40u; return; } if (c.pc != 0x00364848u) [[unlikely]] return; }
L_00364848:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364854; } }
    set32(c.r[16], 0u + 1u);
    c.budget -= 1;
L_00364854:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00364858:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00364870:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364880u);  if (depth < kMaxDepth) unit_009E(c, 65u, depth + 1u); else { c.pc = 0x00378720u; return; } if (c.pc != 0x00364880u) [[unlikely]] return; }
L_00364880:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_003648AC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5236u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5236u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 5237u), static_cast<std::uint8_t>(0u));  if (t) { goto L_003648AC; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_003648AC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003648C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5225u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003648E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00364A38; } }
L_003648E4:
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5236u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 512u);  if (t) { goto L_003649AC; } }
    c.r[2].d[0] = ld8((c.r[3].w[0] + 5237u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[7], c.r[3].w[0] + 5237u);  if (t) { goto L_00364940; } }
    c.r[3].d[0] = ld8((c.r[7].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 32464u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036491Cu); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036491Cu) [[unlikely]] return; }
L_0036491C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[6], c.r[2].w[0] - 32464u);
    set32(c.r[7], 0u + 34u);
    set32(c.r[8], 0u + 3u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364938u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 67u, depth + 1u); else { c.pc = 0x003788B0u; return; } if (c.pc != 0x00364938u) [[unlikely]] return; }
L_00364938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_003649A0; } }
L_00364940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364948u);  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x00364948u) [[unlikely]] return; }
L_00364948:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_0036499C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364960u); set32(c.r[4], c.r[2].w[0] - 32464u);  if (depth < kMaxDepth) unit_0095(c, 192u, depth + 1u); else { c.pc = 0x00355BB0u; return; } if (c.pc != 0x00364960u) [[unlikely]] return; }
L_00364960:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036498C; } }
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] < 0;  if (t) { goto L_0036498C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036497Cu); set32(c.r[4], c.r[2].w[0] - 32464u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036497Cu) [[unlikely]] return; }
L_0036497C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0036498C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036498Cu);  if (depth < kMaxDepth) unit_009A(c, 94u, depth + 1u); else { c.pc = 0x00368720u; return; } if (c.pc != 0x0036498Cu) [[unlikely]] return; }
L_0036498C:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[2].w[0] + 5237u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0036499C:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_003649A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00364A3C; } }
    set32(c.r[4], 0u + 512u);
    c.budget -= 1;
L_003649AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649B4u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x003649B4u) [[unlikely]] return; }
L_003649B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_003649FC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    st16((c.r[28].w[0] - 25960u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 4u);  if (t) { goto L_003649EC; } }
    set32(c.r[5], 0u + 54u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649E0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003649E0u) [[unlikely]] return; }
L_003649E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));  if (t) { goto L_00364A34; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 1;
L_003649EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003649F4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x003649F4u) [[unlikely]] return; }
L_003649F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00364A30; } }
L_003649FC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364A30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A10u); set32(c.r[4], 0u + 64u);  if (depth < kMaxDepth) unit_009E(c, 20u, depth + 1u); else { c.pc = 0x00378350u; return; } if (c.pc != 0x00364A10u) [[unlikely]] return; }
L_00364A10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00364A30; } }
    set32(c.r[5], 0u + 54u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A28u); st16((c.r[28].w[0] - 25960u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 28u, depth + 1u); else { c.pc = 0x003783F0u; return; } if (c.pc != 0x00364A28u) [[unlikely]] return; }
L_00364A28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00364A38; } }
L_00364A30:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[28].w[0] - 25960u)));
    c.budget -= 1;
L_00364A34:
    c.budget -= 1;
L_00364A38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00364A3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00364A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[16], c.r[2].w[0] + 23408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 23408u);
    set32(c.r[6], 0u + 30u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364A78u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00364A78u) [[unlikely]] return; }
L_00364A78:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[5], 0u + 62u);
    c.budget -= 2;
L_00364A80:
    set32(c.r[3], ld32((c.r[28].w[0] - 25008u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0]; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364B34; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[3], c.r[6].w[0] + 1u);
    c.r[6].d[0] = c.r[3].d[0] & 65535ull;
    c.r[1].d[0] = c.r[6].sd[0] < 25ll ? 1ull : 0ull;
    set32(c.r[3], c.r[4].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 8;
    { const bool t = c.r[1].d[0] == 0ull; st32((c.r[28].w[0] - 25008u), c.r[3].w[0]);  if (t) { goto L_00364B00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 25008u)));
    c.r[7].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[7].sd[0] < 128ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00364ACC; } }
    c.r[3].d[0] = c.r[7].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364ACC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364AF8; } }
    c.r[3].d[0] = c.r[7].sd[0] < 224ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00364AE8; } }
    c.r[3].d[0] = c.r[7].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364AE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364AF8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_00364AF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364A80u | kUnwind; return; } goto L_00364A80; } }
L_00364B00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 23408u);
    set32(c.r[6], 0u + 30u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B14u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00364B14u) [[unlikely]] return; }
L_00364B14:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 23408u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B28u); set32(c.r[5], c.r[2].w[0] - 24032u);  if (depth < kMaxDepth) unit_0006(c, 36u, depth + 1u); else { c.pc = 0x00118760u; return; } if (c.pc != 0x00364B28u) [[unlikely]] return; }
L_00364B28:
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25012u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364B40; } }
L_00364B34:
    set32(c.r[3], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[28].w[0] - 25008u), c.r[3].w[0]);
    c.budget -= 3;
L_00364B40:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00364B50:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[17], c.r[2].w[0] + 19472u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_00364B6C:
    set32(c.r[5], ld32((c.r[17].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364B7Cu); set32(c.r[4], c.r[2].w[0] + 23408u);  if (depth < kMaxDepth) unit_0006(c, 65u, depth + 1u); else { c.pc = 0x00118ED8u; return; } if (c.pc != 0x00364B7Cu) [[unlikely]] return; }
L_00364B7C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;  if (t) { goto L_00364B9C; } }
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364B6Cu | kUnwind; return; } goto L_00364B6C; } }
    c.r[1].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 2;
L_00364B9C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00364D6C; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[3].w[0] - 23952u);
    set32(c.r[3], c.r[16].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00364BC0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00364D6C; } }
L_00364BD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00364D6C; } }
L_00364BE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 16ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00364D6C; } }
L_00364BFC:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 32ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00364D6C; } }
L_00364C10:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 64ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00364D6C; } }
L_00364C24:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 128ull;
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 4u), c.r[3].w[0]);  if (t) { goto L_00364D6C; } }
L_00364C38:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 23413u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[3].w[0] + 9u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.r[1].d[0] = c.r[3].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00364D6C; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364D6C; } }
L_00364C80:
    set32(c.r[4], c.r[29].w[0] + 56u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364C90u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00364C90u) [[unlikely]] return; }
L_00364C90:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 23414u)));
    c.r[3].d[0] = c.r[4].sd[0] < 48ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;  if (t) { goto L_00364CD4; } }
    c.r[1].d[0] = c.r[4].sd[0] < 58ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00364CD0; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00364D04; } }
L_00364CD0:
    c.r[3].d[0] = c.r[4].sd[0] < 97ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364CD4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364CF8; } }
    c.r[1].d[0] = c.r[4].sd[0] < 103ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00364CF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[4].w[0] - 87u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00364D04; } }
L_00364CF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[4].w[0] - 55u);
    st8((c.r[3].w[0] + 8u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00364D04:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[3].w[0] + 8u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    c.r[1].d[0] = c.r[3].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00364D6C; } }
    set32(c.r[3], 0u + 7u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00364D6C; } }
L_00364D28:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] | 256ull;
    st32((c.r[4].w[0] + 4u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 23411u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[4].w[0] - 48u);
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[3].w[0] + 10u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10u));
    c.r[1].d[0] = c.r[3].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 15;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00364D6C; } }
    set32(c.r[3], 0u + 9u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00364D6C:
    st8((c.r[28].w[0] - 25016u), static_cast<std::uint8_t>(c.r[16].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00364D90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[3], 0u + 92u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 60u);  if (t) { goto L_00364E34; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00364E34; } }
L_00364DB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25008u)));
    c.r[5].d[0] = ld8((c.r[3].w[0]));
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00364DD0; } }
    c.r[3].d[0] = c.r[5].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364DD0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00364DF8; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00364DE8; } }
    c.r[3].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364DE8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364DF8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_00364DF8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[3], 0u + 60u);  if (t) { goto L_00364E34; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0];  if (t) { goto L_00364E34; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E18u); st32((c.r[28].w[0] - 25008u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0099(c, 65u, depth + 1u); else { c.pc = 0x00364A50u; return; } if (c.pc != 0x00364E18u) [[unlikely]] return; }
L_00364E18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E20u);  if (depth < kMaxDepth) unit_0099(c, 70u, depth + 1u); else { c.pc = 0x00364B50u; return; } if (c.pc != 0x00364E20u) [[unlikely]] return; }
L_00364E20:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], ld32((c.r[3].w[0] + 4u)));
    c.r[3].d[0] = c.r[3].d[0] & 392ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364DB4u | kUnwind; return; } goto L_00364DB4; } }
L_00364E34:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00364E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[4], c.r[2].w[0] + 24208u);
    set32(c.r[6], 0u + 600u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364E60u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00364E60u) [[unlikely]] return; }
L_00364E60:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 24208u);
    st16((c.r[28].w[0] - 25020u), static_cast<std::uint16_t>(0u));
    st8((c.r[28].w[0] - 25016u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 24972u), c.r[3].w[0]);
    st32((c.r[28].w[0] - 24976u), c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 7;
L_00364E7C:
    c.r[3].d[0] = c.r[16].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 31ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00364E94; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25012u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00365054; } }
L_00364E94:
    set32(c.r[3], ld32((c.r[28].w[0] - 25008u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[5].d[0] = c.r[6].d[0] & 255ull;
    c.r[3].d[0] = c.r[5].sd[0] < 128ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_00364EB4; } }
    c.r[3].d[0] = c.r[5].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364EB4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].d[0] = c.r[5].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_00364ED8; } }
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00364ECC; } }
    c.r[3].d[0] = c.r[5].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_00364ECC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00364ED8; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00364ED8:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[3].d[0] = c.r[6].d[0] << 56;  if (t) { goto L_00365028; } }
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 1u);  if (t) { goto L_00364EF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25012u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00365054; } }
L_00364EF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00364EFCu); st8((c.r[28].w[0] - 25016u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0099(c, 84u, depth + 1u); else { c.pc = 0x00364D90u; return; } if (c.pc != 0x00364EFCu) [[unlikely]] return; }
L_00364EFC:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 25016u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] != 0ull; set32(c.r[3], 0u + 4u);  if (t) { goto L_00364F88; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 25020u));
    set32(c.r[5], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[3], 0u + 92u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st16((c.r[28].w[0] - 25020u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00364F6C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 25008u), c.r[3].w[0]);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[16].w[0] + 1u);
    st32((c.r[4].w[0] + 4u), c.r[5].w[0]);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[4], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    st32((c.r[28].w[0] - 24976u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24972u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E7Cu | kUnwind; return; } goto L_00364E7C; } }
L_00364F6C:
    set32(c.r[4], ld32((c.r[28].w[0] - 24976u)));
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 25008u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E7Cu | kUnwind; return; } goto L_00364E7C; } }
L_00364F88:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] - 8u);  if (t) { goto L_00364FA0; } }
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00364FC0; } }
    c.budget -= 1;
L_00364FA0:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25012u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[3], 0u + 8u);  if (t) { goto L_00365054; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_00365054; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 25012u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00365054; } }
L_00364FC0:
    set32(c.r[5], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[3], 0u + 92u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00364FF8; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[4], c.r[5].w[0] + 1u);
    st32((c.r[28].w[0] - 25008u), c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 25020u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 25020u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_00365000; } }
L_00364FF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    st8((c.r[3].w[0] + 11u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00365000:
    set32(c.r[5], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[3], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[3].d[0] & 255ull;
    st32((c.r[4].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    st32((c.r[28].w[0] - 24976u), c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + 12u);
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24972u), c.r[3].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E7Cu | kUnwind; return; } goto L_00364E7C; } }
L_00365028:
    set32(c.r[3], ld32((c.r[28].w[0] - 25008u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 24976u)));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st32((c.r[28].w[0] - 25008u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st8((c.r[4].w[0] + 11u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[28].w[0] - 25020u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[28].w[0] - 25020u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00364E7Cu | kUnwind; return; } goto L_00364E7C; } }
L_00365054:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365070:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25012u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365580; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[3].w[0] + 24208u);
    st32((c.r[28].w[0] - 24972u), c.r[3].w[0]);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 4;
L_003650A0:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003650C0; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00365580; } }
    c.budget -= 1;
L_003650C0:
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st32((c.r[28].w[0] - 25028u), c.r[3].w[0]);
    c.budget -= 4;
L_003650D0:
    set32(c.r[4], ld32((c.r[28].w[0] - 25028u)));
    c.r[3].d[0] = c.r[4].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[3], c.r[4].w[0] >> 1);  if (t) { goto L_0036542C; } }
    set32(c.r[3], c.r[4].w[0] >> 1);
    st32((c.r[28].w[0] - 25028u), c.r[3].w[0]);
    set32(c.r[3], c.r[17].w[0] + 1u);
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    if (c.r[1].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_00365444; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] - 23904u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x00364000u < 16384u) { entry = entries_0099[(t - 0x00364000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00365118:
    c.r[4].d[0] = ld8((c.r[28].w[0] - 25024u));
    set32(c.r[3], 0u + 7u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003651D0; } }
    set32(c.r[3], 0u + 6u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_003651C4; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365148; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365440; } }
L_00365148:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 25020u));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0036515C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0036515C:
    set32(c.r[3], 0u + 18u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25004u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 19536u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    st32((c.r[28].w[0] - 25032u), c.f[1]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 25032u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24980u), c.f[0]);  if (t) { goto L_00365440; } }
L_003651C4:
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24980u), c.f[0]);  if (t) { goto L_00365440; } }
L_003651D0:
    c.r[6].d[0] = ld16((c.r[28].w[0] - 25020u));
    set32(c.r[7], 0u + 36u);
    set32(c.r[5], ld32((c.r[28].w[0] - 25004u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    set32(c.r[3], c.r[3].w[0] + 19536u);
    c.f[4] = c.r[4].w[0];
    set32(c.r[6], c.r[7].w[0] - c.r[6].w[0]);
    c.f[1] = c.r[6].w[0];
    set32(c.r[5], c.r[5].w[0] << 2);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[5], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    st32((c.r[28].w[0] - 25032u), c.f[1]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 25032u));
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24980u), c.f[0]);  if (t) { goto L_00365440; } }
L_00365234:
    set32(c.r[5], ld32((c.r[28].w[0] - 25004u)));
    c.f[1] = ld32((c.r[28].w[0] - 24992u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 19536u);
    c.f[0] = ld32((c.r[28].w[0] - 24984u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.f[2] = c.r[3].w[0];
    st32((c.r[28].w[0] - 24980u), c.f[1]);
    c.f[1] = ld32((c.r[4].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24984u), c.f[0]);  if (t) { goto L_00365440; } }
L_00365270:
    c.r[3].d[0] = ld16((c.r[28].w[0] - 25020u));
    set32(c.r[4], 0u + 5u);
    st8((c.r[28].w[0] - 25024u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));  if (t) { goto L_0036528C; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0036528C:
    set32(c.r[3], 0u + 18u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25004u)));
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[3], c.r[3].w[0] + 19536u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    st32((c.r[28].w[0] - 25032u), c.f[1]);
    c.f[3] = ld32((c.r[3].w[0]));
    c.f[1] = ld32((c.r[28].w[0] - 25032u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 26;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24980u), c.f[0]);  if (t) { goto L_00365440; } }
L_003652F4:
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    set32(c.r[3], 0u + 6u);
    st8((c.r[28].w[0] - 25024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24980u), c.f[0]);  if (t) { goto L_00365440; } }
L_00365308:
    c.r[5].d[0] = ld16((c.r[28].w[0] - 25020u));
    set32(c.r[6], 0u + 36u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25004u)));
    set32(c.r[3], 0u + 7u);
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    st8((c.r[28].w[0] - 25024u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], c.r[6].w[0] - c.r[5].w[0]);
    c.f[1] = c.r[5].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    set32(c.r[3], c.r[3].w[0] + 19536u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[28].w[0] - 25032u), c.f[1]);
    c.f[3] = ld32((c.r[5].w[0]));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[4] = c.r[4].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[1] = ld32((c.r[28].w[0] - 25032u));
    c.f[2] = c.r[3].w[0];
    fpu_div(c, 3u, c.f[3], c.f[4]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[1], c.f[3]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 27;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24980u), c.f[0]);  if (t) { goto L_00365440; } }
L_00365374:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00365584; } }
L_0036537C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 9u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 25004u), c.r[3].w[0]);  if (t) { goto L_00365440; } }
L_0036538C:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19520u);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 8u));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003653A8u); c.r[4].d[0] = ld8((c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x003653A8u) [[unlikely]] return; }
L_003653A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365440; } }
L_003653B0:
    c.f[0] = ld32((c.r[28].w[0] - 24992u));
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    st32((c.r[28].w[0] - 24980u), c.f[0]);
    c.r[3].d[0] = ld8((c.r[3].w[0] + 10u));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], c.r[3].w[0] >> 1);  if (t) { goto L_003653D8; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[3] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_003653F0; } }
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.budget -= 1;
L_003653D8:
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[3] = fp::cvt_s_w(c.f[0]);
    c.f[3] = fp::add(c.f[3], c.f[3]);
    c.budget -= 6;
L_003653F0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[4], c.r[3].w[0] + 19536u);
    set32(c.r[5], ld32((c.r[28].w[0] - 25004u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[2] = c.r[3].w[0];
    c.f[0] = ld32((c.r[28].w[0] - 24984u));
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.f[1] = ld32((c.r[3].w[0]));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[1] = fp::mul(c.f[3], c.f[1]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 24984u), c.f[0]);  if (t) { goto L_00365440; } }
    set32(c.r[3], c.r[4].w[0] >> 1);
    c.budget -= 1;
L_0036542C:
    st32((c.r[28].w[0] - 25028u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25028u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00365450; } }
    c.budget -= 1;
L_00365440:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_00365444:
    c.r[3].d[0] = c.r[17].sd[0] < 16ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003650D0u | kUnwind; return; } goto L_003650D0; } }
L_00365450:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 11u));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00365568; } }
    set32(c.r[3], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00365568; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 23440u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365480u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365480u) [[unlikely]] return; }
L_00365480:
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], ld32((c.r[3].w[0])));
    c.r[6].d[0] = ld8((c.r[3].w[0] + 11u));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365498u); set32(c.r[4], c.r[2].w[0] + 23440u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00365498u) [[unlikely]] return; }
L_00365498:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[3], c.r[2].w[0] + 23440u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 19536u);
    c.r[4].d[0] = ld8((c.r[4].w[0] + 11u));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25004u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.f[12] = ld32((c.r[2].w[0]));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003654D0u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x003654D0u) [[unlikely]] return; }
L_003654D0:
    c.f[12] = ld32((c.r[28].w[0] - 24980u));
    c.f[13] = ld32((c.r[28].w[0] - 24984u));
    c.f[14] = ld32((c.r[28].w[0] - 24988u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003654E8u); set32(c.r[4], c.r[2].w[0] + 23440u);  if (depth < kMaxDepth) unit_009E(c, 32u, depth + 1u); else { c.pc = 0x00378430u; return; } if (c.pc != 0x003654E8u) [[unlikely]] return; }
L_003654E8:
    set32(c.r[6], ld32((c.r[28].w[0] - 25004u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.f[2] = c.r[4].w[0];
    set32(c.r[5], c.r[3].w[0] + 19536u);
    set32(c.r[4], c.r[6].w[0] << 2);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 24972u)));
    c.f[1] = ld32((c.r[4].w[0]));
    c.r[3].d[0] = ld8((c.r[3].w[0] + 11u));
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x41C00000u);
    c.f[0] = c.r[4].w[0];
    c.budget -= 17;
    { const bool t = c.r[3].sd[0] < 0; c.f[1] = fp::mul(c.f[0], c.f[1]);  if (t) { goto L_00365538; } }
    c.f[0] = c.r[3].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[0] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_00365554; } }
L_00365538:
    set32(c.r[4], c.r[3].w[0] >> 1);
    c.r[3].d[0] = c.r[3].d[0] & 1ull;
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    c.f[0] = c.r[4].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[0] = fp::add(c.f[0], c.f[0]);
    c.budget -= 7;
L_00365554:
    c.f[1] = fp::mul(c.f[0], c.f[1]);
    c.f[0] = ld32((c.r[28].w[0] - 24980u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[28].w[0] - 24980u), c.f[0]);
    c.budget -= 5;
L_00365568:
    set32(c.r[4], ld32((c.r[28].w[0] - 24972u)));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 30ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 12u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[28].w[0] - 24972u), c.r[4].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x003650A0u | kUnwind; return; } goto L_003650A0; } }
L_00365580:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00365584:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003655A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[6].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[6].sd[0] < 128ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_003655C0; } }
    c.r[3].d[0] = c.r[6].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 1;
L_003655C0:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003655E8; } }
    c.r[3].d[0] = c.r[6].sd[0] < 224ll ? 1ull : 0ull;
    c.r[3].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_003655DC; } }
    c.r[3].d[0] = c.r[6].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 1;
L_003655DC:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_003655E8; } }
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_003655E8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != 0ull;  if (t) { goto L_00365688; } }
    set32(c.r[2], 0u + 5u);
    st32((c.r[28].w[0] - 25004u), c.r[2].w[0]);
    set32(c.r[2], 0u + 6u);
    st32((c.r[28].w[0] - 25008u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 24988u), c.f[14]);
    st32((c.r[28].w[0] - 24980u), c.f[12]);
    st32((c.r[28].w[0] - 24992u), c.f[12]);
    st32((c.r[28].w[0] - 24984u), c.f[13]);
    st32((c.r[28].w[0] - 24996u), c.f[13]);
    st8((c.r[28].w[0] - 25024u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st32((c.r[28].w[0] - 25000u), 0u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365628u); st8((c.r[28].w[0] - 25012u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0017(c, 228u, depth + 1u); else { c.pc = 0x0015E240u; return; } if (c.pc != 0x00365628u) [[unlikely]] return; }
L_00365628:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365638u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00365638u) [[unlikely]] return; }
L_00365638:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[28].w[0] - 25036u), 0u);  if (t) { goto L_00365668; } }
L_00365640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365648u);  if (depth < kMaxDepth) unit_0099(c, 88u, depth + 1u); else { c.pc = 0x00364E40u; return; } if (c.pc != 0x00365648u) [[unlikely]] return; }
L_00365648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365650u);  if (depth < kMaxDepth) unit_0099(c, 92u, depth + 1u); else { c.pc = 0x00365070u; return; } if (c.pc != 0x00365650u) [[unlikely]] return; }
L_00365650:
    c.r[2].d[0] = ld8((c.r[28].w[0] - 25012u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_0036567C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 25036u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[28].w[0] - 25036u), c.r[2].w[0]);
    c.budget -= 3;
L_00365668:
    set32(c.r[2], ld32((c.r[28].w[0] - 25036u)));
    c.r[2].d[0] = c.r[2].sd[0] < 13ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00365640u | kUnwind; return; } goto L_00365640; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_0036567C:
    c.f[12] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365688u); c.f[13] = c.f[12];  if (depth < kMaxDepth) unit_0017(c, 229u, depth + 1u); else { c.pc = 0x0015E250u; return; } if (c.pc != 0x00365688u) [[unlikely]] return; }
L_00365688:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003656A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656B0u);  if (depth < kMaxDepth) unit_0095(c, 273u, depth + 1u); else { c.pc = 0x00356800u; return; } if (c.pc != 0x003656B0u) [[unlikely]] return; }
L_003656B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 28704u);
    set32(c.r[6], 0u + 1280u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656C8u); st8((c.r[28].w[0] - 26120u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003656C8u) [[unlikely]] return; }
L_003656C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[6], 0u + 7680u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656DCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003656DCu) [[unlikely]] return; }
L_003656DC:
    set32(c.r[4], c.r[28].w[0] - 25720u);
    set32(c.r[6], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003656ECu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x003656ECu) [[unlikely]] return; }
L_003656EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 3616u);
    set32(c.r[6], 0u + 1600u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[28].w[0] - 25724u), static_cast<std::uint8_t>(0u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365708u); st8((c.r[28].w[0] - 25712u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365708u) [[unlikely]] return; }
L_00365708:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 30089u);
    set32(c.r[6], 0u + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036571Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036571Cu) [[unlikely]] return; }
L_0036571C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 30089u);
    set32(c.r[5], c.r[28].w[0] - 30524u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365730u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x00365730u) [[unlikely]] return; }
L_00365730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 30413u);
    set32(c.r[6], 0u + 1240u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365744u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365744u) [[unlikely]] return; }
L_00365744:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 30410u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    st8((c.r[1].w[0] + 30411u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[28].w[0] - 25920u);
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036576Cu); st8((c.r[1].w[0] + 30412u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0036576Cu) [[unlikely]] return; }
L_0036576C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[2].w[0] - 32016u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365780u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365780u) [[unlikely]] return; }
L_00365780:
    set32(c.r[3], 0u - 1u);
    st8((c.r[28].w[0] - 25728u), static_cast<std::uint8_t>(0u));
    st32((c.r[28].w[0] - 25900u), c.r[3].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003657A0:
    st8((c.r[28].w[0] - 25808u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[28].w[0] - 25310u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_003657B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657C8u); st8((c.r[28].w[0] - 26156u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009D(c, 279u, depth + 1u); else { c.pc = 0x00376B80u; return; } if (c.pc != 0x003657C8u) [[unlikely]] return; }
L_003657C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003657D0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_009E(c, 38u, depth + 1u); else { c.pc = 0x00378520u; return; } if (c.pc != 0x003657D0u) [[unlikely]] return; }
L_003657D0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_003657EC; } }
    set32(c.r[3], 0u + 10u);
    st8((c.r[28].w[0] - 26168u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 60u);
    st16((c.r[28].w[0] - 26160u), static_cast<std::uint16_t>(c.r[3].w[0]));
    st8((c.r[28].w[0] - 26164u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_003657EC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365800:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = 0ull | 54000ull;
    set32(c.r[5], 0u + 7200u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[3].w[0] + 5232u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5233u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5234u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5235u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5236u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5237u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5238u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 5239u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[3].w[0] + 5260u), c.r[6].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 5256u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 5258u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 28;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 5264u), static_cast<std::uint16_t>(0u));  c.pc = t; return; }
L_00365870:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00365880:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 2u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003658A0:
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    set32(c.r[2], c.r[5].w[0] + 4u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 1u));
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 2u));
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[5].w[0] + 3u));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_003658D0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[17].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[16].w[0] + 2u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365910u); mmi::paddub(c.r[6], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00365910u) [[unlikely]] return; }
L_00365910:
    set32(c.r[2], c.r[18].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    c.r[2].d[0] = c.r[17].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00365940:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[16].d[0] = c.r[6].d[0] & 65535ull;
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365960u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00365960u) [[unlikely]] return; }
L_00365960:
    set32(c.r[2], c.r[17].w[0] + c.r[16].w[0]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00365980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].d[0] = ld8((c.r[5].w[0]));
    c.r[2].d[0] = ld8((c.r[5].w[0] + 1u));
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[3], c.r[3].w[0] << 8);
    c.r[3].d[0] = c.r[3].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.r[16].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[5], c.r[17].w[0] + 2u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003659B8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x003659B8u) [[unlikely]] return; }
L_003659B8:
    c.r[2].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[2], c.r[2].w[0] + 2u);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_003659E0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25832u)));  c.pc = t; return; }
L_003659F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } goto L_003658D0; }
L_00365A10:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25824u);
    set32(c.r[4], ld32((c.r[28].w[0] - 25900u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[6], c.r[2].w[0] + 25056u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A3Cu); set32(c.r[7], 0u + 768u);  if (depth < kMaxDepth) unit_0095(c, 410u, depth + 1u); else { c.pc = 0x00357E10u; return; } if (c.pc != 0x00365A3Cu) [[unlikely]] return; }
L_00365A3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00365A58; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365A4Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 147u, depth + 1u); else { c.pc = 0x00365A70u; return; } if (c.pc != 0x00365A4Cu) [[unlikely]] return; }
L_00365A4C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00365A58; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00365A58:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365A70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] + 25826u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[3], 0u + 26376u);
    set32(c.r[5], c.r[5].w[0] << 8);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[6].d[0] = ld8((c.r[1].w[0] + 25827u));
    c.r[5].d[0] = ld16((c.r[4].w[0]));
    c.r[5].d[0] = c.r[5].d[0] | c.r[6].d[0];
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    c.budget -= 17;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_00365BB0; }
    set32(c.r[3], 0u + 26373u);
    c.budget -= 3;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[29].w[0] + 32u);  goto L_00365B5C; }
    set32(c.r[3], 0u + 26374u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365B48; } }
    set32(c.r[3], 0u + 24579u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365B20; } }
    set32(c.r[3], 0u + 24580u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365B10; } }
    set32(c.r[3], 0u + 24577u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365AF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00365C40; } }
L_00365AF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B08u); st16((c.r[2].w[0] + 5258u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0099(c, 195u, depth + 1u); else { c.pc = 0x003660B0u; return; } if (c.pc != 0x00365B08u) [[unlikely]] return; }
L_00365B08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365C3C; } }
L_00365B10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B18u);  if (depth < kMaxDepth) unit_0099(c, 211u, depth + 1u); else { c.pc = 0x003661C0u; return; } if (c.pc != 0x00365B18u) [[unlikely]] return; }
L_00365B18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365C3C; } }
L_00365B20:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[3].w[0] + 5264u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 5264u)));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] < 0;  if (t) { goto L_00365C3C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B40u); st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 210u, depth + 1u); else { c.pc = 0x003661A0u; return; } if (c.pc != 0x00365B40u) [[unlikely]] return; }
L_00365B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365C3C; } }
L_00365B48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B50u);  if (depth < kMaxDepth) unit_009A(c, 89u, depth + 1u); else { c.pc = 0x003686A0u; return; } if (c.pc != 0x00365B50u) [[unlikely]] return; }
L_00365B50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365C3C; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00365B5C:
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B68u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365B68u) [[unlikely]] return; }
L_00365B68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] + 25058u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B7Cu); set32(c.r[6], 0u + 8u);  if (depth < kMaxDepth) unit_0099(c, 138u, depth + 1u); else { c.pc = 0x00365940u; return; } if (c.pc != 0x00365B7Cu) [[unlikely]] return; }
L_00365B7C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 4576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365B8Cu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0099(c, 33u, depth + 1u); else { c.pc = 0x00364580u; return; } if (c.pc != 0x00365B8Cu) [[unlikely]] return; }
L_00365B8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365B9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (t) { goto L_00365C3C; } }
L_00365B9C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BA4u);  if (depth < kMaxDepth) unit_009A(c, 83u, depth + 1u); else { c.pc = 0x003685C0u; return; } if (c.pc != 0x00365BA4u) [[unlikely]] return; }
L_00365BA4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365C3C; } }
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 1;
L_00365BB0:
    set32(c.r[6], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365BBCu) [[unlikely]] return; }
L_00365BBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 47u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BCCu); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00365BCCu) [[unlikely]] return; }
L_00365BCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 32u);
    set32(c.r[5], c.r[2].w[0] + 25059u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BE0u); set32(c.r[6], 0u + 6u);  if (depth < kMaxDepth) unit_0099(c, 138u, depth + 1u); else { c.pc = 0x00365940u; return; } if (c.pc != 0x00365BE0u) [[unlikely]] return; }
L_00365BE0:
    c.r[2].d[0] = ld8((c.r[29].w[0] + 47u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00365C18; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 5536u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365BFCu); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0099(c, 33u, depth + 1u); else { c.pc = 0x00364580u; return; } if (c.pc != 0x00365BFCu) [[unlikely]] return; }
L_00365BFC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365C3C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C10u); st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 128u, depth + 1u); else { c.pc = 0x00368950u; return; } if (c.pc != 0x00365C10u) [[unlikely]] return; }
L_00365C10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365C3C; } }
L_00365C18:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 4576u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C28u); set32(c.r[5], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_0099(c, 33u, depth + 1u); else { c.pc = 0x00364580u; return; } if (c.pc != 0x00365C28u) [[unlikely]] return; }
L_00365C28:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365C3C; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365C3Cu); st16((c.r[16].w[0]), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_009A(c, 128u, depth + 1u); else { c.pc = 0x00368950u; return; } if (c.pc != 0x00365C3Cu) [[unlikely]] return; }
L_00365C3C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00365C40:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00365C50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], 0u + 25862u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D70; } }
    set32(c.r[3], 0u + 25602u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D60; } }
    set32(c.r[3], 0u + 25604u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D50; } }
    set32(c.r[3], 0u + 25615u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D40; } }
    set32(c.r[3], 0u + 26370u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D30; } }
    set32(c.r[3], 0u + 25347u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D20; } }
    set32(c.r[3], 0u + 25098u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D10; } }
    set32(c.r[3], 0u + 25094u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365D00; } }
    set32(c.r[3], 0u + 25093u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00365CF0; } }
    set32(c.r[3], 0u + 26376u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[4], 0u + 2u);  if (t) { goto L_00365CE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00365D7C; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 1;
L_00365CE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CE8u);  if (depth < kMaxDepth) unit_009A(c, 128u, depth + 1u); else { c.pc = 0x00368950u; return; } if (c.pc != 0x00365CE8u) [[unlikely]] return; }
L_00365CE8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365CF0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365CF8u);  if (depth < kMaxDepth) unit_0099(c, 468u, depth + 1u); else { c.pc = 0x00367500u; return; } if (c.pc != 0x00365CF8u) [[unlikely]] return; }
L_00365CF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D08u);  if (depth < kMaxDepth) unit_0099(c, 471u, depth + 1u); else { c.pc = 0x00367590u; return; } if (c.pc != 0x00365D08u) [[unlikely]] return; }
L_00365D08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D10:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D18u);  if (depth < kMaxDepth) unit_0099(c, 477u, depth + 1u); else { c.pc = 0x00367670u; return; } if (c.pc != 0x00365D18u) [[unlikely]] return; }
L_00365D18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D28u);  if (depth < kMaxDepth) unit_0099(c, 522u, depth + 1u); else { c.pc = 0x003679F0u; return; } if (c.pc != 0x00365D28u) [[unlikely]] return; }
L_00365D28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D38u);  if (depth < kMaxDepth) unit_009A(c, 67u, depth + 1u); else { c.pc = 0x003684A0u; return; } if (c.pc != 0x00365D38u) [[unlikely]] return; }
L_00365D38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D48u);  if (depth < kMaxDepth) unit_0099(c, 552u, depth + 1u); else { c.pc = 0x00367CE0u; return; } if (c.pc != 0x00365D48u) [[unlikely]] return; }
L_00365D48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D58u);  if (depth < kMaxDepth) unit_0099(c, 547u, depth + 1u); else { c.pc = 0x00367C30u; return; } if (c.pc != 0x00365D58u) [[unlikely]] return; }
L_00365D58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D68u);  if (depth < kMaxDepth) unit_0099(c, 543u, depth + 1u); else { c.pc = 0x00367BA0u; return; } if (c.pc != 0x00365D68u) [[unlikely]] return; }
L_00365D68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00365D78; } }
L_00365D70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365D78u);  if (depth < kMaxDepth) unit_009A(c, 22u, depth + 1u); else { c.pc = 0x00368190u; return; } if (c.pc != 0x00365D78u) [[unlikely]] return; }
L_00365D78:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00365D7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00365D90:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365DA0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 144u, depth + 1u); else { c.pc = 0x00365A10u; return; } if (c.pc != 0x00365DA0u) [[unlikely]] return; }
L_00365DA0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00365DB0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365DB0u); set32(c.r[4], c.r[29].w[0] + 30u);  if (depth < kMaxDepth) unit_0099(c, 163u, depth + 1u); else { c.pc = 0x00365C50u; return; } if (c.pc != 0x00365DB0u) [[unlikely]] return; }
L_00365DB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00365DC0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[4], c.r[17].w[0] + 16u);
    set32(c.r[6], 0u + 768u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365DE8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00365DE8u) [[unlikely]] return; }
L_00365DE8:
    c.r[4].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 8));
    st8((c.r[17].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    set32(c.r[3], 0u + 129u);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    st8((c.r[17].w[0] + 4u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 255u);
    st8((c.r[17].w[0] + 13u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 14u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 15u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[17].w[0] + 5u), static_cast<std::uint8_t>(0u));
    st8((c.r[17].w[0] + 12u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 19;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00365E40:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00365E50:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    st8((c.r[4].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[4].w[0] + 2u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 9u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00365E70:
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 16u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00365EA0:
    c.r[6].d[0] = c.r[5].d[0] & 65535ull;
    c.r[5].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[6].w[0]) >> 8));
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 16u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[5].w[0] + 17u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 2u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 2u);
    c.budget -= 13;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00365EE0:
    c.r[8].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[7], c.r[5].w[0] >> 24);
    set32(c.r[6], c.r[5].w[0] >> 16);
    set32(c.r[3], c.r[5].w[0] >> 8);
    set32(c.r[8], c.r[4].w[0] + c.r[8].w[0]);
    st8((c.r[8].w[0] + 16u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[8].w[0] + 17u), static_cast<std::uint8_t>(c.r[6].w[0]));
    st8((c.r[8].w[0] + 18u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[8].w[0] + 19u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + 4u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[4].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + 4u);
    c.budget -= 16;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00365F20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld16((c.r[4].w[0] + 2u));
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365F4Cu); set32(c.r[4], c.r[2].w[0] + 16u);  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00365F4Cu) [[unlikely]] return; }
L_00365F4C:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld16((c.r[17].w[0] + 2u));
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 11;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00365F80:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[6], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FA8u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00365FA8u) [[unlikely]] return; }
L_00365FA8:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FB8u); mmi::paddub(c.r[6], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 184u, depth + 1u); else { c.pc = 0x00365F20u; return; } if (c.pc != 0x00365FB8u) [[unlikely]] return; }
L_00365FB8:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00365FD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 25900u)));
    set32(c.r[5], c.r[16].w[0] + 4u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00365FF0u); set32(c.r[6], 0u + 12u);  if (depth < kMaxDepth) unit_0095(c, 416u, depth + 1u); else { c.pc = 0x00357F80u; return; } if (c.pc != 0x00365FF0u) [[unlikely]] return; }
L_00365FF0:
    c.r[6].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 25900u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366000u); set32(c.r[5], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0095(c, 416u, depth + 1u); else { c.pc = 0x00357F80u; return; } if (c.pc != 0x00366000u) [[unlikely]] return; }
L_00366000:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00366010:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[18], c.r[6], c.r[0]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    set32(c.r[6], 0u + 128u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366044u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00366044u) [[unlikely]] return; }
L_00366044:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[9].d[0] = c.r[18].d[0] << 56;
    set32(c.r[6], c.r[3].w[0] - 23856u);
    c.r[9].d[0] = static_cast<std::uint64_t>(c.r[9].sd[0] >> 56);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_00366088; } }
    set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);
    c.budget -= 1;
L_00366064:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.r[8].d[0] = c.r[8].d[0] & 3ull;
    set32(c.r[3], c.r[16].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[17].w[0] + c.r[7].w[0]);
    c.r[4].d[0] = c.r[5].d[0] ^ c.r[4].d[0];
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_00366088:
    c.r[3].d[0] = c.r[7].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], c.r[6].w[0] + c.r[8].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366064u | kUnwind; return; } goto L_00366064; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003660B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660C8u); set32(c.r[5], 0u + 24577u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003660C8u) [[unlikely]] return; }
L_003660C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660D8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003660D8u) [[unlikely]] return; }
L_003660D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660E4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003660E4u) [[unlikely]] return; }
L_003660E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003660F0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003660F0u) [[unlikely]] return; }
L_003660F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366100:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366118u); set32(c.r[5], 0u + 24578u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366118u) [[unlikely]] return; }
L_00366118:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366128u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366128u) [[unlikely]] return; }
L_00366128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366134u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366134u) [[unlikely]] return; }
L_00366134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366140u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366140u) [[unlikely]] return; }
L_00366140:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366150:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366168u); set32(c.r[5], 0u + 24905u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366168u) [[unlikely]] return; }
L_00366168:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366178u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366178u) [[unlikely]] return; }
L_00366178:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366184u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366184u) [[unlikely]] return; }
L_00366184:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366190u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366190u) [[unlikely]] return; }
L_00366190:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003661A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } goto L_003658D0; }
L_003661C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 5192u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_003661D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] - 6512u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } goto L_003658D0; }
L_003661F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036620Cu); set32(c.r[4], c.r[3].w[0] + 8154u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036620Cu) [[unlikely]] return; }
L_0036620C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036621Cu); set32(c.r[4], c.r[3].w[0] + 8156u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036621Cu) [[unlikely]] return; }
L_0036621C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036622Cu); set32(c.r[4], c.r[3].w[0] + 8158u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036622Cu) [[unlikely]] return; }
L_0036622C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036623Cu); set32(c.r[4], c.r[3].w[0] + 8160u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036623Cu) [[unlikely]] return; }
L_0036623C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366250:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366268u); set32(c.r[5], 0u + 24833u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366268u) [[unlikely]] return; }
L_00366268:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366278u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366278u) [[unlikely]] return; }
L_00366278:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366284u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366284u) [[unlikely]] return; }
L_00366284:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366290u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366290u) [[unlikely]] return; }
L_00366290:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003662A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662B8u); set32(c.r[5], 0u + 24834u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003662B8u) [[unlikely]] return; }
L_003662B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003662C8u) [[unlikely]] return; }
L_003662C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[6], 0u + 8u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662E0u); set32(c.r[5], c.r[3].w[0] + 5322u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x003662E0u) [[unlikely]] return; }
L_003662E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662ECu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003662ECu) [[unlikely]] return; }
L_003662EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003662F8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003662F8u) [[unlikely]] return; }
L_003662F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366310:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 5322u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } goto L_003658D0; }
L_00366330:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 25988u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366348u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00366348u) [[unlikely]] return; }
L_00366348:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 5744u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366358u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00366358u) [[unlikely]] return; }
L_00366358:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[3].w[0] - 6512u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366368u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00366368u) [[unlikely]] return; }
L_00366368:
    set32(c.r[4], c.r[28].w[0] - 25992u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366374u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00366374u) [[unlikely]] return; }
L_00366374:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366380:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366398u); set32(c.r[5], 0u + 24835u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366398u) [[unlikely]] return; }
L_00366398:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663A8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003663A8u) [[unlikely]] return; }
L_003663A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663B4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003663B4u) [[unlikely]] return; }
L_003663B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663C0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003663C0u) [[unlikely]] return; }
L_003663C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003663D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663E8u); set32(c.r[5], 0u + 24848u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003663E8u) [[unlikely]] return; }
L_003663E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003663F8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003663F8u) [[unlikely]] return; }
L_003663F8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 25784u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366408u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366408u) [[unlikely]] return; }
L_00366408:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366414u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366414u) [[unlikely]] return; }
L_00366414:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366420u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366420u) [[unlikely]] return; }
L_00366420:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366430:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[28].w[0] - 26000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366454u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00366454u) [[unlikely]] return; }
L_00366454:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[17], c.r[3].w[0] - 6640u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[18], c.r[3].w[0] - 6704u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00366498; } }
L_00366470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366478u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00366478u) [[unlikely]] return; }
L_00366478:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366484u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 140u, depth + 1u); else { c.pc = 0x00365980u; return; } if (c.pc != 0x00366484u) [[unlikely]] return; }
L_00366484:
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[18], c.r[18].w[0] + 18u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    c.budget -= 5;
L_00366498:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26000u));
    c.r[3].d[0] = c.r[16].sd[0] < c.r[3].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00366470u | kUnwind; return; } goto L_00366470; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_003664C0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 640u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365980u | kUnwind; return; } goto L_00365980; }
L_003664E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003664F8u); set32(c.r[5], 0u + 24850u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003664F8u) [[unlikely]] return; }
L_003664F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366508u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366508u) [[unlikely]] return; }
L_00366508:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[6], 0u + 6u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366520u); set32(c.r[5], c.r[3].w[0] + 640u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366520u) [[unlikely]] return; }
L_00366520:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036652Cu); set32(c.r[4], c.r[2].w[0] + 648u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0036652Cu) [[unlikely]] return; }
L_0036652C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366544u); set32(c.r[5], c.r[3].w[0] + 648u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366544u) [[unlikely]] return; }
L_00366544:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366550u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366550u) [[unlikely]] return; }
L_00366550:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036655Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x0036655Cu) [[unlikely]] return; }
L_0036655C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366570:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366588u); set32(c.r[5], 0u + 24851u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366588u) [[unlikely]] return; }
L_00366588:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366598u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366598u) [[unlikely]] return; }
L_00366598:
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665A4u); set32(c.r[4], c.r[2].w[0] + 640u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x003665A4u) [[unlikely]] return; }
L_003665A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665BCu); set32(c.r[5], c.r[3].w[0] + 640u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x003665BCu) [[unlikely]] return; }
L_003665BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665C8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003665C8u) [[unlikely]] return; }
L_003665C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665D4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003665D4u) [[unlikely]] return; }
L_003665D4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003665E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003665F8u); set32(c.r[5], 0u + 24852u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003665F8u) [[unlikely]] return; }
L_003665F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366608u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366608u) [[unlikely]] return; }
L_00366608:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 27272u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366618u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366618u) [[unlikely]] return; }
L_00366618:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366624u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366624u) [[unlikely]] return; }
L_00366624:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366630u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366630u) [[unlikely]] return; }
L_00366630:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366640:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366658u); set32(c.r[5], 0u + 24853u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366658u) [[unlikely]] return; }
L_00366658:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366668u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366668u) [[unlikely]] return; }
L_00366668:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366678u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366678u) [[unlikely]] return; }
L_00366678:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366684u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366684u) [[unlikely]] return; }
L_00366684:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366690u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366690u) [[unlikely]] return; }
L_00366690:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003666A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666B8u); set32(c.r[5], 0u + 24854u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003666B8u) [[unlikely]] return; }
L_003666B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666C8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003666C8u) [[unlikely]] return; }
L_003666C8:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 27264u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666D8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003666D8u) [[unlikely]] return; }
L_003666D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666E4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003666E4u) [[unlikely]] return; }
L_003666E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003666F0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003666F0u) [[unlikely]] return; }
L_003666F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366718u); set32(c.r[5], 0u + 24855u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366718u) [[unlikely]] return; }
L_00366718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366728u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366728u) [[unlikely]] return; }
L_00366728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[28].w[0] - 30524u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036673Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x0036673Cu) [[unlikely]] return; }
L_0036673C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366748u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366748u) [[unlikely]] return; }
L_00366748:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366754u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366754u) [[unlikely]] return; }
L_00366754:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366760:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[4], c.r[29].w[0] + 48u);
    set32(c.r[5], c.r[29].w[0] + 50u);
    set32(c.r[6], c.r[29].w[0] + 52u);
    set32(c.r[7], c.r[29].w[0] + 54u);
    set32(c.r[8], c.r[29].w[0] + 56u);
    set32(c.r[9], c.r[29].w[0] + 58u);
    set32(c.r[10], c.r[29].w[0] + 60u);
    set32(c.r[11], c.r[29].w[0] + 62u);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366794u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_00A0(c, 177u, depth + 1u); else { c.pc = 0x00381BC0u; return; } if (c.pc != 0x00366794u) [[unlikely]] return; }
L_00366794:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25656u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);  goto L_003667C4; }
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { mmi::paddub(c.r[16], c.r[0], c.r[0]);  goto L_003667B8; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_003667C8; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_003667B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_003667C8; } }
    c.r[16].d[0] = 0ull + static_cast<std::uint64_t>(1ll);
    c.budget -= 1;
L_003667C4:
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_003667C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667D8u); set32(c.r[5], 0u + 24864u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003667D8u) [[unlikely]] return; }
L_003667D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003667E8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003667E8u) [[unlikely]] return; }
L_003667E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[6], 0u + 14u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366800u); set32(c.r[5], c.r[3].w[0] + 5274u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366800u) [[unlikely]] return; }
L_00366800:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 25984u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366810u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366810u) [[unlikely]] return; }
L_00366810:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 688u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366824u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366824u) [[unlikely]] return; }
L_00366824:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 690u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366838u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366838u) [[unlikely]] return; }
L_00366838:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 692u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036684Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x0036684Cu) [[unlikely]] return; }
L_0036684C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld8((c.r[3].w[0] + 694u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366860u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366860u) [[unlikely]] return; }
L_00366860:
    c.r[5].d[0] = ld8((c.r[28].w[0] - 25968u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366870u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366870u) [[unlikely]] return; }
L_00366870:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], ld32((c.r[3].w[0] + 5288u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366884u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 183u, depth + 1u); else { c.pc = 0x00365EE0u; return; } if (c.pc != 0x00366884u) [[unlikely]] return; }
L_00366884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366894u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366894u) [[unlikely]] return; }
L_00366894:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003668A4u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003668A4u) [[unlikely]] return; }
L_003668A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003668B4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003668B4u) [[unlikely]] return; }
L_003668B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003668C4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003668C4u) [[unlikely]] return; }
L_003668C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5292u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003668D8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003668D8u) [[unlikely]] return; }
L_003668D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5294u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003668ECu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003668ECu) [[unlikely]] return; }
L_003668EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5296u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366900u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366900u) [[unlikely]] return; }
L_00366900:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5298u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366914u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366914u) [[unlikely]] return; }
L_00366914:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5300u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366928u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366928u) [[unlikely]] return; }
L_00366928:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5302u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036693Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x0036693Cu) [[unlikely]] return; }
L_0036693C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5304u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366950u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366950u) [[unlikely]] return; }
L_00366950:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5306u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366964u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366964u) [[unlikely]] return; }
L_00366964:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 48u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366974u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366974u) [[unlikely]] return; }
L_00366974:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 50u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366984u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366984u) [[unlikely]] return; }
L_00366984:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 52u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366994u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00366994u) [[unlikely]] return; }
L_00366994:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 54u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669A4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003669A4u) [[unlikely]] return; }
L_003669A4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 56u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669B4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003669B4u) [[unlikely]] return; }
L_003669B4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 58u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669C4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003669C4u) [[unlikely]] return; }
L_003669C4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 60u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669D4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003669D4u) [[unlikely]] return; }
L_003669D4:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 62u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669E4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003669E4u) [[unlikely]] return; }
L_003669E4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669F0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003669F0u) [[unlikely]] return; }
L_003669F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003669FCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003669FCu) [[unlikely]] return; }
L_003669FC:
    st8((c.r[28].w[0] - 25968u), static_cast<std::uint8_t>(0u));
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00366A20:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A38u); set32(c.r[5], 0u + 24890u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366A38u) [[unlikely]] return; }
L_00366A38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A48u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366A48u) [[unlikely]] return; }
L_00366A48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A54u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366A54u) [[unlikely]] return; }
L_00366A54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A60u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366A60u) [[unlikely]] return; }
L_00366A60:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366A70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366A84u); set32(c.r[4], c.r[2].w[0] - 31888u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366A84u) [[unlikely]] return; }
L_00366A84:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 31888u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366AA0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0099(c, 192u, depth + 1u); else { c.pc = 0x00366010u; return; } if (c.pc != 0x00366AA0u) [[unlikely]] return; }
L_00366AA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366AB0u); set32(c.r[5], 0u + 24881u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366AB0u) [[unlikely]] return; }
L_00366AB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366AC0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366AC0u) [[unlikely]] return; }
L_00366AC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366ACCu); set32(c.r[4], c.r[2].w[0] - 31888u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366ACCu) [[unlikely]] return; }
L_00366ACC:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366AE4u); set32(c.r[5], c.r[2].w[0] + 24928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366AE4u) [[unlikely]] return; }
L_00366AE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366AF0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366AF0u) [[unlikely]] return; }
L_00366AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366AFCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366AFCu) [[unlikely]] return; }
L_00366AFC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366B10:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B24u); set32(c.r[4], c.r[2].w[0] - 31504u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366B24u) [[unlikely]] return; }
L_00366B24:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 31504u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B40u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0099(c, 192u, depth + 1u); else { c.pc = 0x00366010u; return; } if (c.pc != 0x00366B40u) [[unlikely]] return; }
L_00366B40:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B50u); set32(c.r[5], 0u + 24882u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366B50u) [[unlikely]] return; }
L_00366B50:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B60u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366B60u) [[unlikely]] return; }
L_00366B60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B6Cu); set32(c.r[4], c.r[2].w[0] - 31504u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366B6Cu) [[unlikely]] return; }
L_00366B6C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B84u); set32(c.r[5], c.r[2].w[0] + 24928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366B84u) [[unlikely]] return; }
L_00366B84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B90u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366B90u) [[unlikely]] return; }
L_00366B90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366B9Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366B9Cu) [[unlikely]] return; }
L_00366B9C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366BB0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[6], 0u + 128u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366BC8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00366BC8u) [[unlikely]] return; }
L_00366BC8:
    set32(c.r[4], c.r[29].w[0] + 16u);
    set32(c.r[5], 0u + 32u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366BD8u); set32(c.r[6], 0u + 7u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00366BD8u) [[unlikely]] return; }
L_00366BD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366BE4u); set32(c.r[4], c.r[2].w[0] - 31376u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366BE4u) [[unlikely]] return; }
L_00366BE4:
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 16u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366BF8u); set32(c.r[5], c.r[2].w[0] - 31376u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x00366BF8u) [[unlikely]] return; }
L_00366BF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C04u); set32(c.r[4], c.r[2].w[0] - 31366u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366C04u) [[unlikely]] return; }
L_00366C04:
    mmi::paddub(c.r[6], c.r[2], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[4], c.r[29].w[0] + 23u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C18u); set32(c.r[5], c.r[2].w[0] - 31366u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x00366C18u) [[unlikely]] return; }
L_00366C18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C20u); set32(c.r[4], c.r[29].w[0] + 16u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366C20u) [[unlikely]] return; }
L_00366C20:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    set32(c.r[5], c.r[29].w[0] + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C38u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0099(c, 192u, depth + 1u); else { c.pc = 0x00366010u; return; } if (c.pc != 0x00366C38u) [[unlikely]] return; }
L_00366C38:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C48u); set32(c.r[5], 0u + 24883u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366C48u) [[unlikely]] return; }
L_00366C48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C58u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366C58u) [[unlikely]] return; }
L_00366C58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C64u); set32(c.r[4], c.r[2].w[0] - 31366u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366C64u) [[unlikely]] return; }
L_00366C64:
    set32(c.r[2], c.r[2].w[0] + 7u);
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C80u); set32(c.r[5], c.r[2].w[0] + 24928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366C80u) [[unlikely]] return; }
L_00366C80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C8Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366C8Cu) [[unlikely]] return; }
L_00366C8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366C98u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366C98u) [[unlikely]] return; }
L_00366C98:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00366CB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366CC4u); set32(c.r[4], c.r[2].w[0] - 31760u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366CC4u) [[unlikely]] return; }
L_00366CC4:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 31760u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366CE0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0099(c, 192u, depth + 1u); else { c.pc = 0x00366010u; return; } if (c.pc != 0x00366CE0u) [[unlikely]] return; }
L_00366CE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366CF0u); set32(c.r[5], 0u + 24884u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366CF0u) [[unlikely]] return; }
L_00366CF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D00u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366D00u) [[unlikely]] return; }
L_00366D00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D0Cu); set32(c.r[4], c.r[2].w[0] - 31760u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366D0Cu) [[unlikely]] return; }
L_00366D0C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D24u); set32(c.r[5], c.r[2].w[0] + 24928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366D24u) [[unlikely]] return; }
L_00366D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D30u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366D30u) [[unlikely]] return; }
L_00366D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D3Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366D3Cu) [[unlikely]] return; }
L_00366D3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366D50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D68u); set32(c.r[5], 0u + 24885u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366D68u) [[unlikely]] return; }
L_00366D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366D78u) [[unlikely]] return; }
L_00366D78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[5].d[0] = ld8((c.r[1].w[0] - 31238u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D8Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366D8Cu) [[unlikely]] return; }
L_00366D8C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366D98u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366D98u) [[unlikely]] return; }
L_00366D98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366DA4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366DA4u) [[unlikely]] return; }
L_00366DA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366DB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366DC4u); set32(c.r[4], c.r[2].w[0] - 31632u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366DC4u) [[unlikely]] return; }
L_00366DC4:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 31632u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366DE0u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0099(c, 192u, depth + 1u); else { c.pc = 0x00366010u; return; } if (c.pc != 0x00366DE0u) [[unlikely]] return; }
L_00366DE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366DF0u); set32(c.r[5], 0u + 24886u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366DF0u) [[unlikely]] return; }
L_00366DF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E00u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366E00u) [[unlikely]] return; }
L_00366E00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E0Cu); set32(c.r[4], c.r[2].w[0] - 31632u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366E0Cu) [[unlikely]] return; }
L_00366E0C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E24u); set32(c.r[5], c.r[2].w[0] + 24928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366E24u) [[unlikely]] return; }
L_00366E24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E30u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366E30u) [[unlikely]] return; }
L_00366E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E3Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366E3Cu) [[unlikely]] return; }
L_00366E3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366E50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E68u); set32(c.r[5], 0u + 24887u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366E68u) [[unlikely]] return; }
L_00366E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E78u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366E78u) [[unlikely]] return; }
L_00366E78:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 31237u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00366EA0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366E98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366E98u) [[unlikely]] return; }
L_00366E98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00366EB0; } }
L_00366EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366EB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00366EB0u) [[unlikely]] return; }
L_00366EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366EBCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366EBCu) [[unlikely]] return; }
L_00366EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366EC8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366EC8u) [[unlikely]] return; }
L_00366EC8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366EE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366EF4u); set32(c.r[4], c.r[2].w[0] - 31440u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366EF4u) [[unlikely]] return; }
L_00366EF4:
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 24928u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    set32(c.r[5], c.r[2].w[0] - 31440u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F10u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_0099(c, 192u, depth + 1u); else { c.pc = 0x00366010u; return; } if (c.pc != 0x00366F10u) [[unlikely]] return; }
L_00366F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F20u); set32(c.r[5], 0u + 24888u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366F20u) [[unlikely]] return; }
L_00366F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F30u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366F30u) [[unlikely]] return; }
L_00366F30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A90000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F3Cu); set32(c.r[4], c.r[2].w[0] - 31440u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x00366F3Cu) [[unlikely]] return; }
L_00366F3C:
    c.r[6].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F54u); set32(c.r[5], c.r[2].w[0] + 24928u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x00366F54u) [[unlikely]] return; }
L_00366F54:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F60u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366F60u) [[unlikely]] return; }
L_00366F60:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F6Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366F6Cu) [[unlikely]] return; }
L_00366F6C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366F80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366F98u); set32(c.r[5], 0u + 24889u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00366F98u) [[unlikely]] return; }
L_00366F98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366FA8u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00366FA8u) [[unlikely]] return; }
L_00366FA8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366FB4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00366FB4u) [[unlikely]] return; }
L_00366FB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00366FC0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00366FC0u) [[unlikely]] return; }
L_00366FC0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00366FD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25056u);
    c.budget -= 5;
    { set32(c.r[4], c.r[3].w[0] + 5308u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658A0u | kUnwind; return; } goto L_003658A0; }
L_00366FF0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 26060u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367008u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00367008u) [[unlikely]] return; }
L_00367008:
    set32(c.r[4], c.r[28].w[0] - 26052u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367014u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 135u, depth + 1u); else { c.pc = 0x003658A0u; return; } if (c.pc != 0x00367014u) [[unlikely]] return; }
L_00367014:
    set32(c.r[4], c.r[28].w[0] - 26056u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367020u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 135u, depth + 1u); else { c.pc = 0x003658A0u; return; } if (c.pc != 0x00367020u) [[unlikely]] return; }
L_00367020:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26036u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00367050; } }
    c.r[4].d[0] = ld8((c.r[28].w[0] - 26060u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st8((c.r[3].w[0] + 666u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26052u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[3].w[0] + 5312u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26056u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st32((c.r[3].w[0] + 5316u), c.r[4].w[0]);
    c.budget -= 9;
L_00367050:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[28].w[0] - 26080u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367078u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367078u) [[unlikely]] return; }
L_00367078:
    set32(c.r[4], c.r[28].w[0] - 26064u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367084u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367084u) [[unlikely]] return; }
L_00367084:
    set32(c.r[4], c.r[28].w[0] - 26068u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367090u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367090u) [[unlikely]] return; }
L_00367090:
    set32(c.r[4], c.r[28].w[0] - 26072u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036709Cu); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036709Cu) [[unlikely]] return; }
L_0036709C:
    set32(c.r[4], c.r[28].w[0] - 26076u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670A8u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x003670A8u) [[unlikely]] return; }
L_003670A8:
    set32(c.r[4], c.r[28].w[0] - 26084u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670B4u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 135u, depth + 1u); else { c.pc = 0x003658A0u; return; } if (c.pc != 0x003670B4u) [[unlikely]] return; }
L_003670B4:
    set32(c.r[4], c.r[28].w[0] - 26088u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003670C0u); mmi::paddub(c.r[5], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 135u, depth + 1u); else { c.pc = 0x003658A0u; return; } if (c.pc != 0x003670C0u) [[unlikely]] return; }
L_003670C0:
    c.r[3].d[0] = ld8((c.r[28].w[0] - 26036u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00367118; } }
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26080u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 676u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26064u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 668u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26068u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 670u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26072u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 672u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[28].w[0] - 26076u));
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    st16((c.r[3].w[0] + 674u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26084u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26088u)));
    st32((c.r[28].w[0] - 25904u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 25908u), c.r[3].w[0]);
    c.budget -= 19;
L_00367118:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367130:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367148u); set32(c.r[5], 0u + 24897u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367148u) [[unlikely]] return; }
L_00367148:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367158u); set32(c.r[5], 0u + 16u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367158u) [[unlikely]] return; }
L_00367158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367164u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367164u) [[unlikely]] return; }
L_00367164:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367170u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367170u) [[unlikely]] return; }
L_00367170:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367198u); set32(c.r[5], 0u + 24898u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367198u) [[unlikely]] return; }
L_00367198:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671A8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003671A8u) [[unlikely]] return; }
L_003671A8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671B4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003671B4u) [[unlikely]] return; }
L_003671B4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671C0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003671C0u) [[unlikely]] return; }
L_003671C0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003671D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671E8u); set32(c.r[5], 0u + 24899u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003671E8u) [[unlikely]] return; }
L_003671E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003671F8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003671F8u) [[unlikely]] return; }
L_003671F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036720Cu); set32(c.r[6], 0u + 640u);  if (depth < kMaxDepth) unit_0099(c, 186u, depth + 1u); else { c.pc = 0x00365F80u; return; } if (c.pc != 0x0036720Cu) [[unlikely]] return; }
L_0036720C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367218u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367218u) [[unlikely]] return; }
L_00367218:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367224u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367224u) [[unlikely]] return; }
L_00367224:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367230:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367250u); set32(c.r[5], 0u + 24900u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367250u) [[unlikely]] return; }
L_00367250:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367260u) [[unlikely]] return; }
L_00367260:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367270u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00367270u) [[unlikely]] return; }
L_00367270:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036727Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036727Cu) [[unlikely]] return; }
L_0036727C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367288u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367288u) [[unlikely]] return; }
L_00367288:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003672A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672C0u); set32(c.r[5], 0u + 24901u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003672C0u) [[unlikely]] return; }
L_003672C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672D0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003672D0u) [[unlikely]] return; }
L_003672D0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672E0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x003672E0u) [[unlikely]] return; }
L_003672E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672ECu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003672ECu) [[unlikely]] return; }
L_003672EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003672F8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003672F8u) [[unlikely]] return; }
L_003672F8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367310:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[4], c.r[2].w[0] + 5184u);
    set32(c.r[5], c.r[2].w[0] + 5186u);
    set32(c.r[6], c.r[2].w[0] + 5188u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367330u); set32(c.r[7], c.r[2].w[0] + 5190u);  if (depth < kMaxDepth) unit_009D(c, 16u, depth + 1u); else { c.pc = 0x00374570u; return; } if (c.pc != 0x00367330u) [[unlikely]] return; }
L_00367330:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367340u); set32(c.r[5], 0u + 24904u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367340u) [[unlikely]] return; }
L_00367340:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367350u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367350u) [[unlikely]] return; }
L_00367350:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5184u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367364u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367364u) [[unlikely]] return; }
L_00367364:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5186u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367378u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367378u) [[unlikely]] return; }
L_00367378:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5188u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036738Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x0036738Cu) [[unlikely]] return; }
L_0036738C:
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[5].d[0] = ld16((c.r[3].w[0] + 5190u));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673A0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003673A0u) [[unlikely]] return; }
L_003673A0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25724u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673B8u); c.r[5].d[0] = c.r[2].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003673B8u) [[unlikely]] return; }
L_003673B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673C8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003673C8u) [[unlikely]] return; }
L_003673C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673D8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003673D8u) [[unlikely]] return; }
L_003673D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673E8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003673E8u) [[unlikely]] return; }
L_003673E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003673F4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003673F4u) [[unlikely]] return; }
L_003673F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367400u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367400u) [[unlikely]] return; }
L_00367400:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367410:
    c.r[2].d[0] = c.r[5].d[0] & 65535ull;
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    if (c.r[1].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] - 1u);  goto L_00367444; }
    set32(c.r[2], c.r[2].w[0] - 1u);
    mmi::div(c, 0, c.r[2].w[0], c.r[3].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_00367448; } }
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 1;
L_00367444:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_00367448:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_00367450:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 24882u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365880u | kUnwind; return; } goto L_00365880; }
L_00367470:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367488u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367488u) [[unlikely]] return; }
L_00367488:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 15040u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003674BCu); set32(c.r[4], c.r[2].w[0] + 8u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003674BCu) [[unlikely]] return; }
L_003674BC:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] + 14718u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 4ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367500:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367518u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367518u) [[unlikely]] return; }
L_00367518:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 15040u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036754Cu); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x0036754Cu) [[unlikely]] return; }
L_0036754C:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] + 14718u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 1ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003675A8u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x003675A8u) [[unlikely]] return; }
L_003675A8:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 15040u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003675DCu); set32(c.r[4], c.r[2].w[0] + 4u);  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x003675DCu) [[unlikely]] return; }
L_003675DC:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] + 14718u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 2ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367620:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } goto L_003658D0; }
L_00367640:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036765Cu); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x0036765Cu) [[unlikely]] return; }
L_0036765C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25832u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367670:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367688u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367688u) [[unlikely]] return; }
L_00367688:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 15040u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003676BCu); set32(c.r[4], c.r[2].w[0] + 72u);  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x003676BCu) [[unlikely]] return; }
L_003676BC:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] + 14718u);
    set32(c.r[4], c.r[5].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | 8ull;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367700:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367718u); set32(c.r[5], 0u + 25091u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367718u) [[unlikely]] return; }
L_00367718:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367728u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367728u) [[unlikely]] return; }
L_00367728:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367734u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367734u) [[unlikely]] return; }
L_00367734:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367740u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367740u) [[unlikely]] return; }
L_00367740:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367750:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367770u); set32(c.r[5], 0u + 25093u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367770u) [[unlikely]] return; }
L_00367770:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367780u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367780u) [[unlikely]] return; }
L_00367780:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367790u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367790u) [[unlikely]] return; }
L_00367790:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036779Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036779Cu) [[unlikely]] return; }
L_0036779C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677A8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003677A8u) [[unlikely]] return; }
L_003677A8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003677C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677E0u); set32(c.r[5], 0u + 25094u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003677E0u) [[unlikely]] return; }
L_003677E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003677F0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003677F0u) [[unlikely]] return; }
L_003677F0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367800u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367800u) [[unlikely]] return; }
L_00367800:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036780Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036780Cu) [[unlikely]] return; }
L_0036780C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367818u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367818u) [[unlikely]] return; }
L_00367818:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367830:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367850u); set32(c.r[5], 0u + 25095u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367850u) [[unlikely]] return; }
L_00367850:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367860u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367860u) [[unlikely]] return; }
L_00367860:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367870u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367870u) [[unlikely]] return; }
L_00367870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036787Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x0036787Cu) [[unlikely]] return; }
L_0036787C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367888u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367888u) [[unlikely]] return; }
L_00367888:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003678A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678B8u); set32(c.r[5], 0u + 25096u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003678B8u) [[unlikely]] return; }
L_003678B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678C8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003678C8u) [[unlikely]] return; }
L_003678C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678D4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003678D4u) [[unlikely]] return; }
L_003678D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003678E0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003678E0u) [[unlikely]] return; }
L_003678E0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_003678F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367908u); set32(c.r[5], 0u + 25097u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367908u) [[unlikely]] return; }
L_00367908:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367918u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367918u) [[unlikely]] return; }
L_00367918:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 5680u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036792Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x0036792Cu) [[unlikely]] return; }
L_0036792C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 5678u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367940u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367940u) [[unlikely]] return; }
L_00367940:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    c.r[5].d[0] = ld16((c.r[1].w[0] - 5676u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367954u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367954u) [[unlikely]] return; }
L_00367954:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367960u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367960u) [[unlikely]] return; }
L_00367960:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0036796Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x0036796Cu) [[unlikely]] return; }
L_0036796C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367980:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679A0u); set32(c.r[5], 0u + 25098u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x003679A0u) [[unlikely]] return; }
L_003679A0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679B0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x003679B0u) [[unlikely]] return; }
L_003679B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679C0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x003679C0u) [[unlikely]] return; }
L_003679C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679CCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x003679CCu) [[unlikely]] return; }
L_003679CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x003679D8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x003679D8u) [[unlikely]] return; }
L_003679D8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_003679F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A08u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367A08u) [[unlikely]] return; }
L_00367A08:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 14384u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A3Cu); set32(c.r[4], c.r[2].w[0] + 2u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367A3Cu) [[unlikely]] return; }
L_00367A3C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367A50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A70u); set32(c.r[5], 0u + 25347u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367A70u) [[unlikely]] return; }
L_00367A70:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A80u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367A80u) [[unlikely]] return; }
L_00367A80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A90u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367A90u) [[unlikely]] return; }
L_00367A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367A9Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367A9Cu) [[unlikely]] return; }
L_00367A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AA8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367AA8u) [[unlikely]] return; }
L_00367AA8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367AC0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AE0u); set32(c.r[5], 0u + 25349u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367AE0u) [[unlikely]] return; }
L_00367AE0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367AF0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367AF0u) [[unlikely]] return; }
L_00367AF0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B00u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367B00u) [[unlikely]] return; }
L_00367B00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B0Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367B0Cu) [[unlikely]] return; }
L_00367B0C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B18u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367B18u) [[unlikely]] return; }
L_00367B18:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367B30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B48u); set32(c.r[5], 0u + 25350u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367B48u) [[unlikely]] return; }
L_00367B48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367B58u) [[unlikely]] return; }
L_00367B58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B64u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367B64u) [[unlikely]] return; }
L_00367B64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367B70u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367B70u) [[unlikely]] return; }
L_00367B70:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367B80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[2].w[0] + 24890u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00365880u | kUnwind; return; } goto L_00365880; }
L_00367BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BB8u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367BB8u) [[unlikely]] return; }
L_00367BB8:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367BC4u); set32(c.r[4], 0u + 50u);  if (depth < kMaxDepth) unit_0099(c, 463u, depth + 1u); else { c.pc = 0x00367410u; return; } if (c.pc != 0x00367BC4u) [[unlikely]] return; }
L_00367BC4:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] - 2016u);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00367C20; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[6].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] - 2010u);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25058u);
    c.r[2].d[0] = c.r[3].d[0] | 4ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367C20u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 136u, depth + 1u); else { c.pc = 0x003658D0u; return; } if (c.pc != 0x00367C20u) [[unlikely]] return; }
L_00367C20:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367C30:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367C48u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367C48u) [[unlikely]] return; }
L_00367C48:
    c.r[5].d[0] = ld16((c.r[29].w[0] + 30u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367C54u); set32(c.r[4], 0u + 50u);  if (depth < kMaxDepth) unit_0099(c, 463u, depth + 1u); else { c.pc = 0x00367410u; return; } if (c.pc != 0x00367C54u) [[unlikely]] return; }
L_00367C54:
    c.r[5].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[3], c.r[3].w[0] - 2016u);
    set32(c.r[6], c.r[3].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld16((c.r[6].w[0]));
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00367CB0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A80000u);
    set32(c.r[4], c.r[6].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] - 2010u);
    set32(c.r[6], c.r[2].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[6].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[5], c.r[2].w[0] + 25058u);
    c.r[2].d[0] = c.r[3].d[0] | 2ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367CB0u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0099(c, 133u, depth + 1u); else { c.pc = 0x00365870u; return; } if (c.pc != 0x00367CB0u) [[unlikely]] return; }
L_00367CB0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367CC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A70000u);
    set32(c.r[4], c.r[2].w[0] + 28384u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 5;
    { set32(c.r[5], c.r[2].w[0] + 25056u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x003658D0u | kUnwind; return; } goto L_003658D0; }
L_00367CE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[29].w[0] + 30u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367CF8u); set32(c.r[5], c.r[2].w[0] + 25056u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367CF8u) [[unlikely]] return; }
L_00367CF8:
    c.r[4].d[0] = ld16((c.r[29].w[0] + 30u));
    mmi::paddub(c.r[5], c.r[2], c.r[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 25964u)));
    set32(c.r[2], c.r[4].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D18u); set32(c.r[4], c.r[2].w[0] + 8142u);  if (depth < kMaxDepth) unit_0099(c, 134u, depth + 1u); else { c.pc = 0x00365880u; return; } if (c.pc != 0x00367D18u) [[unlikely]] return; }
L_00367D18:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367D30:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D48u); set32(c.r[5], 0u + 25601u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367D48u) [[unlikely]] return; }
L_00367D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D58u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367D58u) [[unlikely]] return; }
L_00367D58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D64u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367D64u) [[unlikely]] return; }
L_00367D64:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367D70u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367D70u) [[unlikely]] return; }
L_00367D70:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367D80:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DA0u); set32(c.r[5], 0u + 25602u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367DA0u) [[unlikely]] return; }
L_00367DA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DB0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367DB0u) [[unlikely]] return; }
L_00367DB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DC0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367DC0u) [[unlikely]] return; }
L_00367DC0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DCCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367DCCu) [[unlikely]] return; }
L_00367DCC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367DD8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367DD8u) [[unlikely]] return; }
L_00367DD8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E10u); set32(c.r[5], 0u + 25604u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367E10u) [[unlikely]] return; }
L_00367E10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E20u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367E20u) [[unlikely]] return; }
L_00367E20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E30u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367E30u) [[unlikely]] return; }
L_00367E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E3Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367E3Cu) [[unlikely]] return; }
L_00367E3C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E48u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367E48u) [[unlikely]] return; }
L_00367E48:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367E60:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E80u); set32(c.r[5], 0u + 25606u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367E80u) [[unlikely]] return; }
L_00367E80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367E90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367E90u) [[unlikely]] return; }
L_00367E90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367EA0u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367EA0u) [[unlikely]] return; }
L_00367EA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367EB0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367EB0u) [[unlikely]] return; }
L_00367EB0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367EBCu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367EBCu) [[unlikely]] return; }
L_00367EBC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367EC8u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367EC8u) [[unlikely]] return; }
L_00367EC8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367EE0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F00u); set32(c.r[5], 0u + 25607u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367F00u) [[unlikely]] return; }
L_00367F00:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F10u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367F10u) [[unlikely]] return; }
L_00367F10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F20u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0099(c, 182u, depth + 1u); else { c.pc = 0x00365EA0u; return; } if (c.pc != 0x00367F20u) [[unlikely]] return; }
L_00367F20:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F2Cu); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367F2Cu) [[unlikely]] return; }
L_00367F2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F38u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367F38u) [[unlikely]] return; }
L_00367F38:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00367F50:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F68u); set32(c.r[5], 0u + 25608u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367F68u) [[unlikely]] return; }
L_00367F68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F78u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367F78u) [[unlikely]] return; }
L_00367F78:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F84u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367F84u) [[unlikely]] return; }
L_00367F84:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367F90u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367F90u) [[unlikely]] return; }
L_00367F90:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00367FA0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FB8u); set32(c.r[5], 0u + 25614u);  if (depth < kMaxDepth) unit_0099(c, 177u, depth + 1u); else { c.pc = 0x00365DC0u; return; } if (c.pc != 0x00367FB8u) [[unlikely]] return; }
L_00367FB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FC8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 179u, depth + 1u); else { c.pc = 0x00365E40u; return; } if (c.pc != 0x00367FC8u) [[unlikely]] return; }
L_00367FC8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    set32(c.r[4], c.r[2].w[0] + 25840u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FD8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0099(c, 181u, depth + 1u); else { c.pc = 0x00365E70u; return; } if (c.pc != 0x00367FD8u) [[unlikely]] return; }
L_00367FD8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FE4u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 180u, depth + 1u); else { c.pc = 0x00365E50u; return; } if (c.pc != 0x00367FE4u) [[unlikely]] return; }
L_00367FE4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00AA0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00367FF0u); set32(c.r[4], c.r[2].w[0] + 25840u);  if (depth < kMaxDepth) unit_0099(c, 189u, depth + 1u); else { c.pc = 0x00365FD0u; return; } if (c.pc != 0x00367FF0u) [[unlikely]] return; }
L_00367FF0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
