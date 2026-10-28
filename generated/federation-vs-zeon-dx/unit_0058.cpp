#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0058[4096] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    8, 9, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0,
    0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0,
    98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0,
    104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116,
    0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0,
    0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166,
    0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0,
    0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 186, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0,
    0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0,
    0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0,
    0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0,
    0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0,
    0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0,
    0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0,
    411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0,
    0, 0, 416, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_0058(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00260000;
    case 2u: goto L_0026000C;
    case 3u: goto L_0026001C;
    case 4u: goto L_00260030;
    case 5u: goto L_00260060;
    case 6u: goto L_00260080;
    case 7u: goto L_002600A0;
    case 8u: goto L_00260100;
    case 9u: goto L_00260104;
    case 10u: goto L_00260110;
    case 11u: goto L_00260118;
    case 12u: goto L_00260130;
    case 13u: goto L_00260148;
    case 14u: goto L_00260150;
    case 15u: goto L_00260184;
    case 16u: goto L_002601B0;
    case 17u: goto L_002601CC;
    case 18u: goto L_002601D4;
    case 19u: goto L_00260218;
    case 20u: goto L_0026022C;
    case 21u: goto L_00260238;
    case 22u: goto L_0026024C;
    case 23u: goto L_00260260;
    case 24u: goto L_00260274;
    case 25u: goto L_002602C8;
    case 26u: goto L_002602E0;
    case 27u: goto L_002602F0;
    case 28u: goto L_00260314;
    case 29u: goto L_00260340;
    case 30u: goto L_00260370;
    case 31u: goto L_0026038C;
    case 32u: goto L_00260398;
    case 33u: goto L_002603B0;
    case 34u: goto L_002603BC;
    case 35u: goto L_002603CC;
    case 36u: goto L_002603E0;
    case 37u: goto L_00260400;
    case 38u: goto L_00260440;
    case 39u: goto L_00260448;
    case 40u: goto L_0026045C;
    case 41u: goto L_0026047C;
    case 42u: goto L_00260488;
    case 43u: goto L_002604A0;
    case 44u: goto L_002604AC;
    case 45u: goto L_002604D0;
    case 46u: goto L_002604F0;
    case 47u: goto L_00260560;
    case 48u: goto L_00260568;
    case 49u: goto L_00260580;
    case 50u: goto L_002605A0;
    case 51u: goto L_002605DC;
    case 52u: goto L_002605F0;
    case 53u: goto L_00260624;
    case 54u: goto L_00260640;
    case 55u: goto L_002606C4;
    case 56u: goto L_002606F8;
    case 57u: goto L_00260708;
    case 58u: goto L_00260710;
    case 59u: goto L_00260730;
    case 60u: goto L_00260770;
    case 61u: goto L_00260778;
    case 62u: goto L_0026078C;
    case 63u: goto L_002607AC;
    case 64u: goto L_002607B8;
    case 65u: goto L_002607D0;
    case 66u: goto L_002607DC;
    case 67u: goto L_00260800;
    case 68u: goto L_00260810;
    case 69u: goto L_0026083C;
    case 70u: goto L_0026087C;
    case 71u: goto L_00260888;
    case 72u: goto L_002608B0;
    case 73u: goto L_002608F0;
    case 74u: goto L_002608FC;
    case 75u: goto L_00260910;
    case 76u: goto L_00260920;
    case 77u: goto L_00260930;
    case 78u: goto L_00260940;
    case 79u: goto L_00260960;
    case 80u: goto L_00260980;
    case 81u: goto L_00260998;
    case 82u: goto L_002609A4;
    case 83u: goto L_002609B4;
    case 84u: goto L_002609F4;
    case 85u: goto L_00260A04;
    case 86u: goto L_00260A10;
    case 87u: goto L_00260A1C;
    case 88u: goto L_00260A28;
    case 89u: goto L_00260A34;
    case 90u: goto L_00260A48;
    case 91u: goto L_00260A54;
    case 92u: goto L_00260A70;
    case 93u: goto L_00260A90;
    case 94u: goto L_00260AB0;
    case 95u: goto L_00260AD0;
    case 96u: goto L_00260ADC;
    case 97u: goto L_00260AEC;
    case 98u: goto L_00260B00;
    case 99u: goto L_00260B0C;
    case 100u: goto L_00260B18;
    case 101u: goto L_00260B5C;
    case 102u: goto L_00260B68;
    case 103u: goto L_00260B74;
    case 104u: goto L_00260B80;
    case 105u: goto L_00260BA4;
    case 106u: goto L_00260BB0;
    case 107u: goto L_00260BBC;
    case 108u: goto L_00260BC8;
    case 109u: goto L_00260BE0;
    case 110u: goto L_00260BF0;
    case 111u: goto L_00260BFC;
    case 112u: goto L_00260C20;
    case 113u: goto L_00260C48;
    case 114u: goto L_00260C64;
    case 115u: goto L_00260C70;
    case 116u: goto L_00260C7C;
    case 117u: goto L_00260C90;
    case 118u: goto L_00260CA0;
    case 119u: goto L_00260CCC;
    case 120u: goto L_00260CEC;
    case 121u: goto L_00260D08;
    case 122u: goto L_00260D30;
    case 123u: goto L_00260D70;
    case 124u: goto L_00260D80;
    case 125u: goto L_00260E54;
    case 126u: goto L_00260E60;
    case 127u: goto L_00260E70;
    case 128u: goto L_00260EA0;
    case 129u: goto L_00260ED0;
    case 130u: goto L_00260F60;
    case 131u: goto L_00260F90;
    case 132u: goto L_00260FA0;
    case 133u: goto L_00260FAC;
    case 134u: goto L_00260FB8;
    case 135u: goto L_00260FD0;
    case 136u: goto L_00261050;
    case 137u: goto L_00261094;
    case 138u: goto L_002610A4;
    case 139u: goto L_002610B0;
    case 140u: goto L_002610BC;
    case 141u: goto L_002610C8;
    case 142u: goto L_002610DC;
    case 143u: goto L_002610E8;
    case 144u: goto L_00261114;
    case 145u: goto L_002611A0;
    case 146u: goto L_002611D0;
    case 147u: goto L_002611E0;
    case 148u: goto L_002611F8;
    case 149u: goto L_00261208;
    case 150u: goto L_00261224;
    case 151u: goto L_0026122C;
    case 152u: goto L_00261264;
    case 153u: goto L_0026126C;
    case 154u: goto L_0026127C;
    case 155u: goto L_00261298;
    case 156u: goto L_00261350;
    case 157u: goto L_00261370;
    case 158u: goto L_0026137C;
    case 159u: goto L_002613AC;
    case 160u: goto L_002613C0;
    case 161u: goto L_002613D0;
    case 162u: goto L_002613F0;
    case 163u: goto L_00261410;
    case 164u: goto L_00261490;
    case 165u: goto L_002614C4;
    case 166u: goto L_002614FC;
    case 167u: goto L_00261520;
    case 168u: goto L_0026156C;
    case 169u: goto L_002615D4;
    case 170u: goto L_002615F8;
    case 171u: goto L_00261604;
    case 172u: goto L_00261610;
    case 173u: goto L_0026161C;
    case 174u: goto L_00261630;
    case 175u: goto L_0026166C;
    case 176u: goto L_002616A0;
    case 177u: goto L_002616D8;
    case 178u: goto L_002616F0;
    case 179u: goto L_00261718;
    case 180u: goto L_00261720;
    case 181u: goto L_00261734;
    case 182u: goto L_00261740;
    case 183u: goto L_0026175C;
    case 184u: goto L_00261768;
    case 185u: goto L_00261778;
    case 186u: goto L_00261784;
    case 187u: goto L_002617A0;
    case 188u: goto L_002617B0;
    case 189u: goto L_002617F8;
    case 190u: goto L_00261820;
    case 191u: goto L_00261840;
    case 192u: goto L_00261850;
    case 193u: goto L_002618CC;
    case 194u: goto L_002618E8;
    case 195u: goto L_00261904;
    case 196u: goto L_00261920;
    case 197u: goto L_00261A20;
    case 198u: goto L_00261A30;
    case 199u: goto L_00261A40;
    case 200u: goto L_00261B48;
    case 201u: goto L_00261B58;
    case 202u: goto L_00261B70;
    case 203u: goto L_00261C74;
    case 204u: goto L_00261C84;
    case 205u: goto L_00261C90;
    case 206u: goto L_00261D10;
    case 207u: goto L_00261D20;
    case 208u: goto L_00261D70;
    case 209u: goto L_00261E34;
    case 210u: goto L_00261EC8;
    case 211u: goto L_00261F20;
    case 212u: goto L_00262010;
    case 213u: goto L_00262024;
    case 214u: goto L_00262044;
    case 215u: goto L_0026204C;
    case 216u: goto L_00262054;
    case 217u: goto L_0026205C;
    case 218u: goto L_00262070;
    case 219u: goto L_00262084;
    case 220u: goto L_00262094;
    case 221u: goto L_002620A4;
    case 222u: goto L_002620B4;
    case 223u: goto L_002620C4;
    case 224u: goto L_002620D4;
    case 225u: goto L_002620E4;
    case 226u: goto L_002620F4;
    case 227u: goto L_00262110;
    case 228u: goto L_00262124;
    case 229u: goto L_00262134;
    case 230u: goto L_00262144;
    case 231u: goto L_00262154;
    case 232u: goto L_00262170;
    case 233u: goto L_00262184;
    case 234u: goto L_00262194;
    case 235u: goto L_002621A4;
    case 236u: goto L_002621C0;
    case 237u: goto L_002621D4;
    case 238u: goto L_002621E4;
    case 239u: goto L_00262200;
    case 240u: goto L_00262214;
    case 241u: goto L_00262224;
    case 242u: goto L_00262234;
    case 243u: goto L_00262244;
    case 244u: goto L_00262254;
    case 245u: goto L_00262270;
    case 246u: goto L_00262284;
    case 247u: goto L_00262294;
    case 248u: goto L_002622A4;
    case 249u: goto L_002622B4;
    case 250u: goto L_002622D0;
    case 251u: goto L_002622E4;
    case 252u: goto L_002622F4;
    case 253u: goto L_00262304;
    case 254u: goto L_00262314;
    case 255u: goto L_00262324;
    case 256u: goto L_00262344;
    case 257u: goto L_00262360;
    case 258u: goto L_00262374;
    case 259u: goto L_00262384;
    case 260u: goto L_002623A0;
    case 261u: goto L_002623B4;
    case 262u: goto L_002623C4;
    case 263u: goto L_002623D4;
    case 264u: goto L_002623F0;
    case 265u: goto L_00262404;
    case 266u: goto L_00262414;
    case 267u: goto L_00262424;
    case 268u: goto L_00262440;
    case 269u: goto L_00262454;
    case 270u: goto L_00262464;
    case 271u: goto L_00262480;
    case 272u: goto L_00262494;
    case 273u: goto L_002624A4;
    case 274u: goto L_002624C0;
    case 275u: goto L_002624D0;
    case 276u: goto L_002624E0;
    case 277u: goto L_002624F4;
    case 278u: goto L_00262510;
    case 279u: goto L_00262524;
    case 280u: goto L_00262540;
    case 281u: goto L_00262554;
    case 282u: goto L_00262564;
    case 283u: goto L_00262574;
    case 284u: goto L_00262590;
    case 285u: goto L_002625A4;
    case 286u: goto L_002625B4;
    case 287u: goto L_002625D0;
    case 288u: goto L_002625E4;
    case 289u: goto L_002625F4;
    case 290u: goto L_00262610;
    case 291u: goto L_00262624;
    case 292u: goto L_00262634;
    case 293u: goto L_00262644;
    case 294u: goto L_00262654;
    case 295u: goto L_00262670;
    case 296u: goto L_00262680;
    case 297u: goto L_00262690;
    case 298u: goto L_002626A0;
    case 299u: goto L_002626B0;
    case 300u: goto L_002626E4;
    case 301u: goto L_002626F8;
    case 302u: goto L_0026270C;
    case 303u: goto L_0026274C;
    case 304u: goto L_00262768;
    case 305u: goto L_00262790;
    case 306u: goto L_002627B4;
    case 307u: goto L_00262800;
    case 308u: goto L_00262884;
    case 309u: goto L_002628FC;
    case 310u: goto L_00262910;
    case 311u: goto L_002629DC;
    case 312u: goto L_00262A08;
    case 313u: goto L_00262A24;
    case 314u: goto L_00262A68;
    case 315u: goto L_00262A7C;
    case 316u: goto L_00262AE4;
    case 317u: goto L_00262B38;
    case 318u: goto L_00262B44;
    case 319u: goto L_00262B88;
    case 320u: goto L_00262B94;
    case 321u: goto L_00262BB4;
    case 322u: goto L_00262BE0;
    case 323u: goto L_00262C60;
    case 324u: goto L_00262CB4;
    case 325u: goto L_00262CD8;
    case 326u: goto L_00262CEC;
    case 327u: goto L_00262CF4;
    case 328u: goto L_00262D18;
    case 329u: goto L_00262D24;
    case 330u: goto L_00262D44;
    case 331u: goto L_00262D5C;
    case 332u: goto L_00262D90;
    case 333u: goto L_00262D9C;
    case 334u: goto L_00262DF0;
    case 335u: goto L_00262E14;
    case 336u: goto L_00262E28;
    case 337u: goto L_00262E30;
    case 338u: goto L_00262E58;
    case 339u: goto L_00262E78;
    case 340u: goto L_00262E90;
    case 341u: goto L_00262EC0;
    case 342u: goto L_00262ECC;
    case 343u: goto L_00262EEC;
    case 344u: goto L_00262F64;
    case 345u: goto L_00262F78;
    case 346u: goto L_00263024;
    case 347u: goto L_00263050;
    case 348u: goto L_0026306C;
    case 349u: goto L_002630B0;
    case 350u: goto L_002630C4;
    case 351u: goto L_0026312C;
    case 352u: goto L_00263180;
    case 353u: goto L_002631C4;
    case 354u: goto L_002631E4;
    case 355u: goto L_00263210;
    case 356u: goto L_00263290;
    case 357u: goto L_002632E4;
    case 358u: goto L_00263308;
    case 359u: goto L_0026331C;
    case 360u: goto L_00263324;
    case 361u: goto L_0026334C;
    case 362u: goto L_0026336C;
    case 363u: goto L_00263384;
    case 364u: goto L_002633B8;
    case 365u: goto L_0026340C;
    case 366u: goto L_00263430;
    case 367u: goto L_00263444;
    case 368u: goto L_0026344C;
    case 369u: goto L_00263474;
    case 370u: goto L_00263494;
    case 371u: goto L_002634AC;
    case 372u: goto L_002634E0;
    case 373u: goto L_00263500;
    case 374u: goto L_00263640;
    case 375u: goto L_00263724;
    case 376u: goto L_00263730;
    case 377u: goto L_00263744;
    case 378u: goto L_00263750;
    case 379u: goto L_0026377C;
    case 380u: goto L_002637A4;
    case 381u: goto L_002637C0;
    case 382u: goto L_0026381C;
    case 383u: goto L_00263844;
    case 384u: goto L_00263850;
    case 385u: goto L_00263860;
    case 386u: goto L_00263894;
    case 387u: goto L_002638B8;
    case 388u: goto L_002638C0;
    case 389u: goto L_002638CC;
    case 390u: goto L_0026390C;
    case 391u: goto L_00263920;
    case 392u: goto L_0026397C;
    case 393u: goto L_00263994;
    case 394u: goto L_002639A0;
    case 395u: goto L_002639AC;
    case 396u: goto L_002639C0;
    case 397u: goto L_002639D0;
    case 398u: goto L_00263A08;
    case 399u: goto L_00263A10;
    case 400u: goto L_00263A1C;
    case 401u: goto L_00263A30;
    case 402u: goto L_00263A40;
    case 403u: goto L_00263A74;
    case 404u: goto L_00263A98;
    case 405u: goto L_00263AA0;
    case 406u: goto L_00263AAC;
    case 407u: goto L_00263AEC;
    case 408u: goto L_00263B00;
    case 409u: goto L_00263B5C;
    case 410u: goto L_00263B74;
    case 411u: goto L_00263B80;
    case 412u: goto L_00263B8C;
    case 413u: goto L_00263BA0;
    case 414u: goto L_00263BB0;
    case 415u: goto L_00263BE4;
    case 416u: goto L_00263C08;
    case 417u: goto L_00263C10;
    case 418u: goto L_00263C1C;
    case 419u: goto L_00263C5C;
    case 420u: goto L_00263C70;
    case 421u: goto L_00263CC0;
    case 422u: goto L_00263CC8;
    case 423u: goto L_00263CD4;
    case 424u: goto L_00263CF0;
    case 425u: goto L_00263D00;
    case 426u: goto L_00263D38;
    case 427u: goto L_00263D40;
    case 428u: goto L_00263D4C;
    case 429u: goto L_00263D60;
    case 430u: goto L_00263D70;
    case 431u: goto L_00263DA4;
    case 432u: goto L_00263DC8;
    case 433u: goto L_00263DD0;
    case 434u: goto L_00263DDC;
    case 435u: goto L_00263E1C;
    case 436u: goto L_00263E30;
    case 437u: goto L_00263E90;
    case 438u: goto L_00263EAC;
    case 439u: goto L_00263EB8;
    case 440u: goto L_00263EC4;
    case 441u: goto L_00263EE0;
    case 442u: goto L_00263EF0;
    case 443u: goto L_00263F24;
    case 444u: goto L_00263F48;
    case 445u: goto L_00263F50;
    case 446u: goto L_00263F5C;
    case 447u: goto L_00263F9C;
    case 448u: goto L_00263FB0;
    default: bad_entry(c, 0x00260000u); return;
    }
