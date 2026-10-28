#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0001[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0,
    0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0,
    72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 84, 0, 85, 0, 0, 0,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0,
    94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0,
    0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 188, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    211, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0,
    0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0,
    237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0,
    0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0,
    0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 293, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0,
    336, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    387, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0,
    0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436,
    0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0,
    0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0,
    0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0,
    0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0001(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00104000;
    case 2u: goto L_00104008;
    case 3u: goto L_00104010;
    case 4u: goto L_00104020;
    case 5u: goto L_00104030;
    case 6u: goto L_00104060;
    case 7u: goto L_00104078;
    case 8u: goto L_00104088;
    case 9u: goto L_001040C0;
    case 10u: goto L_00104100;
    case 11u: goto L_00104118;
    case 12u: goto L_00104140;
    case 13u: goto L_00104178;
    case 14u: goto L_00104190;
    case 15u: goto L_001041B8;
    case 16u: goto L_001041C8;
    case 17u: goto L_001041E0;
    case 18u: goto L_001041E8;
    case 19u: goto L_001041F0;
    case 20u: goto L_001041F8;
    case 21u: goto L_00104220;
    case 22u: goto L_00104250;
    case 23u: goto L_00104264;
    case 24u: goto L_001042A8;
    case 25u: goto L_001042B0;
    case 26u: goto L_001042C8;
    case 27u: goto L_001042D0;
    case 28u: goto L_001042E8;
    case 29u: goto L_001042F8;
    case 30u: goto L_00104308;
    case 31u: goto L_00104320;
    case 32u: goto L_00104330;
    case 33u: goto L_00104348;
    case 34u: goto L_00104358;
    case 35u: goto L_001043F0;
    case 36u: goto L_00104428;
    case 37u: goto L_0010443C;
    case 38u: goto L_00104470;
    case 39u: goto L_00104488;
    case 40u: goto L_00104498;
    case 41u: goto L_00104530;
    case 42u: goto L_00104568;
    case 43u: goto L_0010457C;
    case 44u: goto L_001045B0;
    case 45u: goto L_001045C8;
    case 46u: goto L_001045F8;
    case 47u: goto L_00104600;
    case 48u: goto L_00104618;
    case 49u: goto L_00104630;
    case 50u: goto L_00104660;
    case 51u: goto L_00104668;
    case 52u: goto L_00104680;
    case 53u: goto L_00104698;
    case 54u: goto L_001046C8;
    case 55u: goto L_001046D0;
    case 56u: goto L_001046E8;
    case 57u: goto L_00104700;
    case 58u: goto L_00104730;
    case 59u: goto L_00104738;
    case 60u: goto L_00104750;
    case 61u: goto L_00104768;
    case 62u: goto L_00104778;
    case 63u: goto L_00104788;
    case 64u: goto L_00104798;
    case 65u: goto L_001047A8;
    case 66u: goto L_001047B8;
    case 67u: goto L_001047C8;
    case 68u: goto L_001047D8;
    case 69u: goto L_001047E8;
    case 70u: goto L_001047F0;
    case 71u: goto L_001047F8;
    case 72u: goto L_00104800;
    case 73u: goto L_00104808;
    case 74u: goto L_00104818;
    case 75u: goto L_00104840;
    case 76u: goto L_00104848;
    case 77u: goto L_00104850;
    case 78u: goto L_00104898;
    case 79u: goto L_001048B0;
    case 80u: goto L_001048C8;
    case 81u: goto L_001048D0;
    case 82u: goto L_001048D8;
    case 83u: goto L_001048E4;
    case 84u: goto L_001048E8;
    case 85u: goto L_001048F0;
    case 86u: goto L_00104900;
    case 87u: goto L_00104928;
    case 88u: goto L_00104968;
    case 89u: goto L_00104970;
    case 90u: goto L_001049C8;
    case 91u: goto L_001049D8;
    case 92u: goto L_001049E8;
    case 93u: goto L_001049F8;
    case 94u: goto L_00104A00;
    case 95u: goto L_00104A30;
    case 96u: goto L_00104A74;
    case 97u: goto L_00104A88;
    case 98u: goto L_00104AA8;
    case 99u: goto L_00104AB0;
    case 100u: goto L_00104ABC;
    case 101u: goto L_00104AD8;
    case 102u: goto L_00104AEC;
    case 103u: goto L_00104B00;
    case 104u: goto L_00104B58;
    case 105u: goto L_00104B70;
    case 106u: goto L_00104BD8;
    case 107u: goto L_00104BF0;
    case 108u: goto L_00104C04;
    case 109u: goto L_00104C18;
    case 110u: goto L_00104C3C;
    case 111u: goto L_00104C74;
    case 112u: goto L_00104C88;
    case 113u: goto L_00104CC0;
    case 114u: goto L_00104CD0;
    case 115u: goto L_00104CE8;
    case 116u: goto L_00104CF8;
    case 117u: goto L_00104D1C;
    case 118u: goto L_00104D28;
    case 119u: goto L_00104D40;
    case 120u: goto L_00104D50;
    case 121u: goto L_00104D78;
    case 122u: goto L_00104D88;
    case 123u: goto L_00104DB0;
    case 124u: goto L_00104DC0;
    case 125u: goto L_00104DE4;
    case 126u: goto L_00104DF0;
    case 127u: goto L_00104E08;
    case 128u: goto L_00104E18;
    case 129u: goto L_00104E30;
    case 130u: goto L_00104E3C;
    case 131u: goto L_00104E40;
    case 132u: goto L_00104E58;
    case 133u: goto L_00104E68;
    case 134u: goto L_00104E90;
    case 135u: goto L_00104ED0;
    case 136u: goto L_00104F10;
    case 137u: goto L_00104F7C;
    case 138u: goto L_00104F94;
    case 139u: goto L_00104FAC;
    case 140u: goto L_00104FE0;
    case 141u: goto L_00105000;
    case 142u: goto L_00105030;
    case 143u: goto L_00105048;
    case 144u: goto L_00105080;
    case 145u: goto L_00105088;
    case 146u: goto L_001050A8;
    case 147u: goto L_001050F4;
    case 148u: goto L_00105120;
    case 149u: goto L_0010518C;
    case 150u: goto L_0010519C;
    case 151u: goto L_001051B0;
    case 152u: goto L_001051BC;
    case 153u: goto L_001051D0;
    case 154u: goto L_001051F8;
    case 155u: goto L_00105230;
    case 156u: goto L_00105240;
    case 157u: goto L_00105278;
    case 158u: goto L_001052C8;
    case 159u: goto L_001052E4;
    case 160u: goto L_001052FC;
    case 161u: goto L_00105368;
    case 162u: goto L_00105388;
    case 163u: goto L_00105390;
    case 164u: goto L_001053C0;
    case 165u: goto L_00105400;
    case 166u: goto L_00105470;
    case 167u: goto L_00105488;
    case 168u: goto L_001054A8;
    case 169u: goto L_00105538;
    case 170u: goto L_00105560;
    case 171u: goto L_00105570;
    case 172u: goto L_00105584;
    case 173u: goto L_00105594;
    case 174u: goto L_001055A8;
    case 175u: goto L_001055B8;
    case 176u: goto L_001055CC;
    case 177u: goto L_001055EC;
    case 178u: goto L_00105600;
    case 179u: goto L_00105610;
    case 180u: goto L_00105624;
    case 181u: goto L_0010563C;
    case 182u: goto L_00105644;
    case 183u: goto L_0010564C;
    case 184u: goto L_00105658;
    case 185u: goto L_001056A0;
    case 186u: goto L_001056D0;
    case 187u: goto L_001056E8;
    case 188u: goto L_001056EC;
    case 189u: goto L_001056F0;
    case 190u: goto L_00105724;
    case 191u: goto L_00105780;
    case 192u: goto L_001057A8;
    case 193u: goto L_001057AC;
    case 194u: goto L_001057B4;
    case 195u: goto L_001057BC;
    case 196u: goto L_00105810;
    case 197u: goto L_00105850;
    case 198u: goto L_00105864;
    case 199u: goto L_00105878;
    case 200u: goto L_001058C8;
    case 201u: goto L_00105910;
    case 202u: goto L_00105924;
    case 203u: goto L_00105938;
    case 204u: goto L_00105998;
    case 205u: goto L_001059A8;
    case 206u: goto L_001059B0;
    case 207u: goto L_001059CC;
    case 208u: goto L_00105A00;
    case 209u: goto L_00105A14;
    case 210u: goto L_00105A28;
    case 211u: goto L_00105A80;
    case 212u: goto L_00105A88;
    case 213u: goto L_00105AA4;
    case 214u: goto L_00105AD0;
    case 215u: goto L_00105AE4;
    case 216u: goto L_00105AF8;
    case 217u: goto L_00105B24;
    case 218u: goto L_00105B34;
    case 219u: goto L_00105B3C;
    case 220u: goto L_00105B44;
    case 221u: goto L_00105B6C;
    case 222u: goto L_00105B78;
    case 223u: goto L_00105B84;
    case 224u: goto L_00105B90;
    case 225u: goto L_00105B9C;
    case 226u: goto L_00105BA8;
    case 227u: goto L_00105BC0;
    case 228u: goto L_00105BD4;
    case 229u: goto L_00105BE8;
    case 230u: goto L_00105C08;
    case 231u: goto L_00105C20;
    case 232u: goto L_00105C30;
    case 233u: goto L_00105C68;
    case 234u: goto L_00105C94;
    case 235u: goto L_00105CA0;
    case 236u: goto L_00105CE8;
    case 237u: goto L_00105D00;
    case 238u: goto L_00105D20;
    case 239u: goto L_00105D30;
    case 240u: goto L_00105D48;
    case 241u: goto L_00105D68;
    case 242u: goto L_00105D78;
    case 243u: goto L_00105D98;
    case 244u: goto L_00105E30;
    case 245u: goto L_00105E60;
    case 246u: goto L_00105EAC;
    case 247u: goto L_00105EB4;
    case 248u: goto L_00105EF4;
    case 249u: goto L_00105F08;
    case 250u: goto L_00105F18;
    case 251u: goto L_00105F24;
    case 252u: goto L_00105F70;
    case 253u: goto L_00105F78;
    case 254u: goto L_00105F8C;
    case 255u: goto L_00105F9C;
    case 256u: goto L_00105FAC;
    case 257u: goto L_00105FF8;
    case 258u: goto L_00106008;
    case 259u: goto L_00106018;
    case 260u: goto L_00106030;
    case 261u: goto L_00106048;
    case 262u: goto L_00106060;
    case 263u: goto L_00106090;
    case 264u: goto L_001060B8;
    case 265u: goto L_00106140;
    case 266u: goto L_001061A8;
    case 267u: goto L_001061BC;
    case 268u: goto L_001061CC;
    case 269u: goto L_001061F0;
    case 270u: goto L_00106220;
    case 271u: goto L_00106230;
    case 272u: goto L_00106260;
    case 273u: goto L_00106270;
    case 274u: goto L_00106284;
    case 275u: goto L_001062D0;
    case 276u: goto L_001062F4;
    case 277u: goto L_00106340;
    case 278u: goto L_0010637C;
    case 279u: goto L_00106398;
    case 280u: goto L_001063CC;
    case 281u: goto L_001063EC;
    case 282u: goto L_00106448;
    case 283u: goto L_00106460;
    case 284u: goto L_00106490;
    case 285u: goto L_00106498;
    case 286u: goto L_001064A0;
    case 287u: goto L_00106514;
    case 288u: goto L_0010652C;
    case 289u: goto L_00106544;
    case 290u: goto L_0010655C;
    case 291u: goto L_00106564;
    case 292u: goto L_00106570;
    case 293u: goto L_0010659C;
    case 294u: goto L_001065A0;
    case 295u: goto L_001065A8;
    case 296u: goto L_001065E8;
    case 297u: goto L_001065F8;
    case 298u: goto L_00106610;
    case 299u: goto L_00106628;
    case 300u: goto L_00106640;
    case 301u: goto L_00106684;
    case 302u: goto L_001066A0;
    case 303u: goto L_001066B8;
    case 304u: goto L_001066D8;
    case 305u: goto L_00106708;
    case 306u: goto L_0010672C;
    case 307u: goto L_00106748;
    case 308u: goto L_001067A8;
    case 309u: goto L_001067DC;
    case 310u: goto L_001067E4;
    case 311u: goto L_00106800;
    case 312u: goto L_00106818;
    case 313u: goto L_00106860;
    case 314u: goto L_001068A0;
    case 315u: goto L_001068E8;
    case 316u: goto L_001068F8;
    case 317u: goto L_00106920;
    case 318u: goto L_00106930;
    case 319u: goto L_00106938;
    case 320u: goto L_00106948;
    case 321u: goto L_00106950;
    case 322u: goto L_00106980;
    case 323u: goto L_00106990;
    case 324u: goto L_001069B8;
    case 325u: goto L_001069C8;
    case 326u: goto L_001069D8;
    case 327u: goto L_00106A08;
    case 328u: goto L_00106A2C;
    case 329u: goto L_00106A58;
    case 330u: goto L_00106AB8;
    case 331u: goto L_00106AF0;
    case 332u: goto L_00106B30;
    case 333u: goto L_00106B40;
    case 334u: goto L_00106B68;
    case 335u: goto L_00106B78;
    case 336u: goto L_00106B80;
    case 337u: goto L_00106B90;
    case 338u: goto L_00106B98;
    case 339u: goto L_00106BC8;
    case 340u: goto L_00106BD8;
    case 341u: goto L_00106BF8;
    case 342u: goto L_00106C88;
    case 343u: goto L_00106CE0;
    case 344u: goto L_00106D44;
    case 345u: goto L_00106D5C;
    case 346u: goto L_00106D6C;
    case 347u: goto L_00106DB4;
    case 348u: goto L_00106DD4;
    case 349u: goto L_00106DE4;
    case 350u: goto L_00106E10;
    case 351u: goto L_00106E20;
    case 352u: goto L_00106E28;
    case 353u: goto L_00106E38;
    case 354u: goto L_00106E40;
    case 355u: goto L_00106E78;
    case 356u: goto L_00106EB8;
    case 357u: goto L_00106ED4;
    case 358u: goto L_00106F18;
    case 359u: goto L_00106F50;
    case 360u: goto L_00106F94;
    case 361u: goto L_00106FD8;
    case 362u: goto L_00107020;
    case 363u: goto L_00107040;
    case 364u: goto L_00107070;
    case 365u: goto L_00107098;
    case 366u: goto L_001070B8;
    case 367u: goto L_001070D0;
    case 368u: goto L_00107108;
    case 369u: goto L_00107130;
    case 370u: goto L_00107148;
    case 371u: goto L_00107160;
    case 372u: goto L_00107188;
    case 373u: goto L_001071A0;
    case 374u: goto L_001071D8;
    case 375u: goto L_001071F8;
    case 376u: goto L_00107208;
    case 377u: goto L_00107210;
    case 378u: goto L_0010722C;
    case 379u: goto L_00107240;
    case 380u: goto L_0010724C;
    case 381u: goto L_00107270;
    case 382u: goto L_00107290;
    case 383u: goto L_00107308;
    case 384u: goto L_00107310;
    case 385u: goto L_00107320;
    case 386u: goto L_00107368;
    case 387u: goto L_00107380;
    case 388u: goto L_00107388;
    case 389u: goto L_00107390;
    case 390u: goto L_001073A0;
    case 391u: goto L_001073A8;
    case 392u: goto L_001073E0;
    case 393u: goto L_001073EC;
    case 394u: goto L_00107408;
    case 395u: goto L_00107420;
    case 396u: goto L_00107428;
    case 397u: goto L_00107448;
    case 398u: goto L_0010745C;
    case 399u: goto L_00107478;
    case 400u: goto L_00107490;
    case 401u: goto L_001074AC;
    case 402u: goto L_001074B4;
    case 403u: goto L_001074C8;
    case 404u: goto L_001074E4;
    case 405u: goto L_00107500;
    case 406u: goto L_0010758C;
    case 407u: goto L_001075B8;
    case 408u: goto L_001075E8;
    case 409u: goto L_00107628;
    case 410u: goto L_00107650;
    case 411u: goto L_0010768C;
    case 412u: goto L_001076E8;
    case 413u: goto L_00107730;
    case 414u: goto L_001077E0;
    case 415u: goto L_00107840;
    case 416u: goto L_0010787C;
    case 417u: goto L_001078B4;
    case 418u: goto L_001078C0;
    case 419u: goto L_001078F8;
    case 420u: goto L_00107910;
    case 421u: goto L_00107920;
    case 422u: goto L_0010792C;
    case 423u: goto L_00107940;
    case 424u: goto L_00107950;
    case 425u: goto L_00107984;
    case 426u: goto L_0010799C;
    case 427u: goto L_001079A4;
    case 428u: goto L_001079B4;
    case 429u: goto L_001079BC;
    case 430u: goto L_001079E0;
    case 431u: goto L_001079F8;
    case 432u: goto L_00107A10;
    case 433u: goto L_00107A3C;
    case 434u: goto L_00107A48;
    case 435u: goto L_00107A64;
    case 436u: goto L_00107A7C;
    case 437u: goto L_00107A84;
    case 438u: goto L_00107A90;
    case 439u: goto L_00107A98;
    case 440u: goto L_00107ACC;
    case 441u: goto L_00107AE8;
    case 442u: goto L_00107AF0;
    case 443u: goto L_00107B10;
    case 444u: goto L_00107B48;
    case 445u: goto L_00107B78;
    case 446u: goto L_00107BD8;
    case 447u: goto L_00107C14;
    case 448u: goto L_00107C2C;
    case 449u: goto L_00107C40;
    case 450u: goto L_00107C68;
    case 451u: goto L_00107C8C;
    case 452u: goto L_00107CA0;
    case 453u: goto L_00107CFC;
    case 454u: goto L_00107D14;
    case 455u: goto L_00107D1C;
    case 456u: goto L_00107D2C;
    case 457u: goto L_00107D40;
    case 458u: goto L_00107D54;
    case 459u: goto L_00107D88;
    case 460u: goto L_00107E10;
    case 461u: goto L_00107E4C;
    case 462u: goto L_00107E5C;
    case 463u: goto L_00107E64;
    case 464u: goto L_00107E78;
    case 465u: goto L_00107E88;
    case 466u: goto L_00107E98;
    case 467u: goto L_00107EA0;
    case 468u: goto L_00107EB4;
    case 469u: goto L_00107EC0;
    case 470u: goto L_00107ED4;
    case 471u: goto L_00107EF0;
    case 472u: goto L_00107F28;
    case 473u: goto L_00107F50;
    case 474u: goto L_00107F5C;
    case 475u: goto L_00107F74;
    case 476u: goto L_00107F98;
    case 477u: goto L_00107FD0;
    default: bad_entry(c, 0x00104000u); return;
    }
L_00104000:
    set32(c.r[3], 0u + 127u);
    c.budget -= 1;
    c.pc = 0x00104008u; syscall(c, 0x00104004u); if (c.pc != 0x00104008u) return;
    c.budget -= 1;
