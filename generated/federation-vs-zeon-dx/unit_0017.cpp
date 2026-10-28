#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_0017[4096] = {
    1, 2, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13,
    0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62,
    0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69,
    0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0,
    77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0,
    0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0,
    105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0,
    118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0,
    123, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0,
    0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0,
    0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    177, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 192, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195,
    0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    198, 0, 0, 199, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0,
    207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221,
    0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278,
    0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 298, 0, 299, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0,
    0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0,
    0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405,
    0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0,
    0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0,
};

void unit_0017(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_0015C000;
    case 2u: goto L_0015C004;
    case 3u: goto L_0015C00C;
    case 4u: goto L_0015C014;
    case 5u: goto L_0015C024;
    case 6u: goto L_0015C04C;
    case 7u: goto L_0015C054;
    case 8u: goto L_0015C05C;
    case 9u: goto L_0015C068;
    case 10u: goto L_0015C080;
    case 11u: goto L_0015C0DC;
    case 12u: goto L_0015C130;
    case 13u: goto L_0015C17C;
    case 14u: goto L_0015C18C;
    case 15u: goto L_0015C194;
    case 16u: goto L_0015C19C;
    case 17u: goto L_0015C1C4;
    case 18u: goto L_0015C240;
    case 19u: goto L_0015C280;
    case 20u: goto L_0015C29C;
    case 21u: goto L_0015C2A4;
    case 22u: goto L_0015C2AC;
    case 23u: goto L_0015C2B4;
    case 24u: goto L_0015C2E4;
    case 25u: goto L_0015C2EC;
    case 26u: goto L_0015C328;
    case 27u: goto L_0015C334;
    case 28u: goto L_0015C33C;
    case 29u: goto L_0015C344;
    case 30u: goto L_0015C388;
    case 31u: goto L_0015C39C;
    case 32u: goto L_0015C3A4;
    case 33u: goto L_0015C3AC;
    case 34u: goto L_0015C3B4;
    case 35u: goto L_0015C3D0;
    case 36u: goto L_0015C4AC;
    case 37u: goto L_0015C4F0;
    case 38u: goto L_0015C500;
    case 39u: goto L_0015C510;
    case 40u: goto L_0015C590;
    case 41u: goto L_0015C5BC;
    case 42u: goto L_0015C5C4;
    case 43u: goto L_0015C5CC;
    case 44u: goto L_0015C5E0;
    case 45u: goto L_0015C618;
    case 46u: goto L_0015C620;
    case 47u: goto L_0015C63C;
    case 48u: goto L_0015C650;
    case 49u: goto L_0015C688;
    case 50u: goto L_0015C69C;
    case 51u: goto L_0015C6A8;
    case 52u: goto L_0015C6B0;
    case 53u: goto L_0015C6D4;
    case 54u: goto L_0015C6DC;
    case 55u: goto L_0015C6F8;
    case 56u: goto L_0015C794;
    case 57u: goto L_0015C7AC;
    case 58u: goto L_0015C7B4;
    case 59u: goto L_0015C7C0;
    case 60u: goto L_0015C7E8;
    case 61u: goto L_0015C7F0;
    case 62u: goto L_0015C7FC;
    case 63u: goto L_0015C808;
    case 64u: goto L_0015C814;
    case 65u: goto L_0015C820;
    case 66u: goto L_0015C840;
    case 67u: goto L_0015C854;
    case 68u: goto L_0015C870;
    case 69u: goto L_0015C87C;
    case 70u: goto L_0015C890;
    case 71u: goto L_0015C898;
    case 72u: goto L_0015C8C4;
    case 73u: goto L_0015C8D0;
    case 74u: goto L_0015C8DC;
    case 75u: goto L_0015C8E8;
    case 76u: goto L_0015C8F4;
    case 77u: goto L_0015C900;
    case 78u: goto L_0015C910;
    case 79u: goto L_0015C94C;
    case 80u: goto L_0015C954;
    case 81u: goto L_0015C9A0;
    case 82u: goto L_0015CA70;
    case 83u: goto L_0015CAF4;
    case 84u: goto L_0015CB88;
    case 85u: goto L_0015CC08;
    case 86u: goto L_0015CCD4;
    case 87u: goto L_0015CD94;
    case 88u: goto L_0015CDB0;
    case 89u: goto L_0015CDE0;
    case 90u: goto L_0015CE24;
    case 91u: goto L_0015CE30;
    case 92u: goto L_0015CE80;
    case 93u: goto L_0015CE88;
    case 94u: goto L_0015CE90;
    case 95u: goto L_0015CE98;
    case 96u: goto L_0015CEA0;
    case 97u: goto L_0015CEB0;
    case 98u: goto L_0015CEF8;
    case 99u: goto L_0015CF04;
    case 100u: goto L_0015CF10;
    case 101u: goto L_0015CF60;
    case 102u: goto L_0015CF68;
    case 103u: goto L_0015CF70;
    case 104u: goto L_0015CF78;
    case 105u: goto L_0015CF80;
    case 106u: goto L_0015CF90;
    case 107u: goto L_0015CFA0;
    case 108u: goto L_0015CFB0;
    case 109u: goto L_0015CFC0;
    case 110u: goto L_0015D00C;
    case 111u: goto L_0015D01C;
    case 112u: goto L_0015D028;
    case 113u: goto L_0015D044;
    case 114u: goto L_0015D04C;
    case 115u: goto L_0015D054;
    case 116u: goto L_0015D064;
    case 117u: goto L_0015D074;
    case 118u: goto L_0015D080;
    case 119u: goto L_0015D09C;
    case 120u: goto L_0015D0E0;
    case 121u: goto L_0015D0F0;
    case 122u: goto L_0015D0F8;
    case 123u: goto L_0015D100;
    case 124u: goto L_0015D108;
    case 125u: goto L_0015D110;
    case 126u: goto L_0015D120;
    case 127u: goto L_0015D130;
    case 128u: goto L_0015D1D4;
    case 129u: goto L_0015D240;
    case 130u: goto L_0015D280;
    case 131u: goto L_0015D2D4;
    case 132u: goto L_0015D2E4;
    case 133u: goto L_0015D30C;
    case 134u: goto L_0015D340;
    case 135u: goto L_0015D36C;
    case 136u: goto L_0015D388;
    case 137u: goto L_0015D390;
    case 138u: goto L_0015D398;
    case 139u: goto L_0015D3B0;
    case 140u: goto L_0015D3B8;
    case 141u: goto L_0015D3C0;
    case 142u: goto L_0015D3F4;
    case 143u: goto L_0015D418;
    case 144u: goto L_0015D420;
    case 145u: goto L_0015D43C;
    case 146u: goto L_0015D44C;
    case 147u: goto L_0015D460;
    case 148u: goto L_0015D4C0;
    case 149u: goto L_0015D4CC;
    case 150u: goto L_0015D4E0;
    case 151u: goto L_0015D504;
    case 152u: goto L_0015D514;
    case 153u: goto L_0015D534;
    case 154u: goto L_0015D540;
    case 155u: goto L_0015D548;
    case 156u: goto L_0015D564;
    case 157u: goto L_0015D56C;
    case 158u: goto L_0015D584;
    case 159u: goto L_0015D5B4;
    case 160u: goto L_0015D5D0;
    case 161u: goto L_0015D5DC;
    case 162u: goto L_0015D5F4;
    case 163u: goto L_0015D614;
    case 164u: goto L_0015D630;
    case 165u: goto L_0015D638;
    case 166u: goto L_0015D650;
    case 167u: goto L_0015D658;
    case 168u: goto L_0015D664;
    case 169u: goto L_0015D680;
    case 170u: goto L_0015D68C;
    case 171u: goto L_0015D698;
    case 172u: goto L_0015D6A0;
    case 173u: goto L_0015D6A8;
    case 174u: goto L_0015D6B0;
    case 175u: goto L_0015D6D0;
    case 176u: goto L_0015D6F4;
    case 177u: goto L_0015D700;
    case 178u: goto L_0015D708;
    case 179u: goto L_0015D710;
    case 180u: goto L_0015D718;
    case 181u: goto L_0015D730;
    case 182u: goto L_0015D750;
    case 183u: goto L_0015D76C;
    case 184u: goto L_0015D800;
    case 185u: goto L_0015D820;
    case 186u: goto L_0015D8C0;
    case 187u: goto L_0015D8D0;
    case 188u: goto L_0015D94C;
    case 189u: goto L_0015D958;
    case 190u: goto L_0015D960;
    case 191u: goto L_0015D968;
    case 192u: goto L_0015D978;
    case 193u: goto L_0015D9E8;
    case 194u: goto L_0015D9F4;
    case 195u: goto L_0015D9FC;
    case 196u: goto L_0015DA04;
    case 197u: goto L_0015DA14;
    case 198u: goto L_0015DA80;
    case 199u: goto L_0015DA8C;
    case 200u: goto L_0015DA94;
    case 201u: goto L_0015DA9C;
    case 202u: goto L_0015DAAC;
    case 203u: goto L_0015DAF8;
    case 204u: goto L_0015DB0C;
    case 205u: goto L_0015DB20;
    case 206u: goto L_0015DB68;
    case 207u: goto L_0015DB80;
    case 208u: goto L_0015DB90;
    case 209u: goto L_0015DBA0;
    case 210u: goto L_0015DC00;
    case 211u: goto L_0015DCB0;
    case 212u: goto L_0015DD38;
    case 213u: goto L_0015DD40;
    case 214u: goto L_0015DD58;
    case 215u: goto L_0015DDD0;
    case 216u: goto L_0015DE14;
    case 217u: goto L_0015DE58;
    case 218u: goto L_0015DE90;
    case 219u: goto L_0015DEB0;
    case 220u: goto L_0015DF74;
    case 221u: goto L_0015DF7C;
    case 222u: goto L_0015DF90;
    case 223u: goto L_0015DFAC;
    case 224u: goto L_0015E030;
    case 225u: goto L_0015E040;
    case 226u: goto L_0015E120;
    case 227u: goto L_0015E170;
    case 228u: goto L_0015E240;
    case 229u: goto L_0015E250;
    case 230u: goto L_0015E260;
    case 231u: goto L_0015E270;
    case 232u: goto L_0015E2A0;
    case 233u: goto L_0015E2B0;
    case 234u: goto L_0015E2E0;
    case 235u: goto L_0015E34C;
    case 236u: goto L_0015E35C;
    case 237u: goto L_0015E378;
    case 238u: goto L_0015E390;
    case 239u: goto L_0015E3A0;
    case 240u: goto L_0015E3B0;
    case 241u: goto L_0015E3F0;
    case 242u: goto L_0015E40C;
    case 243u: goto L_0015E430;
    case 244u: goto L_0015E4A4;
    case 245u: goto L_0015E4B8;
    case 246u: goto L_0015E4E4;
    case 247u: goto L_0015E500;
    case 248u: goto L_0015E51C;
    case 249u: goto L_0015E528;
    case 250u: goto L_0015E540;
    case 251u: goto L_0015E568;
    case 252u: goto L_0015E574;
    case 253u: goto L_0015E5D8;
    case 254u: goto L_0015E610;
    case 255u: goto L_0015E634;
    case 256u: goto L_0015E644;
    case 257u: goto L_0015E654;
    case 258u: goto L_0015E680;
    case 259u: goto L_0015E6AC;
    case 260u: goto L_0015E6C8;
    case 261u: goto L_0015E6F4;
    case 262u: goto L_0015E724;
    case 263u: goto L_0015E73C;
    case 264u: goto L_0015E748;
    case 265u: goto L_0015E770;
    case 266u: goto L_0015E778;
    case 267u: goto L_0015E7A8;
    case 268u: goto L_0015E810;
    case 269u: goto L_0015E82C;
    case 270u: goto L_0015E850;
    case 271u: goto L_0015E868;
    case 272u: goto L_0015E890;
    case 273u: goto L_0015E8AC;
    case 274u: goto L_0015E8C0;
    case 275u: goto L_0015E960;
    case 276u: goto L_0015E990;
    case 277u: goto L_0015E9E4;
    case 278u: goto L_0015EA7C;
    case 279u: goto L_0015EA88;
    case 280u: goto L_0015EA94;
    case 281u: goto L_0015EAA0;
    case 282u: goto L_0015EAAC;
    case 283u: goto L_0015EAB8;
    case 284u: goto L_0015EAC4;
    case 285u: goto L_0015EAE0;
    case 286u: goto L_0015EAF0;
    case 287u: goto L_0015EB00;
    case 288u: goto L_0015EB38;
    case 289u: goto L_0015EB84;
    case 290u: goto L_0015EB90;
    case 291u: goto L_0015EB9C;
    case 292u: goto L_0015EBA8;
    case 293u: goto L_0015EBB4;
    case 294u: goto L_0015EBC0;
    case 295u: goto L_0015EBCC;
    case 296u: goto L_0015EBD8;
    case 297u: goto L_0015EBE4;
    case 298u: goto L_0015EBF0;
    case 299u: goto L_0015EBF8;
    case 300u: goto L_0015EC38;
    case 301u: goto L_0015EC4C;
    case 302u: goto L_0015EC84;
    case 303u: goto L_0015EC8C;
    case 304u: goto L_0015ECB4;
    case 305u: goto L_0015ED2C;
    case 306u: goto L_0015ED34;
    case 307u: goto L_0015ED44;
    case 308u: goto L_0015ED64;
    case 309u: goto L_0015ED6C;
    case 310u: goto L_0015ED78;
    case 311u: goto L_0015ED80;
    case 312u: goto L_0015EDD0;
    case 313u: goto L_0015EE00;
    case 314u: goto L_0015EE10;
    case 315u: goto L_0015EE58;
    case 316u: goto L_0015EE60;
    case 317u: goto L_0015EE68;
    case 318u: goto L_0015EEBC;
    case 319u: goto L_0015EEF4;
    case 320u: goto L_0015EF20;
    case 321u: goto L_0015EF30;
    case 322u: goto L_0015EF54;
    case 323u: goto L_0015EF8C;
    case 324u: goto L_0015EFB8;
    case 325u: goto L_0015EFC8;
    case 326u: goto L_0015EFF0;
    case 327u: goto L_0015F020;
    case 328u: goto L_0015F04C;
    case 329u: goto L_0015F054;
    case 330u: goto L_0015F060;
    case 331u: goto L_0015F08C;
    case 332u: goto L_0015F0C0;
    case 333u: goto L_0015F0F8;
    case 334u: goto L_0015F110;
    case 335u: goto L_0015F148;
    case 336u: goto L_0015F178;
    case 337u: goto L_0015F180;
    case 338u: goto L_0015F1A4;
    case 339u: goto L_0015F1AC;
    case 340u: goto L_0015F1B4;
    case 341u: goto L_0015F1D0;
    case 342u: goto L_0015F1E0;
    case 343u: goto L_0015F21C;
    case 344u: goto L_0015F224;
    case 345u: goto L_0015F22C;
    case 346u: goto L_0015F234;
    case 347u: goto L_0015F260;
    case 348u: goto L_0015F268;
    case 349u: goto L_0015F270;
    case 350u: goto L_0015F2C0;
    case 351u: goto L_0015F2D4;
    case 352u: goto L_0015F2F0;
    case 353u: goto L_0015F36C;
    case 354u: goto L_0015F384;
    case 355u: goto L_0015F39C;
    case 356u: goto L_0015F3BC;
    case 357u: goto L_0015F3DC;
    case 358u: goto L_0015F3FC;
    case 359u: goto L_0015F410;
    case 360u: goto L_0015F460;
    case 361u: goto L_0015F478;
    case 362u: goto L_0015F4A0;
    case 363u: goto L_0015F52C;
    case 364u: goto L_0015F564;
    case 365u: goto L_0015F56C;
    case 366u: goto L_0015F598;
    case 367u: goto L_0015F5F0;
    case 368u: goto L_0015F61C;
    case 369u: goto L_0015F648;
    case 370u: goto L_0015F678;
    case 371u: goto L_0015F6B8;
    case 372u: goto L_0015F6E4;
    case 373u: goto L_0015F6F4;
    case 374u: goto L_0015F750;
    case 375u: goto L_0015F77C;
    case 376u: goto L_0015F78C;
    case 377u: goto L_0015F7EC;
    case 378u: goto L_0015F818;
    case 379u: goto L_0015F828;
    case 380u: goto L_0015F88C;
    case 381u: goto L_0015F8D8;
    case 382u: goto L_0015F8F0;
    case 383u: goto L_0015F930;
    case 384u: goto L_0015F93C;
    case 385u: goto L_0015F968;
    case 386u: goto L_0015F984;
    case 387u: goto L_0015F998;
    case 388u: goto L_0015F9C4;
    case 389u: goto L_0015F9EC;
    case 390u: goto L_0015FA1C;
    case 391u: goto L_0015FA2C;
    case 392u: goto L_0015FA90;
    case 393u: goto L_0015FA98;
    case 394u: goto L_0015FAE0;
    case 395u: goto L_0015FAF4;
    case 396u: goto L_0015FB08;
    case 397u: goto L_0015FB34;
    case 398u: goto L_0015FB3C;
    case 399u: goto L_0015FB70;
    case 400u: goto L_0015FB80;
    case 401u: goto L_0015FBA0;
    case 402u: goto L_0015FBA8;
    case 403u: goto L_0015FBBC;
    case 404u: goto L_0015FBD0;
    case 405u: goto L_0015FBFC;
    case 406u: goto L_0015FC04;
    case 407u: goto L_0015FC5C;
    case 408u: goto L_0015FC70;
    case 409u: goto L_0015FC80;
    case 410u: goto L_0015FCA0;
    case 411u: goto L_0015FCC0;
    case 412u: goto L_0015FCC8;
    case 413u: goto L_0015FCF8;
    case 414u: goto L_0015FD10;
    case 415u: goto L_0015FD3C;
    case 416u: goto L_0015FD44;
    case 417u: goto L_0015FD50;
    case 418u: goto L_0015FD58;
    case 419u: goto L_0015FD64;
    case 420u: goto L_0015FD78;
    case 421u: goto L_0015FDB0;
    case 422u: goto L_0015FDC8;
    case 423u: goto L_0015FDE0;
    case 424u: goto L_0015FE80;
    case 425u: goto L_0015FEF0;
    case 426u: goto L_0015FF60;
    case 427u: goto L_0015FF8C;
    case 428u: goto L_0015FFA0;
    case 429u: goto L_0015FFB0;
    case 430u: goto L_0015FFE4;
    case 431u: goto L_0015FFF8;
    default: bad_entry(c, 0x0015C000u); return;
    }