L_00260000:
    set32(c.r[5], 0u + 48u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026000Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x0026000Cu) [[unlikely]] return; }
L_0026000C:
    set32(c.r[3], 0u + 4u);
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st8((c.r[16].w[0] + 276u), static_cast<std::uint8_t>(0u));
    st8((c.r[16].w[0] + 277u), static_cast<std::uint8_t>(0u));
    c.budget -= 4;
L_0026001C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260030:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 11872u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 12;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00260060u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00260060u) [[unlikely]] return; }
L_00260060:
    c.f[1] = ld32((c.r[16].w[0] + 7816u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260080u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00260080u) [[unlikely]] return; }
L_00260080:
    st32((c.r[16].w[0] + 7816u), c.r[2].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002600A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42700000u);
    c.f[1] = c.r[2].w[0];
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF9F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.f[0] = ld32((c.r[4].w[0] + 104u));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01800000u);
    mmi::paddub(c.r[6], c.r[5], c.r[0]);
    fpu_div(c, 0u, c.f[0], c.f[1]);
    c.f[0] = c.f[0] ^ fp::kSign;
    st32((c.r[4].w[0] + 108u), c.f[0]);
    set32(c.r[7], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[7].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 25;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260104u); st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00260104u) [[unlikely]] return; }
    goto L_00260104;
L_00260100:
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    c.budget -= 1;
L_00260104:
    set32(c.r[5], c.r[16].w[0] + 1424u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260110u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00260110u) [[unlikely]] return; }
L_00260110:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260118u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00260118u) [[unlikely]] return; }
L_00260118:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260130:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260148u); set32(c.r[5], c.r[16].w[0] + 1424u);  if (depth < kMaxDepth) unit_0092(c, 304u, depth + 1u); else { c.pc = 0x0034B690u; return; } if (c.pc != 0x00260148u) [[unlikely]] return; }
L_00260148:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260150u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00260150u) [[unlikely]] return; }
L_00260150:
    c.f[0] = ld32((c.r[16].w[0] + 104u));
    c.f[1] = 0u;
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = !(c.fcr31 & kFpuCondition); set32(c.r[5], 0u + 1u);  if (t) { goto L_00260178; } }
    st32((c.r[16].w[0] + 108u), 0u);
    st32((c.r[16].w[0] + 104u), 0u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
L_00260178:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260184u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x00260184u) [[unlikely]] return; }
L_00260184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002601A0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41200000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[4].w[0]));
    st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);
    c.budget -= 5;
L_002601A0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002601B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[5], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002601CCu); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 37u, depth + 1u); else { c.pc = 0x0034CA40u; return; } if (c.pc != 0x002601CCu) [[unlikely]] return; }
L_002601CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002601D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002601D4u) [[unlikely]] return; }
L_002601D4:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_0026024C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260218u); st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260218u) [[unlikely]] return; }
L_00260218:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00260244; } }
    set32(c.r[5], 0u + 40u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026022Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0026022Cu) [[unlikely]] return; }
L_0026022C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260238u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00260238u) [[unlikely]] return; }
L_00260238:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00260250; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00260244:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026024Cu);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x0026024Cu) [[unlikely]] return; }
L_0026024C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00260250:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260260:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260274u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00260274u) [[unlikely]] return; }
L_00260274:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_002602C8; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[3].d[0] = c.r[2].d[0] | 65535ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00600000u);
    set32(c.r[5], 0u + 48u);
    c.r[3].d[0] = c.r[6].d[0] & c.r[3].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002602C8u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x002602C8u) [[unlikely]] return; }
L_002602C8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002602E0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002602F0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260334; } }
    set32(c.r[5], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01800000u);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00260334; } }
L_00260314:
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[3].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);
    c.budget -= 8;
L_00260334:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260340:
    set32(c.r[6], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0xFE7F0000u);
    c.r[5].d[0] = c.r[3].d[0] | 65535ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00600000u);
    c.r[5].d[0] = c.r[6].d[0] & c.r[5].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[4].w[0] + 1260u)));
    c.r[3].d[0] = c.r[5].d[0] | c.r[3].d[0];
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1260u), c.r[3].w[0]);  c.pc = t; return; }
L_00260370:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 112u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[5].d[0] = c.r[16].d[0] << 48;
    c.budget -= 7;
L_0026038C:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260398u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x00260398u) [[unlikely]] return; }
L_00260398:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[1].d[0] = c.r[16].sd[0] < 115ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 48;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026038Cu | kUnwind; return; } goto L_0026038C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 37u, depth + 1u); else { c.pc = 0x002E47D0u; return; } if (c.pc != 0x002603B0u) [[unlikely]] return; }
L_002603B0:
    st32((c.r[17].w[0] + 28u), c.r[2].w[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603BCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007E(c, 222u, depth + 1u); else { c.pc = 0x002F9EF0u; return; } if (c.pc != 0x002603BCu) [[unlikely]] return; }
L_002603BC:
    set32(c.r[6], 0u + 6u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002603CCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002603CCu) [[unlikely]] return; }
L_002603CC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002603E0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x40800000u);
    st32((c.r[4].w[0] + 8020u), c.r[3].w[0]);
    st8((c.r[4].w[0] + 322u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[4].w[0] + 320u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_00260400:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1592u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_00260498; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[18], c.r[2].w[0] + 108u);
    c.r[1].d[0] = c.r[18].sd[0] < 136ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00260474; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00260440:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260448u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260448u) [[unlikely]] return; }
L_00260448:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 2u);  goto L_00260464; }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026045Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0026045Cu) [[unlikely]] return; }
L_0026045C:
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 2;
L_00260464:
    c.r[2].d[0] = c.r[18].sd[0] < 136ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260440u | kUnwind; return; } goto L_00260440; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00260474:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026047Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x0026047Cu) [[unlikely]] return; }
L_0026047C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260488u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00260488u) [[unlikely]] return; }
L_00260488:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002604A0; } }
L_00260498:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604A0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002604A0u) [[unlikely]] return; }
L_002604A0:
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002604ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x002604ACu) [[unlikely]] return; }
L_002604AC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_002604D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[2], c.r[28].w[0] - 29128u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002604F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 736u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[3], c.r[16].w[0] + 320u);  if (t) { goto L_00260520; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00260560; } }
L_00260520:
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 12u);
    st16((c.r[16].w[0] + 806u), static_cast<std::uint16_t>(c.r[2].w[0]));
    st32((c.r[16].w[0] + 96u), 0u);
    st32((c.r[16].w[0] + 1308u), 0u);
    st32((c.r[16].w[0] + 1304u), 0u);
    set32(c.r[2], 0u + 2u);
    st32((c.r[16].w[0] + 108u), 0u);
    st8((c.r[16].w[0] + 736u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[6], 0u + 3u);
    set32(c.r[7], 0u + 15u);
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260560u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 137u, depth + 1u); else { c.pc = 0x00265FE0u; return; } if (c.pc != 0x00260560u) [[unlikely]] return; }
L_00260560:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260568u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 49u, depth + 1u); else { c.pc = 0x00260580u; return; } if (c.pc != 0x00260568u) [[unlikely]] return; }
L_00260568:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00260580:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 321u)));
    set32(c.r[2], c.r[28].w[0] - 29120u);
    set32(c.r[5], c.r[4].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002605A0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 730u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 9;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00260610; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_002605D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00260628; } }
L_002605D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605DCu);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x002605DCu) [[unlikely]] return; }
L_002605DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002605F8; } }
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002605F0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 105u, depth + 1u); else { c.pc = 0x002D56C0u; return; } if (c.pc != 0x002605F0u) [[unlikely]] return; }
L_002605F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00260624; } }
L_002605F8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 730u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[17].w[0] + 730u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00260624; } }
L_00260610:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00260624; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260624u); set32(c.r[5], 0u + 60u);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x00260624u) [[unlikely]] return; }
L_00260624:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00260628:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260640:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 730u)));
    set32(c.r[2], 0u + 2u);
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; mmi::paddub(c.r[16], c.r[5], c.r[0]);  if (t) { goto L_002606E0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00260690; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + 1u);  if (t) { goto L_00260684; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_002606FC; } }
    set32(c.r[2], c.r[4].w[0] + 1u);
    c.budget -= 1;
L_00260684:
    st8((c.r[17].w[0] + 730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[16].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[17].w[0] + 108u), 0u);
    c.budget -= 3;
L_00260690:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[12] = 0u;
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[5], ld32((c.r[17].w[0] + 84u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002606C4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 121u, depth + 1u); else { c.pc = 0x002D5980u; return; } if (c.pc != 0x002606C4u) [[unlikely]] return; }
L_002606C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    set32(c.r[2], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002606F8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 730u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[17].w[0] + 730u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_002606E0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0])));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002606F8; } }
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002606F8u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 89u, depth + 1u); else { c.pc = 0x0026D960u; return; } if (c.pc != 0x002606F8u) [[unlikely]] return; }
L_002606F8:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_002606FC:
    st8((c.r[17].w[0] + 274u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260708u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 93u, depth + 1u); else { c.pc = 0x00264EF0u; return; } if (c.pc != 0x00260708u) [[unlikely]] return; }
L_00260708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260710u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 39u, depth + 1u); else { c.pc = 0x002D8810u; return; } if (c.pc != 0x00260710u) [[unlikely]] return; }
L_00260710:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260730:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1592u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[2].sd[0] < 14ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[16].w[0] + 320u);  if (t) { goto L_002607C8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    set32(c.r[18], c.r[2].w[0] + 41u);
    c.r[1].d[0] = c.r[18].sd[0] < 69ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_002607A4; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00260770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260778u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260778u) [[unlikely]] return; }
L_00260778:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 2u);  goto L_00260794; }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026078Cu); mmi::paddub(c.r[5], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x0026078Cu) [[unlikely]] return; }
L_0026078C:
    set32(c.r[18], c.r[18].w[0] + 2u);
    c.budget -= 2;
L_00260794:
    c.r[2].d[0] = c.r[18].sd[0] < 69ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], 0u + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260770u | kUnwind; return; } goto L_00260770; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_002607A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607ACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x002607ACu) [[unlikely]] return; }
L_002607AC:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607B8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002607B8u) [[unlikely]] return; }
L_002607B8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 2u)));
    c.r[2].d[0] = c.r[2].d[0] ^ 1ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_002607D0; } }
L_002607C8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607D0u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x002607D0u) [[unlikely]] return; }
L_002607D0:
    set32(c.r[5], 0u + 60u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002607DCu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x002607DCu) [[unlikely]] return; }
L_002607DC:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00260800:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260810:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 8055u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 7;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00260890; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026083Cu);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x0026083Cu) [[unlikely]] return; }
L_0026083C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00260890; } }
    c.f[0] = ld32((c.r[16].w[0] + 2352u));
    set32(c.r[2], c.r[29].w[0] + 36u);
    set32(c.r[5], c.r[29].w[0] + 32u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 32u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2356u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2360u));
    st32((c.r[29].w[0] + 40u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026087Cu); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x0026087Cu) [[unlikely]] return; }
