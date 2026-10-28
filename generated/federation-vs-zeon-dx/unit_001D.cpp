#include "units.hpp"

namespace gen {

using namespace ps2;

const std::uint16_t entries_001D[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 6, 0, 7, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0,
    12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35,
    0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69,
    0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0,
    77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102,
    0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 0,
    125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0,
    0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0,
    161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0,
    0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0,
    0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272,
    0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0,
    316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332,
    0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345,
    0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0, 364,
    0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373,
    0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0,
    0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0,
    0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

void unit_001D(Cpu &c, std::uint32_t entry, std::uint32_t depth) {
dispatch_entry:
    switch (entry) {
    case 1u: goto L_00174000;
    case 2u: goto L_00174014;
    case 3u: goto L_00174048;
    case 4u: goto L_0017405C;
    case 5u: goto L_00174064;
    case 6u: goto L_00174068;
    case 7u: goto L_00174070;
    case 8u: goto L_00174080;
    case 9u: goto L_001740C0;
    case 10u: goto L_001740EC;
    case 11u: goto L_001740F8;
    case 12u: goto L_00174100;
    case 13u: goto L_0017410C;
    case 14u: goto L_00174128;
    case 15u: goto L_00174134;
    case 16u: goto L_00174140;
    case 17u: goto L_00174150;
    case 18u: goto L_00174160;
    case 19u: goto L_00174170;
    case 20u: goto L_00174180;
    case 21u: goto L_0017419C;
    case 22u: goto L_001741B0;
    case 23u: goto L_001741E0;
    case 24u: goto L_00174220;
    case 25u: goto L_00174258;
    case 26u: goto L_00174270;
    case 27u: goto L_00174280;
    case 28u: goto L_0017429C;
    case 29u: goto L_001742A4;
    case 30u: goto L_001742B0;
    case 31u: goto L_00174320;
    case 32u: goto L_00174344;
    case 33u: goto L_001743D4;
    case 34u: goto L_001743F4;
    case 35u: goto L_001743FC;
    case 36u: goto L_00174404;
    case 37u: goto L_00174420;
    case 38u: goto L_001744B8;
    case 39u: goto L_001744F0;
    case 40u: goto L_0017450C;
    case 41u: goto L_00174550;
    case 42u: goto L_00174588;
    case 43u: goto L_001745A0;
    case 44u: goto L_001745B0;
    case 45u: goto L_001745D0;
    case 46u: goto L_001745E0;
    case 47u: goto L_00174620;
    case 48u: goto L_00174640;
    case 49u: goto L_00174648;
    case 50u: goto L_00174650;
    case 51u: goto L_00174658;
    case 52u: goto L_00174670;
    case 53u: goto L_00174690;
    case 54u: goto L_001746C8;
    case 55u: goto L_001746E0;
    case 56u: goto L_00174720;
    case 57u: goto L_00174730;
    case 58u: goto L_00174760;
    case 59u: goto L_001747DC;
    case 60u: goto L_001747E4;
    case 61u: goto L_001747EC;
    case 62u: goto L_001747F4;
    case 63u: goto L_001747FC;
    case 64u: goto L_00174820;
    case 65u: goto L_00174838;
    case 66u: goto L_00174848;
    case 67u: goto L_00174850;
    case 68u: goto L_00174858;
    case 69u: goto L_0017487C;
    case 70u: goto L_00174884;
    case 71u: goto L_00174894;
    case 72u: goto L_001748B0;
    case 73u: goto L_001748D0;
    case 74u: goto L_001748E0;
    case 75u: goto L_001748F0;
    case 76u: goto L_001748F8;
    case 77u: goto L_00174900;
    case 78u: goto L_00174908;
    case 79u: goto L_00174910;
    case 80u: goto L_00174918;
    case 81u: goto L_00174920;
    case 82u: goto L_00174940;
    case 83u: goto L_0017494C;
    case 84u: goto L_00174974;
    case 85u: goto L_001749A4;
    case 86u: goto L_001749AC;
    case 87u: goto L_001749B4;
    case 88u: goto L_001749BC;
    case 89u: goto L_001749C4;
    case 90u: goto L_001749CC;
    case 91u: goto L_001749D4;
    case 92u: goto L_001749DC;
    case 93u: goto L_001749F4;
    case 94u: goto L_00174A10;
    case 95u: goto L_00174A20;
    case 96u: goto L_00174A28;
    case 97u: goto L_00174A30;
    case 98u: goto L_00174A38;
    case 99u: goto L_00174A40;
    case 100u: goto L_00174A58;
    case 101u: goto L_00174A74;
    case 102u: goto L_00174A7C;
    case 103u: goto L_00174A94;
    case 104u: goto L_00174A9C;
    case 105u: goto L_00174AA8;
    case 106u: goto L_00174AC4;
    case 107u: goto L_00174AE0;
    case 108u: goto L_00174AE8;
    case 109u: goto L_00174AF0;
    case 110u: goto L_00174B24;
    case 111u: goto L_00174B74;
    case 112u: goto L_00174B90;
    case 113u: goto L_00174C04;
    case 114u: goto L_00174C98;
    case 115u: goto L_00174CB0;
    case 116u: goto L_00174CD8;
    case 117u: goto L_00174CE0;
    case 118u: goto L_00174D00;
    case 119u: goto L_00174D08;
    case 120u: goto L_00174D10;
    case 121u: goto L_00174D20;
    case 122u: goto L_00174D50;
    case 123u: goto L_00174D58;
    case 124u: goto L_00174D60;
    case 125u: goto L_00174D80;
    case 126u: goto L_00174DAC;
    case 127u: goto L_00174DC4;
    case 128u: goto L_00174DCC;
    case 129u: goto L_00174DFC;
    case 130u: goto L_00174E04;
    case 131u: goto L_00174E40;
    case 132u: goto L_00174E5C;
    case 133u: goto L_00174E88;
    case 134u: goto L_00174F18;
    case 135u: goto L_00174F34;
    case 136u: goto L_00174F44;
    case 137u: goto L_00174F50;
    case 138u: goto L_00174F74;
    case 139u: goto L_00174F90;
    case 140u: goto L_00174FF0;
    case 141u: goto L_0017502C;
    case 142u: goto L_00175098;
    case 143u: goto L_001750D4;
    case 144u: goto L_00175134;
    case 145u: goto L_00175170;
    case 146u: goto L_00175180;
    case 147u: goto L_001751C0;
    case 148u: goto L_00175218;
    case 149u: goto L_00175240;
    case 150u: goto L_0017532C;
    case 151u: goto L_00175334;
    case 152u: goto L_0017533C;
    case 153u: goto L_00175344;
    case 154u: goto L_0017534C;
    case 155u: goto L_00175354;
    case 156u: goto L_00175370;
    case 157u: goto L_001753A4;
    case 158u: goto L_001753C4;
    case 159u: goto L_001753E8;
    case 160u: goto L_001753F8;
    case 161u: goto L_00175400;
    case 162u: goto L_00175408;
    case 163u: goto L_0017541C;
    case 164u: goto L_00175438;
    case 165u: goto L_0017545C;
    case 166u: goto L_00175480;
    case 167u: goto L_00175488;
    case 168u: goto L_00175490;
    case 169u: goto L_001754B0;
    case 170u: goto L_00175504;
    case 171u: goto L_00175520;
    case 172u: goto L_001755B0;
    case 173u: goto L_00175600;
    case 174u: goto L_00175608;
    case 175u: goto L_00175620;
    case 176u: goto L_00175628;
    case 177u: goto L_0017565C;
    case 178u: goto L_001756AC;
    case 179u: goto L_001756C4;
    case 180u: goto L_00175704;
    case 181u: goto L_00175718;
    case 182u: goto L_00175764;
    case 183u: goto L_00175778;
    case 184u: goto L_00175790;
    case 185u: goto L_001757F0;
    case 186u: goto L_00175800;
    case 187u: goto L_00175808;
    case 188u: goto L_00175818;
    case 189u: goto L_00175890;
    case 190u: goto L_00175908;
    case 191u: goto L_00175910;
    case 192u: goto L_00175930;
    case 193u: goto L_00175938;
    case 194u: goto L_00175978;
    case 195u: goto L_001759A8;
    case 196u: goto L_001759BC;
    case 197u: goto L_00175A08;
    case 198u: goto L_00175A1C;
    case 199u: goto L_00175A50;
    case 200u: goto L_00175AD4;
    case 201u: goto L_00175AE8;
    case 202u: goto L_00175B20;
    case 203u: goto L_00175BCC;
    case 204u: goto L_00175C50;
    case 205u: goto L_00175C60;
    case 206u: goto L_00175C98;
    case 207u: goto L_00175D4C;
    case 208u: goto L_00175D54;
    case 209u: goto L_00175D80;
    case 210u: goto L_00175D94;
    case 211u: goto L_00175DB4;
    case 212u: goto L_00175DC8;
    case 213u: goto L_00175DD4;
    case 214u: goto L_00175DEC;
    case 215u: goto L_00175E18;
    case 216u: goto L_00175EB4;
    case 217u: goto L_00175EE4;
    case 218u: goto L_00175EF4;
    case 219u: goto L_00175F28;
    case 220u: goto L_00175F64;
    case 221u: goto L_00175F78;
    case 222u: goto L_00175F84;
    case 223u: goto L_00175FC0;
    case 224u: goto L_00176000;
    case 225u: goto L_00176024;
    case 226u: goto L_00176030;
    case 227u: goto L_00176050;
    case 228u: goto L_0017609C;
    case 229u: goto L_001760FC;
    case 230u: goto L_00176104;
    case 231u: goto L_00176130;
    case 232u: goto L_00176144;
    case 233u: goto L_00176164;
    case 234u: goto L_00176178;
    case 235u: goto L_00176184;
    case 236u: goto L_0017619C;
    case 237u: goto L_001761C8;
    case 238u: goto L_00176264;
    case 239u: goto L_00176294;
    case 240u: goto L_001762A4;
    case 241u: goto L_001762D8;
    case 242u: goto L_00176314;
    case 243u: goto L_00176328;
    case 244u: goto L_00176334;
    case 245u: goto L_00176370;
    case 246u: goto L_001763B0;
    case 247u: goto L_001763E0;
    case 248u: goto L_001763EC;
    case 249u: goto L_00176410;
    case 250u: goto L_001764AC;
    case 251u: goto L_00176520;
    case 252u: goto L_00176580;
    case 253u: goto L_001765D8;
    case 254u: goto L_001766D0;
    case 255u: goto L_001766DC;
    case 256u: goto L_001766F0;
    case 257u: goto L_00176700;
    case 258u: goto L_00176714;
    case 259u: goto L_00176720;
    case 260u: goto L_00176728;
    case 261u: goto L_00176730;
    case 262u: goto L_00176738;
    case 263u: goto L_00176740;
    case 264u: goto L_00176750;
    case 265u: goto L_00176770;
    case 266u: goto L_001767B4;
    case 267u: goto L_001767F8;
    case 268u: goto L_00176898;
    case 269u: goto L_001768A4;
    case 270u: goto L_001768EC;
    case 271u: goto L_001768F4;
    case 272u: goto L_001768FC;
    case 273u: goto L_00176920;
    case 274u: goto L_00176950;
    case 275u: goto L_001769C0;
    case 276u: goto L_00176A50;
    case 277u: goto L_00176ADC;
    case 278u: goto L_00176B78;
    case 279u: goto L_00176BA0;
    case 280u: goto L_00176C34;
    case 281u: goto L_00176C44;
    case 282u: goto L_00176C80;
    case 283u: goto L_00176CE0;
    case 284u: goto L_00176D78;
    case 285u: goto L_00176DBC;
    case 286u: goto L_00176E78;
    case 287u: goto L_00176ED0;
    case 288u: goto L_00176F30;
    case 289u: goto L_00176F50;
    case 290u: goto L_00176F90;
    case 291u: goto L_00176FD8;
    case 292u: goto L_00176FF0;
    case 293u: goto L_0017704C;
    case 294u: goto L_0017714C;
    case 295u: goto L_00177180;
    case 296u: goto L_00177190;
    case 297u: goto L_001771B0;
    case 298u: goto L_001771C0;
    case 299u: goto L_001771E0;
    case 300u: goto L_00177204;
    case 301u: goto L_00177210;
    case 302u: goto L_00177218;
    case 303u: goto L_00177220;
    case 304u: goto L_00177228;
    case 305u: goto L_00177230;
    case 306u: goto L_00177240;
    case 307u: goto L_0017729C;
    case 308u: goto L_001772A4;
    case 309u: goto L_001772C0;
    case 310u: goto L_001772D4;
    case 311u: goto L_00177304;
    case 312u: goto L_001773B4;
    case 313u: goto L_001773C0;
    case 314u: goto L_001773E0;
    case 315u: goto L_001773F0;
    case 316u: goto L_00177400;
    case 317u: goto L_00177424;
    case 318u: goto L_0017742C;
    case 319u: goto L_00177434;
    case 320u: goto L_0017743C;
    case 321u: goto L_00177444;
    case 322u: goto L_0017744C;
    case 323u: goto L_00177468;
    case 324u: goto L_00177480;
    case 325u: goto L_00177490;
    case 326u: goto L_001774CC;
    case 327u: goto L_001774D4;
    case 328u: goto L_001774DC;
    case 329u: goto L_001774E4;
    case 330u: goto L_001774EC;
    case 331u: goto L_001774F4;
    case 332u: goto L_001774FC;
    case 333u: goto L_00177504;
    case 334u: goto L_0017750C;
    case 335u: goto L_00177514;
    case 336u: goto L_00177520;
    case 337u: goto L_00177528;
    case 338u: goto L_00177544;
    case 339u: goto L_0017754C;
    case 340u: goto L_00177554;
    case 341u: goto L_0017755C;
    case 342u: goto L_00177564;
    case 343u: goto L_0017756C;
    case 344u: goto L_00177574;
    case 345u: goto L_0017757C;
    case 346u: goto L_00177584;
    case 347u: goto L_0017758C;
    case 348u: goto L_001775A0;
    case 349u: goto L_001775B0;
    case 350u: goto L_001775B8;
    case 351u: goto L_001775C0;
    case 352u: goto L_001775C8;
    case 353u: goto L_001775E4;
    case 354u: goto L_001775EC;
    case 355u: goto L_0017762C;
    case 356u: goto L_0017763C;
    case 357u: goto L_00177644;
    case 358u: goto L_0017764C;
    case 359u: goto L_00177654;
    case 360u: goto L_0017765C;
    case 361u: goto L_00177664;
    case 362u: goto L_0017766C;
    case 363u: goto L_00177674;
    case 364u: goto L_0017767C;
    case 365u: goto L_00177684;
    case 366u: goto L_00177690;
    case 367u: goto L_001776CC;
    case 368u: goto L_001776D4;
    case 369u: goto L_001776DC;
    case 370u: goto L_001776E4;
    case 371u: goto L_001776EC;
    case 372u: goto L_001776F4;
    case 373u: goto L_001776FC;
    case 374u: goto L_00177704;
    case 375u: goto L_0017770C;
    case 376u: goto L_00177714;
    case 377u: goto L_0017771C;
    case 378u: goto L_0017772C;
    case 379u: goto L_00177740;
    case 380u: goto L_00177750;
    case 381u: goto L_0017775C;
    case 382u: goto L_00177764;
    case 383u: goto L_0017776C;
    case 384u: goto L_00177778;
    case 385u: goto L_00177784;
    case 386u: goto L_00177794;
    case 387u: goto L_001777A4;
    case 388u: goto L_001777B4;
    case 389u: goto L_001777C0;
    case 390u: goto L_00177838;
    case 391u: goto L_00177850;
    case 392u: goto L_001778A4;
    case 393u: goto L_001778C4;
    case 394u: goto L_00177948;
    case 395u: goto L_0017796C;
    case 396u: goto L_00177984;
    case 397u: goto L_001779A0;
    case 398u: goto L_001779B0;
    case 399u: goto L_00177A60;
    case 400u: goto L_00177AC0;
    case 401u: goto L_00177B14;
    case 402u: goto L_00177BF4;
    case 403u: goto L_00177BFC;
    case 404u: goto L_00177C9C;
    case 405u: goto L_00177DE0;
    case 406u: goto L_00177E24;
    case 407u: goto L_00177E68;
    case 408u: goto L_00177EF4;
    case 409u: goto L_00177F10;
    case 410u: goto L_00177FA0;
    case 411u: goto L_00177FC0;
    default: bad_entry(c, 0x00174000u); return;
    }
L_00174000:
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st32((c.r[3].w[0] + 4u), 0u);  if (t) { goto L_00174064; } }
    set32(c.r[2], 0u + 110u);
    c.budget -= 1;
L_00174014:
    st8((c.r[7].w[0] + 1u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 9u);
    st16((c.r[2].w[0] + 2u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00174054; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174048u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));  if (depth < kMaxDepth) unit_0038(c, 120u, depth + 1u); else { c.pc = 0x001E17B0u; return; } if (c.pc != 0x00174048u) [[unlikely]] return; }
L_00174048:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174064; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00174054:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017405Cu);  if (depth < kMaxDepth) unit_0038(c, 120u, depth + 1u); else { c.pc = 0x001E17B0u; return; } if (c.pc != 0x0017405Cu) [[unlikely]] return; }
L_0017405C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174064u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0038(c, 120u, depth + 1u); else { c.pc = 0x001E17B0u; return; } if (c.pc != 0x00174064u) [[unlikely]] return; }
L_00174064:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00174068:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174070:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174080u);  if (depth < kMaxDepth) unit_0033(c, 181u, depth + 1u); else { c.pc = 0x001CFB50u; return; } if (c.pc != 0x00174080u) [[unlikely]] return; }
L_00174080:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001740A8; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 1u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 8;
L_001740A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001740C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24480u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001740ECu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001740ECu) [[unlikely]] return; }
L_001740EC:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001740F8u); set32(c.r[4], c.r[2].w[0] - 23424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x001740F8u) [[unlikely]] return; }
L_001740F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174100u);  if (depth < kMaxDepth) unit_0026(c, 127u, depth + 1u); else { c.pc = 0x00199D30u; return; } if (c.pc != 0x00174100u) [[unlikely]] return; }
L_00174100:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017410Cu); set32(c.r[4], c.r[2].w[0] + 17440u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0017410Cu) [[unlikely]] return; }
L_0017410C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 116u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174128; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174128u); set32(c.r[4], c.r[2].w[0] + 27312u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00174128u) [[unlikely]] return; }
L_00174128:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174134u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00174134u) [[unlikely]] return; }
L_00174134:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174140u); set32(c.r[4], c.r[2].w[0] + 30656u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00174140u) [[unlikely]] return; }
L_00174140:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174150u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x00174150u) [[unlikely]] return; }
L_00174150:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174160u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x00174160u) [[unlikely]] return; }
L_00174160:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174170u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x00174170u) [[unlikely]] return; }
L_00174170:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174180:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017419Cu); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x0017419Cu) [[unlikely]] return; }
L_0017419C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001741B0:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 175u);
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  [[clang::musttail]] return unit_0025(c, 295u, depth); }
L_001741E0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] + 12u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174208; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00174208:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 14u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174228; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174220u);  if (depth < kMaxDepth) unit_0093(c, 246u, depth + 1u); else { c.pc = 0x0034F730u; return; } if (c.pc != 0x00174220u) [[unlikely]] return; }
L_00174220:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00174228:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 14u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174258; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 4u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 8u);
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174258u); st8((c.r[6].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00174258u) [[unlikely]] return; }
L_00174258:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174270:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174280u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 52u, depth + 1u); else { c.pc = 0x0016CFC0u; return; } if (c.pc != 0x00174280u) [[unlikely]] return; }
L_00174280:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001742A4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017429Cu); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x0017429Cu) [[unlikely]] return; }
L_0017429C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001742A4u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001742A4u) [[unlikely]] return; }
L_001742A4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001742B0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 97u);
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    set32(c.r[18], c.r[2].w[0] + 25312u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    st16((c.r[5].w[0] + 2u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 4u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st64((c.r[2].w[0] + 8u), 0ull);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 74u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 116u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 455u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 302u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 28;
L_00174320:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 300u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_001743DC; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174344u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  if (depth < kMaxDepth) unit_0070(c, 53u, depth + 1u); else { c.pc = 0x002C0A60u; return; } if (c.pc != 0x00174344u) [[unlikely]] return; }
L_00174344:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[3].w[0] + 302u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174360; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[16].w[0]));
    c.budget -= 1;