L_0015C000:
    c.budget -= 1;
L_0015C004:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C00Cu);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0015C00Cu) [[unlikely]] return; }
L_0015C00C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C014u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x0015C014u) [[unlikely]] return; }
L_0015C014:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u - 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C024u); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x0015C024u) [[unlikely]] return; }
L_0015C024:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x44150000u);
    c.r[2].d[0] = c.r[2].d[0] | 47514ull;
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[13] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x49FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[14] = c.r[2].w[0];
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C04Cu);  if (depth < kMaxDepth) unit_0029(c, 96u, depth + 1u); else { c.pc = 0x001A5340u; return; } if (c.pc != 0x0015C04Cu) [[unlikely]] return; }
L_0015C04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C054u);  if (depth < kMaxDepth) unit_001E(c, 72u, depth + 1u); else { c.pc = 0x00179810u; return; } if (c.pc != 0x0015C054u) [[unlikely]] return; }
L_0015C054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C05Cu);  if (depth < kMaxDepth) unit_0093(c, 238u, depth + 1u); else { c.pc = 0x0034F640u; return; } if (c.pc != 0x0015C05Cu) [[unlikely]] return; }
L_0015C05C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C068u); set32(c.r[4], c.r[2].w[0] - 11648u);  if (depth < kMaxDepth) unit_0022(c, 228u, depth + 1u); else { c.pc = 0x0018BC70u; return; } if (c.pc != 0x0015C068u) [[unlikely]] return; }
L_0015C068:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015C080:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[4].d[0] == c.r[5].d[0]; set32(c.r[6], c.r[3].w[0] + 1u);  if (t) { goto L_0015C184; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015C128; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015C0B8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015C234; } }
L_0015C0B8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u - 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015C0D4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_0015C230; } }
L_0015C0D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C0DCu);  if (depth < kMaxDepth) unit_0020(c, 268u, depth + 1u); else { c.pc = 0x00182A70u; return; } if (c.pc != 0x0015C0DCu) [[unlikely]] return; }
L_0015C0DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C230; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015C230; } }
L_0015C128:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C130u);  if (depth < kMaxDepth) unit_0017(c, 18u, depth + 1u); else { c.pc = 0x0015C240u; return; } if (c.pc != 0x0015C130u) [[unlikely]] return; }
L_0015C130:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C230; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
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
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C17Cu); st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 170u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x0015C17Cu) [[unlikely]] return; }
L_0015C17C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C230; } }
L_0015C184:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C18Cu);  if (depth < kMaxDepth) unit_000E(c, 142u, depth + 1u); else { c.pc = 0x0013A070u; return; } if (c.pc != 0x0015C18Cu) [[unlikely]] return; }
L_0015C18C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C194u);  if (depth < kMaxDepth) unit_0016(c, 128u, depth + 1u); else { c.pc = 0x0015B420u; return; } if (c.pc != 0x0015C194u) [[unlikely]] return; }
L_0015C194:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C19Cu);  if (depth < kMaxDepth) unit_000E(c, 297u, depth + 1u); else { c.pc = 0x0013B5A0u; return; } if (c.pc != 0x0015C19Cu) [[unlikely]] return; }
L_0015C19C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015C1CC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C1C4u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_003E(c, 39u, depth + 1u); else { c.pc = 0x001F8550u; return; } if (c.pc != 0x0015C1C4u) [[unlikely]] return; }
L_0015C1C4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_0015C1EC; } }
L_0015C1CC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 8;
L_0015C1EC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(0u));
    st32((c.r[1].w[0] + 28136u), 0u);
    c.budget -= 17;
L_0015C230:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015C234:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015C240:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.r[1].d[0] = c.r[2].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[4].w[0] + 2u);  if (t) { goto L_0015C3B4; } }
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[3], c.r[3].w[0] + 21104u);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015C280:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C29Cu); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015C29Cu) [[unlikely]] return; }
L_0015C29C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2A4u);  if (depth < kMaxDepth) unit_001F(c, 232u, depth + 1u); else { c.pc = 0x0017F2E0u; return; } if (c.pc != 0x0015C2A4u) [[unlikely]] return; }
L_0015C2A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_0015C3B8; } }
L_0015C2AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2B4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015C2B4u) [[unlikely]] return; }
L_0015C2B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C2D8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 120u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 7;
L_0015C2D8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C2E4u); set32(c.r[4], c.r[2].w[0] - 15408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C2E4u) [[unlikely]] return; }
L_0015C2E4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C3B4; } }
L_0015C2EC:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 8u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[4].w[0] + 8u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0015C328; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[6], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C328u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 51u, depth + 1u); else { c.pc = 0x0016CF60u; return; } if (c.pc != 0x0015C328u) [[unlikely]] return; }
L_0015C328:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C334u); set32(c.r[4], c.r[2].w[0] - 15408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C334u) [[unlikely]] return; }
L_0015C334:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C3B4; } }
L_0015C33C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C344u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015C344u) [[unlikely]] return; }
L_0015C344:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015C390; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[2].w[0] + 10u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 9;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C3B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    set32(c.r[4], c.r[2].w[0] - 15408u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C388u); st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C388u) [[unlikely]] return; }
L_0015C388:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C3B4; } }
L_0015C390:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C39Cu); set32(c.r[4], c.r[2].w[0] - 15408u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C39Cu) [[unlikely]] return; }
L_0015C39C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C3B4; } }
L_0015C3A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3ACu); set32(c.r[16], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0015C3ACu) [[unlikely]] return; }
L_0015C3AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C3B4u);  if (depth < kMaxDepth) unit_003E(c, 39u, depth + 1u); else { c.pc = 0x001F8550u; return; } if (c.pc != 0x0015C3B4u) [[unlikely]] return; }
L_0015C3B4:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_0015C3B8:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015C3D0:
    set32(c.r[29], c.r[29].w[0] - 96u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    set32(c.r[2], c.r[2].w[0] + 19632u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    ld128((c.r[2].w[0]) & ~15u, c.r[5]);
    ld128((c.r[2].w[0] + 16u) & ~15u, c.r[4]);
    set32(c.r[8], c.r[29].w[0] + 32u);
    set32(c.r[7], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], c.r[2].w[0] + 816u);
    st128((c.r[8].w[0]) & ~15u, c.r[5]);
    st128((c.r[8].w[0] + 16u) & ~15u, c.r[4]);
    ld128((c.r[3].w[0]) & ~15u, c.r[6]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[5].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00E00000u);
    set32(c.r[4], c.r[29].w[0] + 88u);
    st128((c.r[7].w[0]) & ~15u, c.r[6]);
    c.r[3].d[0] = c.r[2].d[0] | 64ull;
    st32((c.r[29].w[0] + 80u), c.r[5].w[0]);
    st32((c.r[29].w[0] + 84u), c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    c.f[1] = ld32((c.r[28].w[0] - 31912u));
    c.f[0] = ld32((c.r[28].w[0] - 31908u));
    set32(c.r[2], c.r[29].w[0] + 80u);
    set32(c.r[5], c.r[28].w[0] - 26288u);
    set32(c.r[3], 0u + 15u);
    st32((c.r[4].w[0]), c.f[1]);
    st32((c.r[4].w[0] + 4u), c.f[0]);
    st32((c.r[1].w[0] - 20396u), c.r[8].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20368u), c.r[4].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[2].w[0] - 20416u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), 0u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 55;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4ACu); st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0015C4ACu) [[unlikely]] return; }
L_0015C4AC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);  if (t) { goto L_0015C4D0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65535ull;
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[29].w[0] + 80u), c.r[2].w[0]);  if (t) { goto L_0015C4D4; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80000000u);
    c.budget -= 1;
L_0015C4D0:
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    c.budget -= 1;
L_0015C4D4:
    set32(c.r[2], c.r[29].w[0] + 64u);
    st32((c.r[16].w[0] + 24u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 84u);
    st32((c.r[16].w[0] + 40u), c.r[2].w[0]);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C4F0u); st32((c.r[29].w[0] + 32u), 0u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0015C4F0u) [[unlikely]] return; }
L_0015C4F0:
    set32(c.r[2], 0u + 576u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C500u); st32((c.r[29].w[0] + 64u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x0015C500u) [[unlikely]] return; }
L_0015C500:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015C510:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[5], 0u + 3600u);
    set32(c.r[4], 0u + 10u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st32((c.r[3].w[0]), c.r[5].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    st8((c.r[3].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    st32((c.r[3].w[0] + 8u), 0u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.budget -= 32;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0015C590:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19664u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5BCu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015C5BCu) [[unlikely]] return; }
L_0015C5BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5C4u);  if (depth < kMaxDepth) unit_0017(c, 120u, depth + 1u); else { c.pc = 0x0015D0E0u; return; } if (c.pc != 0x0015C5C4u) [[unlikely]] return; }
L_0015C5C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C5CCu);  if (depth < kMaxDepth) unit_0017(c, 126u, depth + 1u); else { c.pc = 0x0015D120u; return; } if (c.pc != 0x0015C5CCu) [[unlikely]] return; }
L_0015C5CC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015C5E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 2u);  if (t) { goto L_0015C990; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21136u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015C618:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C620u);  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x0015C620u) [[unlikely]] return; }
L_0015C620:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 4560u);
    set32(c.r[6], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C63Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015C63Cu) [[unlikely]] return; }
L_0015C63C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] + 3792u);
    set32(c.r[6], 0u + 512u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C650u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015C650u) [[unlikely]] return; }
L_0015C650:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 122u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.budget -= 12;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C688u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0015C688u) [[unlikely]] return; }
L_0015C688:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015C994; } }
L_0015C690:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C69Cu); set32(c.r[4], c.r[2].w[0] - 11984u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C69Cu) [[unlikely]] return; }
L_0015C69C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6A8u); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C6A8u) [[unlikely]] return; }
L_0015C6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C990; } }
L_0015C6B0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C6D4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6D4u);  if (depth < kMaxDepth) unit_001F(c, 180u, depth + 1u); else { c.pc = 0x0017EA50u; return; } if (c.pc != 0x0015C6D4u) [[unlikely]] return; }
L_0015C6D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6DCu);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0015C6DCu) [[unlikely]] return; }
L_0015C6DC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C990; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 25696u);
    set32(c.r[6], 0u + 256u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C6F8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015C6F8u) [[unlikely]] return; }
L_0015C6F8:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 25696u);
    st32((c.r[28].w[0] - 26764u), c.r[2].w[0]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], 0u + 255u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
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
    st8((c.r[2].w[0] + 87u), static_cast<std::uint8_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    st32((c.r[2].w[0]), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    st8((c.r[2].w[0] + 24u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    st32((c.r[2].w[0] + 12u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    st32((c.r[2].w[0] + 8u), c.r[4].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.budget -= 37;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015C7C8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C794u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015C794u) [[unlikely]] return; }
L_0015C794:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3600u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7ACu); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001F(c, 235u, depth + 1u); else { c.pc = 0x0017F320u; return; } if (c.pc != 0x0015C7ACu) [[unlikely]] return; }
L_0015C7AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7B4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001F(c, 240u, depth + 1u); else { c.pc = 0x0017F370u; return; } if (c.pc != 0x0015C7B4u) [[unlikely]] return; }
L_0015C7B4:
    set32(c.r[5], 0u + 39u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7C0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015C7C0u) [[unlikely]] return; }
L_0015C7C0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C7E0; } }
L_0015C7C8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u - 128u);
    set32(c.r[3], 0u + 1800u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 6;
L_0015C7E0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7E8u);  if (depth < kMaxDepth) unit_0017(c, 184u, depth + 1u); else { c.pc = 0x0015D800u; return; } if (c.pc != 0x0015C7E8u) [[unlikely]] return; }
L_0015C7E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7F0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0017(c, 187u, depth + 1u); else { c.pc = 0x0015D8D0u; return; } if (c.pc != 0x0015C7F0u) [[unlikely]] return; }
L_0015C7F0:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C7FCu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C7FCu) [[unlikely]] return; }
L_0015C7FC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C808u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C808u) [[unlikely]] return; }
L_0015C808:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C814u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C814u) [[unlikely]] return; }
L_0015C814:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C820u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C820u) [[unlikely]] return; }
L_0015C820:
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[3], 0u + 5u);
    set32(c.r[4], 0u + 1u);
    st8((c.r[2].w[0] + 25u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C840u); c.r[5].d[0] = c.r[2].d[0] | 5ull;  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C840u) [[unlikely]] return; }
L_0015C840:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C854u); c.r[5].d[0] = c.r[2].d[0] | 6ull;  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C854u) [[unlikely]] return; }
L_0015C854:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 10u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 10u);  if (t) { goto L_0015C888; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00160000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C870u); set32(c.r[4], c.r[2].w[0] - 11984u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C870u) [[unlikely]] return; }
L_0015C870:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00200000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C87Cu); set32(c.r[4], c.r[2].w[0] - 31024u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0015C87Cu) [[unlikely]] return; }
L_0015C87C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C990; } }
    set32(c.r[4], 0u + 10u);
    c.budget -= 1;