L_0026087C:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260888u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00260888u) [[unlikely]] return; }
L_00260888:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00260900; } }
L_00260890:
    c.r[4].d[0] = ld8((c.r[16].w[0] + 8055u));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002608FC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002608B0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0074(c, 75u, depth + 1u); else { c.pc = 0x002D07A0u; return; } if (c.pc != 0x002608B0u) [[unlikely]] return; }
L_002608B0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002608FC; } }
    c.f[0] = ld32((c.r[16].w[0] + 2544u));
    set32(c.r[2], c.r[29].w[0] + 52u);
    set32(c.r[5], c.r[29].w[0] + 48u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[29].w[0] + 48u), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2548u));
    st32((c.r[2].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[16].w[0] + 2552u));
    st32((c.r[29].w[0] + 56u), c.f[0]);
    c.f[1] = ld32((c.r[16].w[0] + 8024u));
    c.f[0] = ld32((c.r[2].w[0]));
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002608F0u); st32((c.r[2].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_004B(c, 27u, depth + 1u); else { c.pc = 0x0022C720u; return; } if (c.pc != 0x002608F0u) [[unlikely]] return; }
L_002608F0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002608FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x002608FCu) [[unlikely]] return; }
L_002608FC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00260900:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00260910:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260920:
    set32(c.r[6], 0u + 7u);
    c.budget -= 3;
    { mmi::paddub(c.r[5], c.r[0], c.r[0]);  [[clang::musttail]] return unit_0081(c, 12u, depth); }
L_00260930:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260940:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[2], c.r[28].w[0] - 29112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00260960:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { st32((c.r[4].w[0] + 1200u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198960u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 51u, depth); }
L_00260980:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260998u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x00260998u) [[unlikely]] return; }
L_00260998:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002609A4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 124u, depth + 1u); else { c.pc = 0x00260D80u; return; } if (c.pc != 0x002609A4u) [[unlikely]] return; }
L_002609A4:
    mmi::paddub(c.r[16], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002609B4u); mmi::paddub(c.r[5], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 145u, depth + 1u); else { c.pc = 0x002611A0u; return; } if (c.pc != 0x002609B4u) [[unlikely]] return; }
L_002609B4:
    c.f[2] = ld32((c.r[17].w[0] + 7780u));
    c.f[1] = ld32((c.r[17].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[17].w[0] + 1200u), c.f[1]);  if (t) { goto L_00260A54; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 1592u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00260A40; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002609F4u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002609F4u) [[unlikely]] return; }
L_002609F4:
    set32(c.r[16], c.r[16].w[0] << 1);
    set32(c.r[5], c.r[16].w[0] + 6u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A04u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00260A04u) [[unlikely]] return; }
L_00260A04:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A10u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260A10u) [[unlikely]] return; }
L_00260A10:
    set32(c.r[5], c.r[16].w[0] + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A1Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_007A(c, 8u, depth + 1u); else { c.pc = 0x002E8110u; return; } if (c.pc != 0x00260A1Cu) [[unlikely]] return; }
L_00260A1C:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A28u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00260A28u) [[unlikely]] return; }
L_00260A28:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A34u); set32(c.r[5], 0u + 13u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00260A34u) [[unlikely]] return; }
L_00260A34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_00260A4C; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00260A40:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A48u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00260A48u) [[unlikely]] return; }
L_00260A48:
    set32(c.r[5], 0u + 32u);
    c.budget -= 1;
L_00260A4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260A54u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x00260A54u) [[unlikely]] return; }
L_00260A54:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260A70:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    set32(c.r[2], c.r[28].w[0] - 29104u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00260A90:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41F00000u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 7;
    { st32((c.r[4].w[0] + 1200u), c.r[2].w[0]);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00198960u | kUnwind; return; } [[clang::musttail]] return unit_0026(c, 51u, depth); }
L_00260AB0:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260AD0u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0076(c, 176u, depth + 1u); else { c.pc = 0x002DAED0u; return; } if (c.pc != 0x00260AD0u) [[unlikely]] return; }
L_00260AD0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260ADCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 124u, depth + 1u); else { c.pc = 0x00260D80u; return; } if (c.pc != 0x00260ADCu) [[unlikely]] return; }
L_00260ADC:
    mmi::paddub(c.r[19], c.r[2], c.r[0]);
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260AECu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 136u, depth + 1u); else { c.pc = 0x00261050u; return; } if (c.pc != 0x00260AECu) [[unlikely]] return; }
L_00260AEC:
    set32(c.r[2], c.r[19].w[0] + 1u);
    c.r[17].d[0] = c.r[2].d[0] & 3ull;
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B00u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 136u, depth + 1u); else { c.pc = 0x00261050u; return; } if (c.pc != 0x00260B00u) [[unlikely]] return; }
L_00260B00:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B0Cu); mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 130u, depth + 1u); else { c.pc = 0x00260F60u; return; } if (c.pc != 0x00260B0Cu) [[unlikely]] return; }
L_00260B0C:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B18u); mmi::paddub(c.r[5], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 130u, depth + 1u); else { c.pc = 0x00260F60u; return; } if (c.pc != 0x00260B18u) [[unlikely]] return; }
L_00260B18:
    c.f[2] = ld32((c.r[18].w[0] + 7780u));
    c.f[1] = ld32((c.r[18].w[0] + 1200u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[18].w[0] + 1200u), c.f[1]);  if (t) { goto L_00260BFC; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00260B84; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B5Cu); set32(c.r[19], c.r[19].w[0] << 1);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260B5Cu) [[unlikely]] return; }
L_00260B5C:
    set32(c.r[5], c.r[19].w[0] + 70u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B68u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00260B68u) [[unlikely]] return; }
L_00260B68:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B74u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260B74u) [[unlikely]] return; }
L_00260B74:
    set32(c.r[5], c.r[19].w[0] + 71u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260B80u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00260B80u) [[unlikely]] return; }
L_00260B80:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00260B84:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[18].w[0] + 1580u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00260BCC; } }
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BA4u); set32(c.r[17], c.r[17].w[0] << 1);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260BA4u) [[unlikely]] return; }
L_00260BA4:
    set32(c.r[5], c.r[17].w[0] + 70u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BB0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00260BB0u) [[unlikely]] return; }
L_00260BB0:
    mmi::paddub(c.r[4], c.r[18], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BBCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00260BBCu) [[unlikely]] return; }
L_00260BBC:
    set32(c.r[5], c.r[17].w[0] + 71u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BC8u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00260BC8u) [[unlikely]] return; }
L_00260BC8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00260BCC:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] == 0ull;  if (t) { goto L_00260BE0; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BE0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00260BE0u) [[unlikely]] return; }
L_00260BE0:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != 0ull; set32(c.r[5], 0u + 32u);  if (t) { goto L_00260BF4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BF0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00260BF0u) [[unlikely]] return; }
L_00260BF0:
    set32(c.r[5], 0u + 32u);
    c.budget -= 1;
L_00260BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260BFCu); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x00260BFCu) [[unlikely]] return; }
L_00260BFC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 7;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00260C20:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[4].w[0] + 352u)));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[16], c.r[17].w[0] + 320u);  if (t) { goto L_00260C64; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C48u);  if (depth < kMaxDepth) unit_007D(c, 127u, depth + 1u); else { c.pc = 0x002F5200u; return; } if (c.pc != 0x00260C48u) [[unlikely]] return; }
L_00260C48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 1u);  if (t) { goto L_00260C68; } }
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    st32((c.r[16].w[0] + 32u), c.r[2].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C64u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00260C64u) [[unlikely]] return; }
L_00260C64:
    set32(c.r[5], 0u + 1u);
    c.budget -= 1;
L_00260C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C70u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x00260C70u) [[unlikely]] return; }
L_00260C70:
    set32(c.r[5], 0u + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260C7Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x00260C7Cu) [[unlikely]] return; }
L_00260C7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00260C90:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260CA0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[16].w[0] + 320u);  if (t) { goto L_00260D50; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 1;
L_00260CCC:
    c.f[0] = ld32((c.r[18].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260CECu); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00260CECu) [[unlikely]] return; }
L_00260CEC:
    set32(c.r[17], c.r[17].w[0] + 1u);
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.r[2].d[0] = c.r[17].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260CCCu | kUnwind; return; } goto L_00260CCC; } }
    set32(c.r[17], 0u + 8192u);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_00260D08:
    set32(c.r[3], ld32((c.r[16].w[0] + 4620u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[1] = c.r[2].w[0];
    set32(c.r[2], c.r[3].w[0] + c.r[17].w[0]);
    c.f[0] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260D30u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00260D30u) [[unlikely]] return; }
L_00260D30:
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    st32((c.r[16].w[0] + 4620u), c.r[3].w[0]);
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16384u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[16], c.r[16].w[0] + 12u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00260D08u | kUnwind; return; } goto L_00260D08; } }
    c.budget -= 1;
L_00260D50:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00260D70:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00260D80:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    st32((c.r[29].w[0]), c.f[20]);
    c.budget -= 13;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00260DD0; } }
    set32(c.r[3], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[2], 0u - 8192u);
    c.r[3].d[0] = c.r[3].d[0] & 49152ull;
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_00260DE8; } }
L_00260DD0:
    set32(c.r[2], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[2], c.r[2].w[0] + 8192u);
    c.r[2].d[0] = c.r[2].d[0] & 49152ull;
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 6;
L_00260DE8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 1304u)));
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004F0000u);
    set32(c.r[7], ld32((c.r[20].w[0] + 84u)));
    set32(c.r[3], c.r[3].w[0] + c.r[18].w[0]);
    c.r[17].d[0] = c.r[3].d[0] << 48;
    set32(c.r[3], c.r[6].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[2], c.r[2].w[0] - 29020u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], c.r[7].w[0] + c.r[18].w[0]);
    c.r[21].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.r[16].d[0] = c.r[7].d[0] << 48;
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    c.budget -= 19;
    { const bool t = c.r[17].sd[0] >= 0; c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (t) { goto L_00260E40; } }
    set32(c.r[2], 0u - c.r[21].w[0]);
    c.r[21].d[0] = c.r[2].d[0] << 48;
    c.r[21].d[0] = static_cast<std::uint64_t>(c.r[21].sd[0] >> 48);
    c.budget -= 3;
L_00260E40:
    c.f[1] = c.r[21].w[0];
    c.f[0] = ld32((c.r[20].w[0] + 7780u));
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E54u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00260E54u) [[unlikely]] return; }
L_00260E54:
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E60u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x00260E60u) [[unlikely]] return; }
L_00260E60:
    c.f[20] = c.f[0];
    c.f[0] = c.r[17].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260E70u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x00260E70u) [[unlikely]] return; }
L_00260E70:
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);  if (t) { goto L_00260EDC; } }
    c.f[2] = c.r[21].w[0];
    c.f[0] = c.r[16].w[0];
    c.f[1] = ld32((c.r[20].w[0] + 7780u));
    c.f[2] = fp::cvt_s_w(c.f[2]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260EA0u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00260EA0u) [[unlikely]] return; }
L_00260EA0:
    c.f[0] = c.r[21].w[0];
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] - c.r[18].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    c.f[1] = ld32((c.r[20].w[0] + 7780u));
    c.f[0] = ld32((c.r[20].w[0] + 1304u));
    c.f[1] = fp::mul(c.f[2], c.f[1]);
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260ED0u); c.f[12] = fp::sub(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00260ED0u) [[unlikely]] return; }
L_00260ED0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);  if (t) { goto L_00260EF0; } }
    set32(c.r[2], c.r[16].w[0] + c.r[17].w[0]);
    c.budget -= 1;
L_00260EDC:
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    set32(c.r[2], c.r[16].w[0] - c.r[18].w[0]);
    st32((c.r[20].w[0] + 84u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1304u), 0u);
    c.budget -= 5;
L_00260EF0:
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[19].d[0] != c.r[2].d[0]; set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 14));  if (t) { goto L_00260F18; } }
    set32(c.r[2], c.r[18].w[0] + 8192u);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 14));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);  if (t) { goto L_00260F24; } }
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[18].w[0]) >> 14));
    c.budget -= 1;
L_00260F18:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 3;
L_00260F24:
    ld128((c.r[29].w[0] + 112u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 96u) & ~15u, c.r[21]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00260F60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    set32(c.r[2], c.r[16].w[0] + 6u);
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260F90u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00260F90u) [[unlikely]] return; }
L_00260F90:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FA0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x00260FA0u) [[unlikely]] return; }
L_00260FA0:
    set32(c.r[4], c.r[17].w[0] + 1328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FACu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x00260FACu) [[unlikely]] return; }
L_00260FAC:
    c.f[13] = ld32((c.r[29].w[0] + 72u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FB8u); c.f[12] = ld32((c.r[29].w[0] + 64u));  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x00260FB8u) [[unlikely]] return; }
L_00260FB8:
    set32(c.r[2], 0u - c.r[2].w[0]);
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);
    c.f[0] = c.r[18].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00260FD0u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x00260FD0u) [[unlikely]] return; }
L_00260FD0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x44400000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; set32(c.r[5], c.r[16].w[0] + 6u);  if (t) { goto L_0026100C; } }
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 4;
    { const bool t = c.r[3].sd[0] <= 0; set32(c.r[18], 0u - 768u);  if (t) { goto L_00261008; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[18], 0u + 768u);  if (t) { goto L_00261008; } }
    set32(c.r[18], 0u - 768u);
    c.budget -= 1;
L_00261008:
    set32(c.r[5], c.r[16].w[0] + 6u);
    c.budget -= 1;
L_0026100C:
    set32(c.r[4], c.r[5].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[17].w[0]);
    set32(c.r[4], ld32((c.r[5].w[0] + 4548u)));
    c.r[3].d[0] = c.r[18].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st32((c.r[5].w[0] + 4548u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 80u);  c.pc = t; return; }
L_00261050:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    set32(c.r[2], c.r[5].w[0] << 6);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[2].w[0] + 3504u));
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[4], c.r[17].w[0] + 2048u);
    mmi::paddub(c.r[16], c.r[5], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 3508u));
    st32((c.r[29].w[0] + 84u), c.f[0]);
    c.f[0] = ld32((c.r[2].w[0] + 3512u));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261094u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00261094u) [[unlikely]] return; }