L_00104008:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104010:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0] + 20016u), 0u);  c.pc = t; return; }
L_00104020:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00104030:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 4096u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104030u | kUnwind; return; } goto L_00104030; } }
    set32(c.r[2], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[1].w[0] - 4096u), c.r[2].w[0]);  c.pc = t; return; }
L_00104060:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104078u); c.r[5].d[0] = c.r[29].d[0] | 8ull;  if (depth < kMaxDepth) unit_0000(c, 555u, depth + 1u); else { c.pc = 0x00103F10u; return; } if (c.pc != 0x00104078u) [[unlikely]] return; }
L_00104078:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    set32(c.r[3], 0u + 4u);
    c.r[2].d[0] = c.r[2].d[0] | 61440ull;
    st32((c.r[2].w[0]), c.r[3].w[0]);
    c.budget -= 4;
L_00104088:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10010000u);
    set32(c.r[2], ld32((c.r[2].w[0] - 4096u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_001040A8; } }
    set32(c.r[2], ld32((c.r[29].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104088u | kUnwind; return; } goto L_00104088; } }
L_001040A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 4096u), c.r[2].w[0]);
    c.r[2].d[0] = ld64((c.r[29].w[0] + 8u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001040C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[4], c.r[4].w[0] - 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[4].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 10;
    { const bool t = c.r[4].d[0] == 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00104120; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20016u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104110; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104100u);  if (depth < kMaxDepth) unit_0001(c, 158u, depth + 1u); else { c.pc = 0x001052C8u; return; } if (c.pc != 0x00104100u) [[unlikely]] return; }
L_00104100:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00104120; } }
    st32((c.r[16].w[0] + 20016u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00104110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104118u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 146u, depth + 1u); else { c.pc = 0x001050A8u; return; } if (c.pc != 0x00104118u) [[unlikely]] return; }
L_00104118:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104128; } }
L_00104120:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00104128:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104140:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] != 0ull; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_00104198; } }
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[16].w[0] + 20016u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104188; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104178u);  if (depth < kMaxDepth) unit_0001(c, 158u, depth + 1u); else { c.pc = 0x001052C8u; return; } if (c.pc != 0x00104178u) [[unlikely]] return; }
L_00104178:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00104198; } }
    st32((c.r[16].w[0] + 20016u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_00104188:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104190u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 154u, depth + 1u); else { c.pc = 0x001051F8u; return; } if (c.pc != 0x00104190u) [[unlikely]] return; }
L_00104190:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001041A0; } }
L_00104198:
    set32(c.r[2], 0u - 1u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_001041A0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001041B8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001041C8u);  if (depth < kMaxDepth) unit_0005(c, 122u, depth + 1u); else { c.pc = 0x00115130u; return; } if (c.pc != 0x001041C8u) [[unlikely]] return; }
L_001041C8:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001041E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001041E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001041F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u - 1u);  c.pc = t; return; }
L_001041F8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[17], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[17].d[0] = c.r[17].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[17].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00104244; } }
L_00104220:
    set_interrupts(c, false);
    set32(c.r[2], mfc0(c, 12u, 0u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104220u | kUnwind; return; } goto L_00104220; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 20020u)));  if (t) { goto L_00104248; } }
L_00104244:
    set32(c.r[2], ld32((c.r[18].w[0] + 20020u)));
    c.budget -= 1;
L_00104248:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104250u); set32(c.r[16], c.r[2].w[0] + c.r[4].w[0]);  if (depth < kMaxDepth) unit_0000(c, 440u, depth + 1u); else { c.pc = 0x00103B80u; return; } if (c.pc != 0x00104250u) [[unlikely]] return; }
L_00104250:
    c.r[2].d[0] = c.r[2].d[0] < c.r[16].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], ld32((c.r[18].w[0] + 20020u)));  if (t) { goto L_00104280; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104264u);  if (depth < kMaxDepth) unit_0005(c, 122u, depth + 1u); else { c.pc = 0x00115130u; return; } if (c.pc != 0x00104264u) [[unlikely]] return; }
L_00104264:
    set32(c.r[3], 0u + 12u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[2].w[0]), c.r[3].w[0]);  if (t) { goto L_00104274; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_00104274:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_0010428C; } }
L_00104280:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; st32((c.r[18].w[0] + 20020u), c.r[16].w[0]);  if (t) { goto L_0010428C; } }
    set_interrupts(c, true);
    c.budget -= 1;
L_0010428C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001042A8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001042B0:
    set32(c.r[2], 0u + 8192u);
    st64((c.r[5].w[0] + 72u), 0ull);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001042C8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_001042D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001042E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001042E8u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 320u, depth + 1u); else { c.pc = 0x001037C0u; return; } if (c.pc != 0x001042E8u) [[unlikely]] return; }
L_001042E8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001042F8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104308u);  if (depth < kMaxDepth) unit_0005(c, 122u, depth + 1u); else { c.pc = 0x00115130u; return; } if (c.pc != 0x00104308u) [[unlikely]] return; }
L_00104308:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104320:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104330u);  if (depth < kMaxDepth) unit_0005(c, 122u, depth + 1u); else { c.pc = 0x00115130u; return; } if (c.pc != 0x00104330u) [[unlikely]] return; }
L_00104330:
    set32(c.r[3], 0u + 5u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0]), c.r[3].w[0]);
    set32(c.r[2], 0u - 1u);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104348:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00104358:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104394; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00104394; } }
    c.budget -= 3;
L_00104394:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001043D0; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001043D0; } }
    c.budget -= 3;
L_001043D0:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104358u | kUnwind; return; } goto L_00104358; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001043F0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104428; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104428u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00104428u) [[unlikely]] return; }
L_00104428:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010443Cu); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0001(c, 33u, depth + 1u); else { c.pc = 0x00104348u; return; } if (c.pc != 0x0010443Cu) [[unlikely]] return; }
L_0010443C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104458; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00104458:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104470:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104348u | kUnwind; return; } goto L_00104348; }
L_00104488:
    c.r[7].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[6].d[0] = 0ull + 0ull;
    c.r[7].d[0] = c.r[7].d[0] | 61440ull;
    c.budget -= 4;
L_00104498:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001044D4; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001044D4; } }
    c.budget -= 3;
L_001044D4:
    set32(c.r[2], mfc0(c, 28u, 0u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[7].d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = c.r[5].d[0] < c.r[2].d[0] ? 1ull : 0ull;
    c.r[2].d[0] = c.r[2].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00104510; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00104510; } }
    c.budget -= 3;
L_00104510:
    set32(c.r[6], c.r[6].w[0] + 64u);
    c.r[2].d[0] = c.r[6].sd[0] < 4096ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104498u | kUnwind; return; } goto L_00104498; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104530:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 12;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104568; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104568u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00104568u) [[unlikely]] return; }
L_00104568:
    c.r[4].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[4].d[0] = c.r[4].d[0] | 65472ull;
    c.r[5].d[0] = c.r[17].d[0] & c.r[4].d[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010457Cu); c.r[4].d[0] = c.r[18].d[0] & c.r[4].d[0];  if (depth < kMaxDepth) unit_0001(c, 39u, depth + 1u); else { c.pc = 0x00104488u; return; } if (c.pc != 0x0010457Cu) [[unlikely]] return; }
L_0010457C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104598; } }
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00104598:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001045B0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { c.r[4].d[0] = c.r[4].d[0] & c.r[2].d[0];  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104488u | kUnwind; return; } goto L_00104488; }
L_001045C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001045F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001045F8u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001045F8u) [[unlikely]] return; }
L_001045F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104600u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 358u, depth + 1u); else { c.pc = 0x001038F0u; return; } if (c.pc != 0x00104600u) [[unlikely]] return; }
L_00104600:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_0010461C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104618u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00104618u) [[unlikely]] return; }
L_00104618:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_0010461C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104630:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104660; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104660u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00104660u) [[unlikely]] return; }
L_00104660:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104668u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 356u, depth + 1u); else { c.pc = 0x001038E0u; return; } if (c.pc != 0x00104668u) [[unlikely]] return; }
L_00104668:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104680u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00104680u) [[unlikely]] return; }
L_00104680:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00104684:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104698:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_001046C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001046C8u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001046C8u) [[unlikely]] return; }
L_001046C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001046D0u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 362u, depth + 1u); else { c.pc = 0x00103910u; return; } if (c.pc != 0x001046D0u) [[unlikely]] return; }
L_001046D0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001046EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001046E8u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x001046E8u) [[unlikely]] return; }
L_001046E8:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_001046EC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104700:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[16], mfc0(c, 12u, 0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[16].d[0] = c.r[16].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00104730; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104730u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00104730u) [[unlikely]] return; }
L_00104730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104738u); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 360u, depth + 1u); else { c.pc = 0x00103900u; return; } if (c.pc != 0x00104738u) [[unlikely]] return; }
L_00104738:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00104754; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104750u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00104750u) [[unlikely]] return; }
L_00104750:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00104754:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00104768:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104778u);  if (depth < kMaxDepth) unit_0000(c, 368u, depth + 1u); else { c.pc = 0x00103940u; return; } if (c.pc != 0x00104778u) [[unlikely]] return; }
L_00104778:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00104788:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104798u);  if (depth < kMaxDepth) unit_0000(c, 370u, depth + 1u); else { c.pc = 0x00103950u; return; } if (c.pc != 0x00104798u) [[unlikely]] return; }
L_00104798:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001047A8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001047B8u);  if (depth < kMaxDepth) unit_0000(c, 372u, depth + 1u); else { c.pc = 0x00103960u; return; } if (c.pc != 0x001047B8u) [[unlikely]] return; }
L_001047B8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001047C8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001047D8u);  if (depth < kMaxDepth) unit_0000(c, 374u, depth + 1u); else { c.pc = 0x00103970u; return; } if (c.pc != 0x001047D8u) [[unlikely]] return; }
L_001047D8:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001047E8:
    set32(c.r[3], 0u + 116u);
    c.budget -= 1;
    c.pc = 0x001047F0u; syscall(c, 0x001047ECu); if (c.pc != 0x001047F0u) return;
    c.budget -= 1;
L_001047F0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_001047F8:
    set32(c.r[3], 0u + 90u);
    c.budget -= 1;
    c.pc = 0x00104800u; syscall(c, 0x001047FCu); if (c.pc != 0x00104800u) return;
    c.budget -= 1;
L_00104800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104808:
    set32(c.r[6], c.r[6].w[0] >> 2);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == 0ull; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00104838; } }
    c.budget -= 1;
L_00104818:
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[7], c.r[7].w[0] + 1u);
    set32(c.r[5], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[7].d[0] < c.r[6].d[0] ? 1ull : 0ull;
    st32((c.r[4].w[0]), c.r[3].w[0]);
    set32(c.r[4], c.r[4].w[0] + 4u);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104818u | kUnwind; return; } goto L_00104818; } }
L_00104838:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00104840:
    set32(c.r[3], 0u + 91u);
    c.budget -= 1;
    c.pc = 0x00104848u; syscall(c, 0x00104844u); if (c.pc != 0x00104848u) return;
    c.budget -= 1;
L_00104848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104850:
    set32(c.r[29], c.r[29].w[0] - 64u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 6160ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00104910; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[18], 0u + 2u);
    set32(c.r[16], c.r[2].w[0] + 21920u);
    set32(c.r[4], ld32((c.r[2].w[0] + 21920u)));
    set32(c.r[5], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104898u); set32(c.r[17], c.r[16].w[0] + 16u);  if (depth < kMaxDepth) unit_0001(c, 69u, depth + 1u); else { c.pc = 0x001047E8u; return; } if (c.pc != 0x00104898u) [[unlikely]] return; }
L_00104898:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80070000u);
    set32(c.r[5], c.r[5].w[0] + 20024u);
    c.r[4].d[0] = c.r[4].d[0] | 24576ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048B0u); set32(c.r[6], 0u + 1856u);  if (depth < kMaxDepth) unit_0001(c, 71u, depth + 1u); else { c.pc = 0x001047F8u; return; } if (c.pc != 0x001048B0u) [[unlikely]] return; }
L_001048B0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00080000u);
    set32(c.r[5], c.r[5].w[0] + 21880u);
    c.r[4].d[0] = c.r[4].d[0] | 8192ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048C8u); set32(c.r[6], 0u + 40u);  if (depth < kMaxDepth) unit_0001(c, 71u, depth + 1u); else { c.pc = 0x001047F8u; return; } if (c.pc != 0x001048C8u) [[unlikely]] return; }
L_001048C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048D0u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x001048D0u) [[unlikely]] return; }
L_001048D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048D8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x001048D8u) [[unlikely]] return; }
L_001048D8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048E4u); set32(c.r[5], ld32((c.r[16].w[0] + 12u)));  if (depth < kMaxDepth) unit_0001(c, 69u, depth + 1u); else { c.pc = 0x001047E8u; return; } if (c.pc != 0x001048E4u) [[unlikely]] return; }
L_001048E4:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 1;
L_001048E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001048F0u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0001(c, 75u, depth + 1u); else { c.pc = 0x00104840u; return; } if (c.pc != 0x001048F0u) [[unlikely]] return; }
L_001048F0:
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104900u); set32(c.r[17], c.r[17].w[0] + 8u);  if (depth < kMaxDepth) unit_0001(c, 69u, depth + 1u); else { c.pc = 0x001047E8u; return; } if (c.pc != 0x00104900u) [[unlikely]] return; }
L_00104900:
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[4], ld32((c.r[17].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001048E8u | kUnwind; return; } goto L_001048E8; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 1;
L_00104910:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00104928:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00560000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    set32(c.r[20], 0u + 1u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], 0u + 2u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[18], c.r[17].w[0] + 8u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[16], c.r[17].w[0] + 9u);
    c.budget -= 16;
L_00104968:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104970u); set32(c.r[4], ld32((c.r[22].w[0] + 2384u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00104970u) [[unlikely]] return; }
L_00104970:
    set32(c.r[3], ld32((c.r[17].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 511ull;
    set32(c.r[4], c.r[3].w[0] + 1u);
    set32(c.r[3], c.r[3].w[0] << 1);
    st32((c.r[17].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[18].w[0] + c.r[3].w[0]);
    set32(c.r[6], c.r[16].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == c.r[20].d[0]; c.r[5].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;  if (t) { goto L_001049D0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull; set32(c.r[4], c.r[21].w[0] + 2544u);  if (t) { goto L_001049B0; } }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[6].d[0] + 0ull;  if (t) { goto L_001049C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001049F0; } }
L_001049B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == c.r[19].d[0]; set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);  if (t) { goto L_001049E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001049F0; } }
L_001049C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049C8u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 418u, depth + 1u); else { c.pc = 0x00103AD0u; return; } if (c.pc != 0x001049C8u) [[unlikely]] return; }
L_001049C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104968u | kUnwind; return; } goto L_00104968; } }
L_001049D0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049D8u); c.r[4].d[0] = ld8((c.r[6].w[0]));  if (depth < kMaxDepth) unit_0000(c, 402u, depth + 1u); else { c.pc = 0x00103A50u; return; } if (c.pc != 0x001049D8u) [[unlikely]] return; }
L_001049D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104968u | kUnwind; return; } goto L_00104968; } }
L_001049E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049E8u); c.r[4].d[0] = ld8((c.r[3].w[0]));  if (depth < kMaxDepth) unit_0000(c, 426u, depth + 1u); else { c.pc = 0x00103B10u; return; } if (c.pc != 0x001049E8u) [[unlikely]] return; }
L_001049E8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104968u | kUnwind; return; } goto L_00104968; } }
L_001049F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001049F8u);  if (depth < kMaxDepth) unit_0001(c, 233u, depth + 1u); else { c.pc = 0x00105C68u; return; } if (c.pc != 0x001049F8u) [[unlikely]] return; }
L_001049F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00104968u | kUnwind; return; } goto L_00104968; } }
L_00104A00:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 80u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 21984u)));
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0; st64((c.r[29].w[0] + 96u), c.r[17].d[0]);  if (t) { goto L_00104A88; } }
    set32(c.r[2], 0u + 255u);
    st32((c.r[29].w[0] + 56u), 0u);
    st32((c.r[29].w[0] + 52u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A30u); set32(c.r[4], c.r[29].w[0] + 48u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00104A30u) [[unlikely]] return; }
L_00104A30:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[17].w[0] + 2384u), c.r[2].w[0]);  if (t) { goto L_00104A88; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 18728u);
    set32(c.r[3], c.r[3].w[0] + 1360u);
    set32(c.r[5], c.r[5].w[0] + 25456u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[3].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 12u), c.r[6].w[0]);
    st32((c.r[29].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A74u); st32((c.r[29].w[0] + 20u), 0u);  if (depth < kMaxDepth) unit_0000(c, 380u, depth + 1u); else { c.pc = 0x001039A0u; return; } if (c.pc != 0x00104A74u) [[unlikely]] return; }
L_00104A74:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[4].sd[0] >= 0; st32((c.r[16].w[0] + 21984u), c.r[4].w[0]);  if (t) { goto L_00104A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104A88u); set32(c.r[4], ld32((c.r[17].w[0] + 2384u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00104A88u) [[unlikely]] return; }
L_00104A88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00104AC0; } }
L_00104A90:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] + 2392u);
    st32((c.r[2].w[0] + 2392u), 0u);
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AA8u); st32((c.r[3].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0000(c, 384u, depth + 1u); else { c.pc = 0x001039C0u; return; } if (c.pc != 0x00104AA8u) [[unlikely]] return; }
L_00104AA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104AB0u);  if (depth < kMaxDepth) unit_0000(c, 410u, depth + 1u); else { c.pc = 0x00103A90u; return; } if (c.pc != 0x00104AB0u) [[unlikely]] return; }
L_00104AB0:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104ABCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0000(c, 398u, depth + 1u); else { c.pc = 0x00103A30u; return; } if (c.pc != 0x00104ABCu) [[unlikely]] return; }
L_00104ABC:
    set32(c.r[2], ld32((c.r[16].w[0] + 21984u)));
    c.budget -= 1;
L_00104AC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 80u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00104AD8:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00104AECu; syscall(c, 0x00104AE8u); if (c.pc != 0x00104AECu) return;
    c.budget -= 1;
L_00104AEC:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00104B08; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104B00u);  if (depth < kMaxDepth) unit_0000(c, 420u, depth + 1u); else { c.pc = 0x00103AE0u; return; } if (c.pc != 0x00104B00u) [[unlikely]] return; }
L_00104B00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00104B60; } }
L_00104B08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00104B1C; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 21984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00104B24; } }
L_00104B1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00104B5C; } }
L_00104B24:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 2392u);
    set32(c.r[4], ld32((c.r[5].w[0] + 2384u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104B58u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x00104B58u) [[unlikely]] return; }
L_00104B58:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00104B5C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00104B60:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104B70:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(128ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0] + 16u), c.r[31].d[0]);  if (t) { goto L_00104B98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21984u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00104BA0; } }
L_00104B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00104BDC; } }
L_00104BA0:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 2392u);
    set32(c.r[4], ld32((c.r[5].w[0] + 2384u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104BD8u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x00104BD8u) [[unlikely]] return; }
L_00104BD8:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00104BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104BF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], 0u - 47u);
    c.budget -= 4;
    c.pc = 0x00104C04u; syscall(c, 0x00104C00u); if (c.pc != 0x00104C04u) return;
    c.budget -= 1;