L_00174360:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], c.r[18].w[0] + 256u);
    set32(c.r[6], 0u + 40u);
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    st8((c.r[2].w[0] + 396u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[17].w[0]);
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[16].w[0]);
    c.budget -= 29;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001743D4u); st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0005(c, 239u, depth + 1u); else { c.pc = 0x00116E18u; return; } if (c.pc != 0x001743D4u) [[unlikely]] return; }
L_001743D4:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 2;
L_001743DC:
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 2u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 40u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174320u | kUnwind; return; } goto L_00174320; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001743F4u);  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x001743F4u) [[unlikely]] return; }
L_001743F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001743FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x001743FCu) [[unlikely]] return; }
L_001743FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174404u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00174404u) [[unlikely]] return; }
L_00174404:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00174420:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    c.r[3].d[0] = c.r[3].d[0] & 16ull;
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174588; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00A30000u);
    set32(c.r[2], c.r[2].w[0] + 11232u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20364u), c.r[2].w[0]);
    set32(c.r[2], c.r[29].w[0] + 64u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 11u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    st32((c.r[29].w[0] + 92u), 0u);
    st32((c.r[29].w[0] + 88u), 0u);
    st32((c.r[29].w[0] + 76u), 0u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20354u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[17], c.r[2].w[0] - 24448u);
    st32((c.r[29].w[0] + 72u), 0u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 28;
L_001744B8:
    set32(c.r[2], ld32((c.r[17].w[0])));
    set32(c.r[18], c.r[29].w[0] + 68u);
    set32(c.r[5], c.r[17].w[0] + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 64u), c.r[2].w[0]);
    set32(c.r[6], ld32((c.r[17].w[0] + 4u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[17].w[0] + 12u);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    st32((c.r[18].w[0]), c.r[6].w[0]);
    st32((c.r[1].w[0] - 20376u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001744F0u); st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x001744F0u) [[unlikely]] return; }
L_001744F0:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 16u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001744B8u | kUnwind; return; } goto L_001744B8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[16], c.r[2].w[0] - 24384u);
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.budget -= 3;
L_0017450C:
    set32(c.r[4], ld32((c.r[16].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[5], c.r[16].w[0] + 16u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    set32(c.r[3], c.r[16].w[0] + 24u);
    st32((c.r[29].w[0] + 64u), c.r[4].w[0]);
    set32(c.r[4], c.r[2].w[0] - 20416u);
    set32(c.r[2], ld32((c.r[16].w[0] + 4u)));
    st32((c.r[18].w[0]), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 8u)));
    st32((c.r[29].w[0] + 80u), c.r[2].w[0]);
    set32(c.r[2], ld32((c.r[16].w[0] + 12u)));
    st32((c.r[1].w[0] - 20368u), c.r[5].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[29].w[0] + 84u), c.r[2].w[0]);
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174550u); st32((c.r[1].w[0] - 20380u), c.r[3].w[0]);  if (depth < kMaxDepth) unit_001B(c, 213u, depth + 1u); else { c.pc = 0x0016FCE0u; return; } if (c.pc != 0x00174550u) [[unlikely]] return; }
L_00174550:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 3;
    { const bool t = c.r[17].sd[0] <= 0; set32(c.r[16], c.r[16].w[0] + 28u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017450Cu | kUnwind; return; } goto L_0017450C; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24320u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24192u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174588u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001C(c, 21u, depth + 1u); else { c.pc = 0x00170680u; return; } if (c.pc != 0x00174588u) [[unlikely]] return; }
L_00174588:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_001745A0:
    c.budget -= 2;
    {  [[clang::musttail]] return unit_0038(c, 170u, depth); }
L_001745B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 31816u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001745D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001745E0u);  if (depth < kMaxDepth) unit_0020(c, 240u, depth + 1u); else { c.pc = 0x001827C0u; return; } if (c.pc != 0x001745E0u) [[unlikely]] return; }
L_001745E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174608; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 2u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 2u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 3u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 4u), 0u);
    c.budget -= 8;
L_00174608:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174620:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st64((c.r[2].w[0]), c.r[3].d[0]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174640u); st64((c.r[2].w[0] + 8u), 0ull);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x00174640u) [[unlikely]] return; }
L_00174640:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174648u);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00174648u) [[unlikely]] return; }
L_00174648:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174650u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x00174650u) [[unlikely]] return; }
L_00174650:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174658u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00174658u) [[unlikely]] return; }
L_00174658:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174670:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[28].w[0] - 31808u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 8;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00174690:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 104u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24112u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001746C8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001746C8u) [[unlikely]] return; }
L_001746C8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001746E0:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 3u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 9;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_00174710; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[3].w[0] + 260u), 0u);
    st8((c.r[28].w[0] - 25660u), static_cast<std::uint8_t>(0u));
    c.budget -= 3;
L_00174710:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00174720:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174730u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x00174730u) [[unlikely]] return; }
L_00174730:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00174748; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00174748:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174760:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = 0ull << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 397u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 396u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 71u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 269u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 268u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 648u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 640u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 258u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    st8((c.r[3].w[0] + 74u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 331u)));
    c.budget -= 31;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001747DCu); st8((c.r[3].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001E(c, 21u, depth + 1u); else { c.pc = 0x001786E0u; return; } if (c.pc != 0x001747DCu) [[unlikely]] return; }
L_001747DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001747E4u);  if (depth < kMaxDepth) unit_001E(c, 19u, depth + 1u); else { c.pc = 0x00178530u; return; } if (c.pc != 0x001747E4u) [[unlikely]] return; }
L_001747E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001747ECu);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x001747ECu) [[unlikely]] return; }
L_001747EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001747F4u);  if (depth < kMaxDepth) unit_000E(c, 56u, depth + 1u); else { c.pc = 0x00138DD0u; return; } if (c.pc != 0x001747F4u) [[unlikely]] return; }
L_001747F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001747FCu);  if (depth < kMaxDepth) unit_001E(c, 207u, depth + 1u); else { c.pc = 0x0017BCB0u; return; } if (c.pc != 0x001747FCu) [[unlikely]] return; }
L_001747FC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174860; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174820u); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001E(c, 77u, depth + 1u); else { c.pc = 0x00179950u; return; } if (c.pc != 0x00174820u) [[unlikely]] return; }
L_00174820:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 520u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174840; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174838u);  if (depth < kMaxDepth) unit_001E(c, 175u, depth + 1u); else { c.pc = 0x0017B600u; return; } if (c.pc != 0x00174838u) [[unlikely]] return; }
L_00174838:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174884; } }
L_00174840:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174848u);  if (depth < kMaxDepth) unit_001E(c, 121u, depth + 1u); else { c.pc = 0x0017AA80u; return; } if (c.pc != 0x00174848u) [[unlikely]] return; }
L_00174848:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174850u);  if (depth < kMaxDepth) unit_001E(c, 136u, depth + 1u); else { c.pc = 0x0017AE10u; return; } if (c.pc != 0x00174850u) [[unlikely]] return; }
L_00174850:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174858u);  if (depth < kMaxDepth) unit_0026(c, 115u, depth + 1u); else { c.pc = 0x00199B70u; return; } if (c.pc != 0x00174858u) [[unlikely]] return; }
L_00174858:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174884; } }
L_00174860:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 520u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174884; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017487Cu); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001E(c, 77u, depth + 1u); else { c.pc = 0x00179950u; return; } if (c.pc != 0x0017487Cu) [[unlikely]] return; }
L_0017487C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174884u);  if (depth < kMaxDepth) unit_001E(c, 175u, depth + 1u); else { c.pc = 0x0017B600u; return; } if (c.pc != 0x00174884u) [[unlikely]] return; }
L_00174884:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00350000u);
    set32(c.r[4], c.r[2].w[0] - 1216u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174894u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0093(c, 253u, depth + 1u); else { c.pc = 0x0034F7F0u; return; } if (c.pc != 0x00174894u) [[unlikely]] return; }
L_00174894:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0]; c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);  if (t) { goto L_001748B4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748B0u);  if (depth < kMaxDepth) unit_0017(c, 268u, depth + 1u); else { c.pc = 0x0015E810u; return; } if (c.pc != 0x001748B0u) [[unlikely]] return; }
L_001748B0:
    c.r[3].sd[0] = static_cast<std::int32_t>(0x461C0000u);
    c.budget -= 1;
L_001748B4:
    c.r[4].d[0] = c.r[3].d[0] | 16384ull;
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st32((c.r[3].w[0] + 256u), c.r[4].w[0]);
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001748D0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748E0u);  if (depth < kMaxDepth) unit_0093(c, 300u, depth + 1u); else { c.pc = 0x0034FD20u; return; } if (c.pc != 0x001748E0u) [[unlikely]] return; }
L_001748E0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00174CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748F0u);  if (depth < kMaxDepth) unit_001E(c, 83u, depth + 1u); else { c.pc = 0x00179B30u; return; } if (c.pc != 0x001748F0u) [[unlikely]] return; }
L_001748F0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001748F8u);  if (depth < kMaxDepth) unit_001E(c, 125u, depth + 1u); else { c.pc = 0x0017AC20u; return; } if (c.pc != 0x001748F8u) [[unlikely]] return; }
L_001748F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174900u);  if (depth < kMaxDepth) unit_001E(c, 131u, depth + 1u); else { c.pc = 0x0017AD70u; return; } if (c.pc != 0x00174900u) [[unlikely]] return; }
L_00174900:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174908u);  if (depth < kMaxDepth) unit_001E(c, 206u, depth + 1u); else { c.pc = 0x0017BC90u; return; } if (c.pc != 0x00174908u) [[unlikely]] return; }
L_00174908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174910u);  if (depth < kMaxDepth) unit_001E(c, 156u, depth + 1u); else { c.pc = 0x0017B160u; return; } if (c.pc != 0x00174910u) [[unlikely]] return; }
L_00174910:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174918u);  if (depth < kMaxDepth) unit_001E(c, 182u, depth + 1u); else { c.pc = 0x0017B710u; return; } if (c.pc != 0x00174918u) [[unlikely]] return; }
L_00174918:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174920u);  if (depth < kMaxDepth) unit_001E(c, 191u, depth + 1u); else { c.pc = 0x0017B940u; return; } if (c.pc != 0x00174920u) [[unlikely]] return; }
L_00174920:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174940; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174940u); set32(c.r[4], c.r[2].w[0] + 688u);  if (depth < kMaxDepth) unit_001F(c, 38u, depth + 1u); else { c.pc = 0x0017C5A0u; return; } if (c.pc != 0x00174940u) [[unlikely]] return; }
L_00174940:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017494Cu); st8((c.r[2].w[0] + 84u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000E(c, 70u, depth + 1u); else { c.pc = 0x001390C0u; return; } if (c.pc != 0x0017494Cu) [[unlikely]] return; }
L_0017494C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174974; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174974u); c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));  if (depth < kMaxDepth) unit_001F(c, 251u, depth + 1u); else { c.pc = 0x0017F4A0u; return; } if (c.pc != 0x00174974u) [[unlikely]] return; }
L_00174974:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 106u);
    set32(c.r[5], 0u + 8u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749A4u); st8((c.r[2].w[0] + 5u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001749A4u) [[unlikely]] return; }
L_001749A4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749ACu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001B(c, 54u, depth + 1u); else { c.pc = 0x0016D070u; return; } if (c.pc != 0x001749ACu) [[unlikely]] return; }
L_001749AC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749B4u);  if (depth < kMaxDepth) unit_0023(c, 153u, depth + 1u); else { c.pc = 0x0018DC90u; return; } if (c.pc != 0x001749B4u) [[unlikely]] return; }
L_001749B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749BCu);  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x001749BCu) [[unlikely]] return; }
L_001749BC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749C4u);  if (depth < kMaxDepth) unit_0081(c, 2u, depth + 1u); else { c.pc = 0x00304010u; return; } if (c.pc != 0x001749C4u) [[unlikely]] return; }
L_001749C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749CCu);  if (depth < kMaxDepth) unit_0082(c, 124u, depth + 1u); else { c.pc = 0x0030AF00u; return; } if (c.pc != 0x001749CCu) [[unlikely]] return; }
L_001749CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749D4u);  if (depth < kMaxDepth) unit_0026(c, 130u, depth + 1u); else { c.pc = 0x00199E10u; return; } if (c.pc != 0x001749D4u) [[unlikely]] return; }
L_001749D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749DCu);  if (depth < kMaxDepth) unit_0077(c, 307u, depth + 1u); else { c.pc = 0x002DF7F0u; return; } if (c.pc != 0x001749DCu) [[unlikely]] return; }
L_001749DC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001749FC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001749F4u);  if (depth < kMaxDepth) unit_0053(c, 185u, depth + 1u); else { c.pc = 0x0024EFE0u; return; } if (c.pc != 0x001749F4u) [[unlikely]] return; }
L_001749F4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174A20; } }
L_001749FC:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174A18; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A10u);  if (depth < kMaxDepth) unit_0053(c, 181u, depth + 1u); else { c.pc = 0x0024ECF0u; return; } if (c.pc != 0x00174A10u) [[unlikely]] return; }
L_00174A10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174A20; } }
L_00174A18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A20u);  if (depth < kMaxDepth) unit_0053(c, 199u, depth + 1u); else { c.pc = 0x0024F3F0u; return; } if (c.pc != 0x00174A20u) [[unlikely]] return; }
L_00174A20:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A28u);  if (depth < kMaxDepth) unit_0024(c, 101u, depth + 1u); else { c.pc = 0x001917F0u; return; } if (c.pc != 0x00174A28u) [[unlikely]] return; }
L_00174A28:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A30u);  if (depth < kMaxDepth) unit_0024(c, 153u, depth + 1u); else { c.pc = 0x00192170u; return; } if (c.pc != 0x00174A30u) [[unlikely]] return; }
L_00174A30:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A38u);  if (depth < kMaxDepth) unit_003B(c, 62u, depth + 1u); else { c.pc = 0x001ECDB0u; return; } if (c.pc != 0x00174A38u) [[unlikely]] return; }
L_00174A38:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A40u);  if (depth < kMaxDepth) unit_0070(c, 60u, depth + 1u); else { c.pc = 0x002C0B30u; return; } if (c.pc != 0x00174A40u) [[unlikely]] return; }
L_00174A40:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);  if (t) { goto L_00174A5C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A58u);  if (depth < kMaxDepth) unit_003C(c, 234u, depth + 1u); else { c.pc = 0x001F33C0u; return; } if (c.pc != 0x00174A58u) [[unlikely]] return; }
L_00174A58:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x3F800000u);
    c.budget -= 1;