L_00261094:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x70000000u);
    set32(c.r[4], ld32((c.r[1].w[0] + 244u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610A4u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 211u, depth + 1u); else { c.pc = 0x00102548u; return; } if (c.pc != 0x002610A4u) [[unlikely]] return; }
L_002610A4:
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610B0u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002610B0u) [[unlikely]] return; }
L_002610B0:
    set32(c.r[4], c.r[17].w[0] + 1328u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610BCu); set32(c.r[5], c.r[29].w[0] + 64u);  if (depth < kMaxDepth) unit_000E(c, 317u, depth + 1u); else { c.pc = 0x0013B970u; return; } if (c.pc != 0x002610BCu) [[unlikely]] return; }
L_002610BC:
    set32(c.r[4], c.r[29].w[0] + 64u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610C8u); set32(c.r[5], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_000F(c, 25u, depth + 1u); else { c.pc = 0x0013CB10u; return; } if (c.pc != 0x002610C8u) [[unlikely]] return; }
L_002610C8:
    c.f[1] = ld32((c.r[29].w[0] + 64u));
    c.f[0] = ld32((c.r[29].w[0] + 72u));
    c.facc = fp::mul(c.f[1], c.f[1]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610DCu); c.f[12] = fp::add(c.facc, fp::mul(c.f[0], c.f[0]));  if (depth < kMaxDepth) unit_000E(c, 293u, depth + 1u); else { c.pc = 0x0013B500u; return; } if (c.pc != 0x002610DCu) [[unlikely]] return; }
L_002610DC:
    c.f[12] = ld32((c.r[29].w[0] + 68u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002610E8u); c.f[13] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 289u, depth + 1u); else { c.pc = 0x0013B490u; return; } if (c.pc != 0x002610E8u) [[unlikely]] return; }
L_002610E8:
    set32(c.r[3], c.r[16].w[0] + 4u);
    set32(c.r[4], c.r[17].w[0] + 320u);
    set32(c.r[3], c.r[3].w[0] << 2);
    c.r[17].d[0] = c.r[2].d[0] << 48;
    set32(c.r[16], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0])));
    c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 48);
    set32(c.r[18], c.r[17].w[0] - c.r[2].w[0]);
    c.f[0] = c.r[18].w[0];
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261114u); c.f[12] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x00261114u) [[unlikely]] return; }
L_00261114:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43800000u);
    c.f[1] = c.r[3].w[0];
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[1]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[1].d[0] = c.r[17].sd[0] < 4097ll ? 1ull : 0ull;  if (t) { goto L_0026115C; } }
    c.budget -= 2;
    { const bool t = c.r[18].sd[0] <= 0;  if (t) { goto L_00261148; } }
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] + 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0026117C; } }
L_00261148:
    set32(c.r[3], ld32((c.r[16].w[0])));
    set32(c.r[3], c.r[3].w[0] - 256u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0]), c.r[3].w[0]);  if (t) { goto L_0026117C; } }
    c.r[1].d[0] = c.r[17].sd[0] < 4097ll ? 1ull : 0ull;
    c.budget -= 1;
L_0026115C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull; c.r[1].d[0] = c.r[17].sd[0] < -12288ll ? 1ull : 0ull;  if (t) { goto L_0026116C; } }
    set32(c.r[17], 0u + 4096u);
    c.r[1].d[0] = c.r[17].sd[0] < -12288ll ? 1ull : 0ull;
    c.budget -= 2;
L_0026116C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00261178; } }
    set32(c.r[17], 0u - 12288u);
    c.budget -= 1;
L_00261178:
    st32((c.r[16].w[0]), c.r[17].w[0]);
    c.budget -= 1;
L_0026117C:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_002611A0:
    set32(c.r[29], c.r[29].w[0] - 128u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    set32(c.r[2], c.r[5].w[0] << 1);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    set32(c.r[5], c.r[2].w[0] + 6u);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611D0u); st32((c.r[29].w[0]), c.f[20]);  if (depth < kMaxDepth) unit_0079(c, 358u, depth + 1u); else { c.pc = 0x002E7E30u; return; } if (c.pc != 0x002611D0u) [[unlikely]] return; }
L_002611D0:
    set32(c.r[4], c.r[18].w[0] + 2048u);
    c.r[16].d[0] = c.r[2].d[0] << 48;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611E0u); c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002611E0u) [[unlikely]] return; }
L_002611E0:
    set32(c.r[3], c.r[18].w[0] + 320u);
    set32(c.r[2], c.r[17].w[0] << 2);
    set32(c.r[17], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[17].w[0])));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002611F8u); set32(c.r[4], 0u - c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 4u, depth + 1u); else { c.pc = 0x0013C2F0u; return; } if (c.pc != 0x002611F8u) [[unlikely]] return; }
L_002611F8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[4], c.r[2].w[0] + 12016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261208u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 32u, depth + 1u); else { c.pc = 0x0013CC60u; return; } if (c.pc != 0x00261208u) [[unlikely]] return; }
L_00261208:
    c.f[1] = ld32((c.r[29].w[0] + 112u));
    c.f[0] = ld32((c.r[29].w[0] + 120u));
    set32(c.r[4], c.r[29].w[0] + 96u);
    st32((c.r[29].w[0] + 96u), c.f[1]);
    st32((c.r[29].w[0] + 100u), 0u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261224u); st32((c.r[29].w[0] + 104u), c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x00261224u) [[unlikely]] return; }
L_00261224:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026122Cu); set32(c.r[4], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 22u, depth + 1u); else { c.pc = 0x0013CA60u; return; } if (c.pc != 0x0026122Cu) [[unlikely]] return; }
L_0026122C:
    set32(c.r[19], c.r[29].w[0] + 116u);
    c.f[0] = 0u;
    c.f[20] = ld32((c.r[19].w[0]));
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 7;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; c.r[4].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_002612AC; } }
    fpu_compare(c, fp::key(c.f[0]) == fp::key(c.f[20]));
    c.budget -= 4;
    { const bool t = (c.fcr31 & kFpuCondition) != 0;  if (t) { goto L_002612A8; } }
    set32(c.r[4], c.r[29].w[0] + 96u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261264u); set32(c.r[5], c.r[29].w[0] + 112u);  if (depth < kMaxDepth) unit_000F(c, 33u, depth + 1u); else { c.pc = 0x0013CC90u; return; } if (c.pc != 0x00261264u) [[unlikely]] return; }
L_00261264:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026126Cu); c.f[12] = c.f[0];  if (depth < kMaxDepth) unit_000E(c, 285u, depth + 1u); else { c.pc = 0x0013B410u; return; } if (c.pc != 0x0026126Cu) [[unlikely]] return; }
L_0026126C:
    c.r[18].d[0] = c.r[2].d[0] << 48;
    c.f[12] = c.f[20];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026127Cu); c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 48);  if (depth < kMaxDepth) unit_000E(c, 291u, depth + 1u); else { c.pc = 0x0013B4D0u; return; } if (c.pc != 0x0026127Cu) [[unlikely]] return; }
L_0026127C:
    c.f[1] = ld32((c.r[19].w[0]));
    fpu_div(c, 12u, c.f[0], c.f[1]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261298u);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x00261298u) [[unlikely]] return; }
L_00261298:
    mmi::mult(c, 0, c.r[18].w[0], c.r[2].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[16].w[0] - c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 4;
L_002612A8:
    c.r[4].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_002612AC:
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.r[3].d[0] = c.r[4].d[0] & 32768ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002612E0; } }
    c.r[1].d[0] = c.r[4].sd[0] < -256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[4].sd[0] < 257ll ? 1ull : 0ull;  if (t) { goto L_002612D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 256u);  if (t) { goto L_002612E0; } }
    c.r[1].d[0] = c.r[4].sd[0] < 257ll ? 1ull : 0ull;
    c.budget -= 1;
L_002612D4:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_002612E0; } }
    set32(c.r[16], 0u + 256u);
    c.budget -= 1;
L_002612E0:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.r[16].d[0] = c.r[3].d[0] << 48;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 48);
    c.budget -= 6;
    { const bool t = c.r[16].sd[0] >= 0; c.r[3].d[0] = c.r[16].d[0] << 48;  if (t) { goto L_00261320; } }
    c.r[1].d[0] = c.r[16].sd[0] < -4096ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[16].sd[0] < 12289ll ? 1ull : 0ull;  if (t) { goto L_00261310; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[16], 0u - 4096u);  if (t) { goto L_0026131C; } }
    c.r[1].d[0] = c.r[16].sd[0] < 12289ll ? 1ull : 0ull;
    c.budget -= 1;
L_00261310:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_0026131C; } }
    set32(c.r[16], 0u + 12288u);
    c.budget -= 1;
L_0026131C:
    c.r[3].d[0] = c.r[16].d[0] << 48;
    c.budget -= 1;
L_00261320:
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    st32((c.r[17].w[0]), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 128u);  c.pc = t; return; }
L_00261350:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], 0u + 115u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00261388; } }
    c.r[5].d[0] = c.r[16].d[0] << 56;
    c.budget -= 1;
L_00261370:
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026137Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0049(c, 69u, depth + 1u); else { c.pc = 0x00224EF0u; return; } if (c.pc != 0x0026137Cu) [[unlikely]] return; }
L_0026137C:
    set32(c.r[2], c.r[16].w[0] + 1u);
    c.r[16].d[0] = c.r[2].d[0] << 56;
    c.r[16].d[0] = static_cast<std::uint64_t>(c.r[16].sd[0] >> 56);
    c.budget -= 3;
L_00261388:
    c.r[2].d[0] = c.r[16].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.r[1].d[0] = c.r[2].sd[0] < 119ll ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[1].d[0] != 0ull; c.r[5].d[0] = c.r[16].d[0] << 56;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00261370u | kUnwind; return; } goto L_00261370; } }
    set32(c.r[6], 0u + 8u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002613ACu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 12u, depth + 1u); else { c.pc = 0x00304300u; return; } if (c.pc != 0x002613ACu) [[unlikely]] return; }
L_002613AC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002613C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002613D0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12096u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00260000u < 16384u) { entry = entries_0058[(t - 0x00260000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_002613F0:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 729u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    set32(c.r[5], c.r[5].w[0] + 1u);
    st8((c.r[4].w[0] + 729u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 1200u), c.r[3].w[0]);  c.pc = t; return; }
L_00261410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[2] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7740u));
    c.f[0] = ld32((c.r[4].w[0] + 1200u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[0]);  if (t) { goto L_00261498; } }
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 729u)));
    c.r[6].sd[0] = static_cast<std::int32_t>(0x41000000u);
    set32(c.r[5], 0u + 2u);
    set32(c.r[3], 0u + 16384u);
    set32(c.r[7], c.r[7].w[0] + 1u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[7].w[0]));
    st8((c.r[16].w[0] + 730u), static_cast<std::uint8_t>(0u));
    st32((c.r[16].w[0] + 1200u), 0u);
    st32((c.r[16].w[0] + 1204u), c.r[6].w[0]);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[5].w[0]));
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(0u));
    st32((c.r[16].w[0] + 4624u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 1592u)));
    c.budget -= 15;
    { const bool t = c.r[3].sd[0] > 0;  if (t) { goto L_0026150C; } }
    set32(c.r[2], 0u + 3u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261490u); st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00261490u) [[unlikely]] return; }
L_00261490:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_00261510; } }
L_00261498:
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614C4u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002614C4u) [[unlikely]] return; }
L_002614C4:
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002614FCu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002614FCu) [[unlikely]] return; }
L_002614FC:
    set32(c.r[3], 0u + 16384u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    st32((c.r[16].w[0] + 4624u), c.r[3].w[0]);
    c.budget -= 4;
L_0026150C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00261510:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00261520:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[2] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[1] = ld32((c.r[4].w[0] + 7740u));
    c.f[0] = ld32((c.r[4].w[0] + 1200u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    fpu_compare(c, fp::key(c.f[0]) <= fp::key(c.f[2]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[0]);  if (t) { goto L_0026161C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026156C; } }
    set32(c.r[2], c.r[3].w[0] + 1u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026156Cu); st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0026156Cu) [[unlikely]] return; }
L_0026156C:
    c.f[2] = ld32((c.r[16].w[0] + 7740u));
    c.f[1] = ld32((c.r[16].w[0] + 1204u));
    c.f[0] = 0u;
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 9;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1204u), c.f[1]);  if (t) { goto L_0026161C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    if (c.r[3].sd[0] >= 0) { c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);  goto L_002615C4; }
    set32(c.r[3], 0u + 3u);
    st8((c.r[16].w[0] + 729u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1200u), c.r[3].w[0]);  if (t) { goto L_0026161C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41A00000u);
    c.budget -= 1;
L_002615C4:
    set32(c.r[5], 0u + 1u);
    st32((c.r[16].w[0] + 1204u), c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x002615D4u) [[unlikely]] return; }
L_002615D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026161C; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 164u)));
    set32(c.r[2], 0u + 47u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.r[5].d[0] = c.r[2].d[0] << 56;
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002615F8u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_007E(c, 176u, depth + 1u); else { c.pc = 0x002F9760u; return; } if (c.pc != 0x002615F8u) [[unlikely]] return; }
L_002615F8:
    set32(c.r[5], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261604u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 330u, depth + 1u); else { c.pc = 0x00197890u; return; } if (c.pc != 0x00261604u) [[unlikely]] return; }
L_00261604:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261610u); set32(c.r[5], 0u + 14u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00261610u) [[unlikely]] return; }
L_00261610:
    c.r[5].d[0] = ld8((c.r[16].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026161Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x0026161Cu) [[unlikely]] return; }
L_0026161C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00261630:
    set32(c.r[29], c.r[29].w[0] - 32u);
    c.f[0] = 0u;
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.f[2] = ld32((c.r[4].w[0] + 7740u));
    c.f[1] = ld32((c.r[4].w[0] + 1200u));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.f[1] = fp::sub(c.f[1], c.f[2]);
    fpu_compare(c, fp::key(c.f[1]) <= fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[4].w[0] + 1200u), c.f[1]);  if (t) { goto L_00261674; } }
    set32(c.r[5], 0u + 30u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026166Cu); st32((c.r[16].w[0] + 4624u), 0u);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x0026166Cu) [[unlikely]] return; }