L_00104C04:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == c.r[4].d[0]; c.r[2].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(256ll) ? 1ull : 0ull;  if (t) { goto L_00104C20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C18u);  if (depth < kMaxDepth) unit_0000(c, 428u, depth + 1u); else { c.pc = 0x00103B20u; return; } if (c.pc != 0x00104C18u) [[unlikely]] return; }
L_00104C18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));  if (t) { goto L_00104C7C; } }
L_00104C20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00104C34; } }
    set32(c.r[3], ld32((c.r[2].w[0] + 21984u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00104C3C; } }
L_00104C34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00104C78; } }
L_00104C3C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 2392u);
    set32(c.r[4], ld32((c.r[5].w[0] + 2384u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 4u)));
    set32(c.r[7], 0u + 2u);
    c.r[2].d[0] = c.r[2].d[0] & 511ull;
    set32(c.r[6], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[2].w[0]);
    st8((c.r[5].w[0] + 8u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[3].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104C74u); st8((c.r[3].w[0] + 9u), static_cast<std::uint8_t>(c.r[16].w[0]));  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x00104C74u) [[unlikely]] return; }
L_00104C74:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_00104C78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 1;
L_00104C7C:
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104C88:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 3424u);
    c.r[4].d[0] = c.r[4].d[0] & 65535ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    set32(c.r[4], 0u + 1u);
    st32((c.r[29].w[0] + 8u), c.r[6].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104CC0u); st32((c.r[29].w[0] + 12u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104CC0u) [[unlikely]] return; }
L_00104CC0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104CD0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104CE8u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104CE8u) [[unlikely]] return; }
L_00104CE8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104CF8:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D1Cu); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104D1Cu) [[unlikely]] return; }
L_00104D1C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104D28:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D40u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104D40u) [[unlikely]] return; }
L_00104D40:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104D50:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 5u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104D78u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104D78u) [[unlikely]] return; }
L_00104D78:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104D88:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.r[6].d[0] = c.r[6].d[0] & 65535ull;
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[4], 0u - 6u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DB0u); st32((c.r[29].w[0] + 8u), c.r[6].w[0]);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104DB0u) [[unlikely]] return; }
L_00104DB0:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104DC0:
    set32(c.r[5], c.r[5].w[0] << 24);
    set32(c.r[29], c.r[29].w[0] - 32u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 24));
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[5].w[0]);
    set32(c.r[4], 0u - 7u);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104DE4u); c.r[5].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104DE4u) [[unlikely]] return; }
L_00104DE4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104DF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E08u); set32(c.r[4], 0u - 8u);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104E08u) [[unlikely]] return; }
L_00104E08:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104E18:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E30u); set32(c.r[4], 0u - 9u);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104E30u) [[unlikely]] return; }
L_00104E30:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104E3C:
    c.budget -= 1;
L_00104E40:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st32((c.r[29].w[0]), c.r[4].w[0]);
    c.r[5].d[0] = c.r[29].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104E58u); set32(c.r[4], 0u + 16u);  if (depth < kMaxDepth) unit_0000(c, 579u, depth + 1u); else { c.pc = 0x00103FD0u; return; } if (c.pc != 0x00104E58u) [[unlikely]] return; }
L_00104E58:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00104E68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[2].w[0] + 3520u);
    st32((c.r[2].w[0] + 3520u), c.r[4].w[0]);
    set32(c.r[4], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    st32((c.r[3].w[0] + 8u), c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_00104E90:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 12u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 12u), c.r[4].w[0]);  if (t) { goto L_00104EC4; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 12u), c.r[2].w[0]);
    c.budget -= 2;
L_00104EC4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104ED0:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[5].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[5].w[0] + 8u)));
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st32((c.r[5].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; st32((c.r[5].w[0] + 8u), c.r[4].w[0]);  if (t) { goto L_00104F04; } }
    set32(c.r[2], c.r[5].w[0] + 16u);
    st32((c.r[5].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 2;
L_00104F04:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00104F10:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[2], 0u + 3u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_0010501C; } }
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 4u);  if (t) { goto L_00104F50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_0010506C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_00105094; } }
L_00104F50:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105090; } }
    c.budget -= 2;
    if (c.r[16].d[0] == 0ull) { set32(c.r[18], ld32((c.r[17].w[0] + 20u)));  goto L_00104FC0; }
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(321ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00104F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F7Cu); set32(c.r[4], c.r[4].w[0] + 2584u);  if (depth < kMaxDepth) unit_0001(c, 233u, depth + 1u); else { c.pc = 0x00105C68u; return; } if (c.pc != 0x00104F7Cu) [[unlikely]] return; }
L_00104F7C:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    c.r[6].d[0] = c.r[16].d[0] & 65535ull;
    set32(c.r[5], ld32((c.r[17].w[0] + 20u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104F94u); set32(c.r[5], c.r[5].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 120u, depth + 1u); else { c.pc = 0x00104D50u; return; } if (c.pc != 0x00104F94u) [[unlikely]] return; }
L_00104F94:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { goto L_00104FAC; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00104FACu); set32(c.r[4], c.r[4].w[0] + 2624u);  if (depth < kMaxDepth) unit_0001(c, 233u, depth + 1u); else { c.pc = 0x00105C68u; return; } if (c.pc != 0x00104FACu) [[unlikely]] return; }
L_00104FAC:
    set32(c.r[2], ld32((c.r[17].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105090; } }
L_00104FC0:
    set32(c.r[16], 0u + 12u);
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; c.r[3].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105010; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (t) { goto L_00104FE4; } }
    c.budget -= 1;
L_00104FE0:
    set32(c.r[4], ld32((c.r[17].w[0] + 24u)));
    c.budget -= 1;
L_00104FE4:
    set32(c.r[2], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[2], ld32((c.r[4].w[0] + 12u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105000u); set32(c.r[4], ld32((c.r[17].w[0] + 24u)));  if (depth < kMaxDepth) unit_0001(c, 134u, depth + 1u); else { c.pc = 0x00104E90u; return; } if (c.pc != 0x00105000u) [[unlikely]] return; }
L_00105000:
    c.r[2].d[0] = ld16((c.r[18].w[0]));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 20u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104FE0u | kUnwind; return; } goto L_00104FE0; }
L_00105010:
    st32((c.r[17].w[0] + 8u), 0u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105090; } }
L_0010501C:
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0])));
    set32(c.r[5], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105030u); c.r[6].d[0] = c.r[6].d[0] & 65535ull;  if (depth < kMaxDepth) unit_0001(c, 122u, depth + 1u); else { c.pc = 0x00104D88u; return; } if (c.pc != 0x00105030u) [[unlikely]] return; }
L_00105030:
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[5].sd[0] >= 0) { set32(c.r[2], ld32((c.r[17].w[0] + 16u)));  goto L_00105050; }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105048u); set32(c.r[4], c.r[4].w[0] + 2648u);  if (depth < kMaxDepth) unit_0001(c, 233u, depth + 1u); else { c.pc = 0x00105C68u; return; } if (c.pc != 0x00105048u) [[unlikely]] return; }
L_00105048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105088; } }
L_00105050:
    set32(c.r[3], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[3].w[0] - c.r[5].w[0]);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00105090; } }
L_0010506C:
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00105088; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[5], ld32((c.r[17].w[0] + 4u)));
    c.budget -= 2;
L_00105080:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105088u); set32(c.r[4], c.r[4].w[0] + 2672u);  if (depth < kMaxDepth) unit_0001(c, 233u, depth + 1u); else { c.pc = 0x00105C68u; return; } if (c.pc != 0x00105088u) [[unlikely]] return; }
L_00105088:
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00105090:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_00105094:
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001050A8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[19], c.r[21].w[0] + 3792u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[19].w[0] + 12u)));
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001051D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001050F4u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001050F4u) [[unlikely]] return; }
L_001050F4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 3840u);
    set32(c.r[4], 0u + 1u);
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[19].w[0] + 12u), c.r[4].w[0]);
    st32((c.r[19].w[0] + 16u), c.r[6].w[0]);
    set32(c.r[8], 0u - 1u);
    set32(c.r[7], 0u + 10u);
    set32(c.r[5], 0u + 13u);
    set32(c.r[4], c.r[6].w[0] + 12u);
    c.budget -= 11;
L_00105120:
    set32(c.r[18], c.r[18].w[0] - 1u);
    c.budget -= 3;
    if (c.r[18].d[0] == c.r[8].d[0]) { set32(c.r[16], c.r[21].w[0] + 3792u);  goto L_00105170; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[7].d[0]; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00105150; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], c.r[4].w[0] + 1u);  if (t) { goto L_0010516C; } }
    c.r[3].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 1;
L_00105150:
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[17], c.r[17].w[0] + 1u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    c.r[2].d[0] = c.r[17].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105120u | kUnwind; return; } goto L_00105120; } }
L_0010516C:
    set32(c.r[16], c.r[21].w[0] + 3792u);
    c.budget -= 1;
L_00105170:
    set32(c.r[2], c.r[17].w[0] + 12u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 4u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 7u)));
    set32(c.r[4], ld32((c.r[21].w[0] + 3792u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010518Cu); st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0001(c, 116u, depth + 1u); else { c.pc = 0x00104CF8u; return; } if (c.pc != 0x0010518Cu) [[unlikely]] return; }
L_0010518C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_001051A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010519Cu); st32((c.r[16].w[0] + 12u), 0u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x0010519Cu) [[unlikely]] return; }
L_0010519C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_001051D4; } }
L_001051A4:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[17].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_001051C8; } }
L_001051B0:
    set32(c.r[4], ld32((c.r[17].w[0] + 3792u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001051BCu);  if (depth < kMaxDepth) unit_0001(c, 118u, depth + 1u); else { c.pc = 0x00104D28u; return; } if (c.pc != 0x001051BCu) [[unlikely]] return; }
L_001051BC:
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001051B0u | kUnwind; return; } goto L_001051B0; } }
L_001051C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001051D0u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x001051D0u) [[unlikely]] return; }
L_001051D0:
    c.r[2].d[0] = c.r[20].d[0] + 0ull;
    c.budget -= 1;
L_001051D4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_001051F8:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[3].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 11;
    { const bool t = c.r[18].sd[0] <= 0; st64((c.r[29].w[0]), c.r[16].d[0]);  if (t) { goto L_001052A4; } }
    c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
L_00105230:
    set32(c.r[17], c.r[3].w[0] + 1u);
    set32(c.r[4], ld32((c.r[2].w[0] + 3816u)));
    set32(c.r[16], c.r[20].w[0] + c.r[3].w[0]);
    c.budget -= 4;
L_00105240:
    set32(c.r[2], ld32((c.r[4].w[0] + 4u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105240u | kUnwind; return; } goto L_00105240; } }
    set32(c.r[5], c.r[19].w[0] + 3792u);
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 8u)));
    c.r[4].d[0] = ld8((c.r[3].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105278u); set32(c.r[4], ld32((c.r[5].w[0] + 24u)));  if (depth < kMaxDepth) unit_0001(c, 135u, depth + 1u); else { c.pc = 0x00104ED0u; return; } if (c.pc != 0x00105278u) [[unlikely]] return; }
L_00105278:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u + 13u);  if (t) { goto L_00105290; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[3].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00105298; } }
L_00105290:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_001052A8; } }
L_00105298:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[18].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105230u | kUnwind; return; } goto L_00105230; } }
L_001052A4:
    c.r[2].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 1;
L_001052A8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001052C8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052E4u); c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x001052E4u) [[unlikely]] return; }
L_001052E4:
    set32(c.r[17], c.r[16].w[0] + 3792u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u + 528u);
    set32(c.r[6], c.r[6].w[0] + 20240u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001052FCu); c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 112u, depth + 1u); else { c.pc = 0x00104C88u; return; } if (c.pc != 0x001052FCu) [[unlikely]] return; }
L_001052FC:
    st32((c.r[16].w[0] + 3792u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 3792u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00105314; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00105370; } }
L_00105314:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 12u), 0u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[4], c.r[4].w[0] + 4160u);
    set32(c.r[2], c.r[2].w[0] + 3840u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 4u), 0u);
    c.r[4].d[0] = c.r[4].d[0] | c.r[3].d[0];
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[6], 0u + 528u);
    st32((c.r[17].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[5], 0u + 69u);
    set32(c.r[3], 0u + 72u);
    set32(c.r[4], 0u + 256u);
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[6].w[0]));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[2].w[0] + 8u), 0u);
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105368u); st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 133u, depth + 1u); else { c.pc = 0x00104E68u; return; } if (c.pc != 0x00105368u) [[unlikely]] return; }
L_00105368:
    st32((c.r[17].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 2;
L_00105370:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00105388:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[3].d[0] = c.r[3].d[0] | 61744ull;
    c.budget -= 2;
L_00105390:
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 32768ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105390u | kUnwind; return; } goto L_00105390; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[4].d[0] + 0ull;
    c.r[3].d[0] = c.r[3].d[0] | 61824ull;
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001053C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 21992u)));
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 126ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st64((c.r[29].w[0] + 32u), c.r[18].d[0]);  if (t) { goto L_00105408; } }
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0] + 21992u), 0u);
    set32(c.r[2], c.r[18].w[0] + 4480u);
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105400u); st8((c.r[2].w[0] + 127u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0001(c, 131u, depth + 1u); else { c.pc = 0x00104E40u; return; } if (c.pc != 0x00105400u) [[unlikely]] return; }
L_00105400:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], ld32((c.r[17].w[0] + 21992u)));  if (t) { goto L_0010540C; } }
L_00105408:
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 1;
L_0010540C:
    set32(c.r[2], 0u + 10u);
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[2].d[0]; set32(c.r[2], c.r[18].w[0] + 4480u);  if (t) { goto L_00105448; } }
    set32(c.r[4], c.r[18].w[0] + 4480u);
    st32((c.r[17].w[0] + 21992u), 0u);
    set32(c.r[2], c.r[5].w[0] + c.r[4].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104E40u | kUnwind; return; } goto L_00104E40; }
L_00105448:
    set32(c.r[3], c.r[5].w[0] + 1u);
    st32((c.r[17].w[0] + 21992u), c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00105470:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00105498; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105488u); set32(c.r[4], 0u + 13u);  if (depth < kMaxDepth) unit_0001(c, 162u, depth + 1u); else { c.pc = 0x00105388u; return; } if (c.pc != 0x00105488u) [[unlikely]] return; }
L_00105488:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    set32(c.r[4], 0u + 10u);
    c.budget -= 4;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105388u | kUnwind; return; } goto L_00105388; }
L_00105498:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { set32(c.r[29], c.r[29].w[0] + 16u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00105388u | kUnwind; return; } goto L_00105388; }
L_001054A8:
    c.r[5].d[0] = c.r[4].d[0] + 0ull;
    c.r[2].d[0] = c.r[5].d[0] << 1;
    c.r[6].d[0] = c.r[2].d[0] >> 53;
    c.r[6].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-1075ll);
    c.r[2].d[0] = c.r[6].sd[0] < -53ll ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[6].sd[0] < 13ll ? 1ull : 0ull;  if (t) { goto L_001054CC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_001054CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[5].d[0] << 12;  if (t) { goto L_001054DC; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 9999u);  c.pc = t; return; }
L_001054DC:
    c.r[3].d[0] = 0ull | 32768ull;
    c.r[3].d[0] = c.r[3].d[0] << 37;
    c.r[5].d[0] = c.r[2].d[0] >> 12;
    c.budget -= 5;
    { const bool t = c.r[6].sd[0] >= 0; c.r[5].d[0] = c.r[5].d[0] | c.r[3].d[0];  if (t) { goto L_00105520; } }
    c.r[6].d[0] = 0ull - c.r[6].d[0];
    set32(c.r[2], 0u + 3u);
    c.r[3].d[0] = c.r[6].d[0] + static_cast<std::uint64_t>(-2ll);
    c.r[3].d[0] = c.r[3].d[0] << 32;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] >> (c.r[3].w[0] & 63u);
    c.r[4].d[0] = c.r[5].d[0] & 3ull;
    c.budget -= 9;
    if (c.r[4].d[0] != c.r[2].d[0]) { c.r[5].d[0] = c.r[5].d[0] >> 2;  goto L_0010552C; }
    c.r[2].d[0] = c.r[5].d[0] >> 2;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[5].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(1ll);  if (t) { goto L_0010552C; } }
L_00105520:
    c.r[2].d[0] = c.r[6].d[0] << 32;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);
    c.r[5].d[0] = c.r[5].d[0] << (c.r[2].w[0] & 63u);
    c.budget -= 3;
L_0010552C:
    c.r[2].d[0] = c.r[5].d[0] << 32;
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 32);  c.pc = t; return; }
L_00105538:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.r[17].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105560u); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x00105560u) [[unlikely]] return; }
L_00105560:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[5].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_00105584; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105570u); c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 19u, depth + 1u); else { c.pc = 0x0011CB58u; return; } if (c.pc != 0x00105570u) [[unlikely]] return; }
L_00105570:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[3].w[0] + 21996u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105584u); set32(c.r[4], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105584u) [[unlikely]] return; }
L_00105584:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 2728u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105594u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x00105594u) [[unlikely]] return; }
L_00105594:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_001055DC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001055BC; } }
    c.budget -= 1;
L_001055A8:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055B8u); set32(c.r[17], c.r[17].w[0] - 1u);  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x001055B8u) [[unlikely]] return; }
L_001055B8:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_001055BC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 2736u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055CCu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x001055CCu) [[unlikely]] return; }
L_001055CC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001055A8u | kUnwind; return; } goto L_001055A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010562C; } }
L_001055DC:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001055ECu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x001055ECu) [[unlikely]] return; }
L_001055EC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; c.r[18].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_0010562C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00105614; } }
    c.budget -= 1;
L_00105600:
    c.r[5].d[0] = 0ull | 32840ull;
    c.r[5].d[0] = c.r[5].d[0] << 47;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105610u); set32(c.r[17], c.r[17].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 34u, depth + 1u); else { c.pc = 0x0011CE68u; return; } if (c.pc != 0x00105610u) [[unlikely]] return; }
L_00105610:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00105614:
    c.r[5].d[0] = 0ull | 65472ull;
    c.r[5].d[0] = c.r[5].d[0] << 46;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105624u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 43u, depth + 1u); else { c.pc = 0x0011D0E8u; return; } if (c.pc != 0x00105624u) [[unlikely]] return; }
L_00105624:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105600u | kUnwind; return; } goto L_00105600; } }
L_0010562C:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[5].d[0] = ld64((c.r[1].w[0] + 2744u));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010563Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0007(c, 24u, depth + 1u); else { c.pc = 0x0011CBC0u; return; } if (c.pc != 0x0010563Cu) [[unlikely]] return; }
L_0010563C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105644u); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0006(c, 204u, depth + 1u); else { c.pc = 0x0011B390u; return; } if (c.pc != 0x00105644u) [[unlikely]] return; }
L_00105644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010564Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 168u, depth + 1u); else { c.pc = 0x001054A8u; return; } if (c.pc != 0x0010564Cu) [[unlikely]] return; }
L_0010564C:
    set32(c.r[4], c.r[18].w[0] + 2704u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105658u); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 233u, depth + 1u); else { c.pc = 0x00105C68u; return; } if (c.pc != 0x00105658u) [[unlikely]] return; }