L_0015C888:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C890u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x0015C890u) [[unlikely]] return; }
L_0015C890:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C990; } }
L_0015C898:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015C990; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8C4u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C8C4u) [[unlikely]] return; }
L_0015C8C4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8D0u); set32(c.r[5], 0u + 128u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C8D0u) [[unlikely]] return; }
L_0015C8D0:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8DCu); set32(c.r[5], 0u + 129u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C8DCu) [[unlikely]] return; }
L_0015C8DC:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8E8u); set32(c.r[5], 0u + 130u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C8E8u) [[unlikely]] return; }
L_0015C8E8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C8F4u); set32(c.r[5], 0u + 131u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C8F4u) [[unlikely]] return; }
L_0015C8F4:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C900u); set32(c.r[5], 0u + 132u);  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C900u) [[unlikely]] return; }
L_0015C900:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 25u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_0015C990; } }
L_0015C910:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015C990; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], 0u + 16384u);
    set32(c.r[4], 0u + 3u);
    set32(c.r[5], 0u + 128u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    st16((c.r[2].w[0] + 4u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015C94Cu); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 5u, depth + 1u); else { c.pc = 0x001D81D0u; return; } if (c.pc != 0x0015C94Cu) [[unlikely]] return; }
L_0015C94C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015C990; } }
L_0015C954:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 25u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015C990; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 10u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
L_0015C990:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015C994:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015C9A0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0015CC98; } }
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[4].d[0];  if (t) { goto L_0015CC30; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0015CBD0; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[5].d[0] == c.r[2].d[0];  if (t) { goto L_0015CA64; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015C9F4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));  if (t) { goto L_0015CD64; } }
L_0015C9F4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0; c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);  if (t) { goto L_0015CA30; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.budget -= 7;
L_0015CA30:
    c.f[1] = c.r[2].w[0];
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.f[2] = c.r[2].w[0];
    c.f[2] = fp::cvt_s_w(c.f[2]);
    fpu_div(c, 1u, c.f[2], c.f[1]);
    c.f[0] = fp::sub(c.f[0], c.f[1]);
    c.budget -= 13;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_0015CD60; } }
L_0015CA64:
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CA70u); set32(c.r[16], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015CA70u) [[unlikely]] return; }
L_0015CA70:
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015CA84; } }
    set32(c.r[4], 0u - 1u);
    c.budget -= 1;
L_0015CA84:
    c.r[2].d[0] = c.r[3].d[0] & 4096ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CA94; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015CA94:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015CAC4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[2], 0u + 5u);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 5u);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    mmi::div(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.budget -= 10;
L_0015CAC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[2], ld32((c.r[3].w[0])));
    c.budget -= 4;
    { const bool t = c.r[16].d[0] == c.r[2].d[0];  if (t) { goto L_0015CAF4; } }
    set32(c.r[2], 0u + 16384u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3600u);
    set32(c.r[5], 0u + 42u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CAF4u); st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015CAF4u) [[unlikely]] return; }
L_0015CAF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; c.r[4].d[0] = ld16((c.r[1].w[0] + 3268u));  if (t) { goto L_0015CB1C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3288u));
    c.r[2].d[0] = c.r[4].d[0] | c.r[2].d[0];
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 4;
L_0015CB1C:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[3].d[0] = 0ull | 32800ull;
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CB90; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = ld16((c.r[1].w[0] + 3268u));
    c.r[2].d[0] = c.r[2].d[0] & 32800ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CB64; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015CB70; } }
L_0015CB64:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_0015CB70:
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[3], 0u + 32u);
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CB88u); st16((c.r[2].w[0] + 6u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015CB88u) [[unlikely]] return; }
L_0015CB88:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015CD60; } }
L_0015CB90:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 10u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0015CD60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015CD60; } }
L_0015CBD0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 6u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0015CD60; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0015CC10; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CC08u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x0015CC08u) [[unlikely]] return; }
L_0015CC08:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CD60; } }
L_0015CC10:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 10u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015CD60; } }
L_0015CC30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 16u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].sd[0] > 0;  if (t) { goto L_0015CC68; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26764u)));
    st16((c.r[2].w[0] + 16u), static_cast<std::uint16_t>(0u));
    c.budget -= 6;
L_0015CC68:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x41200000u);
    c.f[0] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 16u)));
    c.f[1] = c.r[2].w[0];
    c.f[1] = fp::cvt_s_w(c.f[1]);
    fpu_div(c, 0u, c.f[1], c.f[0]);
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 8u), c.f[0]);  if (t) { goto L_0015CD60; } }
L_0015CC98:
    set32(c.r[4], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[2], ld32((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0]; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015CD0C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 8u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CCD4u); st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 118u, depth + 1u); else { c.pc = 0x0015D080u; return; } if (c.pc != 0x0015CCD4u) [[unlikely]] return; }
L_0015CCD4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[5], ld32((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[5].d[0] != c.r[3].d[0]; set32(c.r[2], 0u + 2u);  if (t) { goto L_0015CCF8; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0015CD10; } }
    set32(c.r[2], 0u + 2u);
    c.budget -= 1;
L_0015CCF8:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] != c.r[2].d[0];  if (t) { goto L_0015CD10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015CD10; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015CD0C:
    st8((c.r[4].w[0] + 24u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 1;
L_0015CD10:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
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
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 20;
L_0015CD60:
    set32(c.r[3], ld32((c.r[28].w[0] - 26764u)));
    c.budget -= 1;
L_0015CD64:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015CD80; } }
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 1024u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0015CD8C; } }
L_0015CD80:
    c.r[2].d[0] = ld16((c.r[3].w[0] + 4u));
    set32(c.r[2], c.r[2].w[0] + 4096u);
    st16((c.r[3].w[0] + 4u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0015CD8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CD94u);  if (depth < kMaxDepth) unit_0016(c, 129u, depth + 1u); else { c.pc = 0x0015B440u; return; } if (c.pc != 0x0015CD94u) [[unlikely]] return; }
L_0015CD94:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015CDB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19680u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015CDE0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[6], c.r[3].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 8;
    if (c.r[3].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0015CE28; }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015CE10; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015CEA4; } }
L_0015CE10:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE24u); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0015CE24u) [[unlikely]] return; }
L_0015CE24:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015CE28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE30u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015CE30u) [[unlikely]] return; }
L_0015CE30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CEA0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE80u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015CE80u) [[unlikely]] return; }
L_0015CE80:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE88u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0015CE88u) [[unlikely]] return; }
L_0015CE88:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE90u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x0015CE90u) [[unlikely]] return; }
L_0015CE90:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CE98u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0015CE98u) [[unlikely]] return; }
L_0015CE98:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CEA0u);  if (depth < kMaxDepth) unit_0025(c, 238u, depth + 1u); else { c.pc = 0x00196880u; return; } if (c.pc != 0x0015CEA0u) [[unlikely]] return; }
L_0015CEA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015CEA4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015CEB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[7], c.r[3].w[0] + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[6].d[0]; set32(c.r[4], 0u + 1u);  if (t) { goto L_0015CF08; } }
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015CEE0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015CF84; } }
L_0015CEE0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CEF8u); st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x0015CEF8u) [[unlikely]] return; }
L_0015CEF8:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF04u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0015CF04u) [[unlikely]] return; }
L_0015CF04:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015CF08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF10u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015CF10u) [[unlikely]] return; }
L_0015CF10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015CF80; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 4u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF60u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015CF60u) [[unlikely]] return; }
L_0015CF60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF68u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0015CF68u) [[unlikely]] return; }
L_0015CF68:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF70u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x0015CF70u) [[unlikely]] return; }
L_0015CF70:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF78u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0015CF78u) [[unlikely]] return; }
L_0015CF78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015CF80u);  if (depth < kMaxDepth) unit_0025(c, 238u, depth + 1u); else { c.pc = 0x00196880u; return; } if (c.pc != 0x0015CF80u) [[unlikely]] return; }
L_0015CF80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015CF84:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015CF90:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0038(c, 277u, depth); }
L_0015CFA0:
    c.budget -= 2;
    {  goto L_0015E960; }
L_0015CFB0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0022(c, 237u, depth); }
L_0015CFC0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    c.budget -= 7;
    { const bool t = c.r[5].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[4].w[0] + 2u);  if (t) { goto L_0015D05C; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    if (c.r[5].d[0] == c.r[4].d[0]) { set32(c.r[4], 0u + 1u);  goto L_0015D020; }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_0015CFF8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015D078; } }
L_0015CFF8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D00Cu); st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0015D00Cu) [[unlikely]] return; }
L_0015D00C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D01Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x0015D01Cu) [[unlikely]] return; }
L_0015D01C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015D020:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D028u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015D028u) [[unlikely]] return; }
L_0015D028:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D074; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D044u); st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015D044u) [[unlikely]] return; }
L_0015D044:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D04Cu);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0015D04Cu) [[unlikely]] return; }
L_0015D04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D054u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x0015D054u) [[unlikely]] return; }
L_0015D054:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D074; } }
L_0015D05C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D064u);  if (depth < kMaxDepth) unit_000E(c, 178u, depth + 1u); else { c.pc = 0x0013A7F0u; return; } if (c.pc != 0x0015D064u) [[unlikely]] return; }
L_0015D064:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D074u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x0015D074u) [[unlikely]] return; }
L_0015D074:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015D078:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D080:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u - 1u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
L_0015D09C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 87u)));
    set32(c.r[3], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 5;
    if (c.r[3].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_0015D0C8; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 20u), c.r[6].w[0]);  if (t) { goto L_0015D0D8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_0015D0C8:
    c.r[3].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D09Cu | kUnwind; return; } goto L_0015D09C; } }
    c.budget -= 1;
L_0015D0D8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015D0E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0F0u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0015D0F0u) [[unlikely]] return; }
L_0015D0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D0F8u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0015D0F8u) [[unlikely]] return; }
L_0015D0F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D100u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0015D100u) [[unlikely]] return; }
L_0015D100:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D108u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0015D108u) [[unlikely]] return; }
L_0015D108:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D110u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0015D110u) [[unlikely]] return; }
L_0015D110:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D120:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { set32(c.r[4], c.r[2].w[0] + 15904u);  [[clang::musttail]] return unit_0081(c, 121u, depth); }
L_0015D130:
    set32(c.r[29], c.r[29].w[0] - 144u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].d[0] = c.r[2].d[0] | 32896ull;
    st32((c.r[29].w[0] + 140u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[16], c.r[2].w[0] - 20416u);
    set32(c.r[2], c.r[29].w[0] + 96u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], c.r[29].w[0] + 140u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 2u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00FF0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65304ull;
    st32((c.r[29].w[0] + 120u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 104u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[17], c.r[2].w[0] + 19712u);
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 124u), c.r[3].w[0]);
    set32(c.r[19], c.r[2].w[0] + 19736u);
    set32(c.r[20], c.r[28].w[0] - 31904u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[3].w[0]));
    st32((c.r[29].w[0] + 108u), c.r[3].w[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 41;
L_0015D1D4:
    st32((c.r[16].w[0] + 48u), c.r[19].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[20].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[2], c.r[2].w[0] - 19056u);
    set32(c.r[5], c.r[29].w[0] + 112u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    set32(c.r[6], c.r[29].w[0] + 116u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    st32((c.r[16].w[0] + 52u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0])));
    st32((c.r[5].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 96u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 2u)));
    st32((c.r[6].w[0]), c.r[2].w[0]);
    st32((c.r[29].w[0] + 100u), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 4u)));
    set32(c.r[2], ld32((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st32((c.r[5].w[0]), c.r[2].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[17].w[0] + 6u)));
    set32(c.r[2], ld32((c.r[6].w[0])));
    set32(c.r[17], c.r[17].w[0] + 8u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 27;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D240u); st32((c.r[6].w[0]), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x0015D240u) [[unlikely]] return; }
L_0015D240:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < 3ll ? 1ull : 0ull;
    set32(c.r[19], c.r[19].w[0] + 8u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D1D4u | kUnwind; return; } goto L_0015D1D4; } }
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 144u);  c.pc = t; return; }
L_0015D280:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[16], c.r[2].w[0] + 9600u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[17], c.r[3].w[0] - 23744u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 2u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[28].w[0] - 26584u), 0u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 21;
L_0015D2D4:
    c.r[2].d[0] = c.r[2].d[0] | 18536ull;
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D2E4u); st32((c.r[2].w[0]), 0u);  if (depth < kMaxDepth) unit_001B(c, 61u, depth + 1u); else { c.pc = 0x0016D1E0u; return; } if (c.pc != 0x0015D2E4u) [[unlikely]] return; }
L_0015D2E4:
    c.r[3].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015D304; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015D310; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015D304:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D30Cu);  if (depth < kMaxDepth) unit_0024(c, 174u, depth + 1u); else { c.pc = 0x00192C20u; return; } if (c.pc != 0x0015D30Cu) [[unlikely]] return; }
L_0015D30C:
    c.budget -= 1;
L_0015D310:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D388; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D348; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9808u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D340u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D340u) [[unlikely]] return; }
L_0015D340:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D388; } }
L_0015D348:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], ld32((c.r[1].w[0] + 10416u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D374; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10128u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D36Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D36Cu) [[unlikely]] return; }
L_0015D36C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D388; } }
L_0015D374:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10000u);
    set32(c.r[5], 0u + 8u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D388u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D388u) [[unlikely]] return; }
L_0015D388:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D390u);  if (depth < kMaxDepth) unit_0017(c, 174u, depth + 1u); else { c.pc = 0x0015D6B0u; return; } if (c.pc != 0x0015D390u) [[unlikely]] return; }
L_0015D390:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D398u);  if (depth < kMaxDepth) unit_0093(c, 244u, depth + 1u); else { c.pc = 0x0034F6B0u; return; } if (c.pc != 0x0015D398u) [[unlikely]] return; }
L_0015D398:
    set32(c.r[2], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00A40000u);
    st32((c.r[28].w[0] - 26180u), c.r[2].w[0]);
    st8((c.r[1].w[0] + 28141u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D3B0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0015D3B0u) [[unlikely]] return; }
L_0015D3B0:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0015D3B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D3C0u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 113u, depth + 1u); else { c.pc = 0x0016E0C0u; return; } if (c.pc != 0x0015D3C0u) [[unlikely]] return; }
L_0015D3C0:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D3B8u | kUnwind; return; } goto L_0015D3B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 18536u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { goto L_0015D3FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D3F4u);  if (depth < kMaxDepth) unit_0026(c, 181u, depth + 1u); else { c.pc = 0x0019AF30u; return; } if (c.pc != 0x0015D3F4u) [[unlikely]] return; }
L_0015D3F4:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 2;
L_0015D3FC:
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 18536u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015D444; } }
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0015D418:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D420u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 126u, depth + 1u); else { c.pc = 0x0016E300u; return; } if (c.pc != 0x0015D420u) [[unlikely]] return; }
L_0015D420:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(4ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D418u | kUnwind; return; } goto L_0015D418; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D43Cu);  if (depth < kMaxDepth) unit_001B(c, 69u, depth + 1u); else { c.pc = 0x0016D610u; return; } if (c.pc != 0x0015D43Cu) [[unlikely]] return; }
L_0015D43C:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 2;
L_0015D444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D44Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 302u, depth + 1u); else { c.pc = 0x0019B9F0u; return; } if (c.pc != 0x0015D44Cu) [[unlikely]] return; }
L_0015D44C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9744u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D460u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D460u) [[unlikely]] return; }
L_0015D460:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 18536u)));
    c.r[2].d[0] = c.r[2].d[0] & 8ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0015D50C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00030000u);
    c.r[3].d[0] = c.r[2].d[0] | 61152ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[2], c.r[2].w[0] - 15376u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D508; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 369u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015D508; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 256u)));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0015D508; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4C0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 302u, depth + 1u); else { c.pc = 0x0019B9F0u; return; } if (c.pc != 0x0015D4C0u) [[unlikely]] return; }