L_0026166C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_002616E4; } }
L_00261674:
    c.f[1] = ld32((c.r[16].w[0] + 1200u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[2] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42B40000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 1u, c.f[1], c.f[2]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616A0u); c.f[12] = fp::mul(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002616A0u) [[unlikely]] return; }
L_002616A0:
    c.f[0] = c.r[2].w[0];
    c.r[6].sd[0] = static_cast<std::int32_t>(0x47800000u);
    c.f[2] = fp::cvt_s_w(c.f[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x43B40000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F000000u);
    c.f[1] = c.r[6].w[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::mul(c.f[1], c.f[2]);
    fpu_div(c, 1u, c.f[1], c.f[0]);
    c.f[0] = c.r[2].w[0];
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002616D8u); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002616D8u) [[unlikely]] return; }
L_002616D8:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    st32((c.r[16].w[0] + 4624u), c.r[3].w[0]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 3;
L_002616E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002616F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 1580u)));
    c.r[2].d[0] = c.r[2].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00261770; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 2;
L_00261718:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261720u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0077(c, 64u, depth + 1u); else { c.pc = 0x002DC7B0u; return; } if (c.pc != 0x00261720u) [[unlikely]] return; }
L_00261720:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00261744; }
    set32(c.r[5], c.r[16].w[0] + 78u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261734u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0079(c, 182u, depth + 1u); else { c.pc = 0x002E62A0u; return; } if (c.pc != 0x00261734u) [[unlikely]] return; }
L_00261734:
    c.r[5].d[0] = ld8((c.r[17].w[0] + 8384u));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261740u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0024(c, 106u, depth + 1u); else { c.pc = 0x00191900u; return; } if (c.pc != 0x00261740u) [[unlikely]] return; }
L_00261740:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_00261744:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00261718u | kUnwind; return; } goto L_00261718; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026175Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x0026175Cu) [[unlikely]] return; }
L_0026175C:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261768u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 33u, depth + 1u); else { c.pc = 0x00198530u; return; } if (c.pc != 0x00261768u) [[unlikely]] return; }
L_00261768:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[5], 0u + 48u);  if (t) { goto L_0026177C; } }
L_00261770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261778u);  if (depth < kMaxDepth) unit_0026(c, 38u, depth + 1u); else { c.pc = 0x001985A0u; return; } if (c.pc != 0x00261778u) [[unlikely]] return; }
L_00261778:
    set32(c.r[5], 0u + 48u);
    c.budget -= 1;
L_0026177C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261784u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 100u, depth + 1u); else { c.pc = 0x0026DB00u; return; } if (c.pc != 0x00261784u) [[unlikely]] return; }
L_00261784:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002617A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002617B0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_002617FC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 4624u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002617FC; } }
    c.f[1] = ld32((c.r[16].w[0] + 4624u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.r[2].d[0] = c.r[2].d[0] | 26214ull;
    c.f[0] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002617F8u); c.f[12] = fp::mul(c.f[1], c.f[0]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002617F8u) [[unlikely]] return; }
L_002617F8:
    st32((c.r[16].w[0] + 4624u), c.r[2].w[0]);
    c.budget -= 1;
L_002617FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026182C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 368u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026182C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261820u); set32(c.r[4], c.r[16].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00261820u) [[unlikely]] return; }
L_00261820:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026182C; } }
    st32((c.r[16].w[0] + 36u), 0u);
    c.budget -= 1;
L_0026182C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00261840:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[4].w[0] + 4624u), 0u);  c.pc = t; return; }
L_00261850:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = ld8((c.r[4].w[0] + 784u));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00261870; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261908; } }
L_00261870:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261888; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261908; } }
L_00261888:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 789u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026189C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261908; } }
L_0026189C:
    set32(c.r[2], ld32((c.r[16].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 63ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002618C4; } }
    c.r[2].d[0] = ld8((c.r[16].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002618C0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261908; } }
L_002618C0:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002618C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002618CCu);  if (depth < kMaxDepth) unit_0058(c, 202u, depth + 1u); else { c.pc = 0x00261B70u; return; } if (c.pc != 0x002618CCu) [[unlikely]] return; }
L_002618CC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002618E0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002618E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002618E8u);  if (depth < kMaxDepth) unit_0058(c, 199u, depth + 1u); else { c.pc = 0x00261A40u; return; } if (c.pc != 0x002618E8u) [[unlikely]] return; }
L_002618E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_002618FC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261908; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_002618FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261904u);  if (depth < kMaxDepth) unit_0058(c, 196u, depth + 1u); else { c.pc = 0x00261920u; return; } if (c.pc != 0x00261904u) [[unlikely]] return; }
L_00261904:
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 1;
L_00261908:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00261920:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261940; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261A30; } }
L_00261940:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002619B4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8427u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002619A0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0026197C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261984; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0026197C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00261A34; } }
L_00261984:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_00261A30; } }
L_002619A0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002619B4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261A30; } }
L_002619B4:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002619D8; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_002619F0; } }
L_002619D8:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 9ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002619F0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261A30; } }
L_002619F0:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(0u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 11984u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8427u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00261A28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A20u);  if (depth < kMaxDepth) unit_0058(c, 205u, depth + 1u); else { c.pc = 0x00261C90u; return; } if (c.pc != 0x00261A20u) [[unlikely]] return; }
L_00261A20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261A30; } }
L_00261A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261A30u);  if (depth < kMaxDepth) unit_0058(c, 208u, depth + 1u); else { c.pc = 0x00261D70u; return; } if (c.pc != 0x00261A30u) [[unlikely]] return; }
L_00261A30:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00261A34:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00261A40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261A60; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261B58; } }
L_00261A60:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261AD8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8428u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261AC4; } }
    set32(c.r[3], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261A9C; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 18ull;  if (t) { goto L_00261AA8; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00261A9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00261B5C; } }
    c.r[2].d[0] = c.r[3].d[0] & 18ull;
    c.budget -= 1;
L_00261AA8:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_00261B58; } }
L_00261AC4:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261AD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261B58; } }
L_00261AD8:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261AFC; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_00261B14; } }
L_00261AFC:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261B18; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261B58; } }
L_00261B14:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00261B18:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 12032u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8428u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00261B50; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B48u);  if (depth < kMaxDepth) unit_0058(c, 205u, depth + 1u); else { c.pc = 0x00261C90u; return; } if (c.pc != 0x00261B48u) [[unlikely]] return; }
L_00261B48:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261B58; } }
L_00261B50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261B58u);  if (depth < kMaxDepth) unit_0058(c, 208u, depth + 1u); else { c.pc = 0x00261D70u; return; } if (c.pc != 0x00261B58u) [[unlikely]] return; }
L_00261B58:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00261B5C:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00261B70:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 769u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261B90; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261C84; } }
L_00261B90:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 792u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C04; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8429u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261BF0; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261BCC; } }
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261BD4; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00261BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00261C88; } }
L_00261BD4:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], ld32((c.r[4].w[0] + 724u)));
    set32(c.r[3], 0u - 64u);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[3].w[0]);  if (t) { goto L_00261C84; } }
L_00261BF0:
    c.r[2].d[0] = ld8((c.r[4].w[0] + 766u));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C04; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261C84; } }
L_00261C04:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 766u));
    c.r[2].d[0] = c.r[3].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261C28; } }
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 724u), c.r[2].w[0]);  if (t) { goto L_00261C40; } }
L_00261C28:
    set32(c.r[2], ld32((c.r[4].w[0] + 724u)));
    c.r[2].d[0] = c.r[2].d[0] & 4ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00261C44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261C84; } }
L_00261C40:
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_00261C44:
    st8((c.r[4].w[0] + 766u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 745u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], c.r[2].w[0] + 12080u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8429u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], ld32((c.r[3].w[0])));  if (t) { goto L_00261C7C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C74u);  if (depth < kMaxDepth) unit_0058(c, 205u, depth + 1u); else { c.pc = 0x00261C90u; return; } if (c.pc != 0x00261C74u) [[unlikely]] return; }
L_00261C74:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00261C84; } }
L_00261C7C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261C84u);  if (depth < kMaxDepth) unit_0058(c, 208u, depth + 1u); else { c.pc = 0x00261D70u; return; } if (c.pc != 0x00261C84u) [[unlikely]] return; }
L_00261C84:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00261C88:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00261C90:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    set32(c.r[2], 0u + 33u);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00261CD8; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261CD8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261D50; } }
L_00261CD8:
    set32(c.r[16], ld32((c.r[20].w[0] + 1304u)));
    set32(c.r[17], ld32((c.r[20].w[0] + 1308u)));
    set32(c.r[18], ld32((c.r[20].w[0] + 96u)));
    c.r[2].d[0] = 0ull & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(0u));
    st32((c.r[20].w[0] + 1300u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261D10u); st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0070(c, 45u, depth + 1u); else { c.pc = 0x002C0990u; return; } if (c.pc != 0x00261D10u) [[unlikely]] return; }
L_00261D10:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261D20u); st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0058(c, 211u, depth + 1u); else { c.pc = 0x00261F20u; return; } if (c.pc != 0x00261D20u) [[unlikely]] return; }
L_00261D20:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261D38; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261D50; } }
L_00261D38:
    st32((c.r[20].w[0] + 1304u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_00261D50:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00261D70:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[16], ld32((c.r[4].w[0] + 1304u)));
    set32(c.r[17], ld32((c.r[4].w[0] + 1308u)));
    set32(c.r[18], ld32((c.r[4].w[0] + 96u)));
    c.r[2].d[0] = 0ull & 255ull;
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 746u), static_cast<std::uint8_t>(0u));
    st8((c.r[4].w[0] + 747u), static_cast<std::uint8_t>(0u));
    st32((c.r[4].w[0] + 1300u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 96u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1308u), c.r[3].w[0]);
    st32((c.r[4].w[0] + 1304u), c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8433u)));
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    c.budget -= 24;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[20], c.r[4], c.r[0]);  if (t) { goto L_00261DDC; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261E24; } }
L_00261DDC:
    c.r[2].d[0] = ld8((c.r[20].w[0] + 745u));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00261E24; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 32ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261E08; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00261E28; } }
L_00261E08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[20].w[0] + 736u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261E1C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00261E28; } }
L_00261E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00261E28; } }
L_00261E24:
    st8((c.r[20].w[0] + 746u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00261E28:
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261E34u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 186u, depth + 1u); else { c.pc = 0x002DB3A0u; return; } if (c.pc != 0x00261E34u) [[unlikely]] return; }
L_00261E34:
    set32(c.r[3], 0u - 3u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[3].d[0]) { c.r[2].d[0] = 0ull | 32768ull;  goto L_00261EAC; }
    set32(c.r[3], 0u - 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261EA8; } }
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_00261EA8; } }
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    if (c.r[2].d[0] == c.r[4].d[0]) { set32(c.r[2], 0u - 16384u);  goto L_00261E90; }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 16384u);  if (t) { goto L_00261E7C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[5], c.r[19], c.r[0]);  if (t) { goto L_00261EC0; } }
    set32(c.r[2], 0u + 16384u);
    c.budget -= 1;
L_00261E7C:
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00261EBC; } }
    set32(c.r[2], 0u - 16384u);
    c.budget -= 1;
L_00261E90:
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    c.r[2].d[0] = 0ull | 49152ull;
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00261EBC; } }
L_00261EA8:
    c.r[2].d[0] = 0ull | 32768ull;
    c.budget -= 1;
L_00261EAC:
    st32((c.r[20].w[0] + 1308u), c.r[2].w[0]);
    st32((c.r[20].w[0] + 1304u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    st8((c.r[20].w[0] + 747u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_00261EBC:
    mmi::paddub(c.r[5], c.r[19], c.r[0]);
    c.budget -= 1;
L_00261EC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00261EC8u); mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 211u, depth + 1u); else { c.pc = 0x00261F20u; return; } if (c.pc != 0x00261EC8u) [[unlikely]] return; }
L_00261EC8:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00261EE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_00261EF8; } }
L_00261EE0:
    st32((c.r[20].w[0] + 1304u), c.r[16].w[0]);
    st32((c.r[20].w[0] + 1308u), c.r[17].w[0]);
    st32((c.r[20].w[0] + 96u), c.r[18].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 6;
L_00261EF8:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00261F20:
    c.r[7].d[0] = ld8((c.r[4].w[0] + 746u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[2].d[0] = 0ull | 65535ull;
    set32(c.r[6], c.r[7].w[0] << 2);
    set32(c.r[6], c.r[6].w[0] + c.r[7].w[0]);
    set32(c.r[6], c.r[6].w[0] << 3);
    set32(c.r[6], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].d[0] = ld16((c.r[3].w[0] + 2u));
    c.budget -= 12;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00261F58; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00262004; } }
L_00261F58:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 810u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.budget -= 12;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00261FB4; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00261FB4; } }
    st8((c.r[4].w[0] + 810u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[4].w[0] + 728u), 0u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    st8((c.r[4].w[0] + 728u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[4].w[0] + 784u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00261FB4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00261FF8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 747u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[3], c.r[6].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[2], 0u - 2u);  if (t) { goto L_00261FE8; } }
    st16((c.r[4].w[0] + 806u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], 0u - 2u);
    c.budget -= 2;
L_00261FE8:
    st8((c.r[4].w[0] + 811u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 732u), 0u);  if (t) { goto L_00262000; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_00261FF8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262004; } }