L_00105658:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] < 0; c.r[5].d[0] = c.r[17].d[0] + 0ull;  if (t) { goto L_00105680; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 2712u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_00105C68; }
L_00105680:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    set32(c.r[4], c.r[4].w[0] + 2720u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  goto L_00105C68; }
L_001056A0:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st64((c.r[29].w[0] + 48u), c.r[17].d[0]);  if (t) { goto L_00105C38; } }
    c.budget -= 1;
L_001056D0:
    set32(c.r[2], c.r[3].w[0] << 24);
    c.r[20].d[0] = 0ull + 0ull;
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    set32(c.r[2], 0u + 37u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[2].d[0]; c.r[7].d[0] = 0ull + 0ull;  if (t) { goto L_00105C10; } }
L_001056E8:
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_001056EC:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_001056F0:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[2], c.r[2].w[0] - 48u);
    set32(c.r[2], c.r[2].w[0] << 24);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 24));
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(73ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00105C28; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 2752u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00105724:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 1u)));
    set32(c.r[5], c.r[3].w[0] - 48u);
    c.r[2].d[0] = c.r[5].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[18].w[0] + 2u)));  if (t) { goto L_001057AC; } }
    set32(c.r[2], c.r[6].w[0] - 48u);
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], 0u + 10u);  if (t) { goto L_0010576C; } }
    set32(c.r[4], 0u + 31u);
    mmi::mult(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[16], c.r[18].w[0] + 2u);
    set32(c.r[3], c.r[3].w[0] - 48u);
    set32(c.r[5], c.r[3].w[0] + c.r[6].w[0]);
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = 0ull == 0ull; if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[4].d[0];  if (t) { goto L_00105770; } }
L_0010576C:
    set32(c.r[16], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00105770:
    set32(c.r[2], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[20], c.r[2].w[0] - c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001056E8u | kUnwind; return; } goto L_001056E8; } }
    set32(c.r[18], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00105780:
    set32(c.r[2], 0u + 31u);
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], c.r[2].w[0] - c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = c.r[5].sd[0] > 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105780u | kUnwind; return; } goto L_00105780; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001056F0u | kUnwind; return; } goto L_001056F0; } }
L_001057A8:
    set32(c.r[7], 0u + 108u);
    c.budget -= 1;
L_001057AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001056ECu | kUnwind; return; } goto L_001056EC; } }
L_001057B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], 0u + 104u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001057ACu | kUnwind; return; } goto L_001057AC; } }
L_001057BC:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_001057D4; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_001057E8; } }
L_001057D4:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_001057E4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_001057E8; } }
L_001057E4:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_001057E8:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00105808; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00105830; } }
L_00105808:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00105810:
    c.r[2].d[0] = c.r[17].d[0] & 7ull;
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[17].d[0] = c.r[17].d[0] >> 3;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 8;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105810u | kUnwind; return; } goto L_00105810; } }
L_00105830:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_0010583C; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_0010583C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00105C34; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 2;
L_00105850:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105864u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105864u) [[unlikely]] return; }
L_00105864:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105850u | kUnwind; return; } goto L_00105850; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105878:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00105890; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_001058A4; } }
L_00105890:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_001058A0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_001058A4; } }
L_001058A0:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_001058A4:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_001058C4; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001058F0; } }
L_001058C4:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001058C8:
    c.r[3].d[0] = c.r[17].d[0] & 15ull;
    c.r[2].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(10ll) ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(48ll);  if (t) { goto L_001058DC; } }
    c.r[2].d[0] = c.r[3].d[0] + static_cast<std::uint64_t>(87ll);
    c.budget -= 1;
L_001058DC:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[17].d[0] = c.r[17].d[0] >> 4;
    c.budget -= 5;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001058C8u | kUnwind; return; } goto L_001058C8; } }
L_001058F0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_001058FC; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_001058FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00105C34; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 2;
L_00105910:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105924u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105924u) [[unlikely]] return; }
L_00105924:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105910u | kUnwind; return; } goto L_00105910; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105938:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00105950; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_00105964; } }
L_00105950:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_00105960; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].sd[0] = static_cast<std::int16_t>(ld16((c.r[19].w[0] - 8u)));  if (t) { goto L_00105964; } }
L_00105960:
    set32(c.r[17], ld32((c.r[19].w[0] - 8u)));
    c.budget -= 1;
L_00105964:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00105980; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_001059E0; } }
L_00105980:
    c.budget -= 2;
    { const bool t = c.r[17].sd[0] >= 0; c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00105998; } }
    c.r[17].d[0] = 0ull - c.r[17].d[0];
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105998u); set32(c.r[4], 0u + 45u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105998u) [[unlikely]] return; }
L_00105998:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_001059E4; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 2;
L_001059A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059B0u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0006(c, 223u, depth + 1u); else { c.pc = 0x0011B518u; return; } if (c.pc != 0x001059B0u) [[unlikely]] return; }
L_001059B0:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001059CCu); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 202u, depth + 1u); else { c.pc = 0x0011ACA0u; return; } if (c.pc != 0x001059CCu) [[unlikely]] return; }
L_001059CC:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001059A8u | kUnwind; return; } goto L_001059A8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001059E4; } }
L_001059E0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_001059E4:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_001059F0; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_001059F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00105C34; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 1;
L_00105A00:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A14u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105A14u) [[unlikely]] return; }
L_00105A14:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105A00u | kUnwind; return; } goto L_00105A00; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105A28:
    set32(c.r[2], 0u + 108u);
    c.budget -= 3;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 104u);  if (t) { goto L_00105A40; } }
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld64((c.r[19].w[0] - 8u));  if (t) { goto L_00105A54; } }
L_00105A40:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] != c.r[2].d[0]; set32(c.r[19], c.r[19].w[0] + 8u);  if (t) { goto L_00105A50; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[17].d[0] = ld16((c.r[19].w[0] - 8u));  if (t) { goto L_00105A54; } }
L_00105A50:
    c.r[17].d[0] = ld32((c.r[19].w[0] - 8u));
    c.budget -= 1;
L_00105A54:
    set32(c.r[16], c.r[29].w[0] + 31u);
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; st8((c.r[29].w[0] + 31u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00105A74; } }
    set32(c.r[2], 0u + 48u);
    set32(c.r[16], c.r[29].w[0] + 30u);
    st8((c.r[29].w[0] + 30u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[18].w[0] + 1u);  if (t) { goto L_00105AB0; } }
L_00105A74:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 3;
L_00105A80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105A88u); set32(c.r[5], 0u + 10u);  if (depth < kMaxDepth) unit_0007(c, 5u, depth + 1u); else { c.pc = 0x0011C1B0u; return; } if (c.pc != 0x00105A88u) [[unlikely]] return; }
L_00105A88:
    set32(c.r[16], c.r[16].w[0] - 1u);
    c.r[2].d[0] = c.r[2].d[0] + static_cast<std::uint64_t>(48ll);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    set32(c.r[5], 0u + 10u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105AA4u); st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0006(c, 227u, depth + 1u); else { c.pc = 0x0011BBE0u; return; } if (c.pc != 0x00105AA4u) [[unlikely]] return; }
L_00105AA4:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[17].d[0] != 0ull; c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105A80u | kUnwind; return; } goto L_00105A80; } }
L_00105AB0:
    c.budget -= 2;
    { const bool t = c.r[20].d[0] == 0ull; c.r[2].d[0] = c.r[20].d[0] < c.r[16].d[0] ? 1ull : 0ull;  if (t) { goto L_00105ABC; } }
    if (c.r[2].d[0] != 0) c.r[16].d[0] = c.r[20].d[0];
    c.budget -= 1;
L_00105ABC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { goto L_00105C34; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 2;
L_00105AD0:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105AE4u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105AE4u) [[unlikely]] return; }
L_00105AE4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105AD0u | kUnwind; return; } goto L_00105AD0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105AF8:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.f[0] = 0u;
    c.f[12] = ld32((c.r[19].w[0] - 8u));
    fpu_compare(c, fp::key(c.f[12]) == fp::key(c.f[0]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00105B2C; } }
    set32(c.r[4], 0u + 48u);
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B24u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105B24u) [[unlikely]] return; }
L_00105B24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105B2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B34u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x00105B34u) [[unlikely]] return; }
L_00105B34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B3Cu); c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 169u, depth + 1u); else { c.pc = 0x00105538u; return; } if (c.pc != 0x00105B3Cu) [[unlikely]] return; }
L_00105B3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105B44:
    set32(c.r[19], c.r[19].w[0] + 8u);
    set32(c.r[3], ld32((c.r[19].w[0] - 8u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = ld8((c.r[3].w[0]));  if (t) { goto L_00105BB0; } }
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[4], 0u + 40u);
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B6Cu); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105B6Cu) [[unlikely]] return; }
L_00105B6C:
    set32(c.r[3], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B78u); set32(c.r[4], 0u + 110u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105B78u) [[unlikely]] return; }
L_00105B78:
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B84u); set32(c.r[4], 0u + 117u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105B84u) [[unlikely]] return; }
L_00105B84:
    set32(c.r[3], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B90u); set32(c.r[4], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105B90u) [[unlikely]] return; }
L_00105B90:
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105B9Cu); set32(c.r[4], 0u + 108u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105B9Cu) [[unlikely]] return; }
L_00105B9C:
    set32(c.r[3], ld32((c.r[21].w[0] + 21996u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105BA8u); set32(c.r[4], 0u + 41u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105BA8u) [[unlikely]] return; }
L_00105BA8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105BB0:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 4;
L_00105BC0:
    set32(c.r[4], c.r[4].w[0] << 24);
    set32(c.r[3], ld32((c.r[21].w[0] + 21996u)));
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 24));
    c.budget -= 5;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105BD4u); set32(c.r[16], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105BD4u) [[unlikely]] return; }
L_00105BD4:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105BC0u | kUnwind; return; } goto L_00105BC0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105BE8:
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.r[21].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[19].w[0] - 8u)));
    set32(c.r[2], ld32((c.r[21].w[0] + 21996u)));
    c.r[4].d[0] = c.r[17].d[0] << 32;
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 32);
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105C08u); set32(c.r[18], c.r[18].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105C08u) [[unlikely]] return; }
L_00105C08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105C10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 21996u)));
    c.budget -= 4;
    { const std::uint32_t t = c.r[3].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00105C20u); set32(c.r[18], c.r[16].w[0] + 1u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00105C20u) [[unlikely]] return; }
L_00105C20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00105C38; } }
L_00105C28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], c.r[16].w[0] + 1u);  if (t) { goto L_00105C34; } }
L_00105C30:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00105C34:
    c.r[16].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 1;
L_00105C38:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; c.r[3].d[0] = ld8((c.r[16].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001056D0u | kUnwind; return; } goto L_001056D0; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00105C68:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 88u), c.r[5].d[0]);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    set32(c.r[5], c.r[29].w[0] + 88u);
    st64((c.r[29].w[0] + 96u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 104u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 120u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[10].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105C94u); st64((c.r[29].w[0] + 136u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0001(c, 185u, depth + 1u); else { c.pc = 0x001056A0u; return; } if (c.pc != 0x00105C94u) [[unlikely]] return; }
L_00105C94:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00105CA0:
    set32(c.r[29], c.r[29].w[0] - 176u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[2], c.r[2].w[0] + 21440u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[17], ld32((c.r[16].w[0] + 21996u)));
    st64((c.r[29].w[0] + 120u), c.r[5].d[0]);
    st32((c.r[16].w[0] + 21996u), c.r[2].w[0]);
    set32(c.r[5], c.r[29].w[0] + 120u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 160u), c.r[10].d[0]);
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105CE8u); st64((c.r[29].w[0] + 168u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0001(c, 185u, depth + 1u); else { c.pc = 0x001056A0u; return; } if (c.pc != 0x00105CE8u) [[unlikely]] return; }
L_00105CE8:
    st32((c.r[16].w[0] + 21996u), c.r[17].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 176u);  c.pc = t; return; }
L_00105D00:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[2].w[0]), c.r[3].w[0]);  c.pc = t; return; }
L_00105D20:
    set32(c.r[2], ld32((c.r[4].w[0] + 16u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[5].w[0] + 8u), c.r[2].w[0]);  c.pc = t; return; }
L_00105D30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5120u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], ld32((c.r[4].w[0])));  c.pc = t; return; }
L_00105D48:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 5120u);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].d[0] = c.r[5].d[0] + 0ull;
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00105D68:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[2].w[0] + 4824u);  c.pc = t; return; }
L_00105D78:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105D98u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00105D98u) [[unlikely]] return; }
L_00105D98:
    c.r[10].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[10].w[0] + 22000u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00105DC8; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 96u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00105DC8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[5].w[0] + 4736u);
    set32(c.r[6], c.r[19].w[0] + 4608u);
    c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[5].d[0] = c.r[5].d[0] | c.r[2].d[0];
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    set32(c.r[3], 0u + 1u);
    c.r[9].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[18].w[0] + 4824u);
    st32((c.r[10].w[0] + 22000u), c.r[3].w[0]);
    set32(c.r[8], c.r[9].w[0] + 4864u);
    st32((c.r[18].w[0] + 4824u), c.r[6].w[0]);
    set32(c.r[4], c.r[4].w[0] + 5120u);
    set32(c.r[7], 0u + 32u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[2].w[0] + 4u), c.r[5].w[0]);
    c.r[3].d[0] = c.r[8].d[0] + 0ull;
    st32((c.r[2].w[0] + 16u), c.r[7].w[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[2].w[0] + 8u), 0u);
    set32(c.r[16], 0u + 31u);
    st32((c.r[2].w[0] + 12u), c.r[8].w[0]);
    st32((c.r[2].w[0] + 20u), 0u);
    st32((c.r[2].w[0] + 24u), 0u);
    c.budget -= 26;
L_00105E30:
    st32((c.r[3].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 8u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105E30u | kUnwind; return; } goto L_00105E30; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], 0u + 31u);
    set32(c.r[2], c.r[2].w[0] + 5120u);
    set32(c.r[2], c.r[2].w[0] + 124u);
    c.budget -= 5;
L_00105E60:
    st32((c.r[2].w[0]), 0u);
    set32(c.r[16], c.r[16].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] - 4u);
    c.budget -= 7;
    { const bool t = c.r[16].sd[0] >= 0;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105E60u | kUnwind; return; } goto L_00105E60; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[2], c.r[2].w[0] + 23840u);
    set32(c.r[4], c.r[9].w[0] + 4864u);
    set32(c.r[3], c.r[3].w[0] + 23808u);
    set32(c.r[17], c.r[18].w[0] + 4824u);
    st32((c.r[9].w[0] + 4864u), c.r[2].w[0]);
    set32(c.r[16], 0u + 32u);
    st32((c.r[4].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 12u), c.r[17].w[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105EACu); st32((c.r[4].w[0] + 4u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00105EACu) [[unlikely]] return; }
L_00105EAC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105EB4u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x00105EB4u) [[unlikely]] return; }
L_00105EB4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.r[2].d[0] = c.r[2].d[0] | 57360ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00105ED8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x10010000u);
    st32((c.r[1].w[0] - 8176u), c.r[16].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x10000000u);
    c.budget -= 3;
L_00105ED8:
    c.r[2].d[0] = c.r[2].d[0] | 49152ull;
    set32(c.r[3], ld32((c.r[2].w[0])));
    c.r[3].d[0] = c.r[3].d[0] & 256ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { goto L_00105EF8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105EF4u);  if (depth < kMaxDepth) unit_0000(c, 569u, depth + 1u); else { c.pc = 0x00103F80u; return; } if (c.pc != 0x00105EF4u) [[unlikely]] return; }
L_00105EF4:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.budget -= 1;
L_00105EF8:
    set32(c.r[4], 0u + 5u);
    set32(c.r[5], c.r[5].w[0] + 25200u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F08u); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0000(c, 350u, depth + 1u); else { c.pc = 0x001038B0u; return; } if (c.pc != 0x00105F08u) [[unlikely]] return; }
L_00105F08:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F18u); st32((c.r[3].w[0] + 4820u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0001(c, 57u, depth + 1u); else { c.pc = 0x00104700u; return; } if (c.pc != 0x00105F18u) [[unlikely]] return; }
L_00105F18:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F24u);  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x00105F24u) [[unlikely]] return; }
L_00105F24:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00105F6C; } }
    set32(c.r[5], c.r[20].w[0] + 4800u);
    set32(c.r[2], c.r[19].w[0] + 4608u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    set32(c.r[6], 0u + 20u);
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[9].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[5].w[0] + 16u), c.r[2].w[0]);
    c.budget -= 16;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_001061F0; }
L_00105F6C:
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 1;
L_00105F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F78u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x00105F78u) [[unlikely]] return; }
L_00105F78:
    c.r[2].d[0] = c.r[2].d[0] & c.r[16].d[0];
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00105F70u | kUnwind; return; } goto L_00105F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F8Cu); set32(c.r[16], c.r[18].w[0] + 4824u);  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x00105F8Cu) [[unlikely]] return; }
L_00105F8C:
    st32((c.r[16].w[0] + 8u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105F9Cu); c.r[5].d[0] = c.r[2].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x00105F9Cu) [[unlikely]] return; }
L_00105F9C:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00105FACu); c.r[4].d[0] = c.r[4].d[0] | 1ull;  if (depth < kMaxDepth) unit_0000(c, 573u, depth + 1u); else { c.pc = 0x00103FA0u; return; } if (c.pc != 0x00105FACu) [[unlikely]] return; }
L_00105FAC:
    set32(c.r[3], c.r[20].w[0] + 4800u);
    set32(c.r[2], c.r[19].w[0] + 4608u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[5].d[0] = c.r[3].d[0] + 0ull;
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 20u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 16u), c.r[2].w[0]);
    c.r[9].d[0] = 0ull + 0ull;
    st32((c.r[3].w[0] + 12u), 0u);
    c.budget -= 19;
    { set32(c.r[29], c.r[29].w[0] + 96u);  goto L_001061F0; }
L_00105FF8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106008u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0001(c, 53u, depth + 1u); else { c.pc = 0x00104698u; return; } if (c.pc != 0x00106008u) [[unlikely]] return; }
L_00106008:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106018u); set32(c.r[5], ld32((c.r[3].w[0] + 4820u)));  if (depth < kMaxDepth) unit_0000(c, 354u, depth + 1u); else { c.pc = 0x001038D0u; return; } if (c.pc != 0x00106018u) [[unlikely]] return; }
L_00106018:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[3].w[0] + 22000u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106030:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 4824u);
    set32(c.r[2], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[3].w[0] + 24u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 20u), c.r[4].w[0]);  c.pc = t; return; }