L_0015D4C0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26224u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4CCu); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 433u)));  if (depth < kMaxDepth) unit_0026(c, 156u, depth + 1u); else { c.pc = 0x0019A4D0u; return; } if (c.pc != 0x0015D4CCu) [[unlikely]] return; }
L_0015D4CC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9760u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D4E0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D4E0u) [[unlikely]] return; }
L_0015D4E0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26224u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[12] = c.r[2].w[0];
    c.r[5].d[0] = 0ull | 32773ull;
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00800000u);
    set32(c.r[4], c.r[2].w[0] - 19760u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 433u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D504u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 168u, depth + 1u); else { c.pc = 0x0019AA70u; return; } if (c.pc != 0x0015D504u) [[unlikely]] return; }
L_0015D504:
    c.budget -= 1;
L_0015D508:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015D50C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D514u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 302u, depth + 1u); else { c.pc = 0x0019B9F0u; return; } if (c.pc != 0x0015D514u) [[unlikely]] return; }
L_0015D514:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[1], c.r[16].w[0] + c.r[1].w[0]);
    set32(c.r[2], ld32((c.r[1].w[0] + 18536u)));
    c.r[2].d[0] = c.r[2].d[0] & 16ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0015D53C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D534u);  if (depth < kMaxDepth) unit_001B(c, 82u, depth + 1u); else { c.pc = 0x0016D940u; return; } if (c.pc != 0x0015D534u) [[unlikely]] return; }
L_0015D534:
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 2;
L_0015D53C:
    c.budget -= 1;
L_0015D540:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D548u); mmi::paddub(c.r[4], c.r[18], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 120u, depth + 1u); else { c.pc = 0x0016E1E0u; return; } if (c.pc != 0x0015D548u) [[unlikely]] return; }
L_0015D548:
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[2].d[0] = c.r[18].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D540u | kUnwind; return; } goto L_0015D540; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D564u);  if (depth < kMaxDepth) unit_0024(c, 241u, depth + 1u); else { c.pc = 0x00193DF0u; return; } if (c.pc != 0x0015D564u) [[unlikely]] return; }
L_0015D564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D56Cu);  if (depth < kMaxDepth) unit_0024(c, 214u, depth + 1u); else { c.pc = 0x00193660u; return; } if (c.pc != 0x0015D56Cu) [[unlikely]] return; }
L_0015D56C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D588; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D584u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 101u, depth + 1u); else { c.pc = 0x001A5420u; return; } if (c.pc != 0x0015D584u) [[unlikely]] return; }
L_0015D584:
    c.budget -= 1;
L_0015D588:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D630; } }
    set32(c.r[2], ld32((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D5BC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9968u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5B4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D5B4u) [[unlikely]] return; }
L_0015D5B4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], 0u + 1u);  if (t) { goto L_0015D5D4; } }
L_0015D5BC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9936u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5D0u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D5D0u) [[unlikely]] return; }
L_0015D5D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_0015D5D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5DCu);  if (depth < kMaxDepth) unit_0024(c, 174u, depth + 1u); else { c.pc = 0x00192C20u; return; } if (c.pc != 0x0015D5DCu) [[unlikely]] return; }
L_0015D5DC:
    c.r[2].d[0] = ld16((c.r[17].w[0]));
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_0015D630; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D5F4u);  if (depth < kMaxDepth) unit_0024(c, 174u, depth + 1u); else { c.pc = 0x00192C20u; return; } if (c.pc != 0x0015D5F4u) [[unlikely]] return; }
L_0015D5F4:
    set32(c.r[2], ld32((c.r[16].w[0] + 816u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015D61C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9968u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D614u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D614u) [[unlikely]] return; }
L_0015D614:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015D630; } }
L_0015D61C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 9936u);
    set32(c.r[5], 0u + 2u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D630u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0027(c, 105u, depth + 1u); else { c.pc = 0x0019F1A0u; return; } if (c.pc != 0x0015D630u) [[unlikely]] return; }
L_0015D630:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D638u);  if (depth < kMaxDepth) unit_0024(c, 198u, depth + 1u); else { c.pc = 0x00193530u; return; } if (c.pc != 0x0015D638u) [[unlikely]] return; }
L_0015D638:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[4], c.r[2].w[0] + 10256u);
    set32(c.r[5], 0u + 1u);
    set32(c.r[6], 0u + 3u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D650u); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 181u, depth + 1u); else { c.pc = 0x0016F160u; return; } if (c.pc != 0x0015D650u) [[unlikely]] return; }
L_0015D650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D658u);  if (depth < kMaxDepth) unit_0029(c, 305u, depth + 1u); else { c.pc = 0x001A75C0u; return; } if (c.pc != 0x0015D658u) [[unlikely]] return; }
L_0015D658:
    set32(c.r[4], 0u + 3u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D664u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 302u, depth + 1u); else { c.pc = 0x0019B9F0u; return; } if (c.pc != 0x0015D664u) [[unlikely]] return; }
L_0015D664:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 6u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015D690; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D680u);  if (depth < kMaxDepth) unit_0017(c, 247u, depth + 1u); else { c.pc = 0x0015E500u; return; } if (c.pc != 0x0015D680u) [[unlikely]] return; }
L_0015D680:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D68Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0026(c, 302u, depth + 1u); else { c.pc = 0x0019B9F0u; return; } if (c.pc != 0x0015D68Cu) [[unlikely]] return; }
L_0015D68C:
    c.budget -= 1;
L_0015D690:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D698u);  if (depth < kMaxDepth) unit_001B(c, 56u, depth + 1u); else { c.pc = 0x0016D120u; return; } if (c.pc != 0x0015D698u) [[unlikely]] return; }
L_0015D698:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D6A0u);  if (depth < kMaxDepth) unit_001B(c, 44u, depth + 1u); else { c.pc = 0x0016CE00u; return; } if (c.pc != 0x0015D6A0u) [[unlikely]] return; }
L_0015D6A0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D6A8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0022(c, 231u, depth + 1u); else { c.pc = 0x0018BCB0u; return; } if (c.pc != 0x0015D6A8u) [[unlikely]] return; }
L_0015D6A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015D2D4u | kUnwind; return; } goto L_0015D2D4; } }
L_0015D6B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 63u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_0015D6F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D6D0u);  if (depth < kMaxDepth) unit_0081(c, 120u, depth + 1u); else { c.pc = 0x00305EB0u; return; } if (c.pc != 0x0015D6D0u) [[unlikely]] return; }
L_0015D6D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 19760u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D6F4u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015D6F4u) [[unlikely]] return; }
L_0015D6F4:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015D6F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D700u);  if (depth < kMaxDepth) unit_0081(c, 127u, depth + 1u); else { c.pc = 0x00306050u; return; } if (c.pc != 0x0015D700u) [[unlikely]] return; }
L_0015D700:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D708u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 127u, depth + 1u); else { c.pc = 0x00306050u; return; } if (c.pc != 0x0015D708u) [[unlikely]] return; }
L_0015D708:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D710u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0081(c, 127u, depth + 1u); else { c.pc = 0x00306050u; return; } if (c.pc != 0x0015D710u) [[unlikely]] return; }
L_0015D710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D718u);  if (depth < kMaxDepth) unit_0081(c, 123u, depth + 1u); else { c.pc = 0x00305FE0u; return; } if (c.pc != 0x0015D718u) [[unlikely]] return; }
L_0015D718:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D730:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01EE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].d[0] = c.r[2].d[0] | 55296ull;
    set32(c.r[6], 0u + 6656u);
    st32((c.r[28].w[0] - 26752u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D750u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015D750u) [[unlikely]] return; }
L_0015D750:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x01D00000u);
    set32(c.r[5], 0u + 347u);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01E00000u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D76Cu); st32((c.r[2].w[0] + 6232u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 186u, depth + 1u); else { c.pc = 0x0015D8C0u; return; } if (c.pc != 0x0015D76Cu) [[unlikely]] return; }
L_0015D76C:
    set32(c.r[7], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[8], 0u + 22u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[3].w[0] + 976u);
    st32((c.r[7].w[0] + 6152u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], 0u + 5u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01E00000u);
    st32((c.r[3].w[0] + 6160u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 6152u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 6160u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[7].w[0] + 6168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[3].w[0] + 6176u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6152u)));
    st32((c.r[5].w[0] + 6156u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6160u)));
    st32((c.r[5].w[0] + 6164u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6168u)));
    st32((c.r[5].w[0] + 6172u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6176u)));
    st32((c.r[5].w[0] + 6180u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[3].w[0] + 6228u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26756u), 0u);
    st32((c.r[28].w[0] - 26760u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 35;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D800:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01EE0000u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].d[0] = c.r[2].d[0] | 55296ull;
    set32(c.r[6], 0u + 6656u);
    st32((c.r[28].w[0] - 26752u), c.r[4].w[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D820u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015D820u) [[unlikely]] return; }
L_0015D820:
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01D00000u);
    set32(c.r[8], 0u + 22u);
    set32(c.r[6], 0u + 5u);
    st32((c.r[3].w[0] + 6232u), c.r[4].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[3].w[0] + 976u);
    c.r[5].sd[0] = static_cast<std::int32_t>(0x01E00000u);
    st32((c.r[7].w[0] + 6152u), c.r[8].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[3].w[0] + 6160u), c.r[6].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], ld32((c.r[7].w[0] + 6152u)));
    set32(c.r[3], ld32((c.r[7].w[0] + 6160u)));
    mmi::mult(c, 0, c.r[6].w[0], c.r[3].w[0]);
    c.r[3].d[0] = c.lo.d[0];
    st32((c.r[7].w[0] + 6168u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[3].w[0] + 6176u), c.r[5].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6152u)));
    st32((c.r[5].w[0] + 6156u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6160u)));
    st32((c.r[5].w[0] + 6164u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6168u)));
    st32((c.r[5].w[0] + 6172u), c.r[3].w[0]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[5].w[0] + 6176u)));
    st32((c.r[5].w[0] + 6180u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[3].w[0] + 6228u), c.r[4].w[0]);
    st32((c.r[28].w[0] - 26756u), 0u);
    st32((c.r[28].w[0] - 26760u), 0u);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 38;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015D8C0:
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    c.budget -= 3;
    { set32(c.r[4], 0u + 347u);  if (c.budget < 0 && preempt(c)) { c.pc = 0x00135140u | kUnwind; return; } [[clang::musttail]] return unit_000D(c, 71u, depth); }
L_0015D8D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[3], 0u + 1u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], 0u + 4u);
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; st32((c.r[28].w[0] - 26756u), c.r[3].w[0]);  if (t) { goto L_0015DAE4; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[2].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);  if (t) { goto L_0015DA50; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015DA4C; } }
    set32(c.r[7], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[7].d[0]; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);  if (t) { goto L_0015D9B4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);  if (t) { goto L_0015D91C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));  if (t) { goto L_0015DAEC; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.budget -= 1;
L_0015D91C:
    c.r[5].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], 0u + 400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 6196u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[5], 0u + 22u);
    st32((c.r[2].w[0] + 6216u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D94Cu); st32((c.r[2].w[0] + 6220u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 233u, depth + 1u); else { c.pc = 0x0015E2B0u; return; } if (c.pc != 0x0015D94Cu) [[unlikely]] return; }
L_0015D94C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D958u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0017(c, 234u, depth + 1u); else { c.pc = 0x0015E2E0u; return; } if (c.pc != 0x0015D958u) [[unlikely]] return; }
L_0015D958:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D960u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0015D960u) [[unlikely]] return; }
L_0015D960:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D968u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0015D968u) [[unlikely]] return; }
L_0015D968:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D978u);  if (depth < kMaxDepth) unit_0017(c, 232u, depth + 1u); else { c.pc = 0x0015E2A0u; return; } if (c.pc != 0x0015D978u) [[unlikely]] return; }
L_0015D978:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[5], 0u + 512u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[3], 0u + 20u);
    st16((c.r[2].w[0] + 6250u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st16((c.r[2].w[0] + 6252u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st16((c.r[2].w[0] + 6254u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6254u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6256u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0015DAE8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.budget -= 1;
L_0015D9B4:
    c.r[5].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], 0u + 400u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 24u);
    st32((c.r[2].w[0] + 6196u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    mmi::paddub(c.r[5], c.r[4], c.r[0]);
    st32((c.r[2].w[0] + 6216u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[2].w[0] + 6220u), c.r[3].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9E8u); st32((c.r[28].w[0] - 26756u), c.r[7].w[0]);  if (depth < kMaxDepth) unit_0017(c, 233u, depth + 1u); else { c.pc = 0x0015E2B0u; return; } if (c.pc != 0x0015D9E8u) [[unlikely]] return; }
L_0015D9E8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9F4u); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0017(c, 234u, depth + 1u); else { c.pc = 0x0015E2E0u; return; } if (c.pc != 0x0015D9F4u) [[unlikely]] return; }
L_0015D9F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015D9FCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0015D9FCu) [[unlikely]] return; }
L_0015D9FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA04u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0015DA04u) [[unlikely]] return; }
L_0015DA04:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA14u);  if (depth < kMaxDepth) unit_0017(c, 232u, depth + 1u); else { c.pc = 0x0015E2A0u; return; } if (c.pc != 0x0015DA14u) [[unlikely]] return; }
L_0015DA14:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[5], 0u + 512u);
    set32(c.r[4], 0u + 22u);
    set32(c.r[3], 0u + 20u);
    st16((c.r[2].w[0] + 6250u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st16((c.r[2].w[0] + 6252u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st16((c.r[2].w[0] + 6254u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6254u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6256u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0015DAE8; } }
L_0015DA4C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F660000u);
    c.budget -= 1;
L_0015DA50:
    c.r[5].d[0] = c.r[2].d[0] | 26214ull;
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], 0u + 100u);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    set32(c.r[4], 0u + 20u);
    st32((c.r[2].w[0] + 6196u), c.r[5].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[5], 0u + 22u);
    st32((c.r[2].w[0] + 6216u), c.r[6].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA80u); st32((c.r[2].w[0] + 6220u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 233u, depth + 1u); else { c.pc = 0x0015E2B0u; return; } if (c.pc != 0x0015DA80u) [[unlikely]] return; }
L_0015DA80:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA8Cu); c.r[4].d[0] = c.r[2].d[0] | 32896ull;  if (depth < kMaxDepth) unit_0017(c, 234u, depth + 1u); else { c.pc = 0x0015E2E0u; return; } if (c.pc != 0x0015DA8Cu) [[unlikely]] return; }
L_0015DA8C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA94u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0015DA94u) [[unlikely]] return; }
L_0015DA94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DA9Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 239u, depth + 1u); else { c.pc = 0x0015E3A0u; return; } if (c.pc != 0x0015DA9Cu) [[unlikely]] return; }
L_0015DA9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[12] = c.r[2].w[0];
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAACu);  if (depth < kMaxDepth) unit_0017(c, 232u, depth + 1u); else { c.pc = 0x0015E2A0u; return; } if (c.pc != 0x0015DAACu) [[unlikely]] return; }
L_0015DAAC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[5], 0u + 256u);
    set32(c.r[4], 0u + 24u);
    set32(c.r[3], 0u + 10u);
    st16((c.r[2].w[0] + 6250u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st16((c.r[2].w[0] + 6252u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st16((c.r[2].w[0] + 6254u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 6254u)));
    mmi::mult(c, 0, c.r[2].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 14;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 6256u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_0015DAE8; } }
L_0015DAE4:
    st32((c.r[28].w[0] - 26756u), 0u);
    c.budget -= 1;
L_0015DAE8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 1;
L_0015DAEC:
    set32(c.r[6], 0u + 6144u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DAF8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015DAF8u) [[unlikely]] return; }
L_0015DAF8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], 0u + 1600u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB0Cu); set32(c.r[4], c.r[2].w[0] + 2048u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015DB0Cu) [[unlikely]] return; }
L_0015DB0C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[6], 0u + 800u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB20u); set32(c.r[4], c.r[2].w[0] + 3648u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015DB20u) [[unlikely]] return; }
L_0015DB20:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    st32((c.r[2].w[0] + 6184u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[2].w[0] + 6188u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[2].w[0] + 6192u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.f[0] = ld32((c.r[2].w[0] + 6220u));
    st32((c.r[2].w[0] + 6200u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.f[0] = ld32((c.r[2].w[0] + 6220u));
    st32((c.r[2].w[0] + 6204u), c.f[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    st32((c.r[2].w[0] + 6208u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB68u); st32((c.r[2].w[0] + 6212u), 0u);  if (depth < kMaxDepth) unit_0017(c, 274u, depth + 1u); else { c.pc = 0x0015E8C0u; return; } if (c.pc != 0x0015DB68u) [[unlikely]] return; }
L_0015DB68:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], ld32((c.r[2].w[0] + 6228u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 16u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DB80u); c.r[6].sd[0] = static_cast<std::int32_t>(0x00100000u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015DB80u) [[unlikely]] return; }
L_0015DB80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015DB90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DBA0u);  if (depth < kMaxDepth) unit_0017(c, 210u, depth + 1u); else { c.pc = 0x0015DC00u; return; } if (c.pc != 0x0015DBA0u) [[unlikely]] return; }
L_0015DBA0:
    c.r[3].d[0] = c.r[2].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 8));
    c.r[2].d[0] = c.r[2].d[0] & 255ull;
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[4], c.r[2].w[0] - 33u);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].d[0] = c.r[3].d[0] & 255ull;
    set32(c.r[3], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[3].w[0] << 4);
    set32(c.r[3], c.r[3].w[0] - c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] - 33u);
    set32(c.r[3], c.r[3].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[29], c.r[29].w[0] + 16u);
    c.budget -= 21;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_0015DC00:
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 8));
    c.r[3].d[0] = c.r[2].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[1].d[0] == 0ull; c.r[4].d[0] = c.r[4].d[0] & 255ull;  if (t) { goto L_0015DC20; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 113u);  if (t) { goto L_0015DC24; } }