L_00174A5C:
    c.f[12] = c.r[2].w[0];
    c.r[2].sd[0] = static_cast<std::int32_t>(0x4A7F0000u);
    c.r[2].d[0] = c.r[2].d[0] | 65320ull;
    c.f[13] = c.r[2].w[0];
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A74u);  if (depth < kMaxDepth) unit_0029(c, 100u, depth + 1u); else { c.pc = 0x001A5400u; return; } if (c.pc != 0x00174A74u) [[unlikely]] return; }
L_00174A74:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A7Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 140u, depth + 1u); else { c.pc = 0x0015B6C0u; return; } if (c.pc != 0x00174A7Cu) [[unlikely]] return; }
L_00174A7C:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 331u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174A94; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A94u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 147u, depth + 1u); else { c.pc = 0x0015B790u; return; } if (c.pc != 0x00174A94u) [[unlikely]] return; }
L_00174A94:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174A9Cu);  if (depth < kMaxDepth) unit_001B(c, 40u, depth + 1u); else { c.pc = 0x0016CB50u; return; } if (c.pc != 0x00174A9Cu) [[unlikely]] return; }
L_00174A9C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x70000000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AA8u); c.r[4].d[0] = c.r[2].d[0] | 4896ull;  if (depth < kMaxDepth) unit_0029(c, 92u, depth + 1u); else { c.pc = 0x001A52A0u; return; } if (c.pc != 0x00174AA8u) [[unlikely]] return; }
L_00174AA8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00174AC4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AC4u);  if (depth < kMaxDepth) unit_000F(c, 110u, depth + 1u); else { c.pc = 0x0013DF50u; return; } if (c.pc != 0x00174AC4u) [[unlikely]] return; }
L_00174AC4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174AE0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AE0u);  if (depth < kMaxDepth) unit_0035(c, 83u, depth + 1u); else { c.pc = 0x001D60C0u; return; } if (c.pc != 0x00174AE0u) [[unlikely]] return; }
L_00174AE0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174AE8u);  if (depth < kMaxDepth) unit_003B(c, 69u, depth + 1u); else { c.pc = 0x001ECE90u; return; } if (c.pc != 0x00174AE8u) [[unlikely]] return; }
L_00174AE8:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 255u);
    c.budget -= 2;
L_00174AF0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 376u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 2u);
    st8((c.r[2].w[0] + 377u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174AF0u | kUnwind; return; } goto L_00174AF0; } }
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 3;
L_00174B24:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.r[2].d[0] = c.r[6].sd[0] < 8ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    st16((c.r[3].w[0] + 656u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[5], c.r[5].w[0] + 2u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 672u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174B24u | kUnwind; return; } goto L_00174B24; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 120u);
    set32(c.r[2], 0u + 30u);
    st8((c.r[3].w[0] + 512u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174B74u); st16((c.r[1].w[0] - 21980u), static_cast<std::uint16_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001D(c, 391u, depth + 1u); else { c.pc = 0x00177850u; return; } if (c.pc != 0x00174B74u) [[unlikely]] return; }
L_00174B74:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[4].d[0] == c.r[3].d[0];  if (t) { goto L_00174CA4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174B90u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00174B90u) [[unlikely]] return; }
L_00174B90:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull; c.r[5].d[0] = c.r[2].d[0] & 1ull;  if (t) { goto L_00174C14; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174CA4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[6].w[0] + 700u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] - 23632u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 19;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C04u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00174C04u) [[unlikely]] return; }
L_00174C04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 8u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 647u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_00174CA4; } }
L_00174C14:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    set32(c.r[4], c.r[8].w[0] + c.r[4].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    c.r[3].d[0] = c.r[4].d[0] ^ c.r[3].d[0];
    c.r[3].d[0] = c.r[3].d[0] < static_cast<std::uint64_t>(1ll) ? 1ull : 0ull;
    c.budget -= 9;
    if (c.r[3].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00174C44; }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], c.r[8].w[0] + c.r[6].w[0]);  if (t) { goto L_00174C48; } }
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_00174C44:
    set32(c.r[3], c.r[8].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00174C48:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174CA4; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[6].w[0] + 700u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], c.r[5].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[7], c.r[2].w[0] - 23632u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    set32(c.r[4], c.r[2].w[0] + 29152u);
    set32(c.r[2], c.r[8].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[7].w[0] + c.r[2].w[0]);
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.budget -= 17;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174C98u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00174C98u) [[unlikely]] return; }
L_00174C98:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 8u);
    st8((c.r[3].w[0] + 647u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00174CA4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174CB0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174D28; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174CD8u);  if (depth < kMaxDepth) unit_00A5(c, 223u, depth + 1u); else { c.pc = 0x00396310u; return; } if (c.pc != 0x00174CD8u) [[unlikely]] return; }
L_00174CD8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174CE0u);  if (depth < kMaxDepth) unit_00A0(c, 38u, depth + 1u); else { c.pc = 0x00380620u; return; } if (c.pc != 0x00174CE0u) [[unlikely]] return; }
L_00174CE0:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00174D18; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D00u); st32((c.r[3].w[0] + 260u), c.r[2].w[0]);  if (depth < kMaxDepth) unit_001B(c, 58u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x00174D00u) [[unlikely]] return; }
L_00174D00:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D08u);  if (depth < kMaxDepth) unit_001D(c, 125u, depth + 1u); else { c.pc = 0x00174D80u; return; } if (c.pc != 0x00174D08u) [[unlikely]] return; }
L_00174D08:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D10u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0082(c, 124u, depth + 1u); else { c.pc = 0x0030AF00u; return; } if (c.pc != 0x00174D10u) [[unlikely]] return; }
L_00174D10:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00174D64; } }
L_00174D18:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D20u);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x00174D20u) [[unlikely]] return; }
L_00174D20:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00174D64; } }
L_00174D28:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00174D48; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[3].w[0] + 260u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st32((c.r[3].w[0] + 260u), c.r[2].w[0]);
    c.budget -= 4;
L_00174D48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D50u);  if (depth < kMaxDepth) unit_001B(c, 58u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x00174D50u) [[unlikely]] return; }
L_00174D50:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D58u);  if (depth < kMaxDepth) unit_001D(c, 125u, depth + 1u); else { c.pc = 0x00174D80u; return; } if (c.pc != 0x00174D58u) [[unlikely]] return; }
L_00174D58:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174D60u); mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (depth < kMaxDepth) unit_0082(c, 124u, depth + 1u); else { c.pc = 0x0030AF00u; return; } if (c.pc != 0x00174D60u) [[unlikely]] return; }
L_00174D60:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00174D64:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00174D80:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24096u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 11;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x00174DACu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x00174DACu) [[unlikely]] return; }
L_00174DAC:
    c.r[1].sd[0] = static_cast<std::int32_t>(0x00870000u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 5104u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174DD4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174DC4u);  if (depth < kMaxDepth) unit_0023(c, 156u, depth + 1u); else { c.pc = 0x0018DDC0u; return; } if (c.pc != 0x00174DC4u) [[unlikely]] return; }
L_00174DC4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174DCCu);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x00174DCCu) [[unlikely]] return; }
L_00174DCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00174E08; } }
L_00174DD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 654u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 654u)));
    c.budget -= 5;
    { const bool t = c.r[2].sd[0] <= 0;  if (t) { goto L_00174DF4; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 3;
L_00174DF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174DFCu);  if (depth < kMaxDepth) unit_001D(c, 313u, depth + 1u); else { c.pc = 0x001773C0u; return; } if (c.pc != 0x00174DFCu) [[unlikely]] return; }
L_00174DFC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E04u);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x00174E04u) [[unlikely]] return; }
L_00174E04:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00174E08:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 640u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174E28; } }
    set32(c.r[2], 0u + 2u);
    st8((c.r[3].w[0] + 642u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 298u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 5;
L_00174E28:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174E40:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 106u);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174E5Cu); st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_001B(c, 54u, depth + 1u); else { c.pc = 0x0016D070u; return; } if (c.pc != 0x00174E5Cu) [[unlikely]] return; }
L_00174E5C:
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_00174EC8; } }
    set32(c.r[3], c.r[5].w[0] << 5);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[3].w[0] + 26144u);
    set32(c.r[7], c.r[3].w[0] + c.r[4].w[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 7;
L_00174E88:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0])));
    c.budget -= 3;
    if (c.r[3].d[0] != c.r[4].d[0]) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00174EBC; }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 1u)));
    c.r[1].d[0] = c.r[3].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00174EB8; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 891u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174EB8; } }
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 2;
L_00174EB8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00174EBC:
    c.r[3].d[0] = c.r[5].sd[0] < 5ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[7], c.r[7].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00174E88u | kUnwind; return; } goto L_00174E88; } }
L_00174EC8:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_00174F80; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 111u)));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174F60; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174F60; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00174F20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F18u);  if (depth < kMaxDepth) unit_000F(c, 107u, depth + 1u); else { c.pc = 0x0013DEC0u; return; } if (c.pc != 0x00174F18u) [[unlikely]] return; }
L_00174F18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00174F48; } }
L_00174F20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 330u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00174F3C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F34u);  if (depth < kMaxDepth) unit_000F(c, 104u, depth + 1u); else { c.pc = 0x0013DE30u; return; } if (c.pc != 0x00174F34u) [[unlikely]] return; }
L_00174F34:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00174F44; } }
L_00174F3C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F44u);  if (depth < kMaxDepth) unit_000F(c, 101u, depth + 1u); else { c.pc = 0x0013DD80u; return; } if (c.pc != 0x00174F44u) [[unlikely]] return; }
L_00174F44:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00174F48:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F50u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x00174F50u) [[unlikely]] return; }
L_00174F50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 120u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00174F80; } }
L_00174F60:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00174F74; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00174F74u);  if (depth < kMaxDepth) unit_000F(c, 101u, depth + 1u); else { c.pc = 0x0013DD80u; return; } if (c.pc != 0x00174F74u) [[unlikely]] return; }
L_00174F74:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    c.budget -= 3;
L_00174F80:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00174F90:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 106u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 12u)));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00174FDC; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 512u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[3].w[0] + 298u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00174FDC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00174FF0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 107u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 111u)));
    c.budget -= 10;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017502C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_0017502C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017502Cu);  if (depth < kMaxDepth) unit_0023(c, 160u, depth + 1u); else { c.pc = 0x0018DE30u; return; } if (c.pc != 0x0017502Cu) [[unlikely]] return; }
L_0017502C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 330u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00175170; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[2].w[0] + 26144u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] + 21600u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[5], 0u + 25u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1553u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1559u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1552u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1558u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1554u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1560u)));
    set32(c.r[4], 0u + 18u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175098u); set32(c.r[10], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x00175098u) [[unlikely]] return; }
L_00175098:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1555u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1561u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] + 21600u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1556u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1562u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1557u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1563u)));
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[4], 0u + 18u);
    set32(c.r[9], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 26u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001750D4u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x001750D4u) [[unlikely]] return; }
L_001750D4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[2].w[0] + 26144u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] + 21600u);
    set32(c.r[5], 0u + 25u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[8], c.r[2].w[0] + 1u);
    set32(c.r[2], c.r[8].w[0] << 5);
    set32(c.r[2], c.r[2].w[0] + c.r[8].w[0]);
    set32(c.r[2], c.r[2].w[0] << 8);
    set32(c.r[16], c.r[3].w[0] + c.r[2].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1553u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1559u)));
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1552u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1558u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1554u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1560u)));
    set32(c.r[4], 0u + 42u);
    set32(c.r[9], c.r[10].w[0] + c.r[9].w[0]);
    set32(c.r[8], c.r[11].w[0] + c.r[8].w[0]);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175134u); set32(c.r[10], c.r[3].w[0] + c.r[2].w[0]);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x00175134u) [[unlikely]] return; }
L_00175134:
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1555u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1561u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00560000u);
    set32(c.r[7], c.r[2].w[0] + 21600u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1556u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1562u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1557u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[16].w[0] + 1563u)));
    set32(c.r[8], c.r[9].w[0] + c.r[8].w[0]);
    set32(c.r[4], 0u + 42u);
    set32(c.r[9], c.r[6].w[0] + c.r[5].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[5], 0u + 26u);
    c.budget -= 15;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175170u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 135u, depth + 1u); else { c.pc = 0x00306170u; return; } if (c.pc != 0x00175170u) [[unlikely]] return; }
L_00175170:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175180:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24080u);
    set32(c.r[3], ld32((c.r[4].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st32((c.r[4].w[0] + 260u), c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 13;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_001751C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 109u);
    set32(c.r[3], 0u + 1u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 648u)));
    if (c.r[2].d[0] == 0) c.r[5].d[0] = c.r[3].d[0];
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 22;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175218u); st8((c.r[2].w[0] + 523u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 241u, depth + 1u); else { c.pc = 0x001968B0u; return; } if (c.pc != 0x00175218u) [[unlikely]] return; }
L_00175218:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 387u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 386u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[4].d[0] = 0ull | 65535ull;
    c.budget -= 10;
L_00175240:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st16((c.r[3].w[0] + 664u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull; st16((c.r[3].w[0] + 680u), static_cast<std::uint16_t>(0u));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175240u | kUnwind; return; } goto L_00175240; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001752C8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 640u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[2].d[0] = c.r[2].d[0] & 1ull;
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001752A4; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25648u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25648u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001752A4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001752C8; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 25650u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    st16((c.r[1].w[0] + 25650u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_001752C8:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], 0u + 2u);
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001752FC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 29593u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24160u);
    c.r[3].d[0] = c.r[3].d[0] & 15ull;
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].d[0] = ld8((c.r[2].w[0]));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0017531C; } }
L_001752FC:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 648u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175318; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0017531C; } }
L_00175318:
    st8((c.r[4].w[0] + 515u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_0017531C:
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017532Cu); set32(c.r[6], 0u + 1u);  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x0017532Cu) [[unlikely]] return; }
L_0017532C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175334u);  if (depth < kMaxDepth) unit_0025(c, 238u, depth + 1u); else { c.pc = 0x00196880u; return; } if (c.pc != 0x00175334u) [[unlikely]] return; }
L_00175334:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017533Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0026(c, 44u, depth + 1u); else { c.pc = 0x001986E0u; return; } if (c.pc != 0x0017533Cu) [[unlikely]] return; }
L_0017533C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175344u);  if (depth < kMaxDepth) unit_0026(c, 36u, depth + 1u); else { c.pc = 0x00198560u; return; } if (c.pc != 0x00175344u) [[unlikely]] return; }
L_00175344:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017534Cu);  if (depth < kMaxDepth) unit_001D(c, 313u, depth + 1u); else { c.pc = 0x001773C0u; return; } if (c.pc != 0x0017534Cu) [[unlikely]] return; }
L_0017534C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175354u);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x00175354u) [[unlikely]] return; }
L_00175354:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00175370:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 109u);
    set32(c.r[2], 0u + 3u);
    st8((c.r[3].w[0] + 1u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00175424; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001753A4u);  if (depth < kMaxDepth) unit_00A0(c, 38u, depth + 1u); else { c.pc = 0x00380620u; return; } if (c.pc != 0x001753A4u) [[unlikely]] return; }
L_001753A4:
    set32(c.r[3], 0u + 1u);
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0]; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_00175414; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 653u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001753C4u); st8((c.r[3].w[0] + 653u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 58u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x001753C4u) [[unlikely]] return; }
L_001753C4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24064u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001753E8u);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001753E8u) [[unlikely]] return; }
L_001753E8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00175490; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001753F8u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x001753F8u) [[unlikely]] return; }
L_001753F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175400u);  if (depth < kMaxDepth) unit_001D(c, 313u, depth + 1u); else { c.pc = 0x001773C0u; return; } if (c.pc != 0x00175400u) [[unlikely]] return; }
L_00175400:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175408u);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x00175408u) [[unlikely]] return; }
L_00175408:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[2], c.r[16], c.r[0]);  if (t) { goto L_00175494; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.budget -= 1;
L_00175414:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017541Cu);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x0017541Cu) [[unlikely]] return; }
L_0017541C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175490; } }
L_00175424:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 653u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175438u); st8((c.r[3].w[0] + 653u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_001B(c, 58u, depth + 1u); else { c.pc = 0x0016D1A0u; return; } if (c.pc != 0x00175438u) [[unlikely]] return; }
L_00175438:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24064u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 9;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x0017545Cu);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x0017545Cu) [[unlikely]] return; }
L_0017545C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[2], c.r[0]);  if (t) { goto L_00175490; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00175480; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175480u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x00175480u) [[unlikely]] return; }
L_00175480:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175488u);  if (depth < kMaxDepth) unit_001D(c, 313u, depth + 1u); else { c.pc = 0x001773C0u; return; } if (c.pc != 0x00175488u) [[unlikely]] return; }
L_00175488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175490u);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x00175490u) [[unlikely]] return; }
L_00175490:
    mmi::paddub(c.r[2], c.r[16], c.r[0]);
    c.budget -= 1;
L_00175494:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_001754B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], 0u + 120u);
    set32(c.r[3], 0u + 2u);
    set32(c.r[4], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 643u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 21;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175504u); st8((c.r[2].w[0] + 329u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x00175504u) [[unlikely]] return; }