L_00106048:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 4824u);
    set32(c.r[2], ld32((c.r[3].w[0] + 12u)));
    st32((c.r[3].w[0] + 16u), c.r[5].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 12u), c.r[4].w[0]);  c.pc = t; return; }
L_00106060:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_00106074; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 4836u)));  if (t) { goto L_0010607C; } }
L_00106074:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4844u)));
    c.budget -= 2;
L_0010607C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st32((c.r[3].w[0] + 4u), c.r[6].w[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), c.r[5].w[0]);  c.pc = t; return; }
L_00106090:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], c.r[4].w[0] << 3);  if (t) { goto L_001060A4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[2].w[0] + 4836u)));  if (t) { goto L_001060AC; } }
L_001060A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4844u)));
    c.budget -= 2;
L_001060AC:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0]), 0u);  c.pc = t; return; }
L_001060B8:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[17].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], c.r[17].w[0] - 16u);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[16].d[0] = c.r[6].d[0] + 0ull;
    c.r[4].d[0] = c.r[8].d[0] + 0ull;
    c.r[2].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(97ll) ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; c.r[5].d[0] = c.r[10].d[0] + 0ull;  if (t) { goto L_00106100; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001061CC; } }
L_00106100:
    c.budget -= 2;
    { const bool t = c.r[5].sd[0] <= 0; c.r[18].d[0] = 0ull + 0ull;  if (t) { goto L_00106148; } }
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    set32(c.r[3], c.r[5].w[0] << 8);
    st32((c.r[16].w[0] + 4u), c.r[9].w[0]);
    set32(c.r[18], 0u + 1u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st32((c.r[29].w[0]), c.r[4].w[0]);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.r[3].d[0] = c.r[19].d[0] & 4ull;
    st32((c.r[29].w[0] + 4u), c.r[9].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[5].w[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] == 0ull; st32((c.r[29].w[0] + 12u), 0u);  if (t) { goto L_00106154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106140u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00106140u) [[unlikely]] return; }
L_00106140:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[18].w[0] << 4);  if (t) { goto L_00106158; } }
L_00106148:
    c.r[2].d[0] = ld8((c.r[16].w[0]));
    st32((c.r[16].w[0] + 4u), 0u);
    st32((c.r[16].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00106154:
    set32(c.r[5], c.r[18].w[0] << 4);
    c.budget -= 1;
L_00106158:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[2].w[0] + 4832u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[3].w[0]), c.r[17].w[0]);
    set32(c.r[4], c.r[29].w[0] + 12u);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    st32((c.r[16].w[0] + 8u), c.r[20].w[0]);
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    set32(c.r[2], 0u + 68u);
    st32((c.r[4].w[0]), c.r[2].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001061A8u); set32(c.r[18], c.r[18].w[0] + 1u);  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x001061A8u) [[unlikely]] return; }
L_001061A8:
    c.r[2].d[0] = c.r[19].d[0] & 1ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_001061C4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001061BCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 567u, depth + 1u); else { c.pc = 0x00103F70u; return; } if (c.pc != 0x001061BCu) [[unlikely]] return; }
L_001061BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_001061D0; } }
L_001061C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001061CCu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 565u, depth + 1u); else { c.pc = 0x00103F60u; return; } if (c.pc != 0x001061CCu) [[unlikely]] return; }
L_001061CC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_001061D0:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_001061F0:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106220u); c.r[5].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 264u, depth + 1u); else { c.pc = 0x001060B8u; return; } if (c.pc != 0x00106220u) [[unlikely]] return; }
L_00106220:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106230:
    c.r[2].d[0] = c.r[6].d[0] + 0ull;
    c.r[3].d[0] = c.r[7].d[0] + 0ull;
    c.r[11].d[0] = c.r[8].d[0] + 0ull;
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[10].d[0] = c.r[9].d[0] + 0ull;
    c.r[6].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.r[7].d[0] = c.r[2].d[0] + 0ull;
    c.r[8].d[0] = c.r[3].d[0] + 0ull;
    c.r[9].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106260u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 264u, depth + 1u); else { c.pc = 0x001060B8u; return; } if (c.pc != 0x00106260u) [[unlikely]] return; }
L_00106260:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106270:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 112u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106284u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00106284u) [[unlikely]] return; }
L_00106284:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[7], ld32((c.r[3].w[0] + 4824u)));
    set32(c.r[16], c.r[3].w[0] + 4824u);
    c.r[2].d[0] = ld8((c.r[7].w[0]));
    c.r[5].d[0] = c.r[2].d[0] & 255ull;
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106388; } }
    set32(c.r[2], c.r[5].w[0] + 15u);
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[5].w[0] + 30u);
    c.r[3].d[0] = c.r[3].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    if (c.r[3].d[0] != 0) c.r[4].d[0] = c.r[2].d[0];
    c.r[6].d[0] = c.r[7].d[0] + 0ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 4));
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(0u));
    c.budget -= 10;
    { const bool t = c.r[5].sd[0] <= 0; c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (t) { goto L_001062EC; } }
    c.r[3].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 2;
L_001062D0:
    ld128((c.r[6].w[0]) & ~15u, c.r[2]);
    set32(c.r[4], c.r[4].w[0] - 1u);
    set32(c.r[6], c.r[6].w[0] + 16u);
    st128((c.r[3].w[0]) & ~15u, c.r[2]);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.budget -= 7;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001062D0u | kUnwind; return; } goto L_001062D0; } }
L_001062EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001062F4u);  if (depth < kMaxDepth) unit_0000(c, 571u, depth + 1u); else { c.pc = 0x00103F90u; return; } if (c.pc != 0x001062F4u) [[unlikely]] return; }
L_001062F4:
    set32(c.r[3], ld32((c.r[29].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0;  if (t) { goto L_00106348; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 8u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x7FFF0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 16u)));
    c.r[5].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.r[4].d[0] = c.r[5].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_0010637C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010637C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00106340u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00106340u) [[unlikely]] return; }
L_00106340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010637C; } }
L_00106348:
    set32(c.r[5], ld32((c.r[29].w[0] + 8u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[5].w[0] << 3);  if (t) { goto L_0010637C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[6], ld32((c.r[2].w[0])));
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0010637C; } }
    set32(c.r[5], ld32((c.r[2].w[0] + 4u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[6].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0010637Cu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0010637Cu) [[unlikely]] return; }
L_0010637C:
    set_interrupts(c, true);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 3;
L_00106388:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_00106398:
    c.r[25].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[25].d[0] = c.r[25].d[0] | 65472ull;
    c.budget -= 4;
    { const bool t = c.r[5].sd[0] <= 0; set32(c.r[10], c.r[4].w[0] + c.r[5].w[0]);  if (t) { goto L_0010643C; } }
    c.r[8].d[0] = c.r[4].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.r[9].d[0] = c.r[10].d[0] & c.r[25].d[0];
    set32(c.r[10], c.r[9].w[0] - c.r[8].w[0]);
    set32(c.r[11], c.r[10].w[0] >> 6);
    set32(c.r[11], c.r[11].w[0] + 1u);
    c.r[9].d[0] = c.r[11].d[0] & 7ull;
    c.budget -= 9;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[10], c.r[11].w[0] >> 3);  if (t) { goto L_001063E8; } }
L_001063CC:
    set32(c.r[9], c.r[9].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[9].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001063CCu | kUnwind; return; } goto L_001063CC; } }
L_001063E8:
    c.budget -= 2;
    { const bool t = c.r[10].d[0] == 0ull; set32(c.r[10], c.r[10].w[0] - 1u);  if (t) { goto L_0010643C; } }
    goto L_001063F0;
L_001063EC:
    set32(c.r[10], c.r[10].w[0] - 1u);
    c.budget -= 1;
L_001063F0:
    c.budget -= 19;
    { const bool t = c.r[10].sd[0] > 0; set32(c.r[8], c.r[8].w[0] + 512u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001063ECu | kUnwind; return; } goto L_001063EC; } }
L_0010643C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106448:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106460u); st64((c.r[29].w[0]), c.r[16].d[0]);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00106460u) [[unlikely]] return; }
L_00106460:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22008u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], 0u + 1u);  if (t) { goto L_00106488; } }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { set32(c.r[29], c.r[29].w[0] + 64u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00106488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106490u); st32((c.r[3].w[0] + 22008u), c.r[17].w[0]);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00106490u) [[unlikely]] return; }
L_00106490:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106498u);  if (depth < kMaxDepth) unit_0001(c, 242u, depth + 1u); else { c.pc = 0x00105D78u; return; } if (c.pc != 0x00106498u) [[unlikely]] return; }
L_00106498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001064A0u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001064A0u) [[unlikely]] return; }
L_001064A0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[8].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[3].w[0] + 5248u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[8].w[0] + 11392u);
    set32(c.r[3], 0u + 32u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[6], c.r[6].w[0] + 7296u);
    set32(c.r[7], c.r[7].w[0] + 9344u);
    c.r[6].d[0] = c.r[6].d[0] | c.r[2].d[0];
    c.r[7].d[0] = c.r[7].d[0] | c.r[2].d[0];
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    c.r[2].d[0] = c.r[18].d[0] | c.r[2].d[0];
    st32((c.r[8].w[0] + 11392u), c.r[17].w[0]);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    st32((c.r[16].w[0] + 20u), c.r[6].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    set32(c.r[5], c.r[5].w[0] + 26440u);
    st32((c.r[16].w[0] + 28u), c.r[7].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    st32((c.r[16].w[0] + 8u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 12u), 0u);
    st32((c.r[16].w[0] + 16u), 0u);
    st32((c.r[16].w[0] + 24u), c.r[3].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106514u); st32((c.r[16].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x00106514u) [[unlikely]] return; }
L_00106514:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 27144u);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010652Cu); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x0010652Cu) [[unlikely]] return; }
L_0010652C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 27640u);
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106544u); c.r[6].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x00106544u) [[unlikely]] return; }
L_00106544:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 26624u);
    c.r[6].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010655Cu); c.r[4].d[0] = c.r[4].d[0] | 12ull;  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x0010655Cu) [[unlikely]] return; }
L_0010655C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106564u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00106564u) [[unlikely]] return; }
L_00106564:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106570u); c.r[4].d[0] = c.r[4].d[0] | 2ull;  if (depth < kMaxDepth) unit_0000(c, 575u, depth + 1u); else { c.pc = 0x00103FB0u; return; } if (c.pc != 0x00106570u) [[unlikely]] return; }
L_00106570:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001065D0; } }
    set32(c.r[5], c.r[18].w[0] + 64u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[5].w[0] + 12u), c.r[17].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    set32(c.r[6], 0u + 16u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010659Cu); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x0010659Cu) [[unlikely]] return; }
L_0010659C:
    c.budget -= 1;
L_001065A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001065A8u); c.r[4].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 239u, depth + 1u); else { c.pc = 0x00105D30u; return; } if (c.pc != 0x001065A8u) [[unlikely]] return; }
L_001065A8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001065A0u | kUnwind; return; } goto L_001065A0; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[5], 0u + 1u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 2ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103FA0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 573u, depth); }
L_001065D0:
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001065E8:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001065F8u);  if (depth < kMaxDepth) unit_0001(c, 257u, depth + 1u); else { c.pc = 0x00105FF8u; return; } if (c.pc != 0x001065F8u) [[unlikely]] return; }
L_001065F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    st32((c.r[2].w[0] + 22008u), 0u);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106610:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106628u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00106628u) [[unlikely]] return; }
L_00106628:
    set32(c.r[4], ld32((c.r[17].w[0] + 8u)));
    c.r[3].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const bool t = c.r[4].sd[0] <= 0; set32(c.r[16], ld32((c.r[17].w[0] + 4u)));  if (t) { goto L_00106698; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 2;
L_00106640:
    set32(c.r[2], ld32((c.r[16].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], c.r[3].w[0] + 1u);  goto L_0010668C; }
    set32(c.r[2], c.r[3].w[0] << 16);
    c.r[2].d[0] = c.r[2].d[0] | 5ull;
    st32((c.r[16].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[3], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[5].d[0]; st32((c.r[17].w[0]), c.r[3].w[0]);  if (t) { goto L_00106678; } }
    set32(c.r[2], c.r[2].w[0] + 2u);
    set32(c.r[3], 0u + 1u);
    st32((c.r[17].w[0]), c.r[2].w[0]);
    c.budget -= 3;
L_00106678:
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106684u); st32((c.r[16].w[0] + 24u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00106684u) [[unlikely]] return; }
L_00106684:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_001066A4; } }
L_0010668C:
    c.r[2].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 64u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106640u | kUnwind; return; } goto L_00106640; } }
L_00106698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001066A0u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x001066A0u) [[unlikely]] return; }
L_001066A0:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_001066A4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001066B8:
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65534ull;
    st32((c.r[4].w[0] + 24u), 0u);
    c.r[3].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 16u), c.r[3].w[0]);  c.pc = t; return; }
L_001066D8:
    set32(c.r[5], ld32((c.r[4].w[0] + 36u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 24u)));
    mmi::div(c, 0, c.r[5].w[0], c.r[3].w[0]);
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { breakpoint(c, 0x001066E8u);  goto L_001066EC; }
L_001066EC:
    set32(c.r[5], ld32((c.r[4].w[0] + 20u)));
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[2].w[0] << 6);
    st32((c.r[4].w[0] + 36u), c.r[3].w[0]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);  c.pc = t; return; }
L_00106708:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] < 0; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_00106724; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[4].w[0] + 28u)));  goto L_00106734; }
L_00106724:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010672Cu);  if (depth < kMaxDepth) unit_0001(c, 304u, depth + 1u); else { c.pc = 0x001066D8u; return; } if (c.pc != 0x0010672Cu) [[unlikely]] return; }
L_0010672C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0]));  if (t) { goto L_00106740; } }
L_00106734:
    set32(c.r[2], c.r[5].w[0] << 6);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 3;
L_00106740:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00106748:
    set32(c.r[29], c.r[29].w[0] - 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[2].d[0] = c.r[2].d[0] | 10ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 32u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[2].d[0] = c.r[2].d[0] < c.r[3].d[0] ? 1ull : 0ull;  if (t) { goto L_00106790; } }
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  goto L_001067C8; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    c.budget -= 4;
    if (c.r[3].d[0] == c.r[2].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 36u)));  goto L_001067B0; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_001067C8; } }
L_00106790:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 28u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], ld32((c.r[16].w[0] + 8u)));  goto L_001067CC; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001067A8u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001067A8u) [[unlikely]] return; }
L_001067A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], ld32((c.r[17].w[0] + 28u)));  if (t) { goto L_001067C8; } }
L_001067B0:
    set32(c.r[16], ld32((c.r[17].w[0] + 28u)));
    st32((c.r[16].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[17].w[0] + 40u)));
    st32((c.r[16].w[0] + 20u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 44u)));
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    c.budget -= 6;
L_001067C8:
    set32(c.r[4], ld32((c.r[16].w[0] + 8u)));
    c.budget -= 1;
L_001067CC:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_001067DC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067DCu);  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x001067DCu) [[unlikely]] return; }
L_001067DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001067E4u); set32(c.r[4], ld32((c.r[16].w[0])));  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x001067E4u) [[unlikely]] return; }
L_001067E4:
    st32((c.r[16].w[0]), 0u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00106800:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106818u); c.r[4].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 304u, depth + 1u); else { c.pc = 0x001066D8u; return; } if (c.pc != 0x00106818u) [[unlikely]] return; }
L_00106818:
    set32(c.r[5], ld32((c.r[16].w[0] + 20u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | 12ull;
    st32((c.r[2].w[0] + 20u), c.r[5].w[0]);
    set32(c.r[6], 0u + 64u);
    st32((c.r[2].w[0] + 28u), c.r[4].w[0]);
    c.r[5].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[2].w[0] + 32u), c.r[3].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    set32(c.r[9], ld32((c.r[16].w[0] + 40u)));
    set32(c.r[7], ld32((c.r[16].w[0] + 32u)));
    set32(c.r[8], ld32((c.r[16].w[0] + 36u)));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 18;
    { set32(c.r[29], c.r[29].w[0] + 32u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106230u | kUnwind; return; } goto L_00106230; }
L_00106860:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 128u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001068A0u); set32(c.r[4], c.r[4].w[0] + 11392u);  if (depth < kMaxDepth) unit_0001(c, 298u, depth + 1u); else { c.pc = 0x00106610u; return; } if (c.pc != 0x001068A0u) [[unlikely]] return; }
L_001068A0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00106994; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[21].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_00106958; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001068E8u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001068E8u) [[unlikely]] return; }
L_001068E8:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00106900; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001068F8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x001068F8u) [[unlikely]] return; }
L_001068F8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00106994; } }
L_00106900:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106920u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00106920u) [[unlikely]] return; }
L_00106920:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00106940; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106930u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106930u) [[unlikely]] return; }
L_00106930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106938u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00106938u) [[unlikely]] return; }
L_00106938:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00106994; } }
L_00106940:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106948u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00106948u) [[unlikely]] return; }
L_00106948:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106950u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00106950u) [[unlikely]] return; }
L_00106950:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106994; } }
L_00106958:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 12ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106980u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00106980u) [[unlikely]] return; }
L_00106980:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106994; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106990u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106990u) [[unlikely]] return; }
L_00106990:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_00106994:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_001069B8:
    set32(c.r[5], ld32((c.r[5].w[0] + 40u)));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001069FC; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 8u)));
    c.budget -= 1;
L_001069C8:
    c.budget -= 2;
    if (c.r[3].d[0] == 0ull) { set32(c.r[5], ld32((c.r[5].w[0] + 20u)));  goto L_001069F4; }
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 2;
L_001069D8:
    c.budget -= 2;
    if (c.r[2].d[0] != c.r[4].d[0]) { set32(c.r[3], ld32((c.r[3].w[0] + 56u)));  goto L_001069E8; }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[3].d[0] + 0ull;  c.pc = t; return; }
L_001069E8:
    c.budget -= 2;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], ld32((c.r[3].w[0])));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001069D8u | kUnwind; return; } goto L_001069D8; }
    set32(c.r[5], ld32((c.r[5].w[0] + 20u)));
    c.budget -= 1;
L_001069F4:
    c.budget -= 2;
    if (c.r[5].d[0] != 0ull) { set32(c.r[3], ld32((c.r[5].w[0] + 8u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x001069C8u | kUnwind; return; } goto L_001069C8; }
L_001069FC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00106A08:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[5].d[0] + 0ull;
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A2Cu); c.r[4].d[0] = c.r[17].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 304u, depth + 1u); else { c.pc = 0x001066D8u; return; } if (c.pc != 0x00106A2Cu) [[unlikely]] return; }
L_00106A2C:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[4], ld32((c.r[16].w[0] + 28u)));
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[2].d[0] = c.r[2].d[0] | 9ull;
    st32((c.r[18].w[0] + 28u), c.r[4].w[0]);
    st32((c.r[18].w[0] + 20u), c.r[3].w[0]);
    c.r[5].d[0] = c.r[17].d[0] + 0ull;
    st32((c.r[18].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106A58u); set32(c.r[4], ld32((c.r[16].w[0] + 32u)));  if (depth < kMaxDepth) unit_0001(c, 324u, depth + 1u); else { c.pc = 0x001069B8u; return; } if (c.pc != 0x00106A58u) [[unlikely]] return; }