L_00262000:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00262004:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00262010:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262024u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 305u, depth + 1u); else { c.pc = 0x00262790u; return; } if (c.pc != 0x00262024u) [[unlikely]] return; }
L_00262024:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12256u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00262044u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00262044u) [[unlikely]] return; }
L_00262044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026204Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 299u, depth + 1u); else { c.pc = 0x002626B0u; return; } if (c.pc != 0x0026204Cu) [[unlikely]] return; }
L_0026204C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262054u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 307u, depth + 1u); else { c.pc = 0x00262800u; return; } if (c.pc != 0x00262054u) [[unlikely]] return; }
L_00262054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026205Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 373u, depth + 1u); else { c.pc = 0x00263500u; return; } if (c.pc != 0x0026205Cu) [[unlikely]] return; }
L_0026205C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262070:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262084u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262084u) [[unlikely]] return; }
L_00262084:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262094u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 81u, depth + 1u); else { c.pc = 0x0026D6C0u; return; } if (c.pc != 0x00262094u) [[unlikely]] return; }
L_00262094:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x002620A4u) [[unlikely]] return; }
L_002620A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 54u, depth + 1u); else { c.pc = 0x0026D140u; return; } if (c.pc != 0x002620B4u) [[unlikely]] return; }
L_002620B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 78u, depth + 1u); else { c.pc = 0x0026D5A0u; return; } if (c.pc != 0x002620C4u) [[unlikely]] return; }
L_002620C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0026D060u; return; } if (c.pc != 0x002620D4u) [[unlikely]] return; }
L_002620D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026CDB0u; return; } if (c.pc != 0x002620E4u) [[unlikely]] return; }
L_002620E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002620F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002620F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 34u, depth + 1u); else { c.pc = 0x0026CCD0u; return; } if (c.pc != 0x002620F4u) [[unlikely]] return; }
L_002620F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262110:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262124u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262124u) [[unlikely]] return; }
L_00262124:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262134u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262134u) [[unlikely]] return; }
L_00262134:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262144u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 39u, depth + 1u); else { c.pc = 0x0026CDB0u; return; } if (c.pc != 0x00262144u) [[unlikely]] return; }
L_00262144:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262154; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262154u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 37u, depth + 1u); else { c.pc = 0x0026CD50u; return; } if (c.pc != 0x00262154u) [[unlikely]] return; }
L_00262154:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262170:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262184u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 43u, depth + 1u); else { c.pc = 0x0026CEC0u; return; } if (c.pc != 0x00262184u) [[unlikely]] return; }
L_00262184:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002621A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262194u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262194u) [[unlikely]] return; }
L_00262194:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002621A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 45u, depth + 1u); else { c.pc = 0x0026CF60u; return; } if (c.pc != 0x002621A4u) [[unlikely]] return; }
L_002621A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002621C0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621D4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x002621D4u) [[unlikely]] return; }
L_002621D4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002621E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002621E4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 41u, depth + 1u); else { c.pc = 0x0026CE20u; return; } if (c.pc != 0x002621E4u) [[unlikely]] return; }
L_002621E4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262200:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262214u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262214u) [[unlikely]] return; }
L_00262214:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262224u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262224u) [[unlikely]] return; }
L_00262224:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262234u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 54u, depth + 1u); else { c.pc = 0x0026D140u; return; } if (c.pc != 0x00262234u) [[unlikely]] return; }
L_00262234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262244u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 78u, depth + 1u); else { c.pc = 0x0026D5A0u; return; } if (c.pc != 0x00262244u) [[unlikely]] return; }
L_00262244:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262254; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262254u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 52u, depth + 1u); else { c.pc = 0x0026D0F0u; return; } if (c.pc != 0x00262254u) [[unlikely]] return; }
L_00262254:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262270:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262284u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262284u) [[unlikely]] return; }
L_00262284:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002622B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262294u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262294u) [[unlikely]] return; }
L_00262294:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002622B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 54u, depth + 1u); else { c.pc = 0x0026D140u; return; } if (c.pc != 0x002622A4u) [[unlikely]] return; }
L_002622A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002622B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 52u, depth + 1u); else { c.pc = 0x0026D0F0u; return; } if (c.pc != 0x002622B4u) [[unlikely]] return; }
L_002622B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002622D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x002622E4u) [[unlikely]] return; }
L_002622E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002622F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 81u, depth + 1u); else { c.pc = 0x0026D6C0u; return; } if (c.pc != 0x002622F4u) [[unlikely]] return; }
L_002622F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262304u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262304u) [[unlikely]] return; }
L_00262304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262314u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 54u, depth + 1u); else { c.pc = 0x0026D140u; return; } if (c.pc != 0x00262314u) [[unlikely]] return; }
L_00262314:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262324u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 78u, depth + 1u); else { c.pc = 0x0026D5A0u; return; } if (c.pc != 0x00262324u) [[unlikely]] return; }
L_00262324:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262344; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[3], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262344; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262344u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 49u, depth + 1u); else { c.pc = 0x0026D060u; return; } if (c.pc != 0x00262344u) [[unlikely]] return; }
L_00262344:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262360:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262374u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262374u) [[unlikely]] return; }
L_00262374:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262384; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262384u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262384u) [[unlikely]] return; }
L_00262384:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002623A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623B4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x002623B4u) [[unlikely]] return; }
L_002623B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002623D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623C4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026D480u; return; } if (c.pc != 0x002623C4u) [[unlikely]] return; }
L_002623C4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002623D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002623D4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 56u, depth + 1u); else { c.pc = 0x0026D1D0u; return; } if (c.pc != 0x002623D4u) [[unlikely]] return; }
L_002623D4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002623F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262404u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262404u) [[unlikely]] return; }
L_00262404:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262414u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026D480u; return; } if (c.pc != 0x00262414u) [[unlikely]] return; }
L_00262414:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262424u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 60u, depth + 1u); else { c.pc = 0x0026D2B0u; return; } if (c.pc != 0x00262424u) [[unlikely]] return; }
L_00262424:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262440:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262454u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262454u) [[unlikely]] return; }
L_00262454:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262464; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262464u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262464u) [[unlikely]] return; }
L_00262464:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262480:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262494u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262494u) [[unlikely]] return; }
L_00262494:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002624A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624A4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 47u, depth + 1u); else { c.pc = 0x0026D000u; return; } if (c.pc != 0x002624A4u) [[unlikely]] return; }
L_002624A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002624C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624D0u);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x002624D0u) [[unlikely]] return; }
L_002624D0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_002624E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002624F4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x002624F4u) [[unlikely]] return; }
L_002624F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262524; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 778u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_0026251C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262510u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 58u, depth + 1u); else { c.pc = 0x0026D240u; return; } if (c.pc != 0x00262510u) [[unlikely]] return; }
L_00262510:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262524; } }
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_0026251C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262524u);  if (depth < kMaxDepth) unit_005B(c, 76u, depth + 1u); else { c.pc = 0x0026D530u; return; } if (c.pc != 0x00262524u) [[unlikely]] return; }
L_00262524:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262540:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262554u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262554u) [[unlikely]] return; }
L_00262554:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262564u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 58u, depth + 1u); else { c.pc = 0x0026D240u; return; } if (c.pc != 0x00262564u) [[unlikely]] return; }
L_00262564:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262574; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262574u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 73u, depth + 1u); else { c.pc = 0x0026D480u; return; } if (c.pc != 0x00262574u) [[unlikely]] return; }
L_00262574:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262590:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625A4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x002625A4u) [[unlikely]] return; }
L_002625A4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002625B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625B4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x002625B4u) [[unlikely]] return; }
L_002625B4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002625D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625E4u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x002625E4u) [[unlikely]] return; }
L_002625E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002625F4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002625F4u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 83u, depth + 1u); else { c.pc = 0x0026D730u; return; } if (c.pc != 0x002625F4u) [[unlikely]] return; }
L_002625F4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262610:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262624u); mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262624u) [[unlikely]] return; }
L_00262624:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262634u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0058(c, 192u, depth + 1u); else { c.pc = 0x00261850u; return; } if (c.pc != 0x00262634u) [[unlikely]] return; }
L_00262634:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262644u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 83u, depth + 1u); else { c.pc = 0x0026D730u; return; } if (c.pc != 0x00262644u) [[unlikely]] return; }
L_00262644:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262654; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262654u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0076(c, 53u, depth + 1u); else { c.pc = 0x002D8B00u; return; } if (c.pc != 0x00262654u) [[unlikely]] return; }
L_00262654:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262670:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262680u);  if (depth < kMaxDepth) unit_005B(c, 31u, depth + 1u); else { c.pc = 0x0026CBC0u; return; } if (c.pc != 0x00262680u) [[unlikely]] return; }
L_00262680:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00262690:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002626A0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002626B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0]), c.f[20]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 3ull;
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00262770; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F4C0000u);
    c.r[2].d[0] = c.r[2].d[0] | 52429ull;
    c.f[12] = c.r[2].w[0];
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002626E4u); c.f[13] = ld32((c.r[16].w[0] + 7740u));  if (depth < kMaxDepth) unit_000E(c, 296u, depth + 1u); else { c.pc = 0x0013B590u; return; } if (c.pc != 0x002626E4u) [[unlikely]] return; }
L_002626E4:
    c.f[20] = c.f[0];
    c.f[0] = ld32((c.r[16].w[0] + 7912u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002626F8u); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x002626F8u) [[unlikely]] return; }
L_002626F8:
    st32((c.r[16].w[0] + 7912u), c.r[2].w[0]);
    c.f[0] = ld32((c.r[16].w[0] + 7916u));
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026270Cu); c.f[12] = fp::mul(c.f[0], c.f[20]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026270Cu) [[unlikely]] return; }
L_0026270C:
    st32((c.r[16].w[0] + 7916u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 32ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00262750; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1288u)));
    set32(c.r[2], ld32((c.r[16].w[0] + 1292u)));
    c.f[0] = c.r[3].w[0];
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    c.f[1] = c.r[2].w[0];
    c.f[0] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::cvt_s_w(c.f[1]);
    c.f[1] = fp::mul(c.f[20], c.f[1]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026274Cu); c.f[12] = fp::add(c.f[0], c.f[1]);  if (depth < kMaxDepth) unit_0007(c, 104u, depth + 1u); else { c.pc = 0x0011DDF8u; return; } if (c.pc != 0x0026274Cu) [[unlikely]] return; }
L_0026274C:
    st32((c.r[16].w[0] + 1292u), c.r[2].w[0]);
    c.budget -= 1;
L_00262750:
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 808u)));
    c.budget -= 4;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00262768; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262768u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x00262768u) [[unlikely]] return; }
L_00262768:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 806u)));
    st16((c.r[16].w[0] + 808u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 2;
L_00262770:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00262790:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    set32(c.r[2], 0u - 1025u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002627B4u); st16((c.r[4].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0075(c, 245u, depth + 1u); else { c.pc = 0x002D7A60u; return; } if (c.pc != 0x002627B4u) [[unlikely]] return; }
L_002627B4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1603u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002627D8; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[16].w[0] + 1603u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] | 2048ull;
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_002627E8; } }
L_002627D8:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[3], 0u - 2049u);
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_002627E8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00262800:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.f[3] = ld32((c.r[4].w[0] + 32u));
    c.f[2] = ld32((c.r[4].w[0] + 36u));
    c.f[1] = ld32((c.r[4].w[0] + 40u));
    c.f[0] = ld32((c.r[4].w[0] + 44u));
    set32(c.r[3], c.r[29].w[0] + 80u);
    set32(c.r[2], c.r[2].w[0] - 32u);
    set32(c.r[16], c.r[29].w[0] + 84u);
    st32((c.r[3].w[0]), c.f[3]);
    st32((c.r[3].w[0] + 4u), c.f[2]);
    st32((c.r[3].w[0] + 8u), c.f[1]);
    st32((c.r[3].w[0] + 12u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 8008u));
    c.f[0] = ld32((c.r[16].w[0]));
    c.r[18].d[0] = c.r[2].d[0] << 56;
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 760u)));
    c.budget -= 27;
    { const bool t = c.r[2].d[0] != 0ull; c.r[18].d[0] = static_cast<std::uint64_t>(c.r[18].sd[0] >> 56);  if (t) { goto L_00262ED4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_00262908; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262884u); mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262884u) [[unlikely]] return; }
L_00262884:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002628F4; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], 0u - 513u);
    set32(c.r[3], c.r[3].w[0] + 8368u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 2344u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1000u), c.f[0]);  if (t) { goto L_002634E0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002628F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002628FCu);  if (depth < kMaxDepth) unit_004D(c, 276u, depth + 1u); else { c.pc = 0x00236AF0u; return; } if (c.pc != 0x002628FCu) [[unlikely]] return; }
L_002628FC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);  if (t) { goto L_002634E4; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_00262908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262910u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262910u) [[unlikely]] return; }
L_00262910:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002629A8; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8372u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[5].d[0] | 512ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 21;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262978; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], 0u + 1u);  if (t) { goto L_002629A4; } }
L_00262978:
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[1] = c.r[3].w[0];
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[1]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    set32(c.r[3], 0u + 1u);
    c.budget -= 11;
L_002629A4:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
L_002629A8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_002629D4; }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002629D0; } }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 38u);  if (t) { goto L_00262BA0; } }
L_002629D0:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002629D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002629DCu);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002629DCu) [[unlikely]] return; }
L_002629DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002629F0; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00262AA0; } }
L_002629F0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_00262A88; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A08u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00262A08u) [[unlikely]] return; }
L_00262A08:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = c.f[0] ^ fp::kSign;  if (t) { goto L_00262A2C; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A24u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x00262A24u) [[unlikely]] return; }
L_00262A24:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));  if (t) { goto L_00262A80; } }
L_00262A2C:
    c.f[0] = ld32((c.r[17].w[0] + 8008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00262A74; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 32u);  if (t) { goto L_00262A60; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262A70; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_00262A60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A68u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x00262A68u) [[unlikely]] return; }
L_00262A68:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00262A7C; } }
L_00262A70:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00262A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262A7Cu);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC70u; return; } if (c.pc != 0x00262A7Cu) [[unlikely]] return; }
L_00262A7C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 1;
L_00262A80:
    st8((c.r[17].w[0] + 1602u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_00262A88:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1602u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262AA0; } }
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00262AA0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 2096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 2104u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262AE4u); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262AE4u) [[unlikely]] return; }
L_00262AE4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262B4C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_00262B28; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262B24; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 806u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
L_00262B24:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00262B28:
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B38u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00262B38u) [[unlikely]] return; }
L_00262B38:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B44u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00262B44u) [[unlikely]] return; }
L_00262B44:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
L_00262B4C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_00262B78; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00262B78:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B88u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00262B88u) [[unlikely]] return; }
L_00262B88:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262B94u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00262B94u) [[unlikely]] return; }
L_00262B94:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
    set32(c.r[3], c.r[4].w[0] - 38u);
    c.budget -= 1;
L_00262BA0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BB4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262BB4u) [[unlikely]] return; }
L_00262BB4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00262BC8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00262C04; } }
L_00262BC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_00262BEC; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262BE0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x00262BE0u) [[unlikely]] return; }
L_00262BE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    st8((c.r[17].w[0] + 1602u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_00262BEC:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1602u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00262C04; } }
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00262C04:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262C30; } }
    c.f[0] = ld32((c.r[17].w[0] + 2288u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2292u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2296u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_00262C58; } }