L_00175504:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00175520:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 12u);  if (t) { goto L_00175550; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00175870; } }
L_00175550:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[4], 0u + 120u);
    set32(c.r[7], 0u + 2u);
    set32(c.r[2], 0u + 3u);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 641u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 642u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 643u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 329u), static_cast<std::uint8_t>(0u));
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 20;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00175640; } }
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[17], c.r[0], c.r[0]);  if (t) { goto L_00175778; } }
L_001755B0:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[28].w[0] - 25568u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_0017562C; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[5], c.r[5].w[0] + c.r[17].w[0]);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[17], c.r[17].w[0] + 1u);  if (t) { goto L_00175610; } }
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175600u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x00175600u) [[unlikely]] return; }
L_00175600:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175608u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x00198850u; return; } if (c.pc != 0x00175608u) [[unlikely]] return; }
L_00175608:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175628; } }
L_00175610:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175620u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x00175620u) [[unlikely]] return; }
L_00175620:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175628u); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x00198850u; return; } if (c.pc != 0x00175628u) [[unlikely]] return; }
L_00175628:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 1;
L_0017562C:
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001755B0u | kUnwind; return; } goto L_001755B0; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));  if (t) { goto L_0017577C; } }
L_00175640:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00175720; } }
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[1].d[0] == 0ull; mmi::paddub(c.r[16], c.r[0], c.r[0]);  if (t) { goto L_001756D8; } }
L_0017565C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] << (c.r[17].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 7;
    if (c.r[2].d[0] == 0ull) { set32(c.r[17], c.r[17].w[0] + 1u);  goto L_001756CC; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] + c.r[17].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[5], c.r[5].w[0] + c.r[16].w[0]);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[16], c.r[16].w[0] + 1u);  if (t) { goto L_001756B4; } }
    c.r[5].d[0] = c.r[5].d[0] << 56;
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001756ACu); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x001756ACu) [[unlikely]] return; }
L_001756AC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001756C8; } }
L_001756B4:
    c.r[5].d[0] = c.r[5].d[0] << 56;
    set32(c.r[4], 0u + 2u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001756C4u); c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 56);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x001756C4u) [[unlikely]] return; }
L_001756C4:
    c.budget -= 1;
L_001756C8:
    set32(c.r[17], c.r[17].w[0] + 1u);
    c.budget -= 1;
L_001756CC:
    c.r[2].d[0] = c.r[17].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x0017565Cu | kUnwind; return; } goto L_0017565C; } }
L_001756D8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 301u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 640u)));
    set32(c.r[2], c.r[2].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_00175710; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175704u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x00198850u; return; } if (c.pc != 0x00175704u) [[unlikely]] return; }
L_00175704:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175778; } }
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00175710:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175718u);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x00198850u; return; } if (c.pc != 0x00175718u) [[unlikely]] return; }
L_00175718:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175778; } }
L_00175720:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 525u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[2].w[0] - 31003u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 15;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[7], c.r[0]);  goto L_00175770; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175764u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x00175764u) [[unlikely]] return; }
L_00175764:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175778; } }
    mmi::paddub(c.r[4], c.r[7], c.r[0]);
    c.budget -= 1;
L_00175770:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175778u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_000F(c, 113u, depth + 1u); else { c.pc = 0x0013E040u; return; } if (c.pc != 0x00175778u) [[unlikely]] return; }
L_00175778:
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 1;
L_0017577C:
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 524u)));
    c.budget -= 5;
    { const bool t = 0ull == 0ull; mmi::paddub(c.r[8], c.r[0], c.r[0]);  if (t) { goto L_001757C8; } }
L_00175790:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 87u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[8].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_001757C4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001757C0; } }
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_001757C0:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_001757C4:
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 1;
L_001757C8:
    c.r[1].d[0] = c.r[8].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001757E0; } }
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175790u | kUnwind; return; } goto L_00175790; } }
    c.budget -= 1;
L_001757E0:
    c.budget -= 2;
    { const bool t = c.r[5].d[0] == 0ull;  if (t) { goto L_001757F8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001757F0u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x001757F0u) [[unlikely]] return; }
L_001757F0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[3].w[0] + 328u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_001757F8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175800u);  if (depth < kMaxDepth) unit_0082(c, 105u, depth + 1u); else { c.pc = 0x0030AA30u; return; } if (c.pc != 0x00175800u) [[unlikely]] return; }
L_00175800:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175808u);  if (depth < kMaxDepth) unit_0082(c, 124u, depth + 1u); else { c.pc = 0x0030AF00u; return; } if (c.pc != 0x00175808u) [[unlikely]] return; }
L_00175808:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[5], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
L_00175818:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00175864; }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 513u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);  if (t) { goto L_00175854; } }
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8390u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00175860; } }
    set32(c.r[2], c.r[3].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00175854:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 8390u)));
    st8((c.r[2].w[0] + 180u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 3;
L_00175860:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00175864:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 8448u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175818u | kUnwind; return; } goto L_00175818; } }
L_00175870:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00175890:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[6].w[0] + 12u);  if (t) { goto L_001758C0; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00175A30; } }
L_001758C0:
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], c.r[2].w[0] - 24144u);
    set32(c.r[3], 0u + 1u);
    set32(c.r[2], c.r[4].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 515u)));
    set32(c.r[2], c.r[2].w[0] << 3);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 18;
L_00175908:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175910u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 230u, depth + 1u); else { c.pc = 0x001F32E0u; return; } if (c.pc != 0x00175910u) [[unlikely]] return; }
L_00175910:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8448u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175908u | kUnwind; return; } goto L_00175908; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175930u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014D2D0u; return; } if (c.pc != 0x00175930u) [[unlikely]] return; }
L_00175930:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175938u);  if (depth < kMaxDepth) unit_0038(c, 108u, depth + 1u); else { c.pc = 0x001E1110u; return; } if (c.pc != 0x00175938u) [[unlikely]] return; }
L_00175938:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 524u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001759C4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 260u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175980; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175978u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x00175978u) [[unlikely]] return; }
L_00175978:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00175A20; } }
L_00175980:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 330u)));
    c.budget -= 3;
    if (c.r[2].d[0] == 0ull) { set32(c.r[4], 0u + 13u);  goto L_001759B4; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 261u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001759B0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001759A8u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001759A8u) [[unlikely]] return; }
L_001759A8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175A1C; } }
L_001759B0:
    set32(c.r[4], 0u + 13u);
    c.budget -= 1;
L_001759B4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001759BCu);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001759BCu) [[unlikely]] return; }
L_001759BC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175A1C; } }
L_001759C4:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 525u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[4], c.r[2].w[0] - 31003u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[6].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[6].w[0]);
    set32(c.r[5], c.r[5].w[0] << 8);
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 640u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[3], 0u + 1u);
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 15;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[4], 0u + 13u);  if (t) { goto L_00175A14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175A08u); set32(c.r[4], 0u + 12u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x00175A08u) [[unlikely]] return; }
L_00175A08:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00175A1C; } }
    set32(c.r[4], 0u + 13u);
    c.budget -= 1;
L_00175A14:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175A1Cu);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x00175A1Cu) [[unlikely]] return; }
L_00175A1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00175A20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 648u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00175A30; } }
    st8((c.r[3].w[0] + 330u), static_cast<std::uint8_t>(0u));
    c.budget -= 1;
L_00175A30:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00175A50:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[3], c.r[5].w[0] + 12u);  if (t) { goto L_00175A80; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));  if (t) { goto L_00175B00; } }
L_00175A80:
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[6], c.r[2].w[0] - 24142u);
    set32(c.r[4], 0u + 2u);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[17], c.r[2].w[0] - 16736u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 515u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[7].w[0] << 3);
    set32(c.r[2], c.r[6].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 21;
L_00175AD4:
    set32(c.r[4], ld32((c.r[17].w[0] + 16u)));
    c.budget -= 3;
    if (c.r[4].d[0] == 0ull) { set32(c.r[16], c.r[16].w[0] + 1u);  goto L_00175AF4; }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175AE8u);  if (depth < kMaxDepth) unit_000E(c, 100u, depth + 1u); else { c.pc = 0x00139720u; return; } if (c.pc != 0x00175AE8u) [[unlikely]] return; }
L_00175AE8:
    st32((c.r[17].w[0] + 16u), 0u);
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.budget -= 3;
L_00175AF4:
    c.r[2].d[0] = c.r[16].sd[0] < 8ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[17], c.r[17].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175AD4u | kUnwind; return; } goto L_00175AD4; } }
L_00175B00:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00175B20:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[9], 0u + 3u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == c.r[9].d[0];  if (t) { goto L_00175BD4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175B6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 642u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00175C50; } }
L_00175B6C:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[7], c.r[2].w[0] - 24140u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01A00000u);
    c.r[4].d[0] = c.r[2].d[0] | 10240ull;
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 16720u);
    set32(c.r[3], 0u + 3u);
    set32(c.r[2], c.r[6].w[0] + 1u);
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[29].w[0] + 24u);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 515u)));
    set32(c.r[8], c.r[8].w[0] << 3);
    set32(c.r[7], c.r[7].w[0] + c.r[8].w[0]);
    c.r[7].sd[0] = static_cast<std::int16_t>(ld16((c.r[7].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[7].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175BCCu); st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x00175BCCu) [[unlikely]] return; }
L_00175BCC:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_00175C54; } }
L_00175BD4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00175C50; } }
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[3], c.r[2].w[0] - 24140u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x01A00000u);
    c.r[4].d[0] = c.r[2].d[0] | 10240ull;
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 5u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007C0000u);
    set32(c.r[5], c.r[2].w[0] - 16720u);
    set32(c.r[6], c.r[29].w[0] + 24u);
    set32(c.r[2], c.r[7].w[0] + 1u);
    st8((c.r[8].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 515u)));
    set32(c.r[7], c.r[7].w[0] << 3);
    set32(c.r[3], c.r[3].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0])));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 23;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175C50u); st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_000D(c, 266u, depth + 1u); else { c.pc = 0x00137B60u; return; } if (c.pc != 0x00175C50u) [[unlikely]] return; }
L_00175C50:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_00175C54:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00175C60:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 12;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175CA0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175C98u);  if (depth < kMaxDepth) unit_001E(c, 41u, depth + 1u); else { c.pc = 0x00179070u; return; } if (c.pc != 0x00175C98u) [[unlikely]] return; }
L_00175C98:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176030; } }
L_00175CA0:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 514u)));
    c.budget -= 9;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00175D00; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24138u);
    set32(c.r[4], 0u + 4u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 515u)));
    set32(c.r[5], c.r[5].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0])));
    set32(c.r[3], 0u + 2u);
    st16((c.r[7].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 15;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00176030; } }
L_00175D00:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00176008; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00176008; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[5], 0u + 120u);
    set32(c.r[3], 0u + 6u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    st16((c.r[4].w[0] + 12u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 12;
L_00175D4C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175D54u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x001F3320u; return; } if (c.pc != 0x00175D54u) [[unlikely]] return; }
L_00175D54:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8448u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00175D4Cu | kUnwind; return; } goto L_00175D4C; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 331u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00175EBC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175D80u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 86u, depth + 1u); else { c.pc = 0x001BA580u; return; } if (c.pc != 0x00175D80u) [[unlikely]] return; }
L_00175D80:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175D94u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x00175D94u) [[unlikely]] return; }
L_00175D94:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175DB4u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x00175DB4u) [[unlikely]] return; }
L_00175DB4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 6u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175DC8u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x00175DC8u) [[unlikely]] return; }
L_00175DC8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175DD4u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E15E0u; return; } if (c.pc != 0x00175DD4u) [[unlikely]] return; }
L_00175DD4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175DECu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E15E0u; return; } if (c.pc != 0x00175DECu) [[unlikely]] return; }
L_00175DEC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175E20; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175E18u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x00175E18u) [[unlikely]] return; }
L_00175E18:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_00176034; } }
L_00175E20:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00175E40; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00175E84; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 689u)));  if (t) { goto L_00175E84; } }
L_00175E40:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00175E64; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175E64; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00175E84; } }
L_00175E64:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 261u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00175E84; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 689u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175E84; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 2;
L_00175E84:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00176030; } }
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23484u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175EB4u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00175EB4u) [[unlikely]] return; }
L_00175EB4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176030; } }
L_00175EBC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00175F6C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 600u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175EE4u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002E(c, 86u, depth + 1u); else { c.pc = 0x001BA580u; return; } if (c.pc != 0x00175EE4u) [[unlikely]] return; }
L_00175EE4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175EF4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 219u, depth + 1u); else { c.pc = 0x0038FC90u; return; } if (c.pc != 0x00175EF4u) [[unlikely]] return; }
L_00175EF4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_00175F34; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F28u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x00175F28u) [[unlikely]] return; }
L_00175F28:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176030; } }
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_00175F34:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176030; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23484u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F64u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00175F64u) [[unlikely]] return; }
L_00175F64:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176030; } }
L_00175F6C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F78u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014D2D0u; return; } if (c.pc != 0x00175F78u) [[unlikely]] return; }
L_00175F78:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175F84u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E15E0u; return; } if (c.pc != 0x00175F84u) [[unlikely]] return; }
L_00175F84:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_00176030; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00175FC8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00175FC0u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x00175FC0u) [[unlikely]] return; }
L_00175FC0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176030; } }
L_00175FC8:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176030; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23484u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176000u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00176000u) [[unlikely]] return; }
L_00176000:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_00176030; } }
L_00176008:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 5u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] + 3u);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176024u); st8((c.r[7].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00176024u) [[unlikely]] return; }
L_00176024:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176030u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x00176030u) [[unlikely]] return; }
L_00176030:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00176034:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00176050:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.r[1].d[0] = c.r[2].sd[0] < 161ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_001763EC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001760A4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017609Cu);  if (depth < kMaxDepth) unit_001E(c, 41u, depth + 1u); else { c.pc = 0x00179070u; return; } if (c.pc != 0x0017609Cu) [[unlikely]] return; }
L_0017609C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001763EC; } }
L_001760A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 512u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001763B8; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 524u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001763B8; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[17], c.r[2].w[0] + 26144u);
    set32(c.r[4], 0u + 120u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 5u)));
    set32(c.r[3], 0u + 6u);
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    set32(c.r[2], c.r[5].w[0] + 1u);
    st8((c.r[6].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(0u));
    c.budget -= 15;
L_001760FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176104u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_003C(c, 231u, depth + 1u); else { c.pc = 0x001F3320u; return; } if (c.pc != 0x00176104u) [[unlikely]] return; }
L_00176104:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[17], c.r[17].w[0] + 8448u);
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001760FCu | kUnwind; return; } goto L_001760FC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 331u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull; st8((c.r[3].w[0] + 330u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_0017626C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176130u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_002E(c, 86u, depth + 1u); else { c.pc = 0x001BA580u; return; } if (c.pc != 0x00176130u) [[unlikely]] return; }
L_00176130:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176144u); mmi::paddub(c.r[5], c.r[4], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x00176144u) [[unlikely]] return; }
L_00176144:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    set32(c.r[5], 0u + 2u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[6].d[0] = c.r[2].d[0] << 56;
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176164u); c.r[6].d[0] = static_cast<std::uint64_t>(c.r[6].sd[0] >> 56);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x00176164u) [[unlikely]] return; }
L_00176164:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 6u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176178u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_002D(c, 122u, depth + 1u); else { c.pc = 0x001B5B80u; return; } if (c.pc != 0x00176178u) [[unlikely]] return; }
L_00176178:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176184u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E15E0u; return; } if (c.pc != 0x00176184u) [[unlikely]] return; }
L_00176184:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017619Cu); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E15E0u; return; } if (c.pc != 0x0017619Cu) [[unlikely]] return; }
L_0017619C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    set32(c.r[3], c.r[3].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 9;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001761D0; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001761C8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x001761C8u) [[unlikely]] return; }
L_001761C8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);  if (t) { goto L_001763F0; } }
L_001761D0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001761F0; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_00176234; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 689u)));  if (t) { goto L_00176234; } }
L_001761F0:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0]; mmi::paddub(c.r[3], c.r[0], c.r[0]);  if (t) { goto L_00176214; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176214; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.budget -= 3;
    { const bool t = 0ull == 0ull; c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);  if (t) { goto L_00176234; } }
L_00176214:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 261u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[6].d[0];  if (t) { goto L_00176234; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 689u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176234; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 2;
L_00176234:
    c.budget -= 2;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001763EC; } }
    set32(c.r[6], c.r[3].w[0] - 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23484u);
    set32(c.r[3], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    set32(c.r[5], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176264u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00176264u) [[unlikely]] return; }
L_00176264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001763EC; } }
L_0017626C:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017631C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 600u);
    set32(c.r[4], 0u + 4u);
    c.budget -= 5;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176294u); st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_002E(c, 86u, depth + 1u); else { c.pc = 0x001BA580u; return; } if (c.pc != 0x00176294u) [[unlikely]] return; }
L_00176294:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001762A4u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_00A3(c, 219u, depth + 1u); else { c.pc = 0x0038FC90u; return; } if (c.pc != 0x001762A4u) [[unlikely]] return; }
L_001762A4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[5].w[0] << (c.r[3].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[3].d[0];
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);  if (t) { goto L_001762E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001762D8u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x001762D8u) [[unlikely]] return; }
L_001762D8:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001763EC; } }
    set32(c.r[2], c.r[4].w[0] + c.r[6].w[0]);
    c.budget -= 1;