L_0015DC20:
    set32(c.r[2], 0u + 177u);
    c.budget -= 1;
L_0015DC24:
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] - c.r[2].w[0]);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 1);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[3].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.r[1].d[0] = c.r[2].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 12;
    { const bool t = c.r[1].d[0] != 0ull; c.r[2].d[0] = c.r[4].d[0] & 65535ull;  if (t) { goto L_0015DC60; } }
    set32(c.r[2], c.r[4].w[0] - 1u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.r[2].d[0] = c.r[4].d[0] & 65535ull;
    c.budget -= 3;
L_0015DC60:
    c.r[2].d[0] = c.r[2].sd[0] < 158ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[4].w[0] - 31u);  if (t) { goto L_0015DC84; } }
    set32(c.r[2], c.r[4].w[0] - 125u);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    set32(c.r[2], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0015DC88; } }
    set32(c.r[2], c.r[4].w[0] - 31u);
    c.budget -= 1;
L_0015DC84:
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 1;
L_0015DC88:
    c.r[2].d[0] = c.r[3].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[2].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  c.pc = t; return; }
L_0015DCB0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 19936u);
    set32(c.r[10], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[9], c.r[7].w[0] << 3);
    c.r[8].d[0] = c.r[4].d[0] << 48;
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[4].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[6], c.r[6].w[0] << 2);
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 19938u);
    st16((c.r[29].w[0] + 8u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    set32(c.r[4], c.r[6].w[0] + c.r[10].w[0]);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 19940u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 10u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 19942u);
    set32(c.r[3], c.r[3].w[0] + c.r[9].w[0]);
    st16((c.r[29].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    c.r[7].d[0] = ld16((c.r[3].w[0]));
    st16((c.r[29].w[0] + 14u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[4].w[0] + 6168u)));
    mmi::paddub(c.r[3], c.r[0], c.r[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 6176u)));
    mmi::mult(c, 0, c.r[7].w[0], c.r[8].w[0]);
    c.r[7].d[0] = c.lo.d[0];
    c.budget -= 33;
    { const bool t = 0ull == 0ull; set32(c.r[7], c.r[4].w[0] + c.r[7].w[0]);  if (t) { goto L_0015DDB0; } }
    mmi::paddub(c.r[9], c.r[5], c.r[0]);
    c.budget -= 1;
L_0015DD38:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_0015DD90; } }
L_0015DD40:
    c.r[13].d[0] = ld8((c.r[7].w[0]));
    set32(c.r[10], 0u + 192u);
    set32(c.r[11], 0u + 6u);
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 6;
L_0015DD58:
    c.r[4].d[0] = c.r[13].d[0] & c.r[10].d[0];
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> (c.r[11].w[0] & 31u)));
    c.r[4].d[0] = c.r[4].d[0] & 3ull;
    set32(c.r[4], c.r[4].w[0] << 1);
    set32(c.r[4], c.r[4].w[0] + c.r[29].w[0]);
    c.r[4].d[0] = ld16((c.r[4].w[0] + 8u));
    set32(c.r[12], c.r[12].w[0] + 1u);
    set32(c.r[11], c.r[11].w[0] - 2u);
    set32(c.r[10], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[10].w[0]) >> 2));
    st16((c.r[9].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = c.r[12].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DD58u | kUnwind; return; } goto L_0015DD58; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_0015DD90:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 6160u)));
    c.r[4].d[0] = c.r[8].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DD40u | kUnwind; return; } goto L_0015DD40; } }
    set32(c.r[5], c.r[5].w[0] + 64u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 2;
L_0015DDB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[4], c.r[6].w[0] + c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[4].w[0] + 6152u)));
    c.r[4].d[0] = c.r[3].sd[0] < c.r[4].sd[0] ? 1ull : 0ull;
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != 0ull; mmi::paddub(c.r[9], c.r[5], c.r[0]);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DD38u | kUnwind; return; } goto L_0015DD38; } }
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015DDD0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 6250u)));
    set32(c.r[4], ld32((c.r[2].w[0] + 6192u)));
    set32(c.r[3], ld32((c.r[2].w[0] + 6232u)));
    mmi::mult(c, 0, c.r[5].w[0], c.r[5].w[0]);
    c.r[5].d[0] = c.lo.d[0];
    set32(c.r[2], ld32((c.r[2].w[0] + 6228u)));
    set32(c.r[5], c.r[5].w[0] << 1);
    mmi::mult(c, 0, c.r[4].w[0], c.r[5].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 17;
    { const bool t = 0ull == 0ull; st32((c.r[2].w[0] + 16u), c.r[3].w[0]);  if (t) { goto L_0015DF48; } }
L_0015DE14:
    set32(c.r[3], ld32((c.r[5].w[0] + 6192u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015DF10; } }
    set32(c.r[2], c.r[3].w[0] << 5);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE58u); c.r[4].d[0] = ld16((c.r[2].w[0] + 2048u));  if (depth < kMaxDepth) unit_0017(c, 208u, depth + 1u); else { c.pc = 0x0015DB90u; return; } if (c.pc != 0x0015DE58u) [[unlikely]] return; }
L_0015DE58:
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[3], ld32((c.r[5].w[0] + 6192u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.r[6].d[0] = ld8((c.r[2].w[0] + 4448u));
    c.r[7].d[0] = ld8((c.r[2].w[0] + 5248u));
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DE90u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);  if (depth < kMaxDepth) unit_0017(c, 211u, depth + 1u); else { c.pc = 0x0015DCB0u; return; } if (c.pc != 0x0015DE90u) [[unlikely]] return; }
L_0015DE90:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6216u)));
    set32(c.r[2], ld32((c.r[4].w[0] + 6192u)));
    set32(c.r[7], ld32((c.r[4].w[0] + 6232u)));
    mmi::paddub(c.r[6], c.r[4], c.r[0]);
    mmi::mult(c, 0, c.r[3].w[0], c.r[2].w[0]);
    c.r[2].d[0] = c.lo.d[0];
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DEB0u); set32(c.r[5], c.r[16].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_000F(c, 62u, depth + 1u); else { c.pc = 0x0013D2E0u; return; } if (c.pc != 0x0015DEB0u) [[unlikely]] return; }
L_0015DEB0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6192u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] | 4ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6192u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    c.r[2].d[0] = c.r[2].d[0] & 253ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 24;
L_0015DF10:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[17], c.r[17].w[0] + 2u);
    set32(c.r[3], ld32((c.r[4].w[0] + 6192u)));
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[2].w[0] << 4);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[2].d[0] = ld8((c.r[3].w[0] + 3648u));
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[2].d[0] & 254ull;
    st8((c.r[3].w[0] + 3648u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 14;
L_0015DF48:
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[2], ld32((c.r[5].w[0] + 6216u)));
    c.r[2].d[0] = c.r[16].sd[0] < c.r[2].sd[0] ? 1ull : 0ull;
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DE14u | kUnwind; return; } goto L_0015DE14; } }
    set32(c.r[3], ld32((c.r[5].w[0] + 6192u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x80800000u);
    c.r[4].d[0] = c.r[2].d[0] | 32896ull;
    c.r[2].d[0] = c.r[3].d[0] ^ 1ull;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF74u); st32((c.r[5].w[0] + 6192u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 234u, depth + 1u); else { c.pc = 0x0015E2E0u; return; } if (c.pc != 0x0015DF74u) [[unlikely]] return; }
L_0015DF74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015DF7Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 525u, depth + 1u); else { c.pc = 0x00103E20u; return; } if (c.pc != 0x0015DF7Cu) [[unlikely]] return; }
L_0015DF7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015DF90:
    set32(c.r[10], ld32((c.r[28].w[0] - 26752u)));
    c.r[8].d[0] = c.r[4].d[0] << 48;
    c.r[8].d[0] = static_cast<std::uint64_t>(c.r[8].sd[0] >> 48);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[9], ld32((c.r[10].w[0] + 6216u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (t) { goto L_0015E010; } }
L_0015DFAC:
    set32(c.r[4], ld32((c.r[10].w[0] + 6192u)));
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[4].w[0] << 5);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 2048u)));
    c.budget -= 11;
    if (c.r[3].d[0] != c.r[8].d[0]) { set32(c.r[7], c.r[7].w[0] + 2u);  goto L_0015E008; }
    set32(c.r[3], c.r[4].w[0] << 4);
    set32(c.r[3], c.r[10].w[0] + c.r[3].w[0]);
    set32(c.r[4], c.r[3].w[0] + c.r[2].w[0]);
    c.r[3].d[0] = ld8((c.r[4].w[0] + 4448u));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[5].d[0];  if (t) { goto L_0015E004; } }
    c.r[3].d[0] = ld8((c.r[4].w[0] + 5248u));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[6].d[0];  if (t) { goto L_0015E004; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015E020; } }
L_0015E004:
    set32(c.r[7], c.r[7].w[0] + 2u);
    c.budget -= 1;
L_0015E008:
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 2;
L_0015E010:
    c.r[3].d[0] = c.r[2].sd[0] < c.r[9].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015DFACu | kUnwind; return; } goto L_0015DFAC; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0015E020:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E030:
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[10], ld32((c.r[3].w[0] + 6216u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (t) { goto L_0015E108; } }
L_0015E040:
    set32(c.r[4], ld32((c.r[3].w[0] + 6192u)));
    set32(c.r[7], ld32((c.r[3].w[0] + 6216u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[8], ld32((c.r[2].w[0] + 6184u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[6], c.r[4].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[8].w[0] + c.r[9].w[0]);
    mmi::div(c, 0, c.r[2].w[0], c.r[7].w[0]);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[4], c.r[2].w[0] << 1);
    set32(c.r[4], c.r[5].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 2048u)));
    c.budget -= 20;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015E0B8; } }
    set32(c.r[4], c.r[6].w[0] << 4);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + c.r[2].w[0]);
    c.r[5].d[0] = ld8((c.r[4].w[0] + 3648u));
    c.r[4].d[0] = c.r[5].d[0] & 1ull;
    c.budget -= 7;
    if (c.r[4].d[0] != 0ull) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_0015E104; }
    c.r[4].d[0] = c.r[5].d[0] & 4ull;
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015E100; } }
L_0015E0B8:
    set32(c.r[4], ld32((c.r[3].w[0] + 6192u)));
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[4], c.r[4].w[0] + c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 6184u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 6184u), c.r[3].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], ld32((c.r[4].w[0] + 6192u)));
    set32(c.r[5], ld32((c.r[4].w[0] + 6216u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[4], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[4].w[0] + 6184u)));
    mmi::div(c, 0, c.r[3].w[0], c.r[5].w[0]);
    c.r[3].d[0] = c.hi.d[0];
    c.budget -= 18;
    { const bool t = 0ull == 0ull; st32((c.r[4].w[0] + 6184u), c.r[3].w[0]);  if (t) { goto L_0015E118; } }
L_0015E100:
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_0015E104:
    c.budget -= 1;
L_0015E108:
    c.r[2].d[0] = c.r[9].sd[0] < c.r[10].sd[0] ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E040u | kUnwind; return; } goto L_0015E040; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_0015E118:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E120:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[2].d[0] = c.r[3].sd[0] < 128ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;  if (t) { goto L_0015E148; } }
    c.r[1].d[0] = c.r[3].sd[0] < 160ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015E144; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0015E168; } }
L_0015E144:
    c.r[2].d[0] = c.r[3].sd[0] < 224ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015E148:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0015E168; } }
    c.r[1].d[0] = c.r[3].sd[0] < 256ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015E164; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0015E168; } }
L_0015E164:
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015E168:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E170:
    c.r[3].d[0] = c.r[4].d[0] & 255ull;
    c.r[1].d[0] = c.r[3].sd[0] < 33ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;  if (t) { goto L_0015E18C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_0015E238; } }
    c.r[1].d[0] = c.r[3].sd[0] < 127ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015E18C:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;  if (t) { goto L_0015E1A8; } }
    set32(c.r[2], c.r[3].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 28031u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0015E238; } }
    c.r[1].d[0] = c.r[3].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015E1A8:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; c.r[1].d[0] = c.r[3].sd[0] < 166ll ? 1ull : 0ull;  if (t) { goto L_0015E1BC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 33088ull;  if (t) { goto L_0015E238; } }
    c.r[1].d[0] = c.r[3].sd[0] < 166ll ? 1ull : 0ull;
    c.budget -= 1;
L_0015E1BC:
    c.budget -= 2;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[2], 0u + 176u);  if (t) { goto L_0015E1E4; } }
    set32(c.r[2], c.r[28].w[0] - 32057u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 28161u);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = c.r[2].d[0] & 65535ull;  if (t) { goto L_0015E238; } }
    set32(c.r[2], 0u + 176u);
    c.budget -= 1;
L_0015E1E4:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 222u);  if (t) { goto L_0015E1F8; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 61114ull;  if (t) { goto L_0015E238; } }
    set32(c.r[2], 0u + 222u);
    c.budget -= 1;
L_0015E1F8:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0]; set32(c.r[2], 0u + 223u);  if (t) { goto L_0015E20C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 61098ull;  if (t) { goto L_0015E238; } }
    set32(c.r[2], 0u + 223u);
    c.budget -= 1;