L_00106A58:
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[3].d[0] != 0ull) { st32((c.r[18].w[0] + 36u), c.r[3].w[0]);  goto L_00106A74; }
    st32((c.r[18].w[0] + 36u), 0u);
    st32((c.r[18].w[0] + 40u), 0u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 44u), 0u);  if (t) { goto L_00106A84; } }
L_00106A74:
    set32(c.r[2], ld32((c.r[3].w[0] + 8u)));
    st32((c.r[18].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0] + 20u)));
    st32((c.r[18].w[0] + 44u), c.r[3].w[0]);
    c.budget -= 4;
L_00106A84:
    c.r[5].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    set32(c.r[6], 0u + 64u);
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[7].d[0] = 0ull + 0ull;
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.r[8].d[0] = 0ull + 0ull;
    c.r[9].d[0] = 0ull + 0ull;
    c.budget -= 13;
    { set32(c.r[29], c.r[29].w[0] + 64u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00106230u | kUnwind; return; } goto L_00106230; }
L_00106AB8:
    set32(c.r[29], c.r[29].w[0] - 112u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[19].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.r[18].d[0] = c.r[6].d[0] + 0ull;
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[4], c.r[4].w[0] + 11392u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106AF0u); st32((c.r[17].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0001(c, 298u, depth + 1u); else { c.pc = 0x00106610u; return; } if (c.pc != 0x00106AF0u) [[unlikely]] return; }
L_00106AF0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00106BDC; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 24u)));
    c.r[3].d[0] = c.r[18].d[0] & 1ull;
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; st32((c.r[16].w[0] + 28u), c.r[17].w[0]);  if (t) { goto L_00106BA0; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B30u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00106B30u) [[unlikely]] return; }
L_00106B30:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00106B48; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B40u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106B40u) [[unlikely]] return; }
L_00106B40:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00106BDC; } }
L_00106B48:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B68u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00106B68u) [[unlikely]] return; }
L_00106B68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00106B88; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B78u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106B78u) [[unlikely]] return; }
L_00106B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B80u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00106B80u) [[unlikely]] return; }
L_00106B80:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00106BDC; } }
L_00106B88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B90u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00106B90u) [[unlikely]] return; }
L_00106B90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106B98u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00106B98u) [[unlikely]] return; }
L_00106B98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106BDC; } }
L_00106BA0:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] | 9ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = 0ull + 0ull;
    c.r[8].d[0] = 0ull + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106BC8u); c.r[9].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00106BC8u) [[unlikely]] return; }
L_00106BC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106BDC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106BD8u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106BD8u) [[unlikely]] return; }
L_00106BD8:
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_00106BDC:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00106BF8:
    set32(c.r[5], ld32((c.r[4].w[0] + 52u)));
    set32(c.r[6], ld32((c.r[5].w[0] + 64u)));
    set32(c.r[2], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 5;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[6].w[0] + 16u)));  goto L_00106C14; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[6].w[0] + 12u), c.r[5].w[0]);  if (t) { goto L_00106C18; } }
L_00106C14:
    st32((c.r[2].w[0] + 60u), c.r[5].w[0]);
    c.budget -= 1;
L_00106C18:
    st32((c.r[6].w[0] + 16u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 28u)));
    st32((c.r[5].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[5].w[0] + 28u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 32u)));
    st32((c.r[5].w[0] + 36u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 36u)));
    st32((c.r[5].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 40u)));
    st32((c.r[5].w[0] + 40u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 44u)));
    st32((c.r[5].w[0] + 44u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[4].w[0] + 48u)));
    st32((c.r[5].w[0] + 48u), c.r[2].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 16u)));
    st32((c.r[5].w[0] + 52u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[6].w[0])));
    c.budget -= 20;
    { const bool t = c.r[4].sd[0] < 0;  if (t) { goto L_00106C7C; } }
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00106C7C; } }
    c.budget -= 2;
    {  if (c.budget < 0 && preempt(c)) { c.pc = 0x00104AD8u | kUnwind; return; } goto L_00104AD8; }
L_00106C7C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00106C88:
    set32(c.r[29], c.r[29].w[0] - 192u);
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 160u), c.r[30].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[23].d[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 128u), c.r[22].d[0]);
    c.r[30].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[18].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 176u), c.r[31].d[0]);
    c.r[23].d[0] = c.r[11].d[0] + 0ull;
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106CE0u); set32(c.r[4], c.r[4].w[0] + 11392u);  if (depth < kMaxDepth) unit_0001(c, 298u, depth + 1u); else { c.pc = 0x00106610u; return; } if (c.pc != 0x00106CE0u) [[unlikely]] return; }
L_00106CE0:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00106E44; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 192u)));
    c.r[4].d[0] = c.r[30].d[0] & 2ull;
    set32(c.r[3], ld32((c.r[16].w[0] + 24u)));
    st32((c.r[17].w[0] + 32u), c.r[2].w[0]);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[17].w[0] + 28u), c.r[23].w[0]);
    st32((c.r[16].w[0] + 32u), c.r[22].w[0]);
    st32((c.r[16].w[0] + 36u), c.r[18].w[0]);
    st32((c.r[16].w[0] + 40u), c.r[20].w[0]);
    st32((c.r[16].w[0] + 44u), c.r[19].w[0]);
    st32((c.r[16].w[0] + 20u), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 36u)));
    st32((c.r[16].w[0] + 28u), c.r[17].w[0]);
    c.budget -= 16;
    { const bool t = c.r[4].d[0] != 0ull; st32((c.r[16].w[0] + 52u), c.r[2].w[0]);  if (t) { goto L_00106D6C; } }
    c.budget -= 2;
    { const bool t = c.r[21].d[0] != c.r[20].d[0]; c.r[2].d[0] = c.r[18].sd[0] < c.r[19].sd[0] ? 1ull : 0ull;  if (t) { goto L_00106D4C; } }
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.r[4].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D44u); if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[18].d[0];  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00106D44u) [[unlikely]] return; }
L_00106D44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[30].d[0] & 1ull;  if (t) { goto L_00106D70; } }
L_00106D4C:
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0; c.r[4].d[0] = c.r[21].d[0] + 0ull;  if (t) { goto L_00106D5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D5Cu); c.r[5].d[0] = c.r[18].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00106D5Cu) [[unlikely]] return; }
L_00106D5C:
    c.budget -= 2;
    { const bool t = c.r[19].sd[0] <= 0; c.r[4].d[0] = c.r[20].d[0] + 0ull;  if (t) { goto L_00106D6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106D6Cu); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00106D6Cu) [[unlikely]] return; }
L_00106D6C:
    c.r[2].d[0] = c.r[30].d[0] & 1ull;
    c.budget -= 1;
L_00106D70:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[19], 0u + 1u);  goto L_00106DC4; }
    c.budget -= 2;
    { const bool t = c.r[23].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00106D88; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 48u), 0u);  if (t) { goto L_00106D8C; } }
L_00106D88:
    st32((c.r[16].w[0] + 48u), c.r[2].w[0]);
    c.budget -= 1;
L_00106D8C:
    set32(c.r[2], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106DB4u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00106DB4u) [[unlikely]] return; }
L_00106DB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_00106E44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00106E20; } }
L_00106DC4:
    st32((c.r[29].w[0] + 8u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[19].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106DD4u); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00106DD4u) [[unlikely]] return; }
L_00106DD4:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; st32((c.r[17].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00106DEC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106DE4u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106DE4u) [[unlikely]] return; }
L_00106DE4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 3u);  if (t) { goto L_00106E44; } }
L_00106DEC:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[7].d[0] = c.r[21].d[0] + 0ull;
    c.r[9].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[8], ld32((c.r[17].w[0] + 20u)));
    c.r[4].d[0] = c.r[4].d[0] | 10ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E10u); set32(c.r[6], 0u + 64u);  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00106E10u) [[unlikely]] return; }
L_00106E10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00106E30; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E20u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00106E20u) [[unlikely]] return; }
L_00106E20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E28u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 303u, depth + 1u); else { c.pc = 0x001066B8u; return; } if (c.pc != 0x00106E28u) [[unlikely]] return; }
L_00106E28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_00106E44; } }
L_00106E30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E38u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00106E38u) [[unlikely]] return; }
L_00106E38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106E40u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00106E40u) [[unlikely]] return; }
L_00106E40:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_00106E44:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 192u);  c.pc = t; return; }
L_00106E78:
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_00106EA4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 24u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00106EA4; } }
    set32(c.r[2], ld32((c.r[5].w[0] + 16u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00106EAC; } }
L_00106EA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = 0ull + 0ull;  c.pc = t; return; }
L_00106EAC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 1u);  c.pc = t; return; }
L_00106EB8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106ED4u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00106ED4u) [[unlikely]] return; }
L_00106ED4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    set32(c.r[3], c.r[3].w[0] + 11392u);
    st32((c.r[17].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[3].w[0] + 40u)));
    st32((c.r[17].w[0] + 8u), 0u);
    st32((c.r[17].w[0] + 12u), 0u);
    st32((c.r[17].w[0] + 16u), 0u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[17].w[0] + 20u), 0u);  if (t) { goto L_00106F04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[17].w[0]);  if (t) { goto L_00106F38; } }
L_00106F04:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 20u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 20u), c.r[17].w[0]);  goto L_00106F38; }
    c.budget -= 1;
L_00106F18:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 20u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106F18u | kUnwind; return; } goto L_00106F18; } }
    st32((c.r[4].w[0] + 20u), c.r[17].w[0]);
    c.budget -= 1;
L_00106F38:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { set32(c.r[29], c.r[29].w[0] + 48u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00106F50:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[22].d[0]);
    st64((c.r[29].w[0] + 80u), c.r[21].d[0]);
    c.r[22].d[0] = c.r[10].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[21].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[20].d[0] = c.r[9].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[8].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[7].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[17].d[0] = c.r[6].d[0] + 0ull;
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00106F94u); c.r[16].d[0] = c.r[5].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00106F94u) [[unlikely]] return; }
L_00106F94:
    st32((c.r[21].w[0] + 60u), 0u);
    st32((c.r[21].w[0] + 56u), 0u);
    st32((c.r[21].w[0]), c.r[16].w[0]);
    set32(c.r[2], ld32((c.r[22].w[0] + 8u)));
    st32((c.r[21].w[0] + 4u), c.r[17].w[0]);
    st32((c.r[21].w[0] + 8u), c.r[18].w[0]);
    st32((c.r[21].w[0] + 16u), c.r[19].w[0]);
    st32((c.r[21].w[0] + 20u), c.r[20].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st32((c.r[21].w[0] + 64u), c.r[22].w[0]);  if (t) { goto L_00106FC4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[22].w[0] + 8u), c.r[21].w[0]);  if (t) { goto L_00106FF8; } }
L_00106FC4:
    c.r[4].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], ld32((c.r[4].w[0] + 56u)));
    c.budget -= 4;
    if (c.r[3].d[0] == 0ull) { st32((c.r[4].w[0] + 56u), c.r[21].w[0]);  goto L_00106FF8; }
    c.budget -= 1;
L_00106FD8:
    c.r[4].d[0] = c.r[3].d[0] + 0ull;
    set32(c.r[2], ld32((c.r[4].w[0] + 56u)));
    c.r[3].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00106FD8u | kUnwind; return; } goto L_00106FD8; } }
    st32((c.r[4].w[0] + 56u), c.r[21].w[0]);
    c.budget -= 1;
L_00106FF8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 10;
    { set32(c.r[29], c.r[29].w[0] + 128u);  [[clang::musttail]] return unit_0002(c, 452u, depth); }
L_00107020:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107040u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00107040u) [[unlikely]] return; }
L_00107040:
    set32(c.r[16], ld32((c.r[18].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_00107058; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0] + 8u), c.r[2].w[0]);  if (t) { goto L_00107090; } }
L_00107058:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107090; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 56u)));  goto L_0010708C; }
    c.budget -= 1;
L_00107070:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107090; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 56u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107070u | kUnwind; return; } goto L_00107070; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 56u)));
    c.budget -= 1;
L_0010708C:
    st32((c.r[16].w[0] + 56u), c.r[2].w[0]);
    c.budget -= 1;
L_00107090:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107098u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00107098u) [[unlikely]] return; }
L_00107098:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_001070B8:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001070D0u); c.r[17].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001070D0u) [[unlikely]] return; }
L_001070D0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 11392u);
    set32(c.r[16], ld32((c.r[3].w[0] + 40u)));
    c.budget -= 5;
    { const bool t = c.r[16].d[0] != c.r[17].d[0];  if (t) { goto L_001070F0; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 40u), c.r[2].w[0]);  if (t) { goto L_00107128; } }
L_001070F0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107128; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    if (c.r[3].d[0] == c.r[17].d[0]) { set32(c.r[2], ld32((c.r[17].w[0] + 20u)));  goto L_00107124; }
    c.budget -= 1;
L_00107108:
    c.r[16].d[0] = c.r[3].d[0] + 0ull;
    c.budget -= 3;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107128; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 20u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; c.r[3].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107108u | kUnwind; return; } goto L_00107108; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 20u)));
    c.budget -= 1;
L_00107124:
    st32((c.r[16].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 1;
L_00107128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107130u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00107130u) [[unlikely]] return; }
L_00107130:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107148:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107160u); c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00107160u) [[unlikely]] return; }
L_00107160:
    set32(c.r[17], ld32((c.r[16].w[0] + 12u)));
    c.budget -= 3;
    if (c.r[17].d[0] != 0ull) { set32(c.r[3], ld32((c.r[17].w[0] + 60u)));  goto L_00107174; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 4u), 0u);  if (t) { goto L_00107180; } }
L_00107174:
    set32(c.r[2], 0u + 1u);
    st32((c.r[16].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[16].w[0] + 12u), c.r[3].w[0]);
    c.budget -= 3;
L_00107180:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107188u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00107188u) [[unlikely]] return; }
L_00107188:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001071A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st64((c.r[29].w[0] + 96u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[18].d[0]);
    c.r[20].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 48u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[31].d[0]);
    c.r[17].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 4u)));
    set32(c.r[4], ld32((c.r[17].w[0] + 36u)));
    set32(c.r[5], ld32((c.r[17].w[0] + 8u)));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001071D8u); set32(c.r[6], ld32((c.r[17].w[0] + 12u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001071D8u) [[unlikely]] return; }
L_001071D8:
    c.r[18].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[18].d[0] != 0ull) { set32(c.r[20], ld32((c.r[17].w[0] + 44u)));  goto L_001071E4; }
L_001071E4:
    set32(c.r[5], ld32((c.r[17].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[5].sd[0] <= 0;  if (t) { goto L_001071F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001071F8u); set32(c.r[4], ld32((c.r[17].w[0] + 8u)));  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x001071F8u) [[unlikely]] return; }
L_001071F8:
    c.budget -= 2;
    { const bool t = c.r[20].sd[0] <= 0; c.r[4].d[0] = c.r[18].d[0] + 0ull;  if (t) { goto L_00107208; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107208u); c.r[5].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 279u, depth + 1u); else { c.pc = 0x00106398u; return; } if (c.pc != 0x00107208u) [[unlikely]] return; }
L_00107208:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107210u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00107210u) [[unlikely]] return; }
L_00107210:
    set32(c.r[5], ld32((c.r[17].w[0] + 52u)));
    c.r[2].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[5].w[0] >> 16);  if (t) { goto L_00107234; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010722Cu); set32(c.r[4], c.r[4].w[0] + 11392u);  if (depth < kMaxDepth) unit_0001(c, 305u, depth + 1u); else { c.pc = 0x00106708u; return; } if (c.pc != 0x0010722Cu) [[unlikely]] return; }
L_0010722C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[2].d[0] + 0ull;  if (t) { goto L_00107244; } }
L_00107234:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107240u); set32(c.r[4], c.r[4].w[0] + 11392u);  if (depth < kMaxDepth) unit_0001(c, 304u, depth + 1u); else { c.pc = 0x001066D8u; return; } if (c.pc != 0x00107240u) [[unlikely]] return; }
L_00107240:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 1;
L_00107244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010724Cu);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x0010724Cu) [[unlikely]] return; }
L_0010724C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[4], ld32((c.r[17].w[0] + 28u)));
    c.r[3].d[0] = c.r[3].d[0] | 10ull;
    st32((c.r[16].w[0] + 32u), c.r[3].w[0]);
    st32((c.r[16].w[0] + 28u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0] + 48u)));
    c.budget -= 8;
    if (c.r[2].d[0] == 0ull) { st32((c.r[16].w[0] + 24u), 0u);  goto L_001072A0; }
    c.budget -= 1;
L_00107270:
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[8], ld32((c.r[17].w[0] + 40u)));
    c.r[4].d[0] = c.r[4].d[0] | 8ull;
    c.r[5].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[6], 0u + 64u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107290u); c.r[9].d[0] = c.r[20].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 269u, depth + 1u); else { c.pc = 0x001061F0u; return; } if (c.pc != 0x00107290u) [[unlikely]] return; }
L_00107290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107270u | kUnwind; return; } goto L_00107270; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));  if (t) { goto L_0010734C; } }
L_001072A0:
    c.r[19].d[0] = 0ull + 0ull;
    c.budget -= 3;
    { const bool t = c.r[20].sd[0] <= 0; st32((c.r[16].w[0] + 16u), 0u);  if (t) { goto L_001072C4; } }
    set32(c.r[2], ld32((c.r[17].w[0] + 40u)));
    set32(c.r[19], 0u + 1u);
    st32((c.r[29].w[0]), c.r[18].w[0]);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 8u), c.r[20].w[0]);
    st32((c.r[29].w[0] + 12u), 0u);
    c.budget -= 6;
L_001072C4:
    set32(c.r[5], c.r[19].w[0] << 4);
    set32(c.r[4], ld32((c.r[17].w[0] + 32u)));
    set32(c.r[3], c.r[29].w[0] + c.r[5].w[0]);
    set32(c.r[2], c.r[29].w[0] + 4u);
    st32((c.r[3].w[0]), c.r[16].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    st32((c.r[2].w[0]), c.r[4].w[0]);
    set32(c.r[3], c.r[29].w[0] + 8u);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], 0u + 64u);
    set32(c.r[2], c.r[29].w[0] + 12u);
    st32((c.r[3].w[0]), c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[19], c.r[19].w[0] + 1u);
    st32((c.r[2].w[0]), 0u);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 17;
L_00107308:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107310u); c.r[5].d[0] = c.r[19].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 565u, depth + 1u); else { c.pc = 0x00103F60u; return; } if (c.pc != 0x00107310u) [[unlikely]] return; }
L_00107310:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));  if (t) { goto L_00107348; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00100000u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 2;
L_00107320:
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[4].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107320u | kUnwind; return; } goto L_00107320; } }
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107308u | kUnwind; return; } goto L_00107308; }
    c.r[31].d[0] = ld64((c.r[29].w[0] + 112u));
    c.budget -= 1;
L_00107348:
    c.r[20].d[0] = ld64((c.r[29].w[0] + 96u));
    c.budget -= 1;