L_001762E4:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001763EC; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23484u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176314u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x00176314u) [[unlikely]] return; }
L_00176314:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001763EC; } }
L_0017631C:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176328u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0013(c, 39u, depth + 1u); else { c.pc = 0x0014D2D0u; return; } if (c.pc != 0x00176328u) [[unlikely]] return; }
L_00176328:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176334u); c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));  if (depth < kMaxDepth) unit_0038(c, 117u, depth + 1u); else { c.pc = 0x001E15E0u; return; } if (c.pc != 0x00176334u) [[unlikely]] return; }
L_00176334:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001763EC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 301u)));
    set32(c.r[5], 0u + 1u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 640u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[2].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176378; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176370u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_001D(c, 309u, depth + 1u); else { c.pc = 0x001772C0u; return; } if (c.pc != 0x00176370u) [[unlikely]] return; }
L_00176370:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001763EC; } }
L_00176378:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 688u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001763EC; } }
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23484u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 9;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001763B0u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001763B0u) [[unlikely]] return; }
L_001763B0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001763EC; } }
L_001763B8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 3u);
    st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 10;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001763E0u); st8((c.r[2].w[0] + 642u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001763E0u) [[unlikely]] return; }
L_001763E0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001763ECu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001763ECu) [[unlikely]] return; }
L_001763EC:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    c.budget -= 1;
L_001763F0:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00176410:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 3u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == c.r[2].d[0];  if (t) { goto L_001764E8; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[16], 0u + 240u);
    set32(c.r[3], 0u + 120u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 331u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 643u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; if (c.r[4].d[0] == 0) c.r[16].d[0] = c.r[3].d[0];  if (t) { goto L_00176498; } }
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017656C; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 7u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[16].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 12;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_0017656C; } }
L_00176498:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 329u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017656C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001764ACu);  if (depth < kMaxDepth) unit_001E(c, 41u, depth + 1u); else { c.pc = 0x00179070u; return; } if (c.pc != 0x001764ACu) [[unlikely]] return; }
L_001764AC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017656C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 1u);
    st8((c.r[2].w[0] + 329u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 643u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[2].w[0] + 12u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 12u)));
    c.r[2].d[0] = c.r[2].sd[0] < c.r[16].sd[0] ? 1ull : 0ull;
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017656C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0]), static_cast<std::uint16_t>(c.r[16].w[0]));  if (t) { goto L_0017656C; } }
L_001764E8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176528; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 329u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017656C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176520u);  if (depth < kMaxDepth) unit_001E(c, 41u, depth + 1u); else { c.pc = 0x00179070u; return; } if (c.pc != 0x00176520u) [[unlikely]] return; }
L_00176520:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017656C; } }
L_00176528:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], 0u + 120u);
    set32(c.r[3], 0u + 7u);
    st8((c.r[2].w[0] + 329u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 643u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[4].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 14u), static_cast<std::uint16_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 641u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 17;
L_0017656C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00176580:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 12u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 12u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 10;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001766DC; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[6], 0u + 1u);  if (t) { goto L_00176658; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u - 1u);
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 7u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], 0u + 2u);
    mmi::paddub(c.r[5], c.r[6], c.r[0]);
    c.budget -= 8;
L_001765D8:
    set32(c.r[8], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[5].w[0] << (c.r[7].w[0] & 31u));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 87u)));
    c.r[2].d[0] = c.r[4].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[7], c.r[7].w[0] + 1u);  goto L_0017664C; }
    set32(c.r[9], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 640u)));
    set32(c.r[4], c.r[9].w[0] + c.r[7].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_0017661C; } }
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00176648; } }
L_0017661C:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 513u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);  if (t) { goto L_00176638; } }
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 3;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(c.r[5].w[0]));  if (t) { goto L_00176640; } }
    set32(c.r[2], c.r[8].w[0] + c.r[7].w[0]);
    c.budget -= 1;
L_00176638:
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    c.budget -= 2;
L_00176640:
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 2;
L_00176648:
    set32(c.r[7], c.r[7].w[0] + 1u);
    c.budget -= 1;
L_0017664C:
    c.r[2].d[0] = c.r[7].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001765D8u | kUnwind; return; } goto L_001765D8; } }
L_00176658:
    c.budget -= 2;
    { const bool t = c.r[6].d[0] != 0ull;  if (t) { goto L_001766B0; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u - 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[4].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 12u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 395u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 394u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 371u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 302u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.budget -= 20;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 303u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_001766DC; } }
L_001766B0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 5u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001766D0u); st8((c.r[3].w[0] + 5u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x001766D0u) [[unlikely]] return; }
L_001766D0:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001766DCu); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001766DCu) [[unlikely]] return; }
L_001766DC:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001766F0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176700u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 54u, depth + 1u); else { c.pc = 0x0016D070u; return; } if (c.pc != 0x00176700u) [[unlikely]] return; }
L_00176700:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_0017675C; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176714u); st8((c.r[2].w[0] + 330u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x00176714u) [[unlikely]] return; }
L_00176714:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176720u); st8((c.r[2].w[0] + 523u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00176720u) [[unlikely]] return; }
L_00176720:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176728u);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x00176728u) [[unlikely]] return; }
L_00176728:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176730u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x00176730u) [[unlikely]] return; }
L_00176730:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176738u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00176738u) [[unlikely]] return; }
L_00176738:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176740u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x00176740u) [[unlikely]] return; }
L_00176740:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176750u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 139u, depth + 1u); else { c.pc = 0x0015B6B0u; return; } if (c.pc != 0x00176750u) [[unlikely]] return; }
L_00176750:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], 0u + 1u);  if (t) { goto L_0017675C; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_0017675C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00176770:
    set32(c.r[29], c.r[29].w[0] - 96u);
    st128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[16], c.r[0], c.r[0]);
    c.r[1].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    mmi::paddub(c.r[17], c.r[0], c.r[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 653u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 14;
    { const bool t = c.r[1].d[0] == 0ull; st8((c.r[3].w[0] + 653u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (t) { goto L_00176868; } }
    set32(c.r[2], c.r[16].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[29].w[0]);
    set32(c.r[18], c.r[2].w[0] + 88u);
    c.budget -= 3;
L_001767B4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[19], c.r[2].w[0] << (c.r[16].w[0] & 31u));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 303u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[19].d[0];
    c.budget -= 7;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00176854; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24024u);
    set32(c.r[3], c.r[3].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0]; c.r[31].sd[0] = static_cast<std::int32_t>(0x001767F8u); mmi::paddub(c.r[4], c.r[16], c.r[0]);  c.pc = t; call(c, t, depth + 1u); if (c.pc != 0x001767F8u) [[unlikely]] return; }
L_001767F8:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176808; } }
    c.r[17].d[0] = c.r[17].d[0] | c.r[19].d[0];
    c.budget -= 2;
L_00176808:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[4].w[0] + c.r[16].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    set32(c.r[2], c.r[4].w[0] + 12u);
    set32(c.r[4], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[2].d[0] = c.r[3].d[0] ^ c.r[2].d[0];
    c.r[2].d[0] = 0ull < c.r[2].d[0] ? 1ull : 0ull;
    c.budget -= 10;
    { const bool t = c.r[2].d[0] == 0ull; set32(c.r[2], 0u - 1u);  if (t) { goto L_00176848; } }
    c.r[2].d[0] = c.r[3].d[0] << 56;
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 5;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00176858; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00176848:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st32((c.r[18].w[0]), c.r[2].w[0]);  if (t) { goto L_00176858; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00176854:
    st32((c.r[18].w[0]), c.r[2].w[0]);
    c.budget -= 1;
L_00176858:
    set32(c.r[16], c.r[16].w[0] + 1u);
    c.r[2].d[0] = c.r[16].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[18], c.r[18].w[0] + 4u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001767B4u | kUnwind; return; } goto L_001767B4; } }
L_00176868:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 303u)));
    c.budget -= 4;
    { const bool t = c.r[17].d[0] != c.r[2].d[0];  if (t) { goto L_001768AC; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    set32(c.r[5], 0u + 120u);
    set32(c.r[6], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 4u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176898u); st8((c.r[3].w[0] + 4u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0025(c, 284u, depth + 1u); else { c.pc = 0x00197090u; return; } if (c.pc != 0x00176898u) [[unlikely]] return; }
L_00176898:
    set32(c.r[4], 0u + 1u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001768A4u); set32(c.r[5], 0u + 8u);  if (depth < kMaxDepth) unit_001B(c, 50u, depth + 1u); else { c.pc = 0x0016CF10u; return; } if (c.pc != 0x001768A4u) [[unlikely]] return; }
L_001768A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001768EC; } }
L_001768AC:
    set32(c.r[2], ld32((c.r[29].w[0] + 88u)));
    set32(c.r[3], 0u + 1u);
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == c.r[3].d[0];  if (t) { goto L_001768C8; } }
    set32(c.r[2], ld32((c.r[29].w[0] + 92u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001768EC; } }
L_001768C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001768EC; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001768EC; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001768ECu); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001768ECu) [[unlikely]] return; }
L_001768EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001768F4u);  if (depth < kMaxDepth) unit_001D(c, 313u, depth + 1u); else { c.pc = 0x001773C0u; return; } if (c.pc != 0x001768F4u) [[unlikely]] return; }
L_001768F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001768FCu);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x001768FCu) [[unlikely]] return; }
L_001768FC:
    ld128((c.r[29].w[0] + 64u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[19]);
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 8;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 96u);  c.pc = t; return; }
L_00176920:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 24000u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 394u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 10;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00176950:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[5].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[8], c.r[4].w[0] << 1);
    set32(c.r[6], 0u + 990u);
    set32(c.r[7], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 394u)));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[7].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[8].w[0] + c.r[3].w[0]);
    st16((c.r[3].w[0] + 388u), static_cast<std::uint16_t>(c.r[6].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[8].w[0] + c.r[3].w[0]);
    c.r[6].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0] + 388u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    mmi::mult(c, 0, c.r[5].w[0], c.r[6].w[0]);
    c.r[4].d[0] = c.hi.d[0];
    set32(c.r[5], c.r[6].w[0] >> 31);
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    set32(c.r[4], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[4].w[0]) >> 6));
    set32(c.r[4], c.r[4].w[0] + c.r[5].w[0]);
    c.budget -= 27;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 392u), static_cast<std::uint8_t>(c.r[4].w[0]));  c.pc = t; return; }
L_001769C0:
    set32(c.r[29], c.r[29].w[0] - 64u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 1u);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    set32(c.r[2], c.r[5].w[0] << (c.r[17].w[0] & 31u));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 386u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 371u)));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 16;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176A58; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u - 1u);
    set32(c.r[4], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 394u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[4].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[3].w[0] + 302u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 302u)));
    c.budget -= 11;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00176A30; } }
    st8((c.r[4].w[0]), static_cast<std::uint8_t>(c.r[17].w[0]));
    c.budget -= 1;
L_00176A30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] << 1);
    set32(c.r[6], 0u + 90u);
    set32(c.r[5], 0u + 39u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 8;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176A50u); st16((c.r[2].w[0] + 388u), static_cast<std::uint16_t>(c.r[6].w[0]));  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00176A50u) [[unlikely]] return; }
L_00176A50:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);  if (t) { goto L_00176B7C; } }
L_00176A58:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    set32(c.r[6], c.r[2].w[0] + 388u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 388u)));
    c.budget -= 7;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00176A94; } }
    set32(c.r[3], c.r[17].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 6u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 6u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.budget -= 8;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 394u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00176B78; } }
L_00176A94:
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[6].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[2].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[3], c.r[3].w[0] - 1u);
    c.r[5].d[0] = c.r[3].d[0] << 48;
    c.r[5].d[0] = static_cast<std::uint64_t>(c.r[5].sd[0] >> 48);
    mmi::mult(c, 0, c.r[2].w[0], c.r[5].w[0]);
    st16((c.r[6].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[3], c.r[5].w[0] >> 31);
    c.r[2].d[0] = c.hi.d[0];
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    set32(c.r[2], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[2].w[0]) >> 6));
    set32(c.r[18], c.r[2].w[0] + c.r[3].w[0]);
    c.r[1].d[0] = c.r[18].sd[0] < 7ll ? 1ull : 0ull;
    c.budget -= 16;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00176B24; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176ADCu);  if (depth < kMaxDepth) unit_001E(c, 45u, depth + 1u); else { c.pc = 0x00179120u; return; } if (c.pc != 0x00176ADCu) [[unlikely]] return; }
L_00176ADC:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176B24; } }
    set32(c.r[2], c.r[18].w[0] << 4);
    set32(c.r[3], c.r[2].w[0] - c.r[18].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] - c.r[3].w[0]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], c.r[2].w[0] << 1);
    c.r[2].d[0] = c.r[4].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    set32(c.r[3], c.r[16].w[0] + c.r[3].w[0]);
    c.budget -= 11;
    { const bool t = c.r[2].d[0] == 0ull; st16((c.r[3].w[0] + 388u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_00176B24; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 388u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.budget -= 5;
L_00176B24:
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0xB60B0000u);
    c.r[3].d[0] = c.r[2].d[0] | 24759ull;
    set32(c.r[2], c.r[16].w[0] + c.r[4].w[0]);
    c.r[5].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 388u)));
    mmi::mult(c, 0, c.r[3].w[0], c.r[5].w[0]);
    set32(c.r[2], c.r[17].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[5].w[0] >> 31);
    c.r[3].d[0] = c.hi.d[0];
    set32(c.r[3], c.r[3].w[0] + c.r[5].w[0]);
    set32(c.r[3], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[3].w[0]) >> 6));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 392u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 392u)));
    c.r[1].d[0] = c.r[2].sd[0] < 10ll ? 1ull : 0ull;
    c.budget -= 19;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00176B78; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176B78u); mmi::paddub(c.r[4], c.r[17], c.r[0]);  if (depth < kMaxDepth) unit_001E(c, 40u, depth + 1u); else { c.pc = 0x00179000u; return; } if (c.pc != 0x00176B78u) [[unlikely]] return; }
L_00176B78:
    ld128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    c.budget -= 1;
L_00176B7C:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 64u);  c.pc = t; return; }
L_00176BA0:
    set32(c.r[29], c.r[29].w[0] - 32u);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 2u);
    set32(c.r[8], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 386u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[8].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 388u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 17;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[16], c.r[4], c.r[0]);  if (t) { goto L_00176C6C; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[7], 0u + 1u);
    set32(c.r[2], c.r[7].w[0] << (c.r[16].w[0] & 31u));
    c.r[6].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[3], 0u + 40u);
    set32(c.r[5], c.r[16].w[0] + c.r[5].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 394u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[5].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 87u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[6].d[0];
    st8((c.r[5].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[8].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 388u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 20;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176C34u); st8((c.r[2].w[0] + 408u), static_cast<std::uint8_t>(c.r[7].w[0]));  if (depth < kMaxDepth) unit_001E(c, 46u, depth + 1u); else { c.pc = 0x00179170u; return; } if (c.pc != 0x00176C34u) [[unlikely]] return; }
L_00176C34:
    c.r[4].d[0] = c.r[16].d[0] << 56;
    set32(c.r[5], 0u + 4u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176C44u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0082(c, 127u, depth + 1u); else { c.pc = 0x0030B1F0u; return; } if (c.pc != 0x00176C44u) [[unlikely]] return; }
L_00176C44:
    set32(c.r[2], c.r[16].w[0] << 5);
    set32(c.r[3], c.r[2].w[0] + c.r[16].w[0]);
    set32(c.r[4], c.r[3].w[0] << 8);
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[3], c.r[3].w[0] - 31002u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[3].w[0] + c.r[4].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 176u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 10;
L_00176C6C:
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 5;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 32u);  c.pc = t; return; }
L_00176C80:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 5u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 386u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 388u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00176CD0; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 394u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
L_00176CD0:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00176CE0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00870000u);
    set32(c.r[6], 0u + 5u);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    st8((c.r[5].w[0] + 386u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], c.r[2].w[0] + 3348u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[16], c.r[2].w[0] + c.r[3].w[0]);
    mmi::paddub(c.r[17], c.r[4], c.r[0]);
    c.r[3].d[0] = ld16((c.r[16].w[0]));
    set32(c.r[2], c.r[4].w[0] + c.r[5].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 408u)));
    set32(c.r[5], c.r[2].w[0] + 408u);
    c.r[2].d[0] = c.r[3].d[0] & 8192ull;
    c.budget -= 23;
    { const bool t = c.r[2].d[0] == 0ull; c.r[2].d[0] = c.r[3].d[0] & 4160ull;  if (t) { goto L_00176D48; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; st8((c.r[5].w[0]), static_cast<std::uint8_t>(0u));  if (t) { goto L_00176D58; } }
    c.r[2].d[0] = c.r[3].d[0] & 4160ull;
    c.budget -= 1;
L_00176D48:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176D58; } }
    set32(c.r[2], 0u + 1u);
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.budget -= 2;
L_00176D58:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 408u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] == c.r[4].d[0];  if (t) { goto L_00176D78; } }
    set32(c.r[5], 0u + 43u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176D78u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00176D78u) [[unlikely]] return; }
L_00176D78:
    c.r[2].d[0] = ld16((c.r[16].w[0]));
    c.r[2].d[0] = c.r[2].d[0] & 33712ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00176EB8; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[16], c.r[17].w[0] << 1);
    set32(c.r[3], 0u + 90u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[6], c.r[17].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 394u)));
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[6].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 13;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176DBCu); st16((c.r[2].w[0] + 388u), static_cast<std::uint16_t>(c.r[3].w[0]));  if (depth < kMaxDepth) unit_0025(c, 316u, depth + 1u); else { c.pc = 0x00197670u; return; } if (c.pc != 0x00176DBCu) [[unlikely]] return; }
L_00176DBC:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 408u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00176E1C; } }
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[3], 0u - 1u);
    st8((c.r[2].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 19;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00176EB8; } }