L_0015E20C:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0015E21C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[2].d[0] = 0ull | 61097ull;  if (t) { goto L_0015E238; } }
L_0015E21C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20042u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    set32(c.r[2], c.r[2].w[0] + 32767u);
    set32(c.r[2], c.r[2].w[0] + 28417u);
    c.r[2].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 7;
L_0015E238:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015E240:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00A6(c, 138u, depth); }
L_0015E250:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00A6(c, 133u, depth); }
L_0015E260:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_00A6(c, 139u, depth); }
L_0015E270:
    set32(c.r[6], ld32((c.r[28].w[0] - 26752u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[3], c.r[3].w[0] + 19792u);
    set32(c.r[5], c.r[4].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st32((c.r[6].w[0] + 6212u), c.r[4].w[0]);
    set32(c.r[4], ld32((c.r[3].w[0])));
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 10;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 6236u), c.r[4].w[0]);  c.pc = t; return; }
L_0015E2A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 6208u), c.f[12]);  c.pc = t; return; }
L_0015E2B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26752u)));
    c.r[3].d[0] = c.r[5].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 6;
    { const bool t = c.r[3].sd[0] >= 0; st16((c.r[6].w[0] + 6244u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0015E2D0; } }
    set32(c.r[3], c.r[3].w[0] + 1u);
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0015E2D0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6246u), static_cast<std::uint16_t>(c.r[5].w[0]));  c.pc = t; return; }
L_0015E2E0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xFF000000u);
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    set32(c.r[2], c.r[2].w[0] >> 24);
    c.budget -= 9;
    { const bool t = c.r[2].sd[0] < 0; st32((c.r[3].w[0] + 6236u), c.r[4].w[0]);  if (t) { goto L_0015E310; } }
    c.f[0] = c.r[2].w[0];
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.f[1] = fp::cvt_s_w(c.f[0]);  if (t) { goto L_0015E32C; } }
L_0015E310:
    set32(c.r[3], c.r[2].w[0] >> 1);
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.r[3].d[0] = c.r[3].d[0] | c.r[2].d[0];
    c.f[0] = c.r[3].w[0];
    c.f[1] = fp::cvt_s_w(c.f[0]);
    c.f[1] = fp::add(c.f[1], c.f[1]);
    c.budget -= 7;
L_0015E32C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43000000u);
    c.f[0] = c.r[2].w[0];
    fpu_div(c, 20u, c.f[1], c.f[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E34Cu); c.f[12] = c.f[20];  if (depth < kMaxDepth) unit_0007(c, 115u, depth + 1u); else { c.pc = 0x0011DF88u; return; } if (c.pc != 0x0015E34Cu) [[unlikely]] return; }
L_0015E34C:
    c.r[5].sd[0] = static_cast<std::int32_t>(0x3FF00000u);
    c.r[5].d[0] = c.r[5].d[0] << 32;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E35Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0000(c, 40u, depth + 1u); else { c.pc = 0x00100150u; return; } if (c.pc != 0x0015E35Cu) [[unlikely]] return; }
L_0015E35C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; c.f[12] = c.f[20];  if (t) { goto L_0015E370; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.f[20] = c.r[2].w[0];
    c.f[12] = c.f[20];
    c.budget -= 3;
L_0015E370:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E378u);  if (depth < kMaxDepth) unit_0017(c, 232u, depth + 1u); else { c.pc = 0x0015E2A0u; return; } if (c.pc != 0x0015E378u) [[unlikely]] return; }
L_0015E378:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015E390:
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st32((c.r[3].w[0] + 6240u), c.r[4].w[0]);  c.pc = t; return; }
L_0015E3A0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26752u)));
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[3].w[0] + 6248u), static_cast<std::uint16_t>(c.r[4].w[0]));  c.pc = t; return; }
L_0015E3B0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    st32((c.r[29].w[0] + 4u), c.f[21]);
    st32((c.r[29].w[0]), c.f[20]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], 0u + 1u);
    c.f[21] = c.f[12];
    st32((c.r[28].w[0] - 26756u), c.r[3].w[0]);
    set32(c.r[3], 0u + 4u);
    st32((c.r[2].w[0] + 6224u), c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    mmi::paddub(c.r[16], c.r[4], c.r[0]);
    set32(c.r[4], ld32((c.r[2].w[0] + 6212u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E3F0u); c.f[20] = c.f[13];  if (depth < kMaxDepth) unit_0017(c, 231u, depth + 1u); else { c.pc = 0x0015E270u; return; } if (c.pc != 0x0015E3F0u) [[unlikely]] return; }
L_0015E3F0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    c.f[14] = 0u;
    c.f[12] = c.f[21];
    c.f[13] = c.f[20];
    mmi::paddub(c.r[5], c.r[16], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E40Cu); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 66u, depth + 1u); else { c.pc = 0x0013D400u; return; } if (c.pc != 0x0015E40Cu) [[unlikely]] return; }
L_0015E40C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[16]);
    c.f[21] = ld32((c.r[29].w[0] + 4u));
    c.f[20] = ld32((c.r[29].w[0]));
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015E430:
    set32(c.r[29], c.r[29].w[0] - 160u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], 0u + 4u);
    st32((c.r[28].w[0] - 26756u), c.r[2].w[0]);
    c.r[2].d[0] = c.r[3].sd[0] < 8ll ? 1ull : 0ull;
    st32((c.r[29].w[0] + 112u), c.r[7].w[0]);
    st64((c.r[29].w[0] + 128u), c.r[8].d[0]);
    st64((c.r[29].w[0] + 136u), c.r[9].d[0]);
    st64((c.r[29].w[0] + 144u), c.r[10].d[0]);
    st64((c.r[29].w[0] + 152u), c.r[11].d[0]);
    mmi::paddub(c.r[18], c.r[4], c.r[0]);
    mmi::paddub(c.r[17], c.r[5], c.r[0]);
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[6], c.r[0]);  if (t) { goto L_0015E480; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_0015E48C; } }
L_0015E480:
    set32(c.r[2], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.budget -= 3;
L_0015E48C:
    set32(c.r[2], c.r[29].w[0] + 160u);
    set32(c.r[5], ld32((c.r[29].w[0] + 112u)));
    set32(c.r[6], c.r[2].w[0] - c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4A4u); set32(c.r[4], c.r[2].w[0] + 832u);  if (depth < kMaxDepth) unit_0006(c, 193u, depth + 1u); else { c.pc = 0x0011AAD8u; return; } if (c.pc != 0x0015E4A4u) [[unlikely]] return; }
L_0015E4A4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], 0u + 4u);
    mmi::paddub(c.r[4], c.r[16], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4B8u); st32((c.r[2].w[0] + 6224u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_0017(c, 231u, depth + 1u); else { c.pc = 0x0015E270u; return; } if (c.pc != 0x0015E4B8u) [[unlikely]] return; }
L_0015E4B8:
    c.f[1] = c.r[18].w[0];
    c.f[0] = c.r[17].w[0];
    c.f[12] = fp::cvt_s_w(c.f[1]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26752u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], c.r[2].w[0] + 832u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.f[14] = 0u;
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E4E4u); c.f[13] = fp::cvt_s_w(c.f[0]);  if (depth < kMaxDepth) unit_000F(c, 66u, depth + 1u); else { c.pc = 0x0013D400u; return; } if (c.pc != 0x0015E4E4u) [[unlikely]] return; }
L_0015E4E4:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 160u);  c.pc = t; return; }
L_0015E500:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26756u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015E52C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E51Cu);  if (depth < kMaxDepth) unit_0017(c, 215u, depth + 1u); else { c.pc = 0x0015DDD0u; return; } if (c.pc != 0x0015E51Cu) [[unlikely]] return; }
L_0015E51C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E528u); set32(c.r[4], c.r[2].w[0] + 976u);  if (depth < kMaxDepth) unit_000D(c, 290u, depth + 1u); else { c.pc = 0x00137FF0u; return; } if (c.pc != 0x0015E528u) [[unlikely]] return; }
L_0015E528:
    st32((c.r[28].w[0] - 26756u), 0u);
    c.budget -= 1;
L_0015E52C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015E540:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].d[0] = c.r[2].d[0] | 32768ull;
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E568u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015E568u) [[unlikely]] return; }
L_0015E568:
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 3;
L_0015E574:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[16].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 87u)));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.budget -= 7;
    if (c.r[3].d[0] != 0ull) { set32(c.r[2], 0u + 4u);  goto L_0015E5A4; }
    set32(c.r[3], 0u + 4u);
    c.budget -= 3;
    if (c.r[16].d[0] != c.r[3].d[0]) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0015E5DC; }
    set32(c.r[2], 0u + 4u);
    c.budget -= 2;
L_0015E5A4:
    c.budget -= 2;
    { const bool t = c.r[16].d[0] != c.r[2].d[0];  if (t) { goto L_0015E5B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; set32(c.r[5], c.r[2].w[0] + 20264u);  if (t) { goto L_0015E5C8; } }
L_0015E5B8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    set32(c.r[5], c.r[2].w[0] + 304u);
    c.budget -= 4;
L_0015E5C8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    c.r[2].d[0] = c.r[2].d[0] | 32768ull;
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E5D8u); set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0017(c, 258u, depth + 1u); else { c.pc = 0x0015E680u; return; } if (c.pc != 0x0015E5D8u) [[unlikely]] return; }
L_0015E5D8:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0015E5DC:
    c.r[3].d[0] = c.r[16].sd[0] < 5ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 16u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E574u | kUnwind; return; } goto L_0015E574; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015E610:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[6].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E634u); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015E634u) [[unlikely]] return; }
L_0015E634:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[17], c.r[2].w[0] + 25312u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[18], c.r[0], c.r[0]);
    c.budget -= 4;
L_0015E644:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    set32(c.r[4], c.r[18].w[0] + c.r[2].w[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E654u); set32(c.r[5], c.r[17].w[0] + 16u);  if (depth < kMaxDepth) unit_0017(c, 258u, depth + 1u); else { c.pc = 0x0015E680u; return; } if (c.pc != 0x0015E654u) [[unlikely]] return; }
L_0015E654:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[3].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 32u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 12288u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E644u | kUnwind; return; } goto L_0015E644; } }
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_0015E680:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    mmi::paddub(c.r[19], c.r[5], c.r[0]);
    mmi::paddub(c.r[20], c.r[4], c.r[0]);
    mmi::paddub(c.r[4], c.r[19], c.r[0]);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E6ACu); st128((c.r[29].w[0]) & ~15u, c.r[16]);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0015E6ACu) [[unlikely]] return; }
L_0015E6AC:
    set32(c.r[16], c.r[2].w[0] >> 1);
    c.r[1].d[0] = c.r[16].sd[0] < 9ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[4], c.r[20], c.r[0]);  if (t) { goto L_0015E6C4; } }
    set32(c.r[16], 0u + 8u);
    mmi::paddub(c.r[4], c.r[20], c.r[0]);
    c.budget -= 2;
L_0015E6C4:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 1;
L_0015E6C8:
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[3].d[0] = c.r[5].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[4], c.r[4].w[0] + 1024u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E6C8u | kUnwind; return; } goto L_0015E6C8; } }
    set32(c.r[20], c.r[20].w[0] + 2u);
    c.r[1].d[0] = 0ll < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[18], c.r[0], c.r[0]);  if (t) { goto L_0015E7F0; } }
L_0015E6F4:
    c.r[2].d[0] = ld8((c.r[19].w[0]));
    c.r[3].d[0] = ld8((c.r[19].w[0] + 1u));
    mmi::paddub(c.r[17], c.r[20], c.r[0]);
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[2], c.r[2].w[0] << 8);
    c.r[2].d[0] = c.r[2].d[0] | c.r[3].d[0];
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[4].d[0] = c.r[2].d[0] & 65535ull;
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E724u); set32(c.r[19], c.r[19].w[0] + 2u);  if (depth < kMaxDepth) unit_0017(c, 208u, depth + 1u); else { c.pc = 0x0015DB90u; return; } if (c.pc != 0x0015E724u) [[unlikely]] return; }
L_0015E724:
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    c.r[4].d[0] = c.r[2].d[0] << 48;
    set32(c.r[6], 0u + 1u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 48);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E73Cu); mmi::paddub(c.r[7], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 211u, depth + 1u); else { c.pc = 0x0015DCB0u; return; } if (c.pc != 0x0015E73Cu) [[unlikely]] return; }
L_0015E73C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26752u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
L_0015E748:
    set32(c.r[4], c.r[4].w[0] + 2u);
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(0u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(0u));
    c.r[3].d[0] = c.r[4].sd[0] < 20ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 4u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E748u | kUnwind; return; } goto L_0015E748; } }
    set32(c.r[17], c.r[17].w[0] + 472u);
    set32(c.r[7], 0u + 1u);
    c.budget -= 3;
L_0015E770:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 2;
L_0015E778:
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.r[3].d[0] = c.r[5].sd[0] < 19ll ? 1ull : 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld16((c.r[6].w[0] + 2u));
    st16((c.r[17].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 4u);
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E778u | kUnwind; return; } goto L_0015E778; } }
    c.r[1].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    c.budget -= 3;
    if (c.r[1].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0015E7CC; }
L_0015E7A8:
    c.r[4].d[0] = ld16((c.r[6].w[0]));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[3].d[0] = c.r[5].sd[0] < 21ll ? 1ull : 0ull;
    st16((c.r[17].w[0]), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E7A8u | kUnwind; return; } goto L_0015E7A8; } }
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 2;
L_0015E7CC:
    c.r[3].d[0] = c.r[7].sd[0] < 24ll ? 1ull : 0ull;
    set32(c.r[6], c.r[6].w[0] + 22u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 470u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E770u | kUnwind; return; } goto L_0015E770; } }
    set32(c.r[18], c.r[18].w[0] + 1u);
    c.r[3].d[0] = c.r[18].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[20], c.r[20].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0015E6F4u | kUnwind; return; } goto L_0015E6F4; } }
    c.budget -= 1;
L_0015E7F0:
    ld128((c.r[29].w[0] + 80u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[20]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_0015E810:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00B70000u);
    set32(c.r[5], 0u + 256u);
    set32(c.r[6], 0u + 128u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E82Cu); c.r[4].d[0] = c.r[2].d[0] | 32768ull;  if (depth < kMaxDepth) unit_000F(c, 95u, depth + 1u); else { c.pc = 0x0013DCB0u; return; } if (c.pc != 0x0015E82Cu) [[unlikely]] return; }
L_0015E82C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 26276u), c.r[2].w[0]);  if (t) { goto L_0015E83C; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 26760u), c.r[3].w[0]);
    c.budget -= 2;
L_0015E83C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015E850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    set32(c.r[5], 0u + 256u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[4].sd[0] = static_cast<std::int32_t>(0x01C00000u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E868u); mmi::paddub(c.r[6], c.r[5], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 95u, depth + 1u); else { c.pc = 0x0013DCB0u; return; } if (c.pc != 0x0015E868u) [[unlikely]] return; }
L_0015E868:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; st32((c.r[28].w[0] - 26276u), c.r[2].w[0]);  if (t) { goto L_0015E878; } }
    set32(c.r[3], 0u + 1u);
    st32((c.r[28].w[0] - 26760u), c.r[3].w[0]);
    c.budget -= 2;
L_0015E878:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015E890:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26276u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == 0ull; st32((c.r[28].w[0] - 26760u), 0u);  if (t) { goto L_0015E8B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E8ACu);  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x0015E8ACu) [[unlikely]] return; }
L_0015E8AC:
    st32((c.r[28].w[0] - 26276u), 0u);
    c.budget -= 1;