L_0010734C:
    c.r[19].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00107368:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[31].d[0]);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[16].d[0] = c.r[4].d[0] + 0ull;  if (t) { goto L_00107388; } }
    c.budget -= 1;
L_00107380:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107388u);  if (depth < kMaxDepth) unit_0001(c, 373u, depth + 1u); else { c.pc = 0x001071A0u; return; } if (c.pc != 0x00107388u) [[unlikely]] return; }
L_00107388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107390u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0001(c, 370u, depth + 1u); else { c.pc = 0x00107148u; return; } if (c.pc != 0x00107390u) [[unlikely]] return; }
L_00107390:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; c.r[4].d[0] = c.r[2].d[0] + 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107380u | kUnwind; return; } goto L_00107380; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001073A0u);  if (depth < kMaxDepth) unit_0000(c, 416u, depth + 1u); else { c.pc = 0x00103AC0u; return; } if (c.pc != 0x001073A0u) [[unlikely]] return; }
L_001073A0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107388u | kUnwind; return; } goto L_00107388; } }
L_001073A8:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 22152u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_001073F8; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001073E0u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001073E0u) [[unlikely]] return; }
L_001073E0:
    st32((c.r[16].w[0] + 22152u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001073ECu); c.r[4].d[0] = c.r[29].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001073ECu) [[unlikely]] return; }
L_001073EC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st32((c.r[3].w[0] + 22156u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 3;
L_001073F8:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00107408:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107420u); c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 391u, depth + 1u); else { c.pc = 0x001073A8u; return; } if (c.pc != 0x00107420u) [[unlikely]] return; }
L_00107420:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107428u); set32(c.r[4], ld32((c.r[17].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00107428u) [[unlikely]] return; }
L_00107428:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[16], c.r[3].w[0] + 15808u);
    set32(c.r[3], c.r[16].w[0] + 512u);
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[5].sd[0] = static_cast<std::int32_t>(0x10000000u);  if (t) { goto L_00107470; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 2;
L_00107448:
    c.budget -= 2;
    if (c.r[2].d[0] != 0ull) { set32(c.r[16], c.r[16].w[0] + 16u);  goto L_00107464; }
    set32(c.r[4], ld32((c.r[17].w[0] + 22152u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010745Cu); st32((c.r[16].w[0] + 4u), c.r[5].w[0]);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x0010745Cu) [[unlikely]] return; }
L_0010745C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[16].d[0] + 0ull;  if (t) { goto L_0010747C; } }
L_00107464:
    c.r[2].d[0] = c.r[16].d[0] < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[2], ld32((c.r[16].w[0] + 4u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107448u | kUnwind; return; } goto L_00107448; }
L_00107470:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107478u); set32(c.r[4], ld32((c.r[17].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00107478u) [[unlikely]] return; }
L_00107478:
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 1;
L_0010747C:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107490:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001074ACu); c.r[17].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 391u, depth + 1u); else { c.pc = 0x001073A8u; return; } if (c.pc != 0x001074ACu) [[unlikely]] return; }
L_001074AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001074B4u); set32(c.r[4], ld32((c.r[17].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x001074B4u) [[unlikely]] return; }
L_001074B4:
    c.r[3].d[0] = c.r[16].d[0] < static_cast<std::uint64_t>(32ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_001074D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001074C8u); set32(c.r[4], ld32((c.r[17].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001074C8u) [[unlikely]] return; }
L_001074C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull + 0ull;  if (t) { goto L_001074E8; } }
L_001074D0:
    set32(c.r[16], c.r[16].w[0] << 4);
    set32(c.r[2], c.r[2].w[0] + 15808u);
    set32(c.r[4], ld32((c.r[17].w[0] + 22152u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001074E4u); set32(c.r[16], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x001074E4u) [[unlikely]] return; }
L_001074E4:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.budget -= 1;
L_001074E8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00107500:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[29], c.r[29].w[0] - 48u);
    set32(c.r[6], c.r[2].w[0] + 14720u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x20000000u);
    st64((c.r[29].w[0] + 32u), c.r[31].d[0]);
    c.r[5].d[0] = c.r[6].d[0] | c.r[7].d[0];
    lwl(c.r[2], (c.r[5].w[0] + 3u));
    lwr(c.r[2], (c.r[5].w[0]));
    swl(c.r[2], (c.r[29].w[0] + 3u));
    set32(c.r[3], c.r[6].w[0] + 4u);
    swr(c.r[2], (c.r[29].w[0]));
    c.r[3].d[0] = c.r[3].d[0] | c.r[7].d[0];
    set32(c.r[4], c.r[6].w[0] + 8u);
    lwl(c.r[5], (c.r[3].w[0] + 3u));
    lwr(c.r[5], (c.r[3].w[0]));
    swl(c.r[5], (c.r[29].w[0] + 7u));
    swr(c.r[5], (c.r[29].w[0] + 4u));
    c.r[4].d[0] = c.r[4].d[0] | c.r[7].d[0];
    set32(c.r[2], c.r[6].w[0] + 12u);
    lwl(c.r[3], (c.r[4].w[0] + 3u));
    lwr(c.r[3], (c.r[4].w[0]));
    swl(c.r[3], (c.r[29].w[0] + 11u));
    swr(c.r[3], (c.r[29].w[0] + 8u));
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    lwl(c.r[10], (c.r[2].w[0] + 3u));
    lwr(c.r[10], (c.r[2].w[0]));
    swl(c.r[10], (c.r[29].w[0] + 15u));
    swr(c.r[10], (c.r[29].w[0] + 12u));
    set32(c.r[3], ld32((c.r[29].w[0])));
    c.budget -= 31;
    { const bool t = c.r[3].sd[0] < 0; set32(c.r[4], ld32((c.r[29].w[0] + 8u)));  if (t) { goto L_0010758C; } }
    set32(c.r[5], c.r[6].w[0] + 16u);
    set32(c.r[6], ld32((c.r[29].w[0] + 12u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010758Cu); c.r[5].d[0] = c.r[5].d[0] | c.r[7].d[0];  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x0010758Cu) [[unlikely]] return; }
L_0010758C:
    set32(c.r[2], ld32((c.r[29].w[0] + 4u)));
    set32(c.r[4], c.r[2].w[0] - 2u);
    c.r[3].d[0] = c.r[4].d[0] < static_cast<std::uint64_t>(25ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);  if (t) { goto L_00107840; } }
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + 3056u);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const std::uint32_t t = c.r[4].w[0];  c.pc = t; if (t - 0x00104000u < 16384u) { entry = entries_0001[(t - 0x00104000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001075B8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 14740u);
    c.r[6].d[0] = c.r[2].d[0] | c.r[3].d[0];
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.budget -= 7;
    if (c.r[2].sd[0] <= 0) { set32(c.r[2], ld32((c.r[6].w[0] + 4u)));  goto L_0010760C; }
    set32(c.r[8], ld32((c.r[6].w[0] + 8u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00107608; } }
    set32(c.r[7], c.r[6].w[0] + 16u);
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_001075E8:
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0])));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001075E8u | kUnwind; return; } goto L_001075E8; } }
L_00107608:
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.budget -= 1;
L_0010760C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] <= 0; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_00107844; } }
    set32(c.r[8], ld32((c.r[6].w[0] + 12u)));
    c.budget -= 3;
    { const bool t = c.r[2].sd[0] <= 0; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00107844; } }
    set32(c.r[7], c.r[6].w[0] + 80u);
    set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 2;
L_00107628:
    set32(c.r[4], c.r[8].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[6].w[0] + 4u)));
    c.r[2].d[0] = c.r[5].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[7].w[0] + c.r[5].w[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107628u | kUnwind; return; } goto L_00107628; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[29].w[0])));  if (t) { goto L_00107844; } }
L_00107650:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 14740u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[2], c.r[2].w[0] + 4u);
    lwl(c.r[6], (c.r[3].w[0] + 3u));
    lwr(c.r[6], (c.r[3].w[0]));
    swl(c.r[6], (c.r[29].w[0] + 19u));
    swr(c.r[6], (c.r[29].w[0] + 16u));
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[4].d[0];
    c.r[2].d[0] = c.r[2].d[0] & 7ull;
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[3].w[0] + 320u);  if (t) { goto L_001076E8; } }
L_0010768C:
    ldl(c.r[10], (c.r[3].w[0] + 7u));
    ldr(c.r[10], (c.r[3].w[0]));
    ldl(c.r[5], (c.r[3].w[0] + 15u));
    ldr(c.r[5], (c.r[3].w[0] + 8u));
    ldl(c.r[6], (c.r[3].w[0] + 23u));
    ldr(c.r[6], (c.r[3].w[0] + 16u));
    ldl(c.r[7], (c.r[3].w[0] + 31u));
    ldr(c.r[7], (c.r[3].w[0] + 24u));
    sdl(c.r[10], (c.r[4].w[0] + 7u));
    sdr(c.r[10], (c.r[4].w[0]));
    sdl(c.r[5], (c.r[4].w[0] + 15u));
    sdr(c.r[5], (c.r[4].w[0] + 8u));
    sdl(c.r[6], (c.r[4].w[0] + 23u));
    sdr(c.r[6], (c.r[4].w[0] + 16u));
    sdl(c.r[7], (c.r[4].w[0] + 31u));
    sdr(c.r[7], (c.r[4].w[0] + 24u));
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 21;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010768Cu | kUnwind; return; } goto L_0010768C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0010771C; } }
L_001076E8:
    c.r[8].d[0] = ld64((c.r[3].w[0]));
    c.r[9].d[0] = ld64((c.r[3].w[0] + 8u));
    c.r[10].d[0] = ld64((c.r[3].w[0] + 16u));
    c.r[5].d[0] = ld64((c.r[3].w[0] + 24u));
    st64((c.r[4].w[0]), c.r[8].d[0]);
    st64((c.r[4].w[0] + 8u), c.r[9].d[0]);
    st64((c.r[4].w[0] + 16u), c.r[10].d[0]);
    st64((c.r[4].w[0] + 24u), c.r[5].d[0]);
    set32(c.r[3], c.r[3].w[0] + 32u);
    set32(c.r[4], c.r[4].w[0] + 32u);
    c.budget -= 13;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001076E8u | kUnwind; return; } goto L_001076E8; } }
L_0010771C:
    lwl(c.r[6], (c.r[3].w[0] + 3u));
    lwr(c.r[6], (c.r[3].w[0]));
    swl(c.r[6], (c.r[4].w[0] + 3u));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; swr(c.r[6], (c.r[4].w[0]));  if (t) { goto L_00107840; } }
L_00107730:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[2], c.r[2].w[0] + 14740u);
    c.r[3].d[0] = c.r[2].d[0] | c.r[4].d[0];
    lwl(c.r[10], (c.r[3].w[0] + 3u));
    lwr(c.r[10], (c.r[3].w[0]));
    swl(c.r[10], (c.r[29].w[0] + 19u));
    swr(c.r[10], (c.r[29].w[0] + 16u));
    set32(c.r[2], c.r[2].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[4].d[0];
    set32(c.r[3], ld32((c.r[29].w[0] + 16u)));
    ldl(c.r[8], (c.r[2].w[0] + 7u));
    ldr(c.r[8], (c.r[2].w[0]));
    ldl(c.r[9], (c.r[2].w[0] + 15u));
    ldr(c.r[9], (c.r[2].w[0] + 8u));
    ldl(c.r[10], (c.r[2].w[0] + 23u));
    ldr(c.r[10], (c.r[2].w[0] + 16u));
    ldl(c.r[4], (c.r[2].w[0] + 31u));
    ldr(c.r[4], (c.r[2].w[0] + 24u));
    sdl(c.r[8], (c.r[3].w[0] + 7u));
    sdr(c.r[8], (c.r[3].w[0]));
    sdl(c.r[9], (c.r[3].w[0] + 15u));
    sdr(c.r[9], (c.r[3].w[0] + 8u));
    sdl(c.r[10], (c.r[3].w[0] + 23u));
    sdr(c.r[10], (c.r[3].w[0] + 16u));
    sdl(c.r[4], (c.r[3].w[0] + 31u));
    sdr(c.r[4], (c.r[3].w[0] + 24u));
    ldl(c.r[8], (c.r[2].w[0] + 39u));
    ldr(c.r[8], (c.r[2].w[0] + 32u));
    ldl(c.r[9], (c.r[2].w[0] + 47u));
    ldr(c.r[9], (c.r[2].w[0] + 40u));
    ldl(c.r[10], (c.r[2].w[0] + 55u));
    ldr(c.r[10], (c.r[2].w[0] + 48u));
    ldl(c.r[4], (c.r[2].w[0] + 63u));
    ldr(c.r[4], (c.r[2].w[0] + 56u));
    sdl(c.r[8], (c.r[3].w[0] + 39u));
    sdr(c.r[8], (c.r[3].w[0] + 32u));
    sdl(c.r[9], (c.r[3].w[0] + 47u));
    sdr(c.r[9], (c.r[3].w[0] + 40u));
    sdl(c.r[10], (c.r[3].w[0] + 55u));
    sdr(c.r[10], (c.r[3].w[0] + 48u));
    sdl(c.r[4], (c.r[3].w[0] + 63u));
    c.budget -= 44;
    { const bool t = 0ull == 0ull; sdr(c.r[4], (c.r[3].w[0] + 56u));  if (t) { goto L_00107840; } }
L_001077E0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[7].sd[0] = static_cast<std::int32_t>(0x20000000u);
    set32(c.r[5], c.r[2].w[0] + 14740u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[7].d[0];
    set32(c.r[2], c.r[5].w[0] + 4u);
    c.r[2].d[0] = c.r[2].d[0] | c.r[7].d[0];
    lwl(c.r[6], (c.r[3].w[0] + 3u));
    lwr(c.r[6], (c.r[3].w[0]));
    swl(c.r[6], (c.r[29].w[0] + 19u));
    swr(c.r[6], (c.r[29].w[0] + 16u));
    lwl(c.r[3], (c.r[2].w[0] + 3u));
    lwr(c.r[3], (c.r[2].w[0]));
    swl(c.r[3], (c.r[29].w[0] + 23u));
    swr(c.r[3], (c.r[29].w[0] + 20u));
    set32(c.r[6], ld32((c.r[29].w[0] + 20u)));
    c.r[2].d[0] = c.r[6].d[0] < static_cast<std::uint64_t>(1025ll) ? 1ull : 0ull;
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8u);  if (t) { goto L_00107834; } }
    set32(c.r[2], 0u + 1024u);
    set32(c.r[6], 0u + 1024u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    c.budget -= 3;
L_00107834:
    set32(c.r[4], ld32((c.r[29].w[0] + 16u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107840u); c.r[5].d[0] = c.r[7].d[0] | c.r[5].d[0];  if (depth < kMaxDepth) unit_0005(c, 230u, depth + 1u); else { c.pc = 0x00116C60u; return; } if (c.pc != 0x00107840u) [[unlikely]] return; }
L_00107840:
    set32(c.r[4], ld32((c.r[29].w[0])));
    c.budget -= 1;
L_00107844:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] >= 0; c.r[7].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_001078AC; } }
    set32(c.r[2], 0u - c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[7].w[0] + 22016u)));
    c.r[6].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[29].w[0]), c.r[2].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[6].d[0]; c.r[5].d[0] = 0ull + 0ull;  if (t) { goto L_00107878; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[7].w[0] + 22016u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001078B8; } }
    c.budget -= 1;
L_00107878:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_0010787C:
    c.r[2].d[0] = c.r[5].sd[0] < 32ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[7].w[0] + 22016u);  if (t) { goto L_001078B4; } }
    set32(c.r[3], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[6].d[0]; set32(c.r[5], c.r[5].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0010787Cu | kUnwind; return; } goto L_0010787C; } }
    set32(c.r[2], 0u - 1u);
    st32((c.r[3].w[0]), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));  if (t) { goto L_001078B8; } }
L_001078AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001078B4u);  if (depth < kMaxDepth) unit_0000(c, 450u, depth + 1u); else { c.pc = 0x00103BD0u; return; } if (c.pc != 0x001078B4u) [[unlikely]] return; }
L_001078B4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 1;
L_001078B8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_001078C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    set32(c.r[3], 0u - 1u);
    st64((c.r[29].w[0] + 32u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[31].d[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 22148u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));  if (t) { goto L_00107900; } }
    set32(c.r[2], 0u + 1u);
    st32((c.r[29].w[0] + 20u), 0u);
    st32((c.r[29].w[0] + 4u), c.r[2].w[0]);
    c.r[4].d[0] = c.r[29].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001078F8u); st32((c.r[29].w[0] + 8u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x001078F8u) [[unlikely]] return; }
L_001078F8:
    st32((c.r[16].w[0] + 22148u), c.r[2].w[0]);
    c.r[31].d[0] = ld64((c.r[29].w[0] + 48u));
    c.budget -= 2;
L_00107900:
    c.r[16].d[0] = ld64((c.r[29].w[0] + 32u));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00107910:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107920u);  if (depth < kMaxDepth) unit_0001(c, 418u, depth + 1u); else { c.pc = 0x001078C0u; return; } if (c.pc != 0x00107920u) [[unlikely]] return; }
L_00107920:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010792Cu); set32(c.r[4], ld32((c.r[2].w[0] + 22148u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x0010792Cu) [[unlikely]] return; }
L_0010792C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00107940:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.budget -= 3;
    { set32(c.r[4], ld32((c.r[2].w[0] + 22148u)));  if (c.budget < 0 && preempt(c)) { c.pc = 0x00103BC0u | kUnwind; return; } [[clang::musttail]] return unit_0000(c, 448u, depth); }
L_00107950:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    c.r[19].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 64u), c.r[20].d[0]);
    c.r[18].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[4], 0u + 27u);
    st64((c.r[29].w[0] + 80u), c.r[31].d[0]);
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107984u); set32(c.r[20], c.r[17].w[0] + 16448u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00107984u) [[unlikely]] return; }
L_00107984:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[3], ld32((c.r[2].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0010799C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0010799Cu);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x0010799Cu) [[unlikely]] return; }
L_0010799C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079A4u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x001079A4u) [[unlikely]] return; }
L_001079A4:
    set32(c.r[16], ld32((c.r[17].w[0] + 16448u)));
    st32((c.r[20].w[0] + 4u), c.r[18].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079B4u); st32((c.r[17].w[0] + 16448u), c.r[19].w[0]);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x001079B4u) [[unlikely]] return; }
L_001079B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001079BCu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x001079BCu) [[unlikely]] return; }
L_001079BC:
    c.r[2].d[0] = c.r[16].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 9;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001079E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[2], ld32((c.r[5].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st64((c.r[29].w[0]), c.r[31].d[0]);  if (t) { goto L_001079F8; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001079F8u); set32(c.r[4], ld32((c.r[5].w[0] + 4u)));  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001079F8u) [[unlikely]] return; }