L_00176E1C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[5], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[2].d[0] = ~(c.r[5].d[0] | 0ull);
    c.r[4].d[0] = c.r[2].d[0] << 56;
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 371u)));
    c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);
    c.r[2].d[0] = c.r[2].d[0] & c.r[4].d[0];
    st8((c.r[3].w[0] + 371u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[2].d[0] | c.r[5].d[0];
    st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + 302u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 18;
    { const bool t = c.r[2].d[0] != c.r[17].d[0]; mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (t) { goto L_00176E70; } }
    set32(c.r[2], 0u - 1u);
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    c.budget -= 3;
L_00176E70:
    set32(c.r[3], 0u - 1u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 2;
L_00176E78:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 371u)));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 6;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_00176EAC; }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], c.r[2].w[0] + 302u);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 302u)));
    c.budget -= 5;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00176EA8; } }
    st8((c.r[5].w[0]), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 1;
L_00176EA8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_00176EAC:
    c.r[2].d[0] = c.r[6].sd[0] < 2ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00176E78u | kUnwind; return; } goto L_00176E78; } }
L_00176EB8:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00176ED0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 6u);
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 386u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[3].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[3].w[0] + 388u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[3].w[0] + 388u), static_cast<std::uint16_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 48;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 48);
    c.budget -= 14;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[2], c.r[0], c.r[0]);  if (t) { goto L_00176F20; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[4].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 394u)));
    set32(c.r[2], c.r[2].w[0] + 1u);
    st8((c.r[3].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
L_00176F20:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0];  c.pc = t; return; }
L_00176F30:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 386u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_00176F50:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[5], 0u + 4u);
    set32(c.r[2], c.r[2].w[0] - 23968u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    st8((c.r[3].w[0] + 386u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 394u)));
    set32(c.r[3], c.r[3].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], ld32((c.r[2].w[0])));
    c.budget -= 14;
    { const std::uint32_t t = c.r[2].w[0];  c.pc = t; if (t - 0x00174000u < 16384u) { entry = entries_001D[(t - 0x00174000u) >> 2]; if (entry) goto dispatch_entry; } [[clang::musttail]] return dispatch(c, 0u, depth); }
L_00176F90:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[4].w[0] << 1);
    set32(c.r[5], 0u + 300u);
    set32(c.r[6], c.r[4].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 394u)));
    set32(c.r[3], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 394u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    st16((c.r[2].w[0] + 388u), static_cast<std::uint16_t>(c.r[5].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[4].w[0] + c.r[2].w[0]);
    c.r[4].d[0] = c.r[4].d[0] << 56;
    st8((c.r[2].w[0] + 121u), static_cast<std::uint8_t>(0u));
    c.budget -= 18;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00176FD8u); c.r[4].d[0] = static_cast<std::uint64_t>(c.r[4].sd[0] >> 56);  if (depth < kMaxDepth) unit_0038(c, 120u, depth + 1u); else { c.pc = 0x001E17B0u; return; } if (c.pc != 0x00176FD8u) [[unlikely]] return; }
L_00176FD8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 4;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00176FF0:
    set32(c.r[29], c.r[29].w[0] - 48u);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[16], c.r[4].w[0] << 1);
    set32(c.r[2], c.r[16].w[0] + c.r[3].w[0]);
    set32(c.r[5], c.r[2].w[0] + 388u);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 388u)));
    c.budget -= 11;
    { const bool t = c.r[2].d[0] != 0ull; mmi::paddub(c.r[17], c.r[4], c.r[0]);  if (t) { goto L_00177114; } }
    set32(c.r[6], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 394u)));
    set32(c.r[2], 0u + 1u);
    set32(c.r[2], c.r[2].w[0] << (c.r[17].w[0] & 31u));
    c.r[5].d[0] = ~(c.r[2].d[0] | 0ull);
    set32(c.r[2], c.r[3].w[0] + 1u);
    st8((c.r[6].w[0] + 394u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 87u)));
    c.r[2].d[0] = c.r[2].d[0] & c.r[5].d[0];
    c.budget -= 12;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017704Cu); st8((c.r[3].w[0] + 87u), static_cast<std::uint8_t>(c.r[2].w[0]));  if (depth < kMaxDepth) unit_0070(c, 53u, depth + 1u); else { c.pc = 0x002C0A60u; return; } if (c.pc != 0x0017704Cu) [[unlikely]] return; }
L_0017704C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st8((c.r[3].w[0] + 264u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].d[0] = c.r[2].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    c.budget -= 12;
    { const bool t = c.r[2].sd[0] >= 0;  if (t) { goto L_00177094; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[17].w[0] + c.r[3].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 260u)));
    set32(c.r[2], c.r[3].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(0u));
    c.budget -= 6;
L_00177094:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 396u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 180u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 176u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[17].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 260u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 281u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 280u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 273u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 272u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st8((c.r[2].w[0] + 265u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.budget -= 32;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 264u), static_cast<std::uint8_t>(c.r[3].w[0]));  if (t) { goto L_00177164; } }
L_00177114:
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[2], c.r[2].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 388u)));
    c.r[1].d[0] = c.r[2].sd[0] < 11ll ? 1ull : 0ull;
    c.budget -= 9;
    { const bool t = c.r[1].d[0] != 0ull;  if (t) { goto L_00177164; } }
    c.r[1].d[0] = c.r[2].sd[0] < 241ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[1].d[0] == 0ull;  if (t) { goto L_00177164; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017714Cu);  if (depth < kMaxDepth) unit_001E(c, 44u, depth + 1u); else { c.pc = 0x001790D0u; return; } if (c.pc != 0x0017714Cu) [[unlikely]] return; }
L_0017714C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177164; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], 0u + 10u);
    set32(c.r[2], c.r[16].w[0] + c.r[2].w[0]);
    st16((c.r[2].w[0] + 388u), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.budget -= 4;
L_00177164:
    ld128((c.r[29].w[0] + 32u) & ~15u, c.r[31]);
    ld128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    ld128((c.r[29].w[0]) & ~15u, c.r[16]);
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 48u);  c.pc = t; return; }
L_00177180:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[2], 0u + 2u);  c.pc = t; return; }
L_00177190:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[5], 0u + 3u);
    set32(c.r[2], 0u + 1u);
    set32(c.r[3], c.r[4].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[3].w[0] + 386u), static_cast<std::uint8_t>(c.r[5].w[0]));  c.pc = t; return; }
L_001771B0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001771C0u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_001B(c, 54u, depth + 1u); else { c.pc = 0x0016D070u; return; } if (c.pc != 0x001771C0u) [[unlikely]] return; }
L_001771C0:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177294; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 87u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001771E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001771E0u);  if (depth < kMaxDepth) unit_0017(c, 118u, depth + 1u); else { c.pc = 0x0015D080u; return; } if (c.pc != 0x001771E0u) [[unlikely]] return; }
L_001771E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_001771FC; } }
L_001771E8:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    st8((c.r[2].w[0] + 6u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st32((c.r[2].w[0] + 20u), 0u);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 5;
L_001771FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177204u); st8((c.r[2].w[0] + 330u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0025(c, 5u, depth + 1u); else { c.pc = 0x00194070u; return; } if (c.pc != 0x00177204u) [[unlikely]] return; }
L_00177204:
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177210u); st8((c.r[2].w[0] + 523u), static_cast<std::uint8_t>(0u));  if (depth < kMaxDepth) unit_0080(c, 270u, depth + 1u); else { c.pc = 0x003036C0u; return; } if (c.pc != 0x00177210u) [[unlikely]] return; }
L_00177210:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177218u);  if (depth < kMaxDepth) unit_0029(c, 82u, depth + 1u); else { c.pc = 0x001A50D0u; return; } if (c.pc != 0x00177218u) [[unlikely]] return; }
L_00177218:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177220u); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_000D(c, 41u, depth + 1u); else { c.pc = 0x00134850u; return; } if (c.pc != 0x00177220u) [[unlikely]] return; }
L_00177220:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177228u);  if (depth < kMaxDepth) unit_000E(c, 28u, depth + 1u); else { c.pc = 0x00138590u; return; } if (c.pc != 0x00177228u) [[unlikely]] return; }
L_00177228:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177230u);  if (depth < kMaxDepth) unit_0025(c, 235u, depth + 1u); else { c.pc = 0x00196850u; return; } if (c.pc != 0x00177230u) [[unlikely]] return; }
L_00177230:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177240u); mmi::paddub(c.r[6], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0016(c, 139u, depth + 1u); else { c.pc = 0x0015B6B0u; return; } if (c.pc != 0x00177240u) [[unlikely]] return; }
L_00177240:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u + 2u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 6u)));
    c.budget -= 5;
    if (c.r[4].d[0] == c.r[3].d[0]) { set32(c.r[2], 0u + 1u);  goto L_00177264; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 7u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_0017726C; } }
    set32(c.r[2], 0u + 1u);
    c.budget -= 1;
L_00177264:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001772AC; } }
L_0017726C:
    c.budget -= 2;
    if (c.r[4].d[0] == 0ull) { set32(c.r[2], 0u - 1u);  goto L_00177280; }
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[2], 0u - 2u);  if (t) { goto L_0017728C; } }
    set32(c.r[2], 0u - 1u);
    c.budget -= 1;
L_00177280:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001772A8; } }
    set32(c.r[2], 0u - 2u);
    c.budget -= 1;
L_0017728C:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001772A8; } }
L_00177294:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017729Cu);  if (depth < kMaxDepth) unit_001D(c, 313u, depth + 1u); else { c.pc = 0x001773C0u; return; } if (c.pc != 0x0017729Cu) [[unlikely]] return; }
L_0017729C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001772A4u);  if (depth < kMaxDepth) unit_001D(c, 379u, depth + 1u); else { c.pc = 0x00177740u; return; } if (c.pc != 0x001772A4u) [[unlikely]] return; }
L_001772A4:
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    c.budget -= 1;
L_001772A8:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001772AC:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001772C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    c.budget -= 3;
    { const bool t = c.r[4].d[0] != 0ull; st128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001772E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001772D4u); set32(c.r[4], 0u + 14u);  if (depth < kMaxDepth) unit_0026(c, 48u, depth + 1u); else { c.pc = 0x00198850u; return; } if (c.pc != 0x001772D4u) [[unlikely]] return; }
L_001772D4:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001773B4; } }
L_001772E4:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], 0u - 1u);
    set32(c.r[5], c.r[4].w[0] + 14u);
    c.r[4].sd[0] = static_cast<std::int16_t>(ld16((c.r[4].w[0] + 14u)));
    c.budget -= 6;
    { const bool t = c.r[4].d[0] != c.r[3].d[0];  if (t) { goto L_0017731C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177304u); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0025(c, 271u, depth + 1u); else { c.pc = 0x00196E40u; return; } if (c.pc != 0x00177304u) [[unlikely]] return; }
L_00177304:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001773B4; } }
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 60u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st16((c.r[3].w[0] + 14u), static_cast<std::uint16_t>(c.r[4].w[0]));  if (t) { goto L_001773B4; } }
L_0017731C:
    c.budget -= 2;
    { const bool t = c.r[4].sd[0] <= 0;  if (t) { goto L_001773B4; } }
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[5].w[0])));
    set32(c.r[3], c.r[3].w[0] - 1u);
    st16((c.r[5].w[0]), static_cast<std::uint16_t>(c.r[3].w[0]));
    c.r[3].d[0] = c.r[3].d[0] << 48;
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 48);
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001773B4; } }
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 331u)));
    c.budget -= 4;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { goto L_001773B4; } }
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 6u)));
    set32(c.r[3], c.r[4].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 688u)));
    c.budget -= 6;
    { const bool t = c.r[6].d[0] == 0ull;  if (t) { goto L_001773B4; } }
    set32(c.r[4], c.r[4].w[0] + c.r[7].w[0]);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 640u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 260u)));
    set32(c.r[5], 0u + 1u);
    set32(c.r[4], c.r[5].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[3].d[0] & c.r[4].d[0];
    c.budget -= 8;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_001773B4; } }
    c.r[2].d[0] = c.r[6].d[0] << 56;
    c.r[2].d[0] = static_cast<std::uint64_t>(c.r[2].sd[0] >> 56);
    set32(c.r[6], c.r[2].w[0] - 1u);
    set32(c.r[3], c.r[2].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004E0000u);
    set32(c.r[2], c.r[2].w[0] - 23488u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[7], ld32((c.r[2].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00440000u);
    c.budget -= 11;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001773B4u); set32(c.r[4], c.r[2].w[0] + 29152u);  if (depth < kMaxDepth) unit_0025(c, 262u, depth + 1u); else { c.pc = 0x00196BF0u; return; } if (c.pc != 0x001773B4u) [[unlikely]] return; }
L_001773B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001773C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 95u)));
    c.budget -= 6;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_001773E8; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001773E0u);  if (depth < kMaxDepth) unit_001D(c, 316u, depth + 1u); else { c.pc = 0x00177400u; return; } if (c.pc != 0x001773E0u) [[unlikely]] return; }
L_001773E0:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001773F4; } }
L_001773E8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001773F0u);  if (depth < kMaxDepth) unit_001D(c, 348u, depth + 1u); else { c.pc = 0x001775A0u; return; } if (c.pc != 0x001773F0u) [[unlikely]] return; }
L_001773F0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001773F4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00177400:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 107u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_0017742C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177424u);  if (depth < kMaxDepth) unit_001E(c, 22u, depth + 1u); else { c.pc = 0x00178790u; return; } if (c.pc != 0x00177424u) [[unlikely]] return; }
L_00177424:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017742Cu);  if (depth < kMaxDepth) unit_0082(c, 101u, depth + 1u); else { c.pc = 0x0030A810u; return; } if (c.pc != 0x0017742Cu) [[unlikely]] return; }
L_0017742C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177434u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x00177434u) [[unlikely]] return; }
L_00177434:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017743Cu);  if (depth < kMaxDepth) unit_0081(c, 5u, depth + 1u); else { c.pc = 0x003040D0u; return; } if (c.pc != 0x0017743Cu) [[unlikely]] return; }
L_0017743C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177444u);  if (depth < kMaxDepth) unit_0076(c, 119u, depth + 1u); else { c.pc = 0x002D9960u; return; } if (c.pc != 0x00177444u) [[unlikely]] return; }
L_00177444:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017744Cu);  if (depth < kMaxDepth) unit_0025(c, 286u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x0017744Cu) [[unlikely]] return; }
L_0017744C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00177468; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177468u);  if (depth < kMaxDepth) unit_003D(c, 20u, depth + 1u); else { c.pc = 0x001F45B0u; return; } if (c.pc != 0x00177468u) [[unlikely]] return; }
L_00177468:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 111u)));
    c.budget -= 4;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177488; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177480u);  if (depth < kMaxDepth) unit_0053(c, 187u, depth + 1u); else { c.pc = 0x0024F090u; return; } if (c.pc != 0x00177480u) [[unlikely]] return; }
L_00177480:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));  if (t) { goto L_00177494; } }
L_00177488:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177490u);  if (depth < kMaxDepth) unit_0053(c, 204u, depth + 1u); else { c.pc = 0x0024F500u; return; } if (c.pc != 0x00177490u) [[unlikely]] return; }
L_00177490:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 1;
L_00177494:
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 642u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_001774C4; } }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 4u);  goto L_00177518; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 653u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177514; } }
L_001774C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774CCu);  if (depth < kMaxDepth) unit_0070(c, 60u, depth + 1u); else { c.pc = 0x002C0B30u; return; } if (c.pc != 0x001774CCu) [[unlikely]] return; }
L_001774CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774D4u);  if (depth < kMaxDepth) unit_0026(c, 142u, depth + 1u); else { c.pc = 0x0019A1C0u; return; } if (c.pc != 0x001774D4u) [[unlikely]] return; }
L_001774D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774DCu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001774DCu) [[unlikely]] return; }
L_001774DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774E4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001774E4u) [[unlikely]] return; }
L_001774E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774ECu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001774ECu) [[unlikely]] return; }
L_001774EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774F4u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001774F4u) [[unlikely]] return; }
L_001774F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001774FCu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001774FCu) [[unlikely]] return; }
L_001774FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177504u);  if (depth < kMaxDepth) unit_002A(c, 428u, depth + 1u); else { c.pc = 0x001ABBD0u; return; } if (c.pc != 0x00177504u) [[unlikely]] return; }
L_00177504:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017750Cu);  if (depth < kMaxDepth) unit_0024(c, 49u, depth + 1u); else { c.pc = 0x00190D20u; return; } if (c.pc != 0x0017750Cu) [[unlikely]] return; }
L_0017750C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177514u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x00191C60u; return; } if (c.pc != 0x00177514u) [[unlikely]] return; }
L_00177514:
    set32(c.r[4], 0u + 4u);
    c.budget -= 1;