L_0015E8B0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015E8C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26752u)));
    set32(c.r[3], 0u - 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st16((c.r[1].w[0] + 976u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], ld32((c.r[5].w[0] + 6232u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[6], c.r[5].w[0] + 6250u);
    st32((c.r[1].w[0] + 992u), c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st16((c.r[1].w[0] + 980u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 6250u)));
    c.budget -= 14;
    { const bool t = c.r[4].sd[0] >= 0; set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 6));  if (t) { goto L_0015E900; } }
    set32(c.r[3], c.r[4].w[0] + 63u);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.budget -= 2;
L_0015E900:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st16((c.r[1].w[0] + 984u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));  if (t) { goto L_0015E91C; } }
    set32(c.r[3], c.r[3].w[0] + 63u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    c.budget -= 2;
L_0015E91C:
    mmi::mult(c, 0, c.r[4].w[0], c.r[4].w[0]);
    c.r[4].d[0] = c.lo.d[0];
    set32(c.r[5], 0u + 16384u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[4].w[0] << 5);
    set32(c.r[4], c.r[5].w[0] - c.r[4].w[0]);
    st16((c.r[1].w[0] + 982u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[3], 0u - 1u);
    st16((c.r[1].w[0] + 988u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    st16((c.r[1].w[0] + 986u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 15;
    { const std::uint32_t t = c.r[31].w[0]; st16((c.r[1].w[0] + 1000u), static_cast<std::uint16_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0015E960:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20280u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015E990:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], c.r[4].w[0] + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 3u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015E9DC; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015E9C4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0015EAF4; } }
L_0015E9C4:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015EAF0; } }
L_0015E9DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015E9E4u);  if (depth < kMaxDepth) unit_0020(c, 151u, depth + 1u); else { c.pc = 0x00181710u; return; } if (c.pc != 0x0015E9E4u) [[unlikely]] return; }
L_0015E9E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0015EAF0; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 40u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 4u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 331u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 330u), static_cast<std::uint8_t>(0u));
    st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(0u));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 36;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA7Cu); st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EA7Cu) [[unlikely]] return; }
L_0015EA7C:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA88u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EA88u) [[unlikely]] return; }
L_0015EA88:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EA94u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EA94u) [[unlikely]] return; }
L_0015EA94:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAA0u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EAA0u) [[unlikely]] return; }
L_0015EAA0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAACu); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EAACu) [[unlikely]] return; }
L_0015EAAC:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAB8u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EAB8u) [[unlikely]] return; }
L_0015EAB8:
    set32(c.r[4], 0u + 2u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAC4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EAC4u) [[unlikely]] return; }
L_0015EAC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].d[0] = c.r[16].d[0] & 6ull;
    st8((c.r[3].w[0] + 185u), static_cast<std::uint8_t>(0u));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[28].w[0] - 26748u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015EAE8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAE0u);  if (depth < kMaxDepth) unit_0017(c, 424u, depth + 1u); else { c.pc = 0x0015FE80u; return; } if (c.pc != 0x0015EAE0u) [[unlikely]] return; }
L_0015EAE0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015EAF0; } }
L_0015EAE8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EAF0u);  if (depth < kMaxDepth) unit_0017(c, 429u, depth + 1u); else { c.pc = 0x0015FFB0u; return; } if (c.pc != 0x0015EAF0u) [[unlikely]] return; }
L_0015EAF0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015EAF4:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015EB00:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(7ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[6], c.r[5].w[0] + 3u);  if (t) { goto L_0015F020; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21168u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015EB38:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F020; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 20u);
    set32(c.r[4], 0u + 3u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB84u); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EB84u) [[unlikely]] return; }
L_0015EB84:
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB90u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EB90u) [[unlikely]] return; }
L_0015EB90:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EB9Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EB9Cu) [[unlikely]] return; }
L_0015EB9C:
    set32(c.r[4], 0u + 6u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBA8u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBA8u) [[unlikely]] return; }
L_0015EBA8:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBB4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBB4u) [[unlikely]] return; }
L_0015EBB4:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBC0u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBC0u) [[unlikely]] return; }
L_0015EBC0:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBCCu); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBCCu) [[unlikely]] return; }
L_0015EBCC:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBD8u); set32(c.r[5], 0u + 3u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBD8u) [[unlikely]] return; }
L_0015EBD8:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBE4u); set32(c.r[5], 0u + 4u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBE4u) [[unlikely]] return; }
L_0015EBE4:
    set32(c.r[4], 0u + 7u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EBF0u); set32(c.r[5], 0u + 5u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EBF0u) [[unlikely]] return; }
L_0015EBF0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_0015F024; } }
L_0015EBF8:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull; set32(c.r[4], c.r[5].w[0] + 14u);  if (t) { goto L_0015EC14; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EC14:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].d[0] = ld16((c.r[1].w[0] + 25700u));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 1024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25700u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC38u); st8((c.r[5].w[0] + 7u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015EC38u) [[unlikely]] return; }
L_0015EC38:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 3u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC4Cu); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x0015EC4Cu) [[unlikely]] return; }
L_0015EC4C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015EC84; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], 0u + 43u);
    st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC84u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015EC84u) [[unlikely]] return; }
L_0015EC84:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EC8Cu);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015EC8Cu) [[unlikely]] return; }
L_0015EC8C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015ED3C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015ECB4; } }
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ECB4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015ECB4u) [[unlikely]] return; }
L_0015ECB4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 100u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015ECF8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015ECF8; } }
    set32(c.r[3], 0u + 5u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 60u);
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0015F020; } }
L_0015ECF8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 3u);
    set32(c.r[2], 0u + 1024u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 7u), static_cast<std::uint8_t>(0u));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED2Cu); st16((c.r[1].w[0] + 25700u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0018(c, 11u, depth + 1u); else { c.pc = 0x001600D0u; return; } if (c.pc != 0x0015ED2Cu) [[unlikely]] return; }
L_0015ED2C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED34u);  if (depth < kMaxDepth) unit_0018(c, 18u, depth + 1u); else { c.pc = 0x00160130u; return; } if (c.pc != 0x0015ED34u) [[unlikely]] return; }
L_0015ED34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015F058; } }
L_0015ED3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED44u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015ED44u) [[unlikely]] return; }
L_0015ED44:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F020; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED64u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0018(c, 11u, depth + 1u); else { c.pc = 0x001600D0u; return; } if (c.pc != 0x0015ED64u) [[unlikely]] return; }
L_0015ED64:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED6Cu);  if (depth < kMaxDepth) unit_0018(c, 18u, depth + 1u); else { c.pc = 0x00160130u; return; } if (c.pc != 0x0015ED6Cu) [[unlikely]] return; }
L_0015ED6C:
    set32(c.r[5], 0u + 53u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015ED78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015ED78u) [[unlikely]] return; }
L_0015ED78:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F054; } }
L_0015ED80:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; set32(c.r[6], c.r[5].w[0] + 5u);  if (t) { goto L_0015EE40; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015EE08; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015EDAC; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F020; } }
L_0015EDAC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0])));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EDD0u); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0017(c, 423u, depth + 1u); else { c.pc = 0x0015FDE0u; return; } if (c.pc != 0x0015EDD0u) [[unlikely]] return; }
L_0015EDD0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015EDE8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0015EDF8; } }
L_0015EDE8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 4;
L_0015EDF8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE00u);  if (depth < kMaxDepth) unit_0017(c, 425u, depth + 1u); else { c.pc = 0x0015FEF0u; return; } if (c.pc != 0x0015EE00u) [[unlikely]] return; }
L_0015EE00:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F020; } }
L_0015EE08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE10u);  if (depth < kMaxDepth) unit_001F(c, 364u, depth + 1u); else { c.pc = 0x0017FE40u; return; } if (c.pc != 0x0015EE10u) [[unlikely]] return; }
L_0015EE10:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F020; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 10u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0015F020; } }
L_0015EE40:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE58u);  if (depth < kMaxDepth) unit_0017(c, 39u, depth + 1u); else { c.pc = 0x0015C510u; return; } if (c.pc != 0x0015EE58u) [[unlikely]] return; }
L_0015EE58:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F020; } }
L_0015EE60:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EE68u);  if (depth < kMaxDepth) unit_009D(c, 15u, depth + 1u); else { c.pc = 0x00374520u; return; } if (c.pc != 0x0015EE68u) [[unlikely]] return; }
L_0015EE68:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015EEA8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015EEA8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 3u)));
    set32(c.r[5], 0u + 60u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(c.r[5].w[0]));
    c.budget -= 10;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EEA8:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EEBC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    set32(c.r[4], 0u + 15u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0015EEF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015EEF4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EEF4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EEF4u) [[unlikely]] return; }
L_0015EEF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 14u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015EF18; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EF18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF20u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015EF20u) [[unlikely]] return; }
L_0015EF20:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015EF38; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF30u);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015EF30u) [[unlikely]] return; }
L_0015EF30:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F020; } }
L_0015EF38:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[4].w[0] + 3u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EF54:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    set32(c.r[4], 0u + 5u);
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[4].d[0];  if (t) { goto L_0015EF8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015EF8C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EF8Cu); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015EF8Cu) [[unlikely]] return; }
L_0015EF8C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 14u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015EFB0; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EFB0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFB8u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015EFB8u) [[unlikely]] return; }
L_0015EFB8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015EFD0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015EFC8u);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015EFC8u) [[unlikely]] return; }
L_0015EFC8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F020; } }
L_0015EFD0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 3u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F020; } }
L_0015EFF0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F020; } }
    set32(c.r[5], 0u + 1u);
    st8((c.r[6].w[0]), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 4u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F020u); st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F020u) [[unlikely]] return; }
L_0015F020:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_0015F024:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 3u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F054; } }
    c.r[4].d[0] = c.r[3].d[0] << 56;
    set32(c.r[3], 0u + 2u);
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F054; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F04Cu);  if (depth < kMaxDepth) unit_0018(c, 11u, depth + 1u); else { c.pc = 0x001600D0u; return; } if (c.pc != 0x0015F04Cu) [[unlikely]] return; }
L_0015F04C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F054u);  if (depth < kMaxDepth) unit_0018(c, 18u, depth + 1u); else { c.pc = 0x00160130u; return; } if (c.pc != 0x0015F054u) [[unlikely]] return; }
L_0015F054:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015F058:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015F060:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003C0000u);
    set32(c.r[2], c.r[2].w[0] + 20304u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F08Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0015F08Cu) [[unlikely]] return; }
L_0015F08C:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F0F8; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015F0B8; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[3], 0u + 3u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F0C0; } }
L_0015F0B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F0C0u);  if (depth < kMaxDepth) unit_0018(c, 11u, depth + 1u); else { c.pc = 0x001600D0u; return; } if (c.pc != 0x0015F0C0u) [[unlikely]] return; }
L_0015F0C0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 4u)));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0015F0F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F0F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[1].d[0] = c.r[3].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_0015F0F8; } }
L_0015F0F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F0F8u);  if (depth < kMaxDepth) unit_0018(c, 18u, depth + 1u); else { c.pc = 0x00160130u; return; } if (c.pc != 0x0015F0F8u) [[unlikely]] return; }
L_0015F0F8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015F110:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(6ll) ? 1ull : 0ull;
    c.budget -= 7;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[5], c.r[6].w[0] + 5u);  if (t) { goto L_0015F2E4; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21200u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015F148:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[4], 0u + 10u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F178u); st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0020(c, 189u, depth + 1u); else { c.pc = 0x00181F20u; return; } if (c.pc != 0x0015F178u) [[unlikely]] return; }
L_0015F178:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015F2E8; } }
L_0015F180:
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    set32(c.r[3], c.r[4].w[0] - 1u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; st16((c.r[6].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F2E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1A4u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 426u, depth + 1u); else { c.pc = 0x0015FF60u; return; } if (c.pc != 0x0015F1A4u) [[unlikely]] return; }
L_0015F1A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F2E4; } }
L_0015F1AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1B4u);  if (depth < kMaxDepth) unit_0020(c, 196u, depth + 1u); else { c.pc = 0x00181FB0u; return; } if (c.pc != 0x0015F1B4u) [[unlikely]] return; }
L_0015F1B4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F2E4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F2E4; } }
L_0015F1D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F1E0u); st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0017(c, 423u, depth + 1u); else { c.pc = 0x0015FDE0u; return; } if (c.pc != 0x0015F1E0u) [[unlikely]] return; }
L_0015F1E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F1F8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 188u)));
    c.budget -= 4;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_0015F21C; } }
L_0015F1F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F21Cu); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0015F21Cu) [[unlikely]] return; }
L_0015F21C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F224u);  if (depth < kMaxDepth) unit_0017(c, 425u, depth + 1u); else { c.pc = 0x0015FEF0u; return; } if (c.pc != 0x0015F224u) [[unlikely]] return; }
L_0015F224:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F2E4; } }
L_0015F22C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F234u);  if (depth < kMaxDepth) unit_001F(c, 364u, depth + 1u); else { c.pc = 0x0017FE40u; return; } if (c.pc != 0x0015F234u) [[unlikely]] return; }
L_0015F234:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F2E4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F260u); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x0015F260u) [[unlikely]] return; }
L_0015F260:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F2E4; } }
L_0015F268:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F270u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x0015F270u) [[unlikely]] return; }
L_0015F270:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F2E4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 6u);
    st8((c.r[2].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
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
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F2C0u); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x0015F2C0u) [[unlikely]] return; }
L_0015F2C0:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], c.r[2].w[0] + 29792u);
    set32(c.r[6], 0u + 640u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F2D4u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015F2D4u) [[unlikely]] return; }
L_0015F2D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    st8((c.r[28].w[0] - 25664u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 185u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 4;
L_0015F2E4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015F2E8:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015F2F0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    set32(c.r[7], c.r[4].w[0] + 6u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F3F0; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F3E4; } }
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F3C4; } }
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_0015F33C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);  if (t) { goto L_0015F494; } }
L_0015F33C:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[2].w[0] + 1040u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F36Cu); st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015F36Cu) [[unlikely]] return; }
L_0015F36C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[2].w[0] + 1040u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F384u); set32(c.r[5], c.r[2].w[0] + 84u);  if (depth < kMaxDepth) unit_0018(c, 4u, depth + 1u); else { c.pc = 0x00160010u; return; } if (c.pc != 0x0015F384u) [[unlikely]] return; }
L_0015F384:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[2].w[0] + 1040u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 16u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F39Cu); set32(c.r[5], c.r[2].w[0] + 84u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0015F39Cu) [[unlikely]] return; }
L_0015F39C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], 0u + 94u);
    set32(c.r[5], 0u + 20u);
    set32(c.r[6], c.r[2].w[0] + 1040u);
    set32(c.r[7], 0u + 16u);
    set32(c.r[8], 0u + 3u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3BCu); mmi::paddub(c.r[9], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_009E(c, 90u, depth + 1u); else { c.pc = 0x00378CA0u; return; } if (c.pc != 0x0015F3BCu) [[unlikely]] return; }
L_0015F3BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F490; } }
L_0015F3C4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3DCu); st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x00378F80u; return; } if (c.pc != 0x0015F3DCu) [[unlikely]] return; }
L_0015F3DC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F490; } }
L_0015F3E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0015F3F0:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F3FCu); st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 100u, depth + 1u); else { c.pc = 0x00378F80u; return; } if (c.pc != 0x0015F3FCu) [[unlikely]] return; }
L_0015F3FC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F490; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F410u); set32(c.r[4], c.r[2].w[0] + 1040u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0015F410u) [[unlikely]] return; }
L_0015F410:
    c.r[1].d[0] = c.r[2].sd[0] < 17ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0015F420; } }
    set32(c.r[16], 0u + 16u);
    c.budget -= 1;