L_00262C30:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 10;
L_00262C58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262C60u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262C60u) [[unlikely]] return; }
L_00262C60:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262DA4; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262C90; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
L_00262C90:
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262CE0; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262CB4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00262CB4u) [[unlikely]] return; }
L_00262CB4:
    c.f[0] = ld32((c.r[17].w[0] + 2480u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2484u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2488u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262CD8u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00262CD8u) [[unlikely]] return; }
L_00262CD8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 32u));  if (t) { goto L_00262D74; } }
L_00262CE0:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[19], c.r[2].w[0] + 8192u);
    c.budget -= 3;
L_00262CEC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262CF4u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00262CF4u) [[unlikely]] return; }
L_00262CF4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D18u); st32((c.r[29].w[0] + 80u), c.f[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00262D18u) [[unlikely]] return; }
L_00262D18:
    st32((c.r[16].w[0]), c.f[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D24u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00262D24u) [[unlikely]] return; }
L_00262D24:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D44u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262D44u) [[unlikely]] return; }
L_00262D44:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00262D64; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D5Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00262D5Cu) [[unlikely]] return; }
L_00262D5C:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_00262D64:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00262CECu | kUnwind; return; } goto L_00262CEC; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_00262D74:
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D90u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00262D90u) [[unlikely]] return; }
L_00262D90:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262D9Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00262D9Cu) [[unlikely]] return; }
L_00262D9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
L_00262DA4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00262DCC; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
L_00262DCC:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00262E1C; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262DF0u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00262DF0u) [[unlikely]] return; }
L_00262DF0:
    c.f[0] = ld32((c.r[17].w[0] + 2480u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2484u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2488u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E14u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00262E14u) [[unlikely]] return; }
L_00262E14:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 32u));  if (t) { goto L_00262EA4; } }
L_00262E1C:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[19], c.r[2].w[0] + 8192u);
    c.budget -= 3;
L_00262E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E30u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00262E30u) [[unlikely]] return; }
L_00262E30:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E58u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00262E58u) [[unlikely]] return; }
L_00262E58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E78u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262E78u) [[unlikely]] return; }
L_00262E78:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_00262E94; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262E90u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00262E90u) [[unlikely]] return; }
L_00262E90:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 1;
L_00262E94:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00262E28u | kUnwind; return; } goto L_00262E28; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_00262EA4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262EC0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00262EC0u) [[unlikely]] return; }
L_00262EC0:
    set32(c.r[5], 0u + 20u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262ECCu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00262ECCu) [[unlikely]] return; }
L_00262ECC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
L_00262ED4:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] & 512ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (t) { goto L_00262F70; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262EECu); mmi::paddub(c.r[4], c.r[3], c.r[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262EECu) [[unlikely]] return; }
L_00262EEC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_00262F5C; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[5], c.r[3].w[0] << 3);
    set32(c.r[4], c.r[3].w[0] << 4);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[6], 0u - 513u);
    set32(c.r[3], c.r[3].w[0] + 8368u);
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[6].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 2344u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    c.budget -= 25;
    { const bool t = 0ull == 0ull; st32((c.r[17].w[0] + 1000u), c.f[0]);  if (t) { goto L_002634E0; } }
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_00262F5C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F64u);  if (depth < kMaxDepth) unit_004D(c, 276u, depth + 1u); else { c.pc = 0x00236AF0u; return; } if (c.pc != 0x00262F64u) [[unlikely]] return; }
L_00262F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
    mmi::paddub(c.r[4], c.r[3], c.r[0]);
    c.budget -= 1;
L_00262F70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00262F78u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00262F78u) [[unlikely]] return; }
L_00262F78:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00262FF0; } }
    c.r[3].d[0] = c.r[18].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 8372u);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 812u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[4].d[0] = c.r[5].d[0] | 512ull;
    st16((c.r[17].w[0] + 812u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.f[0] = ld32((c.r[3].w[0]));
    st32((c.r[17].w[0] + 980u), c.f[0]);
    st32((c.r[17].w[0] + 7780u), c.f[0]);
    st32((c.r[17].w[0] + 7740u), c.f[0]);
    c.f[1] = ld32((c.r[17].w[0] + 976u));
    c.f[0] = ld32((c.r[17].w[0] + 980u));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3C230000u);
    c.r[3].d[0] = c.r[3].d[0] | 55050ull;
    c.f[2] = c.r[3].w[0];
    set32(c.r[3], 0u + 1u);
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[17].w[0] + 1004u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 104u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 104u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 52u));
    c.f[0] = fp::mul(c.f[0], c.f[2]);
    st32((c.r[17].w[0] + 52u), c.f[0]);
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 28;
L_00262FF0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[4], c.r[17].w[0] + 32u);  goto L_0026301C; }
    set32(c.r[3], 0u + 40u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00263018; } }
    set32(c.r[3], 0u + 42u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0]; set32(c.r[3], c.r[4].w[0] - 38u);  if (t) { goto L_002631D0; } }
L_00263018:
    set32(c.r[4], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_0026301C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263024u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00263024u) [[unlikely]] return; }
L_00263024:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00263038; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_002630E8; } }
L_00263038:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[3], 0u + 2u);  if (t) { goto L_002630D0; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263050u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_0045(c, 199u, depth + 1u); else { c.pc = 0x00217650u; return; } if (c.pc != 0x00263050u) [[unlikely]] return; }
L_00263050:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.f[1] = c.f[0] ^ fp::kSign;  if (t) { goto L_00263074; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026306Cu); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x0026306Cu) [[unlikely]] return; }
L_0026306C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));  if (t) { goto L_002630C8; } }
L_00263074:
    c.f[0] = ld32((c.r[17].w[0] + 8008u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 5;
    { const bool t = (c.fcr31 & kFpuCondition) != 0; mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (t) { goto L_002630BC; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[2], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; set32(c.r[5], c.r[17].w[0] + 32u);  if (t) { goto L_002630A8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_002630B8; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 1;
L_002630A8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002630B0u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x002630B0u) [[unlikely]] return; }
L_002630B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002630C4; } }
L_002630B8:
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 1;
L_002630BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002630C4u);  if (depth < kMaxDepth) unit_004F(c, 47u, depth + 1u); else { c.pc = 0x0023CC70u; return; } if (c.pc != 0x002630C4u) [[unlikely]] return; }
L_002630C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 1;
L_002630C8:
    st8((c.r[17].w[0] + 1602u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    c.budget -= 2;
L_002630D0:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1602u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002630E8; } }
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_002630E8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[3], 0u + 41u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
    c.f[1] = ld32((c.r[17].w[0] + 2096u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x40000000u);
    c.f[0] = c.r[2].w[0];
    set32(c.r[4], c.r[29].w[0] + 80u);
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 2100u));
    st32((c.r[16].w[0]), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 2104u));
    st32((c.r[29].w[0] + 88u), c.f[1]);
    c.f[1] = ld32((c.r[16].w[0]));
    c.f[0] = fp::sub(c.f[1], c.f[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026312Cu); st32((c.r[16].w[0]), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x0026312Cu) [[unlikely]] return; }
L_0026312C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263188; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_00263170; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0026316C; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 806u)));
    set32(c.r[3], 0u + 10u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
L_0026316C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_00263170:
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263180u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00263180u) [[unlikely]] return; }
L_00263180:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
L_00263188:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[5], c.r[29].w[0] + 80u);  if (t) { goto L_002631B4; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    c.budget -= 1;
L_002631B4:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631C4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x002631C4u) [[unlikely]] return; }
L_002631C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
    set32(c.r[3], c.r[4].w[0] - 38u);
    c.budget -= 1;
L_002631D0:
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(2ll) ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002631E4u); set32(c.r[4], c.r[17].w[0] + 32u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x002631E4u) [[unlikely]] return; }
L_002631E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_002631F8; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00263234; } }
L_002631F8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 783u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 2u);  if (t) { goto L_0026321C; } }
    set32(c.r[5], c.r[17].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263210u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_004E(c, 49u, depth + 1u); else { c.pc = 0x00238CA0u; return; } if (c.pc != 0x00263210u) [[unlikely]] return; }
L_00263210:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    st8((c.r[17].w[0] + 1602u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
L_0026321C:
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 1602u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00263234; } }
    st8((c.r[17].w[0] + 783u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00263234:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263260; } }
    c.f[0] = ld32((c.r[17].w[0] + 2288u));
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2292u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2296u));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 88u), c.f[0]);  if (t) { goto L_00263288; } }
L_00263260:
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41700000u);
    c.f[0] = c.r[2].w[0];
    st32((c.r[29].w[0] + 80u), c.f[1]);
    c.f[1] = ld32((c.r[17].w[0] + 36u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    st32((c.r[29].w[0] + 88u), c.f[0]);
    c.budget -= 10;
L_00263288:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263290u); set32(c.r[4], c.r[29].w[0] + 80u);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00263290u) [[unlikely]] return; }
L_00263290:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_002633C0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 781u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002632C0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
L_002632C0:
    st8((c.r[17].w[0] + 781u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263310; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002632E4u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x002632E4u) [[unlikely]] return; }
L_002632E4:
    c.f[0] = ld32((c.r[17].w[0] + 2480u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2484u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2488u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263308u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00263308u) [[unlikely]] return; }
L_00263308:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 32u));  if (t) { goto L_0026339C; } }
L_00263310:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[19], c.r[2].w[0] + 8192u);
    c.budget -= 3;
L_0026331C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263324u); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x00263324u) [[unlikely]] return; }
L_00263324:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026334Cu); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x0026334Cu) [[unlikely]] return; }
L_0026334C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026336Cu); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x0026336Cu) [[unlikely]] return; }
L_0026336C:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_0026338C; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263384u); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x00263384u) [[unlikely]] return; }
L_00263384:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_0026338C:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0026331Cu | kUnwind; return; } goto L_0026331C; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_0026339C:
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002633B8u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004E(c, 151u, depth + 1u); else { c.pc = 0x002395D0u; return; } if (c.pc != 0x002633B8u) [[unlikely]] return; }
L_002633B8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_002634E0; } }
L_002633C0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 782u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002634E0; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 736u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_002633E8; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_002634E0; } }
L_002633E8:
    st8((c.r[17].w[0] + 782u), static_cast<std::uint8_t>(0u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[17].w[0] + 8386u)));
    set32(c.r[2], 0u + 38u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00263438; } }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026340Cu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x0026340Cu) [[unlikely]] return; }
L_0026340C:
    c.f[0] = ld32((c.r[17].w[0] + 2480u));
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2484u));
    st32((c.r[16].w[0]), c.f[0]);
    c.f[0] = ld32((c.r[17].w[0] + 2488u));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263430u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x00263430u) [[unlikely]] return; }
L_00263430:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[0] = ld32((c.r[17].w[0] + 32u));  if (t) { goto L_002634C4; } }
L_00263438:
    set32(c.r[2], ld32((c.r[17].w[0] + 84u)));
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    set32(c.r[19], c.r[2].w[0] + 8192u);
    c.budget -= 3;
L_00263444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026344Cu); mmi::paddub(c.r[4], c.r[19], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 278u, depth + 1u); else { c.pc = 0x0013B300u; return; } if (c.pc != 0x0026344Cu) [[unlikely]] return; }
L_0026344C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 32u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0xBF800000u);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263474u); st32((c.r[16].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_000E(c, 280u, depth + 1u); else { c.pc = 0x0013B350u; return; } if (c.pc != 0x00263474u) [[unlikely]] return; }
L_00263474:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42480000u);
    c.f[2] = c.r[2].w[0];
    c.f[1] = ld32((c.r[17].w[0] + 40u));
    c.f[0] = fp::mul(c.f[2], c.f[0]);
    set32(c.r[4], c.r[29].w[0] + 80u);
    c.f[0] = fp::add(c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263494u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_0075(c, 244u, depth + 1u); else { c.pc = 0x002D78B0u; return; } if (c.pc != 0x00263494u) [[unlikely]] return; }
L_00263494:
    c.budget -= 2;
    if (c.r[2].d[0] == 0ull) { set32(c.r[18], c.r[18].w[0] + 1u);  goto L_002634B4; }
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002634ACu); st32((c.r[16].w[0]), 0u);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x002634ACu) [[unlikely]] return; }
L_002634AC:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.budget -= 2;
L_002634B4:
    c.r[2].d[0] = c.r[18].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[19], c.r[19].w[0] + 16384u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00263444u | kUnwind; return; } goto L_00263444; } }
    c.f[0] = ld32((c.r[17].w[0] + 32u));
    c.budget -= 1;
L_002634C4:
    set32(c.r[5], c.r[29].w[0] + 80u);
    mmi::paddub(c.r[4], c.r[17], c.r[0]);
    st32((c.r[29].w[0] + 80u), c.f[0]);
    st32((c.r[16].w[0]), 0u);
    c.f[0] = ld32((c.r[17].w[0] + 40u));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002634E0u); st32((c.r[29].w[0] + 88u), c.f[0]);  if (depth < kMaxDepth) unit_004D(c, 313u, depth + 1u); else { c.pc = 0x00237910u; return; } if (c.pc != 0x002634E0u) [[unlikely]] return; }
L_002634E0:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    c.budget -= 1;
L_002634E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00263500:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 8386u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[3], c.r[3].w[0] + 9072u);
    c.f[1] = ld32((c.r[4].w[0] + 988u));
    set32(c.r[5], c.r[5].w[0] - 32u);
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.f[0] = ld32((c.r[3].w[0]));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 12;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263554; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 812u)));
    c.r[3].d[0] = c.r[3].d[0] & 194ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0026354C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026357C; } }
L_0026354C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0026357C; } }
L_00263554:
    c.f[0] = ld32((c.r[3].w[0] + 4u));
    c.f[1] = ld32((c.r[4].w[0] + 984u));
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 6;
    { const bool t = !(c.fcr31 & kFpuCondition);  if (t) { goto L_00263578; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0026357C; } }