L_00177518:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177520u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00177520u) [[unlikely]] return; }
L_00177520:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177528u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00177528u) [[unlikely]] return; }
L_00177528:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 107u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 1u)));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_00177544; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177544u);  if (depth < kMaxDepth) unit_001E(c, 24u, depth + 1u); else { c.pc = 0x001788C0u; return; } if (c.pc != 0x00177544u) [[unlikely]] return; }
L_00177544:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017754Cu);  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x0017754Cu) [[unlikely]] return; }
L_0017754C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177554u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00177554u) [[unlikely]] return; }
L_00177554:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017755Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0017755Cu) [[unlikely]] return; }
L_0017755C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177564u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00177564u) [[unlikely]] return; }
L_00177564:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017756Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0017756Cu) [[unlikely]] return; }
L_0017756C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177574u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00177574u) [[unlikely]] return; }
L_00177574:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017757Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0017757Cu) [[unlikely]] return; }
L_0017757C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177584u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00177584u) [[unlikely]] return; }
L_00177584:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017758Cu);  if (depth < kMaxDepth) unit_003B(c, 69u, depth + 1u); else { c.pc = 0x001ECE90u; return; } if (c.pc != 0x0017758Cu) [[unlikely]] return; }
L_0017758C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001775A0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001775B0u);  if (depth < kMaxDepth) unit_0080(c, 308u, depth + 1u); else { c.pc = 0x00303FA0u; return; } if (c.pc != 0x001775B0u) [[unlikely]] return; }
L_001775B0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001775B8u);  if (depth < kMaxDepth) unit_0081(c, 5u, depth + 1u); else { c.pc = 0x003040D0u; return; } if (c.pc != 0x001775B8u) [[unlikely]] return; }
L_001775B8:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001775C0u);  if (depth < kMaxDepth) unit_0076(c, 119u, depth + 1u); else { c.pc = 0x002D9960u; return; } if (c.pc != 0x001775C0u) [[unlikely]] return; }
L_001775C0:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001775C8u);  if (depth < kMaxDepth) unit_0025(c, 286u, depth + 1u); else { c.pc = 0x00197140u; return; } if (c.pc != 0x001775C8u) [[unlikely]] return; }
L_001775C8:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.budget -= 5;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001775E4; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001775E4u);  if (depth < kMaxDepth) unit_003D(c, 20u, depth + 1u); else { c.pc = 0x001F45B0u; return; } if (c.pc != 0x001775E4u) [[unlikely]] return; }
L_001775E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001775ECu);  if (depth < kMaxDepth) unit_0053(c, 182u, depth + 1u); else { c.pc = 0x0024ED80u; return; } if (c.pc != 0x001775ECu) [[unlikely]] return; }
L_001775EC:
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 642u)));
    c.budget -= 4;
    if (c.r[2].d[0] == 0ull) { mmi::paddub(c.r[4], c.r[0], c.r[0]);  goto L_00177624; }
    c.r[3].d[0] = c.r[2].d[0] << 56;
    set32(c.r[2], 0u + 1u);
    c.r[3].d[0] = static_cast<std::uint64_t>(c.r[3].sd[0] >> 56);
    c.budget -= 5;
    if (c.r[3].d[0] != c.r[2].d[0]) { set32(c.r[4], 0u + 1u);  goto L_00177688; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 653u)));
    c.r[2].d[0] = c.r[2].d[0] & 2ull;
    c.budget -= 4;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177684; } }
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00177624:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017762Cu);  if (depth < kMaxDepth) unit_0029(c, 282u, depth + 1u); else { c.pc = 0x001A7440u; return; } if (c.pc != 0x0017762Cu) [[unlikely]] return; }
L_0017762C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177684; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017763Cu);  if (depth < kMaxDepth) unit_0070(c, 60u, depth + 1u); else { c.pc = 0x002C0B30u; return; } if (c.pc != 0x0017763Cu) [[unlikely]] return; }
L_0017763C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177644u);  if (depth < kMaxDepth) unit_0026(c, 142u, depth + 1u); else { c.pc = 0x0019A1C0u; return; } if (c.pc != 0x00177644u) [[unlikely]] return; }
L_00177644:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017764Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0017764Cu) [[unlikely]] return; }
L_0017764C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177654u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00177654u) [[unlikely]] return; }
L_00177654:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017765Cu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0017765Cu) [[unlikely]] return; }
L_0017765C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177664u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x00177664u) [[unlikely]] return; }
L_00177664:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017766Cu); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x0017766Cu) [[unlikely]] return; }
L_0017766C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177674u);  if (depth < kMaxDepth) unit_002A(c, 428u, depth + 1u); else { c.pc = 0x001ABBD0u; return; } if (c.pc != 0x00177674u) [[unlikely]] return; }
L_00177674:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017767Cu);  if (depth < kMaxDepth) unit_0024(c, 49u, depth + 1u); else { c.pc = 0x00190D20u; return; } if (c.pc != 0x0017767Cu) [[unlikely]] return; }
L_0017767C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177684u);  if (depth < kMaxDepth) unit_0024(c, 129u, depth + 1u); else { c.pc = 0x00191C60u; return; } if (c.pc != 0x00177684u) [[unlikely]] return; }
L_00177684:
    set32(c.r[4], 0u + 1u);
    c.budget -= 1;
L_00177688:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177690u);  if (depth < kMaxDepth) unit_0029(c, 282u, depth + 1u); else { c.pc = 0x001A7440u; return; } if (c.pc != 0x00177690u) [[unlikely]] return; }
L_00177690:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[4], 0u + 4u);  if (t) { goto L_001776C4; } }
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 288u)));
    st16((c.r[2].w[0] + 292u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 290u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[2].w[0] + 294u)));
    st16((c.r[2].w[0] + 298u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st16((c.r[2].w[0] + 296u), static_cast<std::uint16_t>(c.r[3].w[0]));
    set32(c.r[4], 0u + 4u);
    c.budget -= 11;
L_001776C4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776CCu);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001776CCu) [[unlikely]] return; }
L_001776CC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776D4u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 287u, depth + 1u); else { c.pc = 0x00303B80u; return; } if (c.pc != 0x001776D4u) [[unlikely]] return; }
L_001776D4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776DCu);  if (depth < kMaxDepth) unit_0070(c, 70u, depth + 1u); else { c.pc = 0x002C0CB0u; return; } if (c.pc != 0x001776DCu) [[unlikely]] return; }
L_001776DC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776E4u); set32(c.r[4], 0u + 6u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001776E4u) [[unlikely]] return; }
L_001776E4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776ECu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001776ECu) [[unlikely]] return; }
L_001776EC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776F4u); set32(c.r[4], 0u + 2u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001776F4u) [[unlikely]] return; }
L_001776F4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001776FCu); set32(c.r[4], 0u + 1u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x001776FCu) [[unlikely]] return; }
L_001776FC:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177704u); set32(c.r[4], 0u + 3u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00177704u) [[unlikely]] return; }
L_00177704:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017770Cu); set32(c.r[4], 0u + 4u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x0017770Cu) [[unlikely]] return; }
L_0017770C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177714u); set32(c.r[4], 0u + 5u);  if (depth < kMaxDepth) unit_0080(c, 295u, depth + 1u); else { c.pc = 0x00303D30u; return; } if (c.pc != 0x00177714u) [[unlikely]] return; }
L_00177714:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017771Cu); mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0029(c, 282u, depth + 1u); else { c.pc = 0x001A7440u; return; } if (c.pc != 0x0017771Cu) [[unlikely]] return; }
L_0017771C:
    c.budget -= 2;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017772C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017772Cu);  if (depth < kMaxDepth) unit_003B(c, 69u, depth + 1u); else { c.pc = 0x001ECE90u; return; } if (c.pc != 0x0017772Cu) [[unlikely]] return; }
L_0017772C:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00177740:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177750u);  if (depth < kMaxDepth) unit_001B(c, 43u, depth + 1u); else { c.pc = 0x0016CCD0u; return; } if (c.pc != 0x00177750u) [[unlikely]] return; }
L_00177750:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x001A0000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017775Cu); set32(c.r[4], c.r[2].w[0] - 23424u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x0017775Cu) [[unlikely]] return; }
L_0017775C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177764u);  if (depth < kMaxDepth) unit_001B(c, 59u, depth + 1u); else { c.pc = 0x0016D1B0u; return; } if (c.pc != 0x00177764u) [[unlikely]] return; }
L_00177764:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017776Cu);  if (depth < kMaxDepth) unit_0026(c, 127u, depth + 1u); else { c.pc = 0x00199D30u; return; } if (c.pc != 0x0017776Cu) [[unlikely]] return; }
L_0017776C:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177778u); set32(c.r[4], c.r[2].w[0] + 15904u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00177778u) [[unlikely]] return; }
L_00177778:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00170000u);
    c.budget -= 3;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177784u); set32(c.r[4], c.r[2].w[0] + 30656u);  if (depth < kMaxDepth) unit_0081(c, 121u, depth + 1u); else { c.pc = 0x00305ED0u; return; } if (c.pc != 0x00177784u) [[unlikely]] return; }
L_00177784:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177794u); mmi::paddub(c.r[5], c.r[0], c.r[0]);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x00177794u) [[unlikely]] return; }
L_00177794:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001777A4u); set32(c.r[5], 0u + 1u);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x001777A4u) [[unlikely]] return; }
L_001777A4:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00300000u);
    set32(c.r[4], c.r[2].w[0] + 16016u);
    c.budget -= 4;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001777B4u); set32(c.r[5], 0u + 2u);  if (depth < kMaxDepth) unit_0081(c, 122u, depth + 1u); else { c.pc = 0x00305F10u; return; } if (c.pc != 0x001777B4u) [[unlikely]] return; }
L_001777B4:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001777C0:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 330u)));
    c.budget -= 6;
    { const bool t = c.r[3].d[0] == 0ull;  if (t) { goto L_00177838; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x003D0000u);
    set32(c.r[2], c.r[2].w[0] - 23952u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20396u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 31800u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20376u), c.r[2].w[0]);
    set32(c.r[2], c.r[28].w[0] - 31796u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20380u), c.r[2].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20392u), 0u);
    set32(c.r[2], 0u + 8u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st16((c.r[1].w[0] - 20356u), static_cast<std::uint16_t>(c.r[2].w[0]));
    set32(c.r[2], 0u + 3u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st32((c.r[1].w[0] - 20360u), c.r[2].w[0]);
    set32(c.r[2], 0u + 1u);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    st8((c.r[1].w[0] - 20347u), static_cast<std::uint8_t>(c.r[2].w[0]));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x007B0000u);
    c.budget -= 24;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177838u); set32(c.r[4], c.r[2].w[0] - 20416u);  if (depth < kMaxDepth) unit_001B(c, 207u, depth + 1u); else { c.pc = 0x0016FA40u; return; } if (c.pc != 0x00177838u) [[unlikely]] return; }
L_00177838:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 3;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_00177850:
    set32(c.r[29], c.r[29].w[0] - 16u);
    st128((c.r[29].w[0]) & ~15u, c.r[31]);
    set32(c.r[10], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[2], 0u + 2u);
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    c.budget -= 7;
    { const bool t = c.r[3].d[0] != c.r[2].d[0];  if (t) { goto L_001778AC; } }
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[1].w[0] + 28022u)));
    set32(c.r[2], c.r[28].w[0] - 31920u);
    set32(c.r[4], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.r[1].sd[0] = static_cast<std::int32_t>(0x007A0000u);
    c.r[3].sd[0] = static_cast<std::int16_t>(ld16((c.r[1].w[0] + 28020u)));
    set32(c.r[4], ld32((c.r[2].w[0])));
    set32(c.r[2], c.r[3].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[2].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    c.budget -= 14;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001778A4u); set32(c.r[4], ld32((c.r[2].w[0] + 28u)));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001778A4u) [[unlikely]] return; }
L_001778A4:
    c.budget -= 2;
    { const bool t = 0ull == 0ull; ld128((c.r[29].w[0]) & ~15u, c.r[31]);  if (t) { goto L_001779A4; } }
L_001778AC:
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[7], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[8], c.r[9].w[0] + 0u);
    set32(c.r[3], 0u + 9u);
    set32(c.r[4], 0u + 1u);
    c.budget -= 6;
L_001778C4:
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 87u)));
    set32(c.r[2], c.r[4].w[0] << (c.r[6].w[0] & 31u));
    c.r[2].d[0] = c.r[5].d[0] & c.r[2].d[0];
    c.budget -= 5;
    if (c.r[2].d[0] == 0ull) { set32(c.r[6], c.r[6].w[0] + 1u);  goto L_001778EC; }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 688u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_001778E8; } }
    mmi::paddub(c.r[7], c.r[4], c.r[0]);
    c.budget -= 1;
L_001778E8:
    set32(c.r[6], c.r[6].w[0] + 1u);
    c.budget -= 1;
L_001778EC:
    c.r[2].d[0] = c.r[6].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[8], c.r[8].w[0] + 1u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x001778C4u | kUnwind; return; } goto L_001778C4; } }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 256u)));
    set32(c.r[3], 0u + 1u);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00010000u);
    c.r[2].d[0] = c.r[2].d[0] | 2432ull;
    set32(c.r[3], c.r[3].w[0] << (c.r[4].w[0] & 31u));
    c.r[2].d[0] = c.r[3].d[0] & c.r[2].d[0];
    c.budget -= 8;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177930; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 95u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177930; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 111u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] == 0ull;  if (t) { goto L_00177950; } }
L_00177930:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 15152u);
    set32(c.r[3], c.r[4].w[0] << 2);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 6;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177948u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x00177948u) [[unlikely]] return; }
L_00177948:
    c.budget -= 2;
    { const bool t = 0ull == 0ull;  if (t) { goto L_001779A0; } }
L_00177950:
    c.budget -= 2;
    { const bool t = c.r[7].d[0] == 0ull;  if (t) { goto L_0017797C; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 403u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_0017797C; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x0017796Cu); set32(c.r[4], 0u + 9u);  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x0017796Cu) [[unlikely]] return; }
L_0017796C:
    set32(c.r[3], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[4], 0u + 1u);
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 403u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { goto L_001779A0; } }
L_0017797C:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177984u);  if (depth < kMaxDepth) unit_0016(c, 130u, depth + 1u); else { c.pc = 0x0015B490u; return; } if (c.pc != 0x00177984u) [[unlikely]] return; }
L_00177984:
    c.r[2].d[0] = c.r[2].d[0] & 3ull;
    set32(c.r[3], c.r[2].w[0] << 2);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[2], c.r[2].w[0] + 15248u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    c.budget -= 7;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x001779A0u); set32(c.r[4], ld32((c.r[2].w[0])));  if (depth < kMaxDepth) unit_0025(c, 255u, depth + 1u); else { c.pc = 0x00196A70u; return; } if (c.pc != 0x001779A0u) [[unlikely]] return; }
L_001779A0:
    ld128((c.r[29].w[0]) & ~15u, c.r[31]);
    c.budget -= 1;
L_001779A4:
    c.budget -= 2;
    { const std::uint32_t t = c.r[31].w[0]; set32(c.r[29], c.r[29].w[0] + 16u);  c.pc = t; return; }
L_001779B0:
    c.budget -= 2;
    { const bool t = c.r[4].d[0] == 0ull;  if (t) { goto L_001779D4; } }
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[1].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[3], ld32((c.r[1].w[0] + 15124u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 294u)));
    set32(c.r[4], c.r[4].w[0] << 1);
    c.budget -= 7;
    { const bool t = 0ull == 0ull; set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);  if (t) { goto L_001779FC; } }
L_001779D4:
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x004C0000u);
    set32(c.r[4], c.r[3].w[0] + 15104u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 296u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 297u)));
    set32(c.r[5], c.r[5].w[0] << 2);
    set32(c.r[5], c.r[4].w[0] + c.r[5].w[0]);
    set32(c.r[4], c.r[3].w[0] << 1);
    set32(c.r[3], ld32((c.r[5].w[0])));
    set32(c.r[8], c.r[3].w[0] + c.r[4].w[0]);
    c.budget -= 10;
L_001779FC:
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0])));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00020000u);
    c.r[4].d[0] = c.r[3].d[0] | 3584ull;
    c.r[3].sd[0] = static_cast<std::int32_t>(0x00010000u);
    set32(c.r[6], 0u + 1u);
    st8((c.r[5].w[0] + 256u), static_cast<std::uint8_t>(c.r[7].w[0]));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 1u)));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[3].d[0] = c.r[3].d[0] | 61440ull;
    st8((c.r[5].w[0] + 257u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 256u)));
    set32(c.r[5], c.r[6].w[0] << (c.r[5].w[0] & 31u));
    c.r[4].d[0] = c.r[5].d[0] & c.r[4].d[0];
    c.r[4].d[0] = 0ull < c.r[4].d[0] ? 1ull : 0ull;
    st8((c.r[7].w[0] + 368u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 256u)));
    set32(c.r[4], c.r[6].w[0] << (c.r[4].w[0] & 31u));
    c.r[3].d[0] = c.r[4].d[0] & c.r[3].d[0];
    c.r[3].d[0] = 0ull < c.r[3].d[0] ? 1ull : 0ull;
    c.budget -= 24;
    { const std::uint32_t t = c.r[31].w[0]; st8((c.r[5].w[0] + 369u), static_cast<std::uint8_t>(c.r[3].w[0]));  c.pc = t; return; }