L_0015F420:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[6], 0u + 16u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 16;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F460u); set32(c.r[4], c.r[2].w[0] + 84u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015F460u) [[unlikely]] return; }
L_0015F460:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], c.r[2].w[0] + 1040u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F478u); set32(c.r[4], c.r[3].w[0] + 84u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0015F478u) [[unlikely]] return; }
L_0015F478:
    c.budget -= 2;
    { const bool t = c.r[16].sd[0] >= 0; set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[16].w[0]) >> 1));  if (t) { goto L_0015F488; } }
    set32(c.r[3], c.r[16].w[0] + 1u);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 1));
    c.budget -= 2;
L_0015F488:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 100u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 2;
L_0015F490:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015F494:
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_0015F4A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 10u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[6].d[0] == c.r[5].d[0]; set32(c.r[7], c.r[3].w[0] + 5u);  if (t) { goto L_0015F854; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[4].d[0];  if (t) { goto L_0015F7B8; } }
    set32(c.r[3], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0015F720; } }
    set32(c.r[3], 0u + 5u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0015F680; } }
    set32(c.r[3], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0015F680; } }
    set32(c.r[5], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[6].d[0] == c.r[5].d[0];  if (t) { goto L_0015F534; } }
    c.budget -= 2;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_0015F508; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_0015F8DC; } }
L_0015F508:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[3], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F52Cu); st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (depth < kMaxDepth) unit_0025(c, 250u, depth + 1u); else { c.pc = 0x00196A00u; return; } if (c.pc != 0x0015F52Cu) [[unlikely]] return; }
L_0015F52C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F534:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F56C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    set32(c.r[3], 0u + 8u);
    c.budget -= 5;
    { const bool t = c.r[6].d[0] == c.r[3].d[0];  if (t) { goto L_0015F56C; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F564u); st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F564u) [[unlikely]] return; }
L_0015F564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F56Cu);  if (depth < kMaxDepth) unit_000E(c, 169u, depth + 1u); else { c.pc = 0x0013A660u; return; } if (c.pc != 0x0015F56Cu) [[unlikely]] return; }
L_0015F56C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 14u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F590; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F590:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F598u);  if (depth < kMaxDepth) unit_009D(c, 18u, depth + 1u); else { c.pc = 0x00374610u; return; } if (c.pc != 0x0015F598u) [[unlikely]] return; }
L_0015F598:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0015F650; } }
    set32(c.r[6], 0u + 3u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[6].d[0];  if (t) { goto L_0015F624; } }
    set32(c.r[5], 0u + 2u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[5].d[0];  if (t) { goto L_0015F5F8; } }
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_0015F5D0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F5D0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 60u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F5F0u); st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (depth < kMaxDepth) unit_000E(c, 170u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x0015F5F0u) [[unlikely]] return; }
L_0015F5F0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F5F8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F61Cu); st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 170u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x0015F61Cu) [[unlikely]] return; }
L_0015F61C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F624:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F648u); st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 170u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x0015F648u) [[unlikely]] return; }
L_0015F648:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F650:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[4], 0u + 60u);
    set32(c.r[2], 0u + 1u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F678u); st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_000E(c, 170u, depth + 1u); else { c.pc = 0x0013A670u; return; } if (c.pc != 0x0015F678u) [[unlikely]] return; }
L_0015F678:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F680:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F6B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    set32(c.r[3], 0u + 9u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F6B8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6B8u); st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F6B8u) [[unlikely]] return; }
L_0015F6B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 14u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F6DC; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F6DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6E4u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015F6E4u) [[unlikely]] return; }
L_0015F6E4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015F6FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F6F4u);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015F6F4u) [[unlikely]] return; }
L_0015F6F4:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F6FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F720:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F750; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == c.r[5].d[0];  if (t) { goto L_0015F750; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F750u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F750u) [[unlikely]] return; }
L_0015F750:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 14u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F774; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F774:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F77Cu);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015F77Cu) [[unlikely]] return; }
L_0015F77C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015F794; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F78Cu);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015F78Cu) [[unlikely]] return; }
L_0015F78C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F794:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F7B8:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F7EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    set32(c.r[3], 0u + 13u);
    c.budget -= 5;
    { const bool t = c.r[5].d[0] == c.r[3].d[0];  if (t) { goto L_0015F7EC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F7ECu); st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F7ECu) [[unlikely]] return; }
L_0015F7EC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 14u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015F810; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F810:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F818u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015F818u) [[unlikely]] return; }
L_0015F818:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0015F830; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F828u);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015F828u) [[unlikely]] return; }
L_0015F828:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F8D8; } }
L_0015F830:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 10u);
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[4].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[1].w[0] + 25793u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015F8D8; } }
L_0015F854:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25793u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015F8D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 25792u)));
    set32(c.r[3], 0u + 2u);
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015F8D8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[4], 0u + 4u);
    set32(c.r[5], 0u + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F88Cu); st8((c.r[1].w[0] + 25792u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F88Cu) [[unlikely]] return; }
L_0015F88C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u + 16u);
    st16((c.r[2].w[0] + 8u), static_cast<std::uint16_t>(0u));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 3u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F8D8u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x0015F8D8u) [[unlikely]] return; }
L_0015F8D8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015F8DC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015F8F0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    c.r[1].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(8ll) ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] == 0ull; set32(c.r[7], c.r[5].w[0] + 6u);  if (t) { goto L_0015FDC8; } }
    c.r[4].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[4], c.r[4].w[0] + 21232u);
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[3], ld32((c.r[3].w[0])));
    c.budget -= 7;
    { const std::uint32_t t = c.r[3].w[0];  c.pc = t; if (t - 0x0015C000u < 16384u) { entry = entries_0017[(t - 0x0015C000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_0015F930:
    set32(c.r[4], 0u + 8u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F93Cu); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0036(c, 58u, depth + 1u); else { c.pc = 0x001D90A0u; return; } if (c.pc != 0x0015F93Cu) [[unlikely]] return; }
L_0015F93C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1024u);
    set32(c.r[4], 0u + 12u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_0015FDC8; } }
L_0015F968:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] + 1024u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F984u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015F984u) [[unlikely]] return; }
L_0015F984:
    c.r[5].d[0] = c.r[16].d[0] << 56;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F998u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 162u, depth + 1u); else { c.pc = 0x0013A450u; return; } if (c.pc != 0x0015F998u) [[unlikely]] return; }
L_0015F998:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[16].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 5u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_0015F9C4; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F9C4u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015F9C4u) [[unlikely]] return; }
L_0015F9C4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 14u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 14u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015F9E4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0015F9E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015F9ECu);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015F9ECu) [[unlikely]] return; }
L_0015F9EC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FA24; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 12u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA1Cu); st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FA1Cu) [[unlikely]] return; }
L_0015FA1C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_0015FDCC; } }
L_0015FA24:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA2Cu);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015FA2Cu) [[unlikely]] return; }
L_0015FA2C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FDC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1024u);
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u + 3u);  if (t) { goto L_0015FA70; } }
    set32(c.r[2], 0u + 4u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    c.budget -= 7;
    { const bool t = 0ull == 0ull; st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (t) { goto L_0015FA84; } }
    set32(c.r[2], 0u + 3u);
    c.budget -= 1;
L_0015FA70:
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    st16((c.r[2].w[0] + 10u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 5;
L_0015FA84:
    set32(c.r[5], 0u + 4u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FA90u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FA90u) [[unlikely]] return; }
L_0015FA90:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FDC8; } }
L_0015FA98:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 14u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0] + 14u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015FDC8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st8((c.r[5].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(0u));
    c.budget -= 11;
    { const bool t = 0ull == 0ull; st8((c.r[28].w[0] - 26748u), static_cast<std::uint8_t>(0u));  if (t) { goto L_0015FDC8; } }
L_0015FAE0:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[16].d[0] << 56;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FAF4u); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015FAF4u) [[unlikely]] return; }
L_0015FAF4:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB08u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0015FB08u) [[unlikely]] return; }
L_0015FB08:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015FB34; } }
    set32(c.r[5], 0u + 42u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB34u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FB34u) [[unlikely]] return; }
L_0015FB34:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB3Cu);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015FB3Cu) [[unlikely]] return; }
L_0015FB3C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FB78; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[28].w[0] - 26748u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[5], 0u + 4u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 10u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB70u); st8((c.r[2].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FB70u) [[unlikely]] return; }
L_0015FB70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FDC8; } }
L_0015FB78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FB80u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015FB80u) [[unlikely]] return; }
L_0015FB80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FDC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FBA0u); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FBA0u) [[unlikely]] return; }
L_0015FBA0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FDC8; } }
L_0015FBA8:
    c.r[16].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 10u)));
    set32(c.r[4], 0u + 1u);
    c.r[17].d[0] = c.r[16].d[0] << 56;
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FBBCu); c.r[17].d[0] = static_cast<std::uint64_t>(c.r[17].sd[0] >> 56);  if (depth < kMaxDepth) unit_000E(c, 164u, depth + 1u); else { c.pc = 0x0013A470u; return; } if (c.pc != 0x0015FBBCu) [[unlikely]] return; }
L_0015FBBC:
    c.r[5].d[0] = c.r[16].d[0] << 48;
    set32(c.r[6], 0u + 1u);
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FBD0u); mmi::paddub(c.r[4], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_000E(c, 160u, depth + 1u); else { c.pc = 0x0013A3B0u; return; } if (c.pc != 0x0015FBD0u) [[unlikely]] return; }
L_0015FBD0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[17].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    st16((c.r[4].w[0] + 10u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 10u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_0015FBFC; } }
    set32(c.r[5], 0u + 42u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FBFCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FBFCu) [[unlikely]] return; }
L_0015FBFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC04u);  if (depth < kMaxDepth) unit_000E(c, 150u, depth + 1u); else { c.pc = 0x0013A170u; return; } if (c.pc != 0x0015FC04u) [[unlikely]] return; }
L_0015FC04:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FC78; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 1u);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[28].w[0] - 26748u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 10u)));
    st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_0015FC48; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0015FDC8; } }
L_0015FC48:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 4u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC5Cu); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FC5Cu) [[unlikely]] return; }
L_0015FC5C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 10u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC70u); set32(c.r[4], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015FC70u) [[unlikely]] return; }
L_0015FC70:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FDC8; } }
L_0015FC78:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FC80u);  if (depth < kMaxDepth) unit_000E(c, 157u, depth + 1u); else { c.pc = 0x0013A290u; return; } if (c.pc != 0x0015FC80u) [[unlikely]] return; }
L_0015FC80:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FDC8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    set32(c.r[5], 0u + 53u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCA0u); st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 295u, depth + 1u); else { c.pc = 0x001972F0u; return; } if (c.pc != 0x0015FCA0u) [[unlikely]] return; }
L_0015FCA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0015FDC8; } }
    set32(c.r[4], c.r[4].w[0] + 102u);
    set32(c.r[6], 0u + 10u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCC0u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015FCC0u) [[unlikely]] return; }
L_0015FCC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FDC8; } }
L_0015FCC8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[2].w[0] + 1040u);
    set32(c.r[6], 0u + 128u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[2].w[0] + 9u), static_cast<std::uint8_t>(0u));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FCF8u); st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015FCF8u) [[unlikely]] return; }
L_0015FCF8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[4], c.r[2].w[0] + 1040u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 4u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD10u); set32(c.r[5], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0015FD10u) [[unlikely]] return; }
L_0015FD10:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x42C00000u);
    c.f[12] = c.r[2].w[0];
    set32(c.r[4], 0u + 412u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x43020000u);
    c.f[13] = c.r[2].w[0];
    set32(c.r[5], 0u + 112u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[6], c.r[2].w[0] + 1040u);
    set32(c.r[7], 0u + 4u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD3Cu); set32(c.r[8], 0u + 135u);  if (depth < kMaxDepth) unit_009E(c, 88u, depth + 1u); else { c.pc = 0x00378C50u; return; } if (c.pc != 0x0015FD3Cu) [[unlikely]] return; }
L_0015FD3C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_0015FDC8; } }
L_0015FD44:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 3;
L_0015FD50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD58u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0017(c, 238u, depth + 1u); else { c.pc = 0x0015E390u; return; } if (c.pc != 0x0015FD58u) [[unlikely]] return; }
L_0015FD58:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD64u); st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_009E(c, 95u, depth + 1u); else { c.pc = 0x00378F00u; return; } if (c.pc != 0x0015FD64u) [[unlikely]] return; }
L_0015FD64:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0015FDC8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FD78u); set32(c.r[4], c.r[2].w[0] + 1040u);  if (depth < kMaxDepth) unit_0006(c, 42u, depth + 1u); else { c.pc = 0x00118878u; return; } if (c.pc != 0x0015FD78u) [[unlikely]] return; }
L_0015FD78:
    c.r[1].d[0] = c.r[2].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_0015FD88; } }
    set32(c.r[16], 0u + 4u);
    c.budget -= 1;
L_0015FD88:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st8((c.r[1].w[0] + 25794u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[6], 0u + 4u);
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDB0u); set32(c.r[4], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015FDB0u) [[unlikely]] return; }
L_0015FDB0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00640000u);
    set32(c.r[5], c.r[2].w[0] + 1040u);
    mmi::paddub(c.r[6], c.r[16], c.r[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FDC8u); set32(c.r[4], c.r[3].w[0] + 102u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0015FDC8u) [[unlikely]] return; }
L_0015FDC8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_0015FDCC:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_0015FDE0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].d[0] = ld8((c.r[1].w[0] - 576u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 101u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0015FDFC; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015FDFC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 111u)));
    c.r[3].d[0] = ld8((c.r[1].w[0] - 575u));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);  if (t) { goto L_0015FE18; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.budget -= 2;
L_0015FE18:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 102u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 574u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);  if (t) { goto L_0015FE30; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.budget -= 2;
L_0015FE30:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 103u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 573u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);  if (t) { goto L_0015FE48; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.budget -= 2;
L_0015FE48:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 104u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 572u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);  if (t) { goto L_0015FE60; } }
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.budget -= 2;
L_0015FE60:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 105u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 571u)));
    c.budget -= 4;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_0015FE74; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_0015FE74:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_0015FE80:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[4].d[0] = ld8((c.r[1].w[0] - 576u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    st8((c.r[3].w[0] + 101u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].d[0] = ld8((c.r[1].w[0] - 575u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    st8((c.r[3].w[0] + 111u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 574u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    st8((c.r[3].w[0] + 102u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 573u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    st8((c.r[3].w[0] + 103u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 572u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    st8((c.r[3].w[0] + 104u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] - 571u)));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 105u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 106u), static_cast<std::uint8_t>(0u));  c.pc = t; return; }
L_0015FEF0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    st8((c.r[1].w[0] - 576u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    st8((c.r[1].w[0] - 575u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 102u)));
    st8((c.r[1].w[0] - 574u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 103u)));
    st8((c.r[1].w[0] - 573u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 104u)));
    st8((c.r[1].w[0] - 572u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x01BA0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 105u)));
    c.budget -= 25;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[1].w[0] - 571u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_0015FF60:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[28].w[0] - 25720u);
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 101u)));
    st8((c.r[28].w[0] - 25724u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FF8Cu); st8((c.r[28].w[0] - 25712u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015FF8Cu) [[unlikely]] return; }
L_0015FF8C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[28].w[0] - 25720u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFA0u); set32(c.r[5], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0015FFA0u) [[unlikely]] return; }
L_0015FFA0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_0015FFB0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25724u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], 0u + 5u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 101u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25712u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 111u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFE4u); set32(c.r[4], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x0015FFE4u) [[unlikely]] return; }
L_0015FFE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[28].w[0] - 25720u);
    set32(c.r[6], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0015FFF8u); set32(c.r[4], c.r[2].w[0] + 102u);  if (depth < kMaxDepth) unit_0006(c, 60u, depth + 1u); else { c.pc = 0x00118D18u; return; } if (c.pc != 0x0015FFF8u) [[unlikely]] return; }
L_0015FFF8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
}

}