L_00263578:
    st8((c.r[4].w[0] + 805u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0026357C:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.r[3].d[0] = c.r[3].d[0] | 16384ull;
    st32((c.r[4].w[0] + 984u), c.r[3].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 582u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_002635DC; } }
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[4].w[0] + 582u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] & 255ull;
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_002635BC; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3CF50000u);
    c.r[3].d[0] = c.r[3].d[0] | 49807ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 976u), c.r[3].w[0]);  if (t) { goto L_002635C0; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_002635BC:
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.budget -= 1;
L_002635C0:
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    st32((c.r[4].w[0] + 7780u), c.f[0]);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 7740u), c.f[0]);  if (t) { goto L_00263634; } }
L_002635DC:
    c.r[5].d[0] = ld8((c.r[4].w[0] + 805u));
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == 0ull; c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00263620; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[3], c.r[5].w[0] << 2);  if (t) { goto L_0026360C; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_00263608; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[1] = ld32((c.r[4].w[0] + 976u));  if (t) { goto L_00263628; } }
L_00263608:
    set32(c.r[3], c.r[5].w[0] << 2);
    c.budget -= 1;
L_0026360C:
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.f[0] = ld32((c.r[3].w[0] + 1144u));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 976u), c.f[0]);  if (t) { goto L_00263624; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00263620:
    st32((c.r[4].w[0] + 976u), c.r[3].w[0]);
    c.budget -= 1;
L_00263624:
    c.f[1] = ld32((c.r[4].w[0] + 976u));
    c.budget -= 1;
L_00263628:
    c.f[0] = ld32((c.r[4].w[0] + 980u));
    c.f[0] = fp::mul(c.f[1], c.f[0]);
    st32((c.r[4].w[0] + 1004u), c.f[0]);
    c.budget -= 3;
L_00263634:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263640:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 2u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    st8((c.r[4].w[0] + 532u), static_cast<std::uint8_t>(c.r[2].w[0]));
    st32((c.r[4].w[0] + 1520u), 0u);
    st32((c.r[4].w[0] + 520u), 0u);
    st32((c.r[4].w[0] + 524u), 0u);
    st32((c.r[4].w[0] + 1524u), 0u);
    st32((c.r[4].w[0] + 1540u), 0u);
    st32((c.r[4].w[0] + 104u), 0u);
    st32((c.r[4].w[0] + 108u), 0u);
    st32((c.r[4].w[0] + 1224u), 0u);
    st32((c.r[4].w[0] + 1228u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 20;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00263694; } }
    st8((c.r[16].w[0] + 275u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00263694:
    st8((c.r[16].w[0] + 789u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 531u));
    set32(c.r[2], 0u + 1u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 290u)));  if (t) { goto L_002636B4; } }
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 296u)));
    c.budget -= 2;
L_002636B4:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);  if (t) { goto L_002636CC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);  if (t) { goto L_002636D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42D50000u);
    c.budget -= 1;
L_002636CC:
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);
    c.budget -= 2;
L_002636D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0026370C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0026370C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43370000u);
    st32((c.r[16].w[0] + 1200u), c.r[2].w[0]);
    c.budget -= 2;
L_0026370C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 762u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 33u);  if (t) { goto L_0026373C; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263724u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00263724u) [[unlikely]] return; }
L_00263724:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263730u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x00263730u) [[unlikely]] return; }
L_00263730:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));  if (t) { goto L_00263754; } }
    set32(c.r[5], 0u + 33u);
    c.budget -= 1;
L_0026373C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263744u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 88u, depth + 1u); else { c.pc = 0x0026D880u; return; } if (c.pc != 0x00263744u) [[unlikely]] return; }
L_00263744:
    set32(c.r[5], 0u + 33u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263750u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_005B(c, 87u, depth + 1u); else { c.pc = 0x0026D7B0u; return; } if (c.pc != 0x00263750u) [[unlikely]] return; }
L_00263750:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8386u)));
    c.budget -= 1;
L_00263754:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12720u);
    set32(c.r[3], c.r[3].w[0] - 32u);
    st8((c.r[16].w[0] + 583u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].d[0] = ld8((c.r[16].w[0] + 583u));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0026377Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0026377Cu) [[unlikely]] return; }
L_0026377C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    set32(c.r[2], 0u - 29184u);
    set32(c.r[5], 0u + 12u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 812u)));
    c.r[2].d[0] = c.r[2].d[0] | 20480ull;
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002637A4u); st16((c.r[16].w[0] + 812u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0026(c, 51u, depth + 1u); else { c.pc = 0x00198960u; return; } if (c.pc != 0x002637A4u) [[unlikely]] return; }
L_002637A4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_002637C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 583u));
    set32(c.r[2], 0u + 12u);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00263824; } }
    c.f[0] = ld32((c.r[4].w[0] + 1224u));
    st32((c.r[4].w[0] + 1228u), c.f[0]);
    c.f[1] = ld32((c.r[4].w[0] + 7780u));
    c.f[0] = ld32((c.r[4].w[0] + 1224u));
    c.f[0] = fp::add(c.f[0], c.f[1]);
    st32((c.r[4].w[0] + 1224u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 641u)));
    c.r[1].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00263824; } }
    set32(c.r[2], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u - 1u);
    st32((c.r[4].w[0] + 1200u), 0u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026381Cu); st8((c.r[4].w[0] + 533u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x0026381Cu) [[unlikely]] return; }
L_0026381C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00263848; } }
L_00263824:
    c.r[3].d[0] = ld8((c.r[4].w[0] + 583u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12768u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00263844u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00263844u) [[unlikely]] return; }
L_00263844:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00263848:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00263850:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263860:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00263920; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263894u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00263894u) [[unlikely]] return; }
L_00263894:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12512u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002638B8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x002638B8u) [[unlikely]] return; }
L_002638B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002638C0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x002638C0u) [[unlikely]] return; }
L_002638C0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002638CCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x002638CCu) [[unlikely]] return; }
L_002638CC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263920; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00263918; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026390Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x0026390Cu) [[unlikely]] return; }
L_0026390C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1200u));  if (t) { goto L_00263924; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00263918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263920u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00263920u) [[unlikely]] return; }
L_00263920:
    c.f[2] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_00263924:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_002639AC; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[28].w[0] - 29096u);  if (t) { goto L_00263988; } }
    set32(c.r[5], c.r[28].w[0] - 29096u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0026397Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x0026397Cu) [[unlikely]] return; }
L_0026397C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00263998; } }
    set32(c.r[5], c.r[28].w[0] - 29096u);
    c.budget -= 1;
L_00263988:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263994u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263994u) [[unlikely]] return; }
L_00263994:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00263998:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002639A0u);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x002639A0u) [[unlikely]] return; }
L_002639A0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x002639ACu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x002639ACu) [[unlikely]] return; }
L_002639AC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_002639C0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_002639D0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[5], c.r[28].w[0] - 29088u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A08u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263A08u) [[unlikely]] return; }
L_00263A08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A10u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00263A10u) [[unlikely]] return; }
L_00263A10:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A1Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00263A1Cu) [[unlikely]] return; }
L_00263A1C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263A30:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263A40:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00263B00; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A74u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00263A74u) [[unlikely]] return; }
L_00263A74:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12544u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263A98u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00263A98u) [[unlikely]] return; }
L_00263A98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AA0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00263AA0u) [[unlikely]] return; }
L_00263AA0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AACu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x00263AACu) [[unlikely]] return; }
L_00263AAC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263B00; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00263AF8; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263AECu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00263AECu) [[unlikely]] return; }
L_00263AEC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1200u));  if (t) { goto L_00263B04; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00263AF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B00u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00263B00u) [[unlikely]] return; }
L_00263B00:
    c.f[2] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_00263B04:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00263B8C; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], c.r[28].w[0] - 29080u);  if (t) { goto L_00263B68; } }
    set32(c.r[5], c.r[28].w[0] - 29080u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263B5Cu) [[unlikely]] return; }
L_00263B5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00263B78; } }
    set32(c.r[5], c.r[28].w[0] - 29080u);
    c.budget -= 1;
L_00263B68:
    set32(c.r[6], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B74u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263B74u) [[unlikely]] return; }
L_00263B74:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00263B78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B80u);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00263B80u) [[unlikely]] return; }
L_00263B80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263B8Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00263B8Cu) [[unlikely]] return; }
L_00263B8C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263BA0:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263BB0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00263C70; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263BE4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00263BE4u) [[unlikely]] return; }
L_00263BE4:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12576u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C08u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00263C08u) [[unlikely]] return; }
L_00263C08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C10u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00263C10u) [[unlikely]] return; }
L_00263C10:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C1Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x00263C1Cu) [[unlikely]] return; }
L_00263C1C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263C70; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00263C68; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C5Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00263C5Cu) [[unlikely]] return; }
L_00263C5C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1200u));  if (t) { goto L_00263C74; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00263C68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263C70u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00263C70u) [[unlikely]] return; }
L_00263C70:
    c.f[2] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_00263C74:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00263CD4; } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], 0u - 3u);
    set32(c.r[5], c.r[2].w[0] + 12400u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CC0u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263CC0u) [[unlikely]] return; }
L_00263CC0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CC8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00263CC8u) [[unlikely]] return; }
L_00263CC8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263CD4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00263CD4u) [[unlikely]] return; }
L_00263CD4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263CF0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00263D00:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[4].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    set32(c.r[5], c.r[28].w[0] - 29072u);
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[4].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    set32(c.r[2], c.r[3].w[0] << 1);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D38u); set32(c.r[6], c.r[2].w[0] + c.r[3].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263D38u) [[unlikely]] return; }
L_00263D38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D40u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00263D40u) [[unlikely]] return; }
L_00263D40:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263D4Cu); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00263D4Cu) [[unlikely]] return; }
L_00263D4C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00263D60:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263D70:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00263E30; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DA4u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00263DA4u) [[unlikely]] return; }
L_00263DA4:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12608u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DC8u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00263DC8u) [[unlikely]] return; }
L_00263DC8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DD0u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00263DD0u) [[unlikely]] return; }
L_00263DD0:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263DDCu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x00263DDCu) [[unlikely]] return; }
L_00263DDC:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263E30; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00263E28; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E1Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00263E1Cu) [[unlikely]] return; }
L_00263E1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1200u));  if (t) { goto L_00263E34; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00263E28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E30u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00263E30u) [[unlikely]] return; }
L_00263E30:
    c.f[2] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_00263E34:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { goto L_00263EC4; } }
    set32(c.r[3], ld32((c.r[16].w[0] + 1260u)));
    set32(c.r[2], 0u - 3u);
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 369u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00263E98; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 12416u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263E90u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263E90u) [[unlikely]] return; }
L_00263E90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (t) { goto L_00263EB0; } }
L_00263E98:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[5], c.r[2].w[0] + 12416u);
    set32(c.r[6], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EACu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00263EACu) [[unlikely]] return; }
L_00263EAC:
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 1;
L_00263EB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EB8u);  if (depth < kMaxDepth) unit_0059(c, 31u, depth + 1u); else { c.pc = 0x00264310u; return; } if (c.pc != 0x00263EB8u) [[unlikely]] return; }
L_00263EB8:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 8384u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263EC4u); set32(c.r[5], 0u + 9u);  if (depth < kMaxDepth) unit_0023(c, 144u, depth + 1u); else { c.pc = 0x0018DAB0u; return; } if (c.pc != 0x00263EC4u) [[unlikely]] return; }
L_00263EC4:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00263EE0:
    set32(c.r[3], 0u + 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[4].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00263EF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 164u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 164u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00263FB0; } }
    set32(c.r[2], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F24u); st16((c.r[16].w[0] + 164u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00263F24u) [[unlikely]] return; }
L_00263F24:
    c.r[3].d[0] = c.r[2].d[0] & 31ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[2], c.r[2].w[0] + 12640u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    set32(c.r[2], c.r[2].w[0] << 6);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F48u); set32(c.r[4], c.r[2].w[0] + 1984u);  if (depth < kMaxDepth) unit_000E(c, 329u, depth + 1u); else { c.pc = 0x0013BF10u; return; } if (c.pc != 0x00263F48u) [[unlikely]] return; }
L_00263F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F50u); set32(c.r[4], c.r[29].w[0] + 32u);  if (depth < kMaxDepth) unit_000F(c, 16u, depth + 1u); else { c.pc = 0x0013C860u; return; } if (c.pc != 0x00263F50u) [[unlikely]] return; }
L_00263F50:
    set32(c.r[4], c.r[29].w[0] + 32u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F5Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_002A(c, 386u, depth + 1u); else { c.pc = 0x001AB460u; return; } if (c.pc != 0x00263F5Cu) [[unlikely]] return; }
L_00263F5C:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[16].w[0] + 166u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00263FB0; } }
    set32(c.r[2], 0u + 2u);
    st16((c.r[16].w[0] + 166u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[5], 0u + 9u);  if (t) { goto L_00263FA8; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263F9Cu); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00263F9Cu) [[unlikely]] return; }
L_00263F9C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.f[2] = ld32((c.r[16].w[0] + 1200u));  if (t) { goto L_00263FB4; } }
    set32(c.r[5], 0u + 9u);
    c.budget -= 1;
L_00263FA8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00263FB0u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x00263FB0u) [[unlikely]] return; }
L_00263FB0:
    c.f[2] = ld32((c.r[16].w[0] + 1200u));
    c.budget -= 1;
L_00263FB4:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[1] = c.r[3].w[0];
    c.r[3].sd[0] = static_cast<std::int32_t>(0x42A00000u);
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::sub(c.f[2], c.f[1]);
    fpu_compare(c, fp::key(c.f[1]) < fp::key(c.f[0]));
    c.budget -= 10;
    { const bool t = !(c.fcr31 & kFpuCondition); st32((c.r[16].w[0] + 1200u), c.f[1]);  if (t) { [[clang::musttail]] return unit_0059(c, 3u, depth); } }
    set32(c.r[6], ld32((c.r[16].w[0] + 1260u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004A0000u);
    set32(c.r[3], 0u - 5u);
    set32(c.r[5], c.r[2].w[0] + 12432u);
    c.r[2].d[0] = c.r[6].d[0] & c.r[3].d[0];
    set32(c.r[6], 0u + 2u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00264000u); st32((c.r[16].w[0] + 1260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0059(c, 33u, depth + 1u); else { c.pc = 0x00264460u; return; } if (c.pc != 0x00264000u) [[unlikely]] return; }
    [[clang::musttail]] return unit_0059(c, 1u, depth);
}

}