L_001079F8:
    set_interrupts(c, true);
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00107A10:
    set32(c.r[29], c.r[29].w[0] - 112u);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 16u), c.r[16].d[0]);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 80u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 64u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 48u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 32u), c.r[17].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[31].d[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A3Cu); set32(c.r[17], c.r[16].w[0] + 16448u);  if (depth < kMaxDepth) unit_0001(c, 282u, depth + 1u); else { c.pc = 0x00106448u; return; } if (c.pc != 0x00107A3Cu) [[unlikely]] return; }
L_00107A3C:
    st32((c.r[16].w[0] + 16448u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A48u); st32((c.r[17].w[0] + 4u), 0u);  if (depth < kMaxDepth) unit_0002(c, 450u, depth + 1u); else { c.pc = 0x0010BD40u; return; } if (c.pc != 0x00107A48u) [[unlikely]] return; }
L_00107A48:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 29952u);
    set32(c.r[6], c.r[6].w[0] + 16384u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A64u); c.r[4].d[0] = c.r[4].d[0] | 17ull;  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x00107A64u) [[unlikely]] return; }
L_00107A64:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00100000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x80000000u);
    set32(c.r[5], c.r[5].w[0] + 31200u);
    c.r[6].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A7Cu); c.r[4].d[0] = c.r[4].d[0] | 19ull;  if (depth < kMaxDepth) unit_0001(c, 262u, depth + 1u); else { c.pc = 0x00106060u; return; } if (c.pc != 0x00107A7Cu) [[unlikely]] return; }
L_00107A7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107A84u); c.r[19].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (depth < kMaxDepth) unit_0002(c, 452u, depth + 1u); else { c.pc = 0x0010BD88u; return; } if (c.pc != 0x00107A84u) [[unlikely]] return; }
L_00107A84:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], c.r[19].w[0] + 16320u);  if (t) { goto L_00107AB8; } }
    c.budget -= 1;
L_00107A90:
    set32(c.r[3], 0u - 1u);
    c.budget -= 2;
L_00107A98:
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107A98u | kUnwind; return; } goto L_00107A98; } }
    set32(c.r[16], c.r[19].w[0] + 16320u);
    c.budget -= 1;
L_00107AB8:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.r[4].d[0] = c.r[16].d[0] + 0ull;
    c.r[5].d[0] = c.r[5].d[0] | 1ull;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107ACCu); c.r[6].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 330u, depth + 1u); else { c.pc = 0x00106AB8u; return; } if (c.pc != 0x00107ACCu) [[unlikely]] return; }
L_00107ACC:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] < 0; set32(c.r[2], 0u - 1u);  if (t) { goto L_00107BB8; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 36u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107A90u | kUnwind; return; } goto L_00107A90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107AE8u); c.r[20].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (depth < kMaxDepth) unit_0001(c, 391u, depth + 1u); else { c.pc = 0x001073A8u; return; } if (c.pc != 0x00107AE8u) [[unlikely]] return; }
L_00107AE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107AF0u); set32(c.r[4], ld32((c.r[20].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00107AF0u) [[unlikely]] return; }
L_00107AF0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[3], c.r[3].w[0] + 15808u);
    set32(c.r[4], c.r[3].w[0] + 512u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[18].sd[0] = static_cast<std::int32_t>(0x00580000u);  if (t) { goto L_00107B34; } }
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 2;
L_00107B10:
    st32((c.r[3].w[0] + 4u), 0u);
    set32(c.r[3], c.r[3].w[0] + 16u);
    c.r[2].d[0] = c.r[3].d[0] < c.r[4].d[0] ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00107B10u | kUnwind; return; } goto L_00107B10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[20].w[0] + 22152u)));  if (t) { goto L_00107B40; } }
L_00107B34:
    c.r[17].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[16].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[4], ld32((c.r[20].w[0] + 22152u)));
    c.budget -= 3;
L_00107B40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B48u); set32(c.r[16], c.r[16].w[0] + 14656u);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00107B48u) [[unlikely]] return; }
L_00107B48:
    set32(c.r[3], c.r[17].w[0] + 14720u);
    set32(c.r[4], c.r[19].w[0] + 16320u);
    st32((c.r[18].w[0] + 11456u), c.r[3].w[0]);
    set32(c.r[7], c.r[18].w[0] + 11456u);
    st32((c.r[29].w[0]), 0u);
    set32(c.r[5], 0u + 255u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 4u);
    c.r[9].d[0] = c.r[16].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107B78u); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00107B78u) [[unlikely]] return; }
L_00107B78:
    c.budget -= 2;
    if (c.r[2].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  goto L_00107B8C; }
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65535ull;  if (t) { goto L_00107BB8; } }
L_00107B8C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[2].d[0] = c.r[16].d[0] | c.r[2].d[0];
    c.r[4].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[9], c.r[5].w[0] + 16360u);
    lwl(c.r[6], (c.r[2].w[0] + 3u));
    lwr(c.r[6], (c.r[2].w[0]));
    swl(c.r[6], (c.r[9].w[0] + 3u));
    swr(c.r[6], (c.r[9].w[0]));
    set32(c.r[3], 0u + 1u);
    st32((c.r[4].w[0] + 22144u), c.r[3].w[0]);
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 11;
L_00107BB8:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 16u));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 112u);  c.pc = t; return; }
L_00107BD8:
    set32(c.r[29], c.r[29].w[0] - 80u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    st64((c.r[29].w[0] + 48u), c.r[19].d[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 16u), c.r[17].d[0]);
    set32(c.r[19], c.r[2].w[0] + 20012u);
    st64((c.r[29].w[0] + 32u), c.r[18].d[0]);
    set32(c.r[17], c.r[3].w[0] + 16360u);
    st64((c.r[29].w[0] + 64u), c.r[31].d[0]);
    c.r[18].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0]), c.r[16].d[0]);
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    c.r[5].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C14u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x00107C14u) [[unlikely]] return; }
L_00107C14:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00107C44; } }
    c.r[4].d[0] = c.r[17].d[0] + 0ull;
    set32(c.r[5], ld32((c.r[16].w[0] + 22160u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C2Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x00107C2Cu) [[unlikely]] return; }
L_00107C2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], ld32((c.r[16].w[0] + 22160u)));  if (t) { goto L_00107C44; } }
    c.r[4].d[0] = c.r[19].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C40u); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 227u, depth + 1u); else { c.pc = 0x00116BC8u; return; } if (c.pc != 0x00107C40u) [[unlikely]] return; }
L_00107C40:
    c.r[18].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00107C44:
    c.r[2].d[0] = c.r[18].d[0] + 0ull;
    c.r[31].d[0] = ld64((c.r[29].w[0] + 64u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 48u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 32u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 16u));
    c.r[16].d[0] = ld64((c.r[29].w[0]));
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00107C68:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0]), c.r[31].d[0]);
    st32((c.r[2].w[0] + 22144u), 0u);
    set32(c.r[4], c.r[4].w[0] + 16360u);
    c.r[5].d[0] = 0ull + 0ull;
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107C8Cu); set32(c.r[6], 0u + 4u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x00107C8Cu) [[unlikely]] return; }
L_00107C8C:
    c.r[31].d[0] = ld64((c.r[29].w[0]));
    c.r[2].d[0] = 0ull + 0ull;
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00107CA0:
    set32(c.r[29], c.r[29].w[0] - 336u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    st64((c.r[29].w[0] + 176u), c.r[23].d[0]);
    c.r[16].d[0] = c.r[4].d[0] + 0ull;
    st64((c.r[29].w[0] + 192u), c.r[30].d[0]);
    c.r[23].d[0] = c.r[5].d[0] + 0ull;
    st64((c.r[29].w[0] + 80u), c.r[17].d[0]);
    c.r[4].d[0] = 0ull + 0ull;
    st64((c.r[29].w[0] + 208u), c.r[31].d[0]);
    c.r[30].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 160u), c.r[22].d[0]);
    set32(c.r[17], c.r[30].w[0] + 11520u);
    st64((c.r[29].w[0] + 144u), c.r[21].d[0]);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    st64((c.r[29].w[0] + 288u), c.r[6].d[0]);
    st64((c.r[29].w[0] + 296u), c.r[7].d[0]);
    st64((c.r[29].w[0] + 304u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 312u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 320u), c.r[10].d[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107CFCu); st64((c.r[29].w[0] + 328u), c.r[11].d[0]);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00107CFCu) [[unlikely]] return; }
L_00107CFC:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00107D14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D14u);  if (depth < kMaxDepth) unit_0001(c, 432u, depth + 1u); else { c.pc = 0x00107A10u; return; } if (c.pc != 0x00107D14u) [[unlikely]] return; }
L_00107D14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D1Cu);  if (depth < kMaxDepth) unit_0001(c, 446u, depth + 1u); else { c.pc = 0x00107BD8u; return; } if (c.pc != 0x00107D1Cu) [[unlikely]] return; }
L_00107D1C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00107D38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D2Cu);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00107D2Cu) [[unlikely]] return; }
L_00107D2C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFFFE0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] | 65532ull;  if (t) { goto L_00107EF4; } }
L_00107D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D40u);  if (depth < kMaxDepth) unit_0001(c, 394u, depth + 1u); else { c.pc = 0x00107408u; return; } if (c.pc != 0x00107D40u) [[unlikely]] return; }
L_00107D40:
    c.r[19].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    if (c.r[19].d[0] != 0ull) { c.r[3].d[0] = ld8((c.r[16].w[0]));  goto L_00107D5C; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107D54u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00107D54u) [[unlikely]] return; }
L_00107D54:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 19u);  if (t) { goto L_00107EF4; } }
L_00107D5C:
    c.r[5].d[0] = 0ull + 0ull;
    set32(c.r[7], ld32((c.r[29].w[0] + 288u)));
    set32(c.r[2], c.r[3].w[0] << 24);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[17].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00107DB4; } }
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 6;
L_00107D88:
    c.r[2].d[0] = c.r[5].sd[0] < 1024ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[16].w[0] + c.r[5].w[0]);  if (t) { goto L_00107DC4; } }
    set32(c.r[4], c.r[17].w[0] + c.r[5].w[0]);
    c.r[3].d[0] = ld8((c.r[2].w[0]));
    st8((c.r[4].w[0] + 20u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[3].w[0] << 24);
    c.budget -= 6;
    if (c.r[3].d[0] != 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00107D88u | kUnwind; return; } goto L_00107D88; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1024u);  if (t) { goto L_00107DC8; } }
L_00107DB4:
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[18], c.r[29].w[0] + 48u);
    c.r[22].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    c.budget -= 4;
L_00107DC4:
    set32(c.r[2], 0u + 1024u);
    c.budget -= 1;
L_00107DC8:
    c.budget -= 2;
    if (c.r[5].d[0] == c.r[2].d[0]) { st8((c.r[17].w[0] + 1043u), static_cast<std::uint8_t>(0u));  goto L_00107DD0; }
L_00107DD0:
    set32(c.r[2], c.r[6].w[0] + 15808u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x6FFF0000u);
    set32(c.r[2], c.r[19].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    set32(c.r[21], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    c.r[3].d[0] = c.r[23].d[0] & c.r[3].d[0];
    st32((c.r[17].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], 0u + 1u);
    st32((c.r[17].w[0] + 16u), c.r[7].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 20u), c.r[2].w[0]);
    set32(c.r[20], c.r[20].w[0] + 14656u);
    st32((c.r[17].w[0] + 1044u), c.r[21].w[0]);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E10u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00107E10u) [[unlikely]] return; }
L_00107E10:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    st32((c.r[17].w[0] + 4u), c.r[18].w[0]);
    set32(c.r[2], 0u + 4u);
    st32((c.r[17].w[0]), c.r[16].w[0]);
    st32((c.r[17].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[22].w[0] + 16320u);
    set32(c.r[7], c.r[30].w[0] + 11520u);
    c.r[5].d[0] = 0ull + 0ull;
    st32((c.r[29].w[0]), 0u);
    c.r[6].d[0] = 0ull + 0ull;
    set32(c.r[8], 0u + 1048u);
    c.r[9].d[0] = c.r[20].d[0] + 0ull;
    set32(c.r[10], 0u + 4u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E4Cu); c.r[11].d[0] = 0ull + 0ull;  if (depth < kMaxDepth) unit_0001(c, 342u, depth + 1u); else { c.pc = 0x00106C88u; return; } if (c.pc != 0x00107E4Cu) [[unlikely]] return; }
L_00107E4C:
    c.budget -= 2;
    { const bool t = c.r[2].sd[0] >= 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x20000000u);  if (t) { goto L_00107E6C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E5Cu); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00107E5Cu) [[unlikely]] return; }
L_00107E5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E64u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00107E64u) [[unlikely]] return; }
L_00107E64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00107EF4; } }
L_00107E6C:
    c.r[2].d[0] = c.r[20].d[0] | c.r[2].d[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E78u); set32(c.r[17], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00107E78u) [[unlikely]] return; }
L_00107E78:
    c.budget -= 2;
    { const bool t = c.r[17].d[0] != 0ull;  if (t) { goto L_00107E90; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E88u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00107E88u) [[unlikely]] return; }
L_00107E88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 11u);  if (t) { goto L_00107EF4; } }
L_00107E90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107E98u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00107E98u) [[unlikely]] return; }
L_00107E98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EA0u); c.r[4].d[0] = c.r[16].d[0] + 0ull;  if (depth < kMaxDepth) unit_0000(c, 446u, depth + 1u); else { c.pc = 0x00103BB0u; return; } if (c.pc != 0x00107EA0u) [[unlikely]] return; }
L_00107EA0:
    set32(c.r[3], ld32((c.r[29].w[0] + 48u)));
    c.budget -= 3;
    { const bool t = c.r[3].sd[0] >= 0; c.r[16].sd[0] = static_cast<std::int32_t>(0x003A0000u);  if (t) { goto L_00107EC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EB4u); set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00107EB4u) [[unlikely]] return; }
L_00107EB4:
    st32((c.r[19].w[0] + 4u), 0u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EC0u); set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00107EC0u) [[unlikely]] return; }
L_00107EC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[29].w[0] + 48u)));  if (t) { goto L_00107EF4; } }
L_00107EC8:
    c.r[17].d[0] = c.r[21].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107ED4u); set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));  if (depth < kMaxDepth) unit_0000(c, 452u, depth + 1u); else { c.pc = 0x00103BE0u; return; } if (c.pc != 0x00107ED4u) [[unlikely]] return; }
L_00107ED4:
    set32(c.r[3], ld32((c.r[19].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[29].w[0] + 48u)));
    set32(c.r[4], ld32((c.r[16].w[0] + 22152u)));
    c.r[3].d[0] = c.r[3].d[0] | c.r[23].d[0];
    st32((c.r[19].w[0] + 4u), c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107EF0u); st32((c.r[19].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0000(c, 448u, depth + 1u); else { c.pc = 0x00103BC0u; return; } if (c.pc != 0x00107EF0u) [[unlikely]] return; }
L_00107EF0:
    c.r[2].d[0] = c.r[17].d[0] + 0ull;
    c.budget -= 1;
L_00107EF4:
    c.r[31].d[0] = ld64((c.r[29].w[0] + 208u));
    c.r[30].d[0] = ld64((c.r[29].w[0] + 192u));
    c.r[23].d[0] = ld64((c.r[29].w[0] + 176u));
    c.r[22].d[0] = ld64((c.r[29].w[0] + 160u));
    c.r[21].d[0] = ld64((c.r[29].w[0] + 144u));
    c.r[20].d[0] = ld64((c.r[29].w[0] + 128u));
    c.r[19].d[0] = ld64((c.r[29].w[0] + 112u));
    c.r[18].d[0] = ld64((c.r[29].w[0] + 96u));
    c.r[17].d[0] = ld64((c.r[29].w[0] + 80u));
    c.r[16].d[0] = ld64((c.r[29].w[0] + 64u));
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 336u);  c.pc = t; return; }
L_00107F28:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st64((c.r[29].w[0] + 128u), c.r[20].d[0]);
    st64((c.r[29].w[0] + 96u), c.r[18].d[0]);
    c.r[20].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st64((c.r[29].w[0] + 64u), c.r[16].d[0]);
    set32(c.r[18], c.r[20].w[0] + 11520u);
    st64((c.r[29].w[0] + 144u), c.r[31].d[0]);
    st64((c.r[29].w[0] + 112u), c.r[19].d[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F50u); st64((c.r[29].w[0] + 80u), c.r[17].d[0]);  if (depth < kMaxDepth) unit_0001(c, 400u, depth + 1u); else { c.pc = 0x00107490u; return; } if (c.pc != 0x00107F50u) [[unlikely]] return; }
L_00107F50:
    c.r[16].d[0] = c.r[2].d[0] + 0ull;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F5Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0001(c, 420u, depth + 1u); else { c.pc = 0x00107910u; return; } if (c.pc != 0x00107F5Cu) [[unlikely]] return; }
L_00107F5C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003A0000u);
    set32(c.r[2], ld32((c.r[3].w[0] + 22144u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00107F7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F74u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00107F74u) [[unlikely]] return; }
L_00107F74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 1u);  if (t) { [[clang::musttail]] return unit_0002(c, 12u, depth); } }
L_00107F7C:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00107F90; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    c.budget -= 3;
    if (c.r[2].d[0] != 0ull) { set32(c.r[3], ld32((c.r[16].w[0])));  goto L_00107FA0; }
L_00107F90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107F98u);  if (depth < kMaxDepth) unit_0001(c, 423u, depth + 1u); else { c.pc = 0x00107940u; return; } if (c.pc != 0x00107F98u) [[unlikely]] return; }
L_00107F98:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u - 9u);  if (t) { [[clang::musttail]] return unit_0002(c, 12u, depth); } }
L_00107FA0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], c.r[2].w[0] + 15808u);
    set32(c.r[4], 0u + 1u);
    st32((c.r[18].w[0] + 12u), c.r[3].w[0]);
    set32(c.r[2], c.r[16].w[0] - c.r[2].w[0]);
    st32((c.r[29].w[0] + 20u), c.r[4].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 4));
    st32((c.r[18].w[0] + 16u), c.r[2].w[0]);
    set32(c.r[4], c.r[29].w[0] + 16u);
    st32((c.r[29].w[0] + 24u), 0u);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00107FD0u); st32((c.r[29].w[0] + 36u), 0u);  if (depth < kMaxDepth) unit_0000(c, 444u, depth + 1u); else { c.pc = 0x00103BA0u; return; } if (c.pc != 0x00107FD0u) [[unlikely]] return; }
L_00107FD0:
    c.r[17].d[0] = c.r[2].d[0] + 0ull;
    set32(c.r[3], c.r[29].w[0] + 48u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00580000u);
    st32((c.r[20].w[0] + 11520u), c.r[17].w[0]);
    set32(c.r[19], c.r[2].w[0] + 14656u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00580000u);
    set32(c.r[2], 0u + 4u);
    st32((c.r[18].w[0] + 4u), c.r[3].w[0]);
    st32((c.r[18].w[0] + 8u), c.r[2].w[0]);
    set32(c.r[4], c.r[4].w[0] + 16320u);
    c.r[7].d[0] = c.r[18].d[0] + 0ull;
    set32(c.r[5], 0u + 1u);
    c.budget -= 12;
    [[clang::musttail]] return unit_0002(c, 1u, depth);
}

}