L_00177A60:
    set32(c.r[29], c.r[29].w[0] - 80u);
    st128((c.r[29].w[0] + 48u) & ~15u, c.r[31]);
    st128((c.r[29].w[0] + 32u) & ~15u, c.r[18]);
    st128((c.r[29].w[0] + 16u) & ~15u, c.r[17]);
    st128((c.r[29].w[0]) & ~15u, c.r[16]);
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], 0u + 2u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 266u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 267u), static_cast<std::uint8_t>(0u));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[17].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.r[16].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    set32(c.r[3], c.r[4].w[0] - c.r[17].w[0]);
    st8((c.r[2].w[0] + 412u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 265u)));
    set32(c.r[3], c.r[4].w[0] - c.r[3].w[0]);
    st8((c.r[2].w[0] + 413u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[4], 0u - 1u);
    c.budget -= 24;
L_00177AC0:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.r[2].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 272u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 273u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    st8((c.r[3].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[6].w[0]);
    set32(c.r[6], c.r[6].w[0] + 2u);
    c.budget -= 16;
    { const bool t = c.r[2].d[0] != 0ull; st8((c.r[3].w[0] + 281u), static_cast<std::uint8_t>(c.r[4].w[0]));  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177AC0u | kUnwind; return; } goto L_00177AC0; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00860000u);
    set32(c.r[3], c.r[2].w[0] + 26144u);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    set32(c.r[2], 0u + 1u);
    c.budget -= 5;
L_00177B14:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[6], c.r[2].w[0] << (c.r[5].w[0] & 31u));
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 87u)));
    c.r[6].d[0] = c.r[7].d[0] & c.r[6].d[0];
    c.budget -= 6;
    if (c.r[6].d[0] == 0ull) { set32(c.r[5], c.r[5].w[0] + 1u);  goto L_00177BDC; }
    st8((c.r[3].w[0]), static_cast<std::uint8_t>(c.r[2].w[0]));
    st8((c.r[3].w[0] + 8391u), static_cast<std::uint8_t>(0u));
    st8((c.r[3].w[0] + 8440u), static_cast<std::uint8_t>(0u));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 260u)));
    st8((c.r[3].w[0] + 8389u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 257u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 264u)));
    st8((c.r[3].w[0] + 8386u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 257u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 272u)));
    st8((c.r[3].w[0] + 8387u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 257u)));
    set32(c.r[7], c.r[7].w[0] + c.r[4].w[0]);
    set32(c.r[6], c.r[7].w[0] + c.r[6].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 280u)));
    st8((c.r[3].w[0] + 8388u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[6], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[6], c.r[6].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 396u)));
    st8((c.r[3].w[0] + 8434u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[7], ld32((c.r[28].w[0] - 26304u)));
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 513u)));
    c.budget -= 36;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);  if (t) { goto L_00177BD0; } }
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 176u)));
    c.budget -= 4;
    { const bool t = 0ull == 0ull; st8((c.r[3].w[0] + 8390u), static_cast<std::uint8_t>(c.r[6].w[0]));  if (t) { goto L_00177BD8; } }
    set32(c.r[6], c.r[7].w[0] + c.r[5].w[0]);
    c.budget -= 1;
L_00177BD0:
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 180u)));
    st8((c.r[3].w[0] + 8390u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.budget -= 2;
L_00177BD8:
    set32(c.r[5], c.r[5].w[0] + 1u);
    c.budget -= 1;
L_00177BDC:
    c.r[6].d[0] = c.r[5].sd[0] < 4ll ? 1ull : 0ull;
    set32(c.r[3], c.r[3].w[0] + 8448u);
    c.budget -= 4;
    { const bool t = c.r[6].d[0] != 0ull; set32(c.r[4], c.r[4].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177B14u | kUnwind; return; } goto L_00177B14; } }
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177BF4u);  if (depth < kMaxDepth) unit_0082(c, 92u, depth + 1u); else { c.pc = 0x0030A590u; return; } if (c.pc != 0x00177BF4u) [[unlikely]] return; }
L_00177BF4:
    c.budget -= 2;
    { c.r[31].sd[0] = static_cast<std::int32_t>(0x00177BFCu);  if (depth < kMaxDepth) unit_0082(c, 124u, depth + 1u); else { c.pc = 0x0030AF00u; return; } if (c.pc != 0x00177BFCu) [[unlikely]] return; }
L_00177BFC:
    set32(c.r[5], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[17].w[0] << 3);
    set32(c.r[3], c.r[2].w[0] - c.r[17].w[0]);
    set32(c.r[2], c.r[3].w[0] << 2);
    set32(c.r[3], c.r[3].w[0] + c.r[2].w[0]);
    set32(c.r[4], ld32((c.r[28].w[0] - 26304u)));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 264u)));
    set32(c.r[2], c.r[16].w[0] << 3);
    set32(c.r[2], c.r[2].w[0] - c.r[16].w[0]);
    set32(c.r[10], c.r[3].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    st8((c.r[4].w[0] + 410u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + 2245u);
    set32(c.r[5], ld32((c.r[28].w[0] - 26304u)));
    set32(c.r[3], c.r[2].w[0] + c.r[10].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0] + 265u)));
    set32(c.r[2], c.r[2].w[0] + 2246u);
    mmi::paddub(c.r[8], c.r[0], c.r[0]);
    st8((c.r[5].w[0] + 411u), static_cast<std::uint8_t>(c.r[6].w[0]));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    set32(c.r[4], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 2244u);
    set32(c.r[3], c.r[2].w[0] + c.r[10].w[0]);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 2240u);
    st8((c.r[7].w[0] + 266u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[7], c.r[2].w[0] + c.r[10].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    st8((c.r[2].w[0] + 267u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0])));
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 2416u);
    c.budget -= 40;
L_00177C9C:
    set32(c.r[4], c.r[7].w[0] + c.r[8].w[0]);
    set32(c.r[11], ld32((c.r[28].w[0] - 26300u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[4].w[0])));
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 256u)));
    set32(c.r[4], c.r[4].w[0] << 5);
    c.budget -= 7;
    { const bool t = c.r[9].d[0] == 0ull; set32(c.r[4], c.r[2].w[0] + c.r[4].w[0]);  if (t) { goto L_00177CE8; } }
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 328u)));
    set32(c.r[9], c.r[11].w[0] + c.r[6].w[0]);
    c.r[10].d[0] = c.r[10].d[0] & 3ull;
    set32(c.r[10], c.r[10].w[0] << 1);
    set32(c.r[10], c.r[5].w[0] + c.r[10].w[0]);
    set32(c.r[11], c.r[4].w[0] + c.r[10].w[0]);
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0])));
    st8((c.r[9].w[0] + 272u), static_cast<std::uint8_t>(c.r[10].w[0]));
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    c.r[10].sd[0] = static_cast<std::int8_t>(ld8((c.r[11].w[0] + 1u)));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 273u), static_cast<std::uint8_t>(c.r[10].w[0]));
    c.budget -= 12;
L_00177CE8:
    set32(c.r[10], c.r[8].w[0] + 2u);
    set32(c.r[9], c.r[7].w[0] + c.r[10].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0])));
    c.budget -= 5;
    if (c.r[9].d[0] == 0ull) { set32(c.r[8], c.r[8].w[0] + 1u);  goto L_00177D3C; }
    set32(c.r[9], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[10], c.r[10].w[0] << 3);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[9].w[0] + 328u)));
    c.r[11].d[0] = c.r[11].d[0] & 3ull;
    set32(c.r[11], c.r[11].w[0] << 1);
    set32(c.r[10], c.r[10].w[0] + c.r[11].w[0]);
    set32(c.r[10], c.r[4].w[0] + c.r[10].w[0]);
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0])));
    set32(c.r[9], c.r[9].w[0] + c.r[6].w[0]);
    st8((c.r[9].w[0] + 280u), static_cast<std::uint8_t>(c.r[4].w[0]));
    set32(c.r[4], ld32((c.r[28].w[0] - 26300u)));
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 1u)));
    set32(c.r[4], c.r[4].w[0] + c.r[6].w[0]);
    st8((c.r[4].w[0] + 281u), static_cast<std::uint8_t>(c.r[9].w[0]));
    set32(c.r[8], c.r[8].w[0] + 1u);
    c.budget -= 16;
L_00177D3C:
    c.r[4].d[0] = c.r[8].sd[0] < 2ll ? 1ull : 0ull;
    set32(c.r[5], c.r[5].w[0] + 8u);
    c.budget -= 4;
    { const bool t = c.r[4].d[0] != 0ull; set32(c.r[6], c.r[6].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177C9Cu | kUnwind; return; } goto L_00177C9C; } }
    set32(c.r[2], 0u + 4u);
    c.budget -= 3;
    { const bool t = c.r[3].d[0] == c.r[2].d[0]; mmi::paddub(c.r[4], c.r[0], c.r[0]);  if (t) { goto L_00177DDC; } }
    set32(c.r[6], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[4], c.r[3].w[0] << 3);
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 3153u);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 328u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[6].w[0] + 256u)));
    c.r[5].d[0] = c.r[5].d[0] & 12ull;
    set32(c.r[5], static_cast<std::uint32_t>(static_cast<std::int32_t>(c.r[5].w[0]) >> 1));
    set32(c.r[3], c.r[3].w[0] << 5);
    set32(c.r[5], c.r[5].w[0] + c.r[4].w[0]);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    c.budget -= 15;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177DB8; } }
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 3152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[6].w[0] + 276u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    c.budget -= 9;
    { const bool t = 0ull == 0ull; st8((c.r[2].w[0] + 277u), static_cast<std::uint8_t>(0u));  if (t) { goto L_00177DD8; } }
L_00177DB8:
    c.r[2].sd[0] = static_cast<std::int32_t>(0x00550000u);
    set32(c.r[2], c.r[2].w[0] + 3152u);
    set32(c.r[2], c.r[2].w[0] + c.r[3].w[0]);
    set32(c.r[2], c.r[5].w[0] + c.r[2].w[0]);
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0])));
    st8((c.r[6].w[0] + 284u), static_cast<std::uint8_t>(c.r[2].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    st8((c.r[2].w[0] + 285u), static_cast<std::uint8_t>(0u));
    c.budget -= 8;
L_00177DD8:
    mmi::paddub(c.r[4], c.r[0], c.r[0]);
    c.budget -= 1;
L_00177DDC:
    set32(c.r[3], 0u - 1u);
    c.budget -= 1;
L_00177DE0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[3].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    st8((c.r[2].w[0] + 342u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[4].w[0]);
    set32(c.r[4], c.r[4].w[0] + 1u);
    st8((c.r[2].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.r[2].d[0] = c.r[4].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 13;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177DE0u | kUnwind; return; } goto L_00177DE0; } }
    mmi::paddub(c.r[2], c.r[0], c.r[0]);
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    set32(c.r[4], 0u - 1u);
    set32(c.r[6], 0u + 1u);
    c.budget -= 4;
L_00177E24:
    set32(c.r[7], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[6].w[0] << (c.r[2].w[0] & 31u));
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 87u)));
    c.r[3].d[0] = c.r[5].d[0] & c.r[3].d[0];
    c.budget -= 6;
    if (c.r[3].d[0] == 0ull) { set32(c.r[2], c.r[2].w[0] + 1u);  goto L_00177EDC; }
    set32(c.r[8], ld32((c.r[28].w[0] - 26304u)));
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 257u)));
    mmi::paddub(c.r[12], c.r[0], c.r[0]);
    set32(c.r[5], c.r[8].w[0] + c.r[2].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[5].w[0] + 260u)));
    set32(c.r[5], c.r[8].w[0] + c.r[9].w[0]);
    set32(c.r[3], c.r[5].w[0] + c.r[3].w[0]);
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 264u)));
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[3].w[0] + 272u)));
    c.budget -= 11;
L_00177E68:
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[10], c.r[3].w[0] + c.r[12].w[0]);
    c.r[11].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 336u)));
    c.budget -= 5;
    { const bool t = c.r[11].d[0] != c.r[5].d[0];  if (t) { goto L_00177E9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 342u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[8].d[0];  if (t) { goto L_00177E9C; } }
    c.r[3].sd[0] = static_cast<std::int8_t>(ld8((c.r[10].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != c.r[7].d[0];  if (t) { goto L_00177E9C; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[12], 0u + 6u);  if (t) { goto L_00177EC8; } }
L_00177E9C:
    c.budget -= 2;
    if (c.r[11].d[0] != c.r[4].d[0]) { set32(c.r[12], c.r[12].w[0] + 1u);  goto L_00177ECC; }
    st8((c.r[10].w[0] + 384u), static_cast<std::uint8_t>(c.r[7].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    st8((c.r[3].w[0] + 336u), static_cast<std::uint8_t>(c.r[5].w[0]));
    set32(c.r[3], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[3], c.r[3].w[0] + c.r[12].w[0]);
    set32(c.r[12], 0u + 6u);
    st8((c.r[3].w[0] + 342u), static_cast<std::uint8_t>(c.r[8].w[0]));
    c.budget -= 9;
L_00177EC8:
    set32(c.r[12], c.r[12].w[0] + 1u);
    c.budget -= 1;
L_00177ECC:
    c.r[3].d[0] = c.r[12].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177E68u | kUnwind; return; } goto L_00177E68; } }
    set32(c.r[2], c.r[2].w[0] + 1u);
    c.budget -= 1;
L_00177EDC:
    c.r[3].d[0] = c.r[2].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[3].d[0] != 0ull; set32(c.r[9], c.r[9].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177E24u | kUnwind; return; } goto L_00177E24; } }
    mmi::paddub(c.r[9], c.r[0], c.r[0]);
    mmi::paddub(c.r[5], c.r[0], c.r[0]);
    set32(c.r[3], 0u - 1u);
    c.budget -= 3;
L_00177EF4:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[5].w[0]);
    c.r[6].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 272u)));
    c.budget -= 5;
    if (c.r[6].d[0] == c.r[3].d[0]) { set32(c.r[9], c.r[9].w[0] + 1u);  goto L_00177F84; }
    c.r[4].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 273u)));
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    c.budget -= 2;
L_00177F10:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[7], c.r[2].w[0] + c.r[10].w[0]);
    c.r[8].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 336u)));
    c.budget -= 5;
    { const bool t = c.r[8].d[0] != c.r[6].d[0];  if (t) { goto L_00177F44; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 342u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[4].d[0];  if (t) { goto L_00177F44; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[7].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { goto L_00177F44; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[10], 0u + 6u);  if (t) { goto L_00177F70; } }
L_00177F44:
    c.budget -= 2;
    if (c.r[8].d[0] != c.r[3].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  goto L_00177F74; }
    st8((c.r[7].w[0] + 384u), static_cast<std::uint8_t>(0u));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    st8((c.r[2].w[0] + 336u), static_cast<std::uint8_t>(c.r[6].w[0]));
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[10].w[0]);
    set32(c.r[10], 0u + 6u);
    st8((c.r[2].w[0] + 342u), static_cast<std::uint8_t>(c.r[4].w[0]));
    c.budget -= 9;
L_00177F70:
    set32(c.r[10], c.r[10].w[0] + 1u);
    c.budget -= 1;
L_00177F74:
    c.r[2].d[0] = c.r[10].sd[0] < 6ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull;  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177F10u | kUnwind; return; } goto L_00177F10; } }
    set32(c.r[9], c.r[9].w[0] + 1u);
    c.budget -= 1;
L_00177F84:
    c.r[2].d[0] = c.r[9].sd[0] < 4ll ? 1ull : 0ull;
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != 0ull; set32(c.r[5], c.r[5].w[0] + 2u);  if (t) { if (c.budget < 0 && preempt(c)) { c.pc = 0x00177EF4u | kUnwind; return; } goto L_00177EF4; } }
    mmi::paddub(c.r[10], c.r[0], c.r[0]);
    mmi::paddub(c.r[6], c.r[0], c.r[0]);
    set32(c.r[3], 0u + 1u);
    set32(c.r[4], 0u - 1u);
    c.budget -= 4;
L_00177FA0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[2], c.r[2].w[0] + c.r[6].w[0]);
    c.r[7].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 280u)));
    c.budget -= 5;
    if (c.r[7].d[0] == c.r[4].d[0]) { set32(c.r[10], c.r[10].w[0] + 1u);  [[clang::musttail]] return unit_001E(c, 4u, depth); }
    c.r[5].sd[0] = static_cast<std::int8_t>(ld8((c.r[2].w[0] + 281u)));
    mmi::paddub(c.r[11], c.r[0], c.r[0]);
    c.budget -= 3;
L_00177FC0:
    set32(c.r[2], ld32((c.r[28].w[0] - 26300u)));
    set32(c.r[8], c.r[2].w[0] + c.r[11].w[0]);
    c.r[9].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 336u)));
    c.budget -= 5;
    { const bool t = c.r[9].d[0] != c.r[7].d[0];  if (t) { goto L_00177FF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 342u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[5].d[0];  if (t) { goto L_00177FF4; } }
    c.r[2].sd[0] = static_cast<std::int8_t>(ld8((c.r[8].w[0] + 384u)));
    c.budget -= 3;
    { const bool t = c.r[2].d[0] != c.r[3].d[0];  if (t) { goto L_00177FF4; } }
    c.budget -= 2;
    { const bool t = 0ull == 0ull; set32(c.r[11], 0u + 6u);  if (t) { [[clang::musttail]] return unit_001E(c, 2u, depth); } }
L_00177FF4:
    c.budget -= 2;
    if (c.r[9].d[0] != c.r[4].d[0]) { set32(c.r[11], c.r[11].w[0] + 1u);  [[clang::musttail]] return unit_001E(c, 3u, depth); }
    st8((c.r[8].w[0] + 384u), static_cast<std::uint8_t>(c.r[3].w[0]));
    c.budget -= 1;
    [[clang::musttail]] return unit_001E(c, 1u, depth);
}

}
